// Copyright 2022 Alexander Floden, Alias Alex River. All Rights Reserved. 


#include "VertexPaintDetectionGISubSystem.h"
#include "GenericPlatform/GenericPlatformMisc.h"

#include "Kismet/KismetSystemLibrary.h"
#include "Kismet/KismetMathLibrary.h"
#include "Kismet/KismetStringLibrary.h"
#include "DrawDebugHelpers.h"
#include "TimerManager.h"
#include "Async/Async.h"
#include "AssetRegistry/AssetRegistryModule.h"
#include "PhysicalMaterials/PhysicalMaterial.h"

#include "VertexPaintDetectionAsyncTasks.h"
#include "VertexPaintFunctionLibrary.h"
#include "VertexPaintDetectionInterface.h"

#include "VertexPaintDetectionComponent.h"
#include "VertexPaintMaterialDataAsset.h"
#include "VertexPaintOptimizationDataAsset.h"
#include "VertexPaintColorSnippetDataAsset.h"

#include "Engine/StaticMesh.h"
#include "StaticMeshResources.h"
#include "Engine/SkeletalMesh.h"
#include "Rendering/SkeletalMeshRenderData.h"
#include "Rendering/ColorVertexBuffer.h"

#include "Components/SkeletalMeshComponent.h"
#include "Components/StaticMeshComponent.h"
#include "Components/BoxComponent.h"
#include "Components/SphereComponent.h"
#include "Components/SplineMeshComponent.h"
#include "Landscape.h"


//--------------------------------------------------------

// Initialize

void UVertexPaintDetectionGISubSystem::Initialize(FSubsystemCollectionBase& Collection) {

	UE_LOG(LogTemp, Log, TEXT("Runtime Vertex Color Paint and Detection Plugin Game Instance Subsystem Initialized"));


	// Caches All Physical Materials so when we run UVertexPaintFunctionLibrary::GetPhysicalMaterialUsingPhysicsSurface we can just look through these instead of running GetAssetsByClass every time which is very expensive. 

	FAssetRegistryModule& AssetRegistryModule_Local = FModuleManager::LoadModuleChecked<FAssetRegistryModule>("AssetRegistry");
	TArray<FAssetData> AssetData_Local;


#if ENGINE_MAJOR_VERSION == 4

	AssetRegistryModule_Local.Get().GetAssetsByClass(UPhysicalMaterial::StaticClass()->GetFName(), AssetData_Local, true);

#elif ENGINE_MAJOR_VERSION == 5

#if ENGINE_MINOR_VERSION == 0

	AssetRegistryModule_Local.Get().GetAssetsByClass(UPhysicalMaterial::StaticClass()->GetFName(), AssetData_Local, true);


#else

	AssetRegistryModule_Local.Get().GetAssetsByClass(UPhysicalMaterial::StaticClass()->GetClassPathName(), AssetData_Local, true);

#endif
#endif


	cachedPhysicalMaterialAssets.Empty();

	for (auto asset_Local : AssetData_Local) {

		// If asset it not in the content folder
		// if (!asset_Local.ToSoftObjectPath().ToString().StartsWith("/Game", ESearchCase::IgnoreCase))
		// 	continue;


		if (auto physicalMaterialTemp = Cast<UPhysicalMaterial>(asset_Local.GetAsset()))
			cachedPhysicalMaterialAssets.Add(physicalMaterialTemp);
	}
}


//-------------------------------------------------------

// Get Calculate Colors Paint Task Amount

TMap<UPrimitiveComponent*, int> UVertexPaintDetectionGISubSystem::GetCalculateColorsPaintTasksAmount() {

	TMap<UPrimitiveComponent*, int> meshesWithTasksTemp;

	for (auto& calculateColorsTaskTemp : GetCalculateColorsPaintTasks()) {

		meshesWithTasksTemp.Add(calculateColorsTaskTemp.Key, calculateColorsTaskTemp.Value.calculateColorsQueueArray.Num());
	}

	return meshesWithTasksTemp;
}


//-------------------------------------------------------

// Get Calculate Colors Detection Task Amount

TMap<UPrimitiveComponent*, int> UVertexPaintDetectionGISubSystem::GetCalculateColorsDetectionTasksAmount() {

	TMap<UPrimitiveComponent*, int> meshesWithTasksTemp;

	for (auto& calculateColorsTaskTemp : GetCalculateColorsDetectionTasks()) {

		meshesWithTasksTemp.Add(calculateColorsTaskTemp.Key, calculateColorsTaskTemp.Value.calculateColorsQueueArray.Num());
	}

	return meshesWithTasksTemp;
}


//-------------------------------------------------------

// Add Calculate Colors Task To Job Queue

void UVertexPaintDetectionGISubSystem::AddCalculateColorsTaskToQueue(FCalculateColorsInfo calculateColorsInfo) {

	if (!IsValid(calculateColorsInfo.vertexPaintDetectionHitActor->GetWorld())) return;
	if (!calculateColorsInfo.vertexPaintDetectionHitActor->GetWorld()->IsGameWorld()) return;
	if (calculateColorsInfo.vertexPaintDetectionHitActor->GetWorld()->bIsTearingDown) return;




	// If Setting colors to something, either regularly, with Color Snippets or just Applying Colors Directly, then tasks that are ahead of this doesn't matter since what we are setting now is what it should be. 
	if (calculateColorsInfo.isPaintTask && (calculateColorsInfo.paintOnMeshColorSettings.applyVertexColorSettings.applyVertexColorSetting == EApplyVertexColorSetting::ESetVertexColor) || calculateColorsInfo.paintOnColorSnippetSettings.actor || calculateColorsInfo.paintDetectionType == EVertexPaintDetectionType::ApplyVertexDataDirectly) {

		RemoveCalculateColorsMeshFromPaintTaskQueue(calculateColorsInfo.paintOnMeshSettings.meshComponent);
	}


	int randomTaskID_Local = 0;

	do {
		randomTaskID_Local = UKismetMathLibrary::RandomIntegerInRange(0, 214748364);
	} while (onGoingAsyncTasks.Contains(randomTaskID_Local));

	calculateColorsInfo.taskID = randomTaskID_Local;


	FVertexPaintCalculateColorsQueueArrayStruct componentCalculateColorsQueueArray;

	if (calculateColorsInfo.isPaintTask)
		componentCalculateColorsQueueArray = GetCalculateColorsPaintTasks().FindRef(calculateColorsInfo.vertexPaintComponent);

	else if (calculateColorsInfo.isDetectionTask)
		componentCalculateColorsQueueArray = GetCalculateColorsDetectionTasks().FindRef(calculateColorsInfo.vertexPaintComponent);


	// If Paint Within Area with Complex Shape, then throws a warning if the task queue is over a limit about how the result may not be 100% what you expect
	if (IsValid(calculateColorsInfo.paintOnMeshWithinAreaSettings.actor) && componentCalculateColorsQueueArray.calculateColorsQueueArray.Num() > 5) {

		for (auto compToCheckWithinTemp : calculateColorsInfo.paintOnMeshWithinAreaSettings.componentsToCheckIfIsWithin) {

			if (compToCheckWithinTemp.paintWithinAreaShape == Enum_PaintWithinAreaShape::isComplexShape) {

				if (calculateColorsInfo.printLogsToScreen || calculateColorsInfo.printLogsToOutputLog)
					UKismetSystemLibrary::PrintString(GetWorld(), FString::Printf(TEXT("Runtime Vertex Color Paint and Detection Plugin - Warning that task Paint Within Area with Complex may not yield expected result since the Task Queue for the Mesh is over 5, meaning it may take a few frames until the task runs, and if the Mesh you want to paint paint, and componentToCheckIfWithin has moved away from eachother you may not get the expected result. ")), calculateColorsInfo.printLogsToScreen, calculateColorsInfo.printLogsToOutputLog, FColor::Orange, calculateColorsInfo.printLogsToScreen_Duration);
			}
		}
	}


	UObject* sourceMeshTemp = nullptr;

	if (IsValid(calculateColorsInfo.vertexPaintStaticMeshComponent)) {

		sourceMeshTemp = calculateColorsInfo.vertexPaintStaticMeshComponent->GetStaticMesh();
	}

	else if (IsValid(calculateColorsInfo.vertexPaintSkelComponent)) {

#if ENGINE_MAJOR_VERSION == 4

		sourceMeshTemp = calculateColorsInfo.vertexPaintSkelComponent->SkeletalMesh;

#elif ENGINE_MAJOR_VERSION == 5

#if ENGINE_MINOR_VERSION == 0

		sourceMeshTemp = calculateColorsInfo.vertexPaintSkelComponent->SkeletalMesh.Get();

#else

		sourceMeshTemp = calculateColorsInfo.vertexPaintSkelComponent->GetSkeletalMeshAsset();

#endif
#endif
	}


	// If a Task already exist for this Mesh, then checks if the first in queue source mesh is the same as the current source mesh, if not the we remove the old queue so a new one can be created for this one
	if (calculateColorsInfo.multiThreadSettings.useMultithreadingForCalculations && componentCalculateColorsQueueArray.calculateColorsQueueArray.Num() > 0) {

		// If there's already tasks for this, we check, are the task source mesh and the current source mesh isn't the same, so in case it has changed we remove the queue for the old mesh so a new queue can be created for the current
		if (componentCalculateColorsQueueArray.calculateColorsQueueArray[0].vertexPaintSourceMesh != sourceMeshTemp) {

			if (calculateColorsInfo.printLogsToScreen || calculateColorsInfo.printLogsToOutputLog)
				UKismetSystemLibrary::PrintString(GetWorld(), FString::Printf(TEXT("Runtime Vertex Color Paint and Detection Plugin - Task already exists for Skeletal Mesh but the current source mesh has changed from what was created on the task before. Clears the components task queue so a new can be created.")), calculateColorsInfo.printLogsToScreen, calculateColorsInfo.printLogsToOutputLog, FColor::Orange, calculateColorsInfo.printLogsToScreen_Duration);

			componentCalculateColorsQueueArray.calculateColorsQueueArray.Empty();
			RemoveCalculateColorsMeshFromPaintTaskQueue(calculateColorsInfo.vertexPaintComponent);
		}
	}


	// If there exists a que for the mesh then it will start the async task when the previous in the que is finished
	if (componentCalculateColorsQueueArray.calculateColorsQueueArray.Num() > 0) {

		componentCalculateColorsQueueArray.calculateColorsQueueArray.Add(calculateColorsInfo);


		if (calculateColorsInfo.isPaintTask)
			calculateColorsPaintQueue.Add(calculateColorsInfo.vertexPaintComponent, componentCalculateColorsQueueArray);
		else if (calculateColorsInfo.isDetectionTask)

			calculateColorsDetectionQueue.Add(calculateColorsInfo.vertexPaintComponent, componentCalculateColorsQueueArray);


		if (calculateColorsInfo.printLogsToScreen || calculateColorsInfo.printLogsToOutputLog)
			UKismetSystemLibrary::PrintString(GetWorld(), FString::Printf(TEXT("Runtime Vertex Color Paint and Detection Plugin - Adds another Task for Mesh with ID: %s   -   %i   -   Current Amount of Tasks: %i"), *calculateColorsInfo.vertexPaintComponent->GetName(), calculateColorsInfo.taskID, componentCalculateColorsQueueArray.calculateColorsQueueArray.Num()), calculateColorsInfo.printLogsToScreen, calculateColorsInfo.printLogsToOutputLog, FColor::Cyan, calculateColorsInfo.printLogsToScreen_Duration);
	}

	// If starting a new que for the mesh it starts the async right away
	else {

		componentCalculateColorsQueueArray.calculateColorsQueueArray.Add(calculateColorsInfo);

		if (calculateColorsInfo.isPaintTask)
			calculateColorsPaintQueue.Add(calculateColorsInfo.vertexPaintComponent, componentCalculateColorsQueueArray);

		else if (calculateColorsInfo.isDetectionTask)
			calculateColorsDetectionQueue.Add(calculateColorsInfo.vertexPaintComponent, componentCalculateColorsQueueArray);


		if (calculateColorsInfo.printLogsToScreen || calculateColorsInfo.printLogsToOutputLog)
			UKismetSystemLibrary::PrintString(GetWorld(), FString::Printf(TEXT("Runtime Vertex Color Paint and Detection Plugin - Starts a new Task Queue for Actor: %s and Mesh: %s with ID: %i"), *calculateColorsInfo.vertexPaintDetectionHitActor->GetName(), *calculateColorsInfo.vertexPaintComponent->GetName(), calculateColorsInfo.taskID), calculateColorsInfo.printLogsToScreen, calculateColorsInfo.printLogsToOutputLog, FColor::Cyan, calculateColorsInfo.printLogsToScreen_Duration);


		// Sets this here instead of in StartCalculateColorsTask() so we can use a by ref with StartCalculateColorsTask() to save Memory since, FCalculateColorsInfo is a very heavy struct. 
		calculateColorsInfo.taskStartedTimeStamp = calculateColorsInfo.worldTaskWasCreatedIn->RealTimeSeconds;

		StartCalculateColorsTask(calculateColorsInfo);
	}
}


//-------------------------------------------------------

// Start Calculate Colors Task

void UVertexPaintDetectionGISubSystem::StartCalculateColorsTask(const FCalculateColorsInfo& calculateColorsInfo) {


	if (FPlatformProcess::SupportsMultithreading() && calculateColorsInfo.multiThreadSettings.useMultithreadingForCalculations) {


		// Clears reset timer if new Tasks is going to be started
		if (vertexColorPaint_QueueThreadPool_ResetTimer.IsValid() && vertexColorPaint_QueueThreadPool_ResetTimerWorld) {

			if (vertexColorPaint_QueueThreadPool_ResetTimerWorld->GetTimerManager().TimerExists(vertexColorPaint_QueueThreadPool_ResetTimer))
				vertexColorPaint_QueueThreadPool_ResetTimerWorld->GetTimerManager().ClearTimer(vertexColorPaint_QueueThreadPool_ResetTimer);
		}


		// If threadpool hasn't already been created. It gets destroyed when a task is finished and there are no more left
		if (!vertexColorPaint_QueueThreadPool) {


			EThreadPriority threadPriority_Local = (EThreadPriority)calculateColorsInfo.multiThreadSettings.multithreadPriority;

			// Defaults to Highest if the user set to use Num
			if (threadPriority_Local == EThreadPriority::TPri_Num)
				threadPriority_Local = EThreadPriority::TPri_Highest;


			// Removed ability to choose max amount of possible threads as there was an issue if the first task that was created, if it was set to very few, then another task was created that was set to high, by the time the second task was gonna run, the threadpool already existed with the few threads, so if we wanted more then we had to delete and create a new one but there might be other tasks running as well on other queues. So felt it was safer just to remove this. 

			// calculateColorsInfo.multiThreadSettings.maxAmountOfPossibleThreadsToUse;

			int32 numberOfThreads_Local = FGenericPlatformMisc::NumberOfWorkerThreadsToSpawn();

			vertexColorPaint_QueueThreadPool = FQueuedThreadPool::Allocate();

			// Default Stack Size 32768. This caused a crash when running a Paint Within Area with Complex Shape in Editor on UE5. Still get hitches in UE5 but in Shipping Builds it's smooth. 
			vertexColorPaint_QueueThreadPool->Create(FGenericPlatformMisc::NumberOfWorkerThreadsToSpawn(), 327680, threadPriority_Local, TEXT("Runtime Vertex Color Paint and Detection Plugin Thread"));

			if (calculateColorsInfo.printLogsToScreen || calculateColorsInfo.printLogsToOutputLog)
				UKismetSystemLibrary::PrintString(GetWorld(), FString::Printf(TEXT("Runtime Vertex Color Paint and Detection Plugin - Creating Thread Pool  -  Num of Threads: %i"), numberOfThreads_Local), calculateColorsInfo.printLogsToScreen, calculateColorsInfo.printLogsToOutputLog, FColor::Cyan, calculateColorsInfo.printLogsToScreen_Duration);
		}

		onGoingAsyncTasks.Add(calculateColorsInfo.taskID, calculateColorsInfo);


		if (calculateColorsInfo.printLogsToScreen || calculateColorsInfo.printLogsToOutputLog)
			UKismetSystemLibrary::PrintString(GetWorld(), FString::Printf(TEXT("Runtime Vertex Color Paint and Detection Plugin - Starting Task on Async Thread")), calculateColorsInfo.printLogsToScreen, calculateColorsInfo.printLogsToOutputLog, FColor::Cyan, calculateColorsInfo.printLogsToScreen_Duration);

		(new FAutoDeleteAsyncTask<FVertexPaintDetectionAsyncTasks>(calculateColorsInfo))->StartBackgroundTask(vertexColorPaint_QueueThreadPool);
	}

	else {

		if (calculateColorsInfo.multiThreadSettings.useMultithreadingForCalculations) {

			if (calculateColorsInfo.printLogsToScreen || calculateColorsInfo.printLogsToOutputLog)
				UKismetSystemLibrary::PrintString(GetWorld(), FString::Printf(TEXT("Runtime Vertex Color Paint and Detection Plugin - Trying to run Calculations on Multithread but platform does not support it. Falling back to Game Thread instead!")), calculateColorsInfo.printLogsToScreen, calculateColorsInfo.printLogsToOutputLog, FColor::Orange, calculateColorsInfo.printLogsToScreen_Duration);
		}
		else {

			if (calculateColorsInfo.printLogsToScreen || calculateColorsInfo.printLogsToOutputLog)
				UKismetSystemLibrary::PrintString(GetWorld(), FString::Printf(TEXT("Runtime Vertex Color Paint and Detection Plugin - Start Synchronous Calculate Colors Task for Actor: %s"), *calculateColorsInfo.vertexPaintDetectionHitActor->GetName()), calculateColorsInfo.printLogsToScreen, calculateColorsInfo.printLogsToOutputLog, FColor::Cyan, calculateColorsInfo.printLogsToScreen_Duration);
		}

		onGoingAsyncTasks.Add(calculateColorsInfo.taskID, calculateColorsInfo);


		if (calculateColorsInfo.printLogsToScreen || calculateColorsInfo.printLogsToOutputLog)
			UKismetSystemLibrary::PrintString(GetWorld(), FString::Printf(TEXT("Runtime Vertex Color Paint and Detection Plugin - Starting Task on Game Thread")), calculateColorsInfo.printLogsToScreen, calculateColorsInfo.printLogsToOutputLog, FColor::Cyan, calculateColorsInfo.printLogsToScreen_Duration);

		(new FAutoDeleteAsyncTask<FVertexPaintDetectionAsyncTasks>(calculateColorsInfo))->StartSynchronousTask();
	}
}


//-------------------------------------------------------

// Calculate Colors Task Finished

void UVertexPaintDetectionGISubSystem::CalculateColorsTaskFinished(const FCalculateColorsInfo& calculateColorsInfo, const EVertexPaintDetectionTaskResult& paintTaskResult, const TArray<FString>& calculateColorsResultMessage, const bool& paintResultedInChange) {


	if (calculateColorsInfo.printLogsToScreen || calculateColorsInfo.printLogsToOutputLog) {

		for (auto message : calculateColorsResultMessage) {

			UKismetSystemLibrary::PrintString(GetWorld(), message, calculateColorsInfo.printLogsToScreen, calculateColorsInfo.printLogsToOutputLog, FColor::Cyan, calculateColorsInfo.printLogsToScreen_Duration);
		}

		if (IsInGameThread()) {

			if (calculateColorsInfo.printLogsToScreen || calculateColorsInfo.printLogsToOutputLog)
				UKismetSystemLibrary::PrintString(GetWorld(), FString::Printf(TEXT("Runtime Vertex Color Paint and Detection Plugin - CalculateColorsTaskFinished() for Task: %i"), calculateColorsInfo.taskID), calculateColorsInfo.printLogsToScreen, calculateColorsInfo.printLogsToOutputLog, FColor::Cyan, calculateColorsInfo.printLogsToScreen_Duration);
		}
		else {

			if (calculateColorsInfo.printLogsToScreen || calculateColorsInfo.printLogsToOutputLog)
				UKismetSystemLibrary::PrintString(GetWorld(), FString::Printf(TEXT("Runtime Vertex Color Paint and Detection Plugin - CalculateColorsTaskFinished() for Task: %i but NOT in Game Thread as it should!"), calculateColorsInfo.taskID), calculateColorsInfo.printLogsToScreen, calculateColorsInfo.printLogsToOutputLog, FColor::Red, calculateColorsInfo.printLogsToScreen_Duration);
		}
	}


	if (onGoingAsyncTasks.Contains(calculateColorsInfo.taskID))
		onGoingAsyncTasks.Remove(calculateColorsInfo.taskID);


	bool validTask_Local = false;


	if (calculateColorsInfo.isPaintTask) {

		if (calculateColorsPaintQueue.Contains(calculateColorsInfo.vertexPaintComponent)) {

			for (auto taskTemp : calculateColorsPaintQueue.FindRef(calculateColorsInfo.vertexPaintComponent).calculateColorsQueueArray) {

				if (calculateColorsInfo.taskID == taskTemp.taskID) {

					validTask_Local = true;
					break;
				}
			}
		}
	}

	else if (calculateColorsInfo.isDetectionTask) {

		if (calculateColorsDetectionQueue.Contains(calculateColorsInfo.vertexPaintComponent)) {

			for (auto taskTemp : calculateColorsDetectionQueue.FindRef(calculateColorsInfo.vertexPaintComponent).calculateColorsQueueArray) {

				if (calculateColorsInfo.taskID == taskTemp.taskID) {

					validTask_Local = true;
					break;
				}
			}
		}
	}


	// Doesn't want old task that has finished to do anything since when we clear task array, any lingering task that are being calculated and finished are considred invalid
	if (!validTask_Local) {

		if (calculateColorsInfo.printLogsToScreen || calculateColorsInfo.printLogsToOutputLog)
			UKismetSystemLibrary::PrintString(GetWorld(), FString::Printf(TEXT("Runtime Vertex Color Paint and Detection Plugin - Finished Task is not Valid anymore. Possibly a paint job that Sets the colors was created After this task, which makes this task invalid since there's no use for it's result. ")), calculateColorsInfo.printLogsToScreen, calculateColorsInfo.printLogsToOutputLog, FColor::Red, calculateColorsInfo.printLogsToScreen_Duration);

		CalculateColorsTask_WrapUp(calculateColorsInfo, EVertexPaintDetectionTaskResult::Fail, paintResultedInChange);

		return;
	}


	UObject* sourceMeshTemp = nullptr;

	if (IsValid(calculateColorsInfo.vertexPaintStaticMeshComponent)) {

		sourceMeshTemp = calculateColorsInfo.vertexPaintStaticMeshComponent->GetStaticMesh();
	}

	else if (IsValid(calculateColorsInfo.vertexPaintSkelComponent)) {

#if ENGINE_MAJOR_VERSION == 4

		sourceMeshTemp = calculateColorsInfo.vertexPaintSkelComponent->SkeletalMesh;

#elif ENGINE_MAJOR_VERSION == 5

#if ENGINE_MINOR_VERSION == 0

		sourceMeshTemp = calculateColorsInfo.vertexPaintSkelComponent->SkeletalMesh.Get();

#else

		sourceMeshTemp = calculateColorsInfo.vertexPaintSkelComponent->GetSkeletalMeshAsset();

#endif
#endif
	}


	// if component isn't valid anymore, or if it was a false calculation, possibly because the mesh got switched while it has tasks queued up, then removes the queues for it. Had to have a check if the source mesh has changed as well, which can happen if we're painting often and change mesh, then the task can finish and be a success, but inbetween the time it takes for this function to run on the gamethread, the mesh could've changed. 
	if (IsValid(calculateColorsInfo.vertexPaintComponent) && (calculateColorsInfo.vertexPaintSourceMesh != sourceMeshTemp || paintTaskResult == EVertexPaintDetectionTaskResult::FailWithInvalidMesh)) {

		RemoveCalculateColorsMeshFromPaintTaskQueue(calculateColorsInfo.vertexPaintComponent);
		RemoveCalculateColorsMeshFromDetectionTaskQueue(calculateColorsInfo.vertexPaintComponent);

		if (calculateColorsInfo.printLogsToScreen || calculateColorsInfo.printLogsToOutputLog)
			UKismetSystemLibrary::PrintString(GetWorld(), FString::Printf(TEXT("Runtime Vertex Color Paint and Detection Plugin - Task Finished but the Components Source Mesh has been changed - Removes it from Calculate Colors Tasks Queue!")), calculateColorsInfo.printLogsToScreen, calculateColorsInfo.printLogsToOutputLog, FColor::Red, calculateColorsInfo.printLogsToScreen_Duration);
	}

	// If the component isn't valid anymore i.e. we can't just remove it from the TMap with .Remove since the component is the key, we loop through it and just removes any that is invalid. 
	else if (!IsValid(calculateColorsInfo.vertexPaintComponent) || paintTaskResult == EVertexPaintDetectionTaskResult::FailWithInvalidMesh) {


		if (calculateColorsInfo.printLogsToScreen || calculateColorsInfo.printLogsToOutputLog)
			UKismetSystemLibrary::PrintString(GetWorld(), FString::Printf(TEXT("Runtime Vertex Color Paint and Detection Plugin - Task Finished but the Primitive Component is not Valid anymore - Removes it from Calculate Colors Paint / Detection Tasks Queues!")), calculateColorsInfo.printLogsToScreen, calculateColorsInfo.printLogsToOutputLog, FColor::Red, calculateColorsInfo.printLogsToScreen_Duration);


		if (GetCalculateColorsPaintTasks().Num() > 0 && calculateColorsInfo.isPaintTask) {

			TArray<UPrimitiveComponent*> componentsInQue_Local;
			GetCalculateColorsPaintTasks().GetKeys(componentsInQue_Local);
			TArray<FVertexPaintCalculateColorsQueueArrayStruct> calculateColorsArrayQueue_Local;
			GetCalculateColorsPaintTasks().GenerateValueArray(calculateColorsArrayQueue_Local);

			TArray<UPrimitiveComponent*> validComponentsInQue_Local;
			TArray<FVertexPaintCalculateColorsQueueArrayStruct> validCalculateColorsArrayQueue_Local;

			// Loops through and only gets the valid components and constructs a new TMap without the invalid component. 
			for (int i = 0; i < componentsInQue_Local.Num(); i++) {


				if (IsValid(componentsInQue_Local[i])) {

					validComponentsInQue_Local.Add(componentsInQue_Local[i]);
					validCalculateColorsArrayQueue_Local.Add(calculateColorsArrayQueue_Local[i]);
				}
			}

			ClearCalculateColorsPaintTasks();

			// Constructs new TMap without the invalid component
			for (int i = 0; i < validComponentsInQue_Local.Num(); i++)
				calculateColorsPaintQueue.Add(validComponentsInQue_Local[i], validCalculateColorsArrayQueue_Local[i]);
		}

		if (GetCalculateColorsDetectionTasks().Num() > 0 && calculateColorsInfo.isDetectionTask) {

			TArray<UPrimitiveComponent*> componentsInQue_Local;
			GetCalculateColorsDetectionTasks().GetKeys(componentsInQue_Local);
			TArray<FVertexPaintCalculateColorsQueueArrayStruct> calculateColorsArrayQueue_Local;
			GetCalculateColorsDetectionTasks().GenerateValueArray(calculateColorsArrayQueue_Local);

			TArray<UPrimitiveComponent*> validComponentsInQue_Local;
			TArray<FVertexPaintCalculateColorsQueueArrayStruct> validCalculateColorsArrayQueue_Local;


			// Loops through and only gets the valid components and constructs a new TMap without the invalid component. 
			for (int i = 0; i < componentsInQue_Local.Num(); i++) {


				if (IsValid(componentsInQue_Local[i])) {

					validComponentsInQue_Local.Add(componentsInQue_Local[i]);
					validCalculateColorsArrayQueue_Local.Add(calculateColorsArrayQueue_Local[i]);
				}
			}

			ClearCalculateColorsDetectionTasks();

			// Constructs new TMap without the invalid component
			for (int i = 0; i < validComponentsInQue_Local.Num(); i++)
				calculateColorsDetectionQueue.Add(validComponentsInQue_Local[i], validCalculateColorsArrayQueue_Local[i]);
		}
	}


	FCalculateColorsInfo taskToStartNext_Local;

	// If Task was finished, either successfully or fail, but with valid component and where the component is in a task queue then removes it from the queue
	if ((paintTaskResult == EVertexPaintDetectionTaskResult::Success || paintTaskResult == EVertexPaintDetectionTaskResult::Fail) && IsValid(calculateColorsInfo.vertexPaintComponent)) {

		TArray<FCalculateColorsInfo> calculateColorsInfoQueue;

		if (calculateColorsInfo.isPaintTask) {

			calculateColorsInfoQueue = GetCalculateColorsPaintTasks().FindRef(calculateColorsInfo.vertexPaintComponent).calculateColorsQueueArray;
		}

		else if (calculateColorsInfo.isDetectionTask) {

			calculateColorsInfoQueue = GetCalculateColorsDetectionTasks().FindRef(calculateColorsInfo.vertexPaintComponent).calculateColorsQueueArray;
		}

		// Removes task we finished and if next is invalid task
		if (calculateColorsInfoQueue.Num() > 0) {

			calculateColorsInfoQueue.RemoveAt(0, 1, true);

			int amountOfInvalidTasks_Local = 0;


			// Loops through and checks if the next task is valid, if not then continues and caches how many tasks that are invalid that we can remove after. Opted for this instead of using 1 for loop and reverse looping and removing within it since then that would be heavier if the next task was valid

			for (int i = 0; i < calculateColorsInfoQueue.Num(); i++) {

				if (IsValid(calculateColorsInfoQueue[i].vertexPaintComponent) && IsValid(calculateColorsInfoQueue[i].worldTaskWasCreatedIn)) {

					if (IsValid(calculateColorsInfoQueue[i].paintOnMeshWithinAreaSettings.actor)) {

						// If next task is paint within area then we also require component to check if is within to also still be valid if complex shape, otherwise we remove the task. If another shape then complex then we're not dependent on the component existing for the logic to work
						for (auto compsToCheckTemp : calculateColorsInfoQueue[i].paintOnMeshWithinAreaSettings.componentsToCheckIfIsWithin) {

							if (compsToCheckTemp.paintWithinAreaShape == Enum_PaintWithinAreaShape::isComplexShape) {

								// If any of the comps to check is within isn't valid anymore, then we don't do the task
								if (!IsValid(compsToCheckTemp.componentToCheckIfIsWithin)) {

									amountOfInvalidTasks_Local++;
									break;
								}
							}
							else {

								break;
							}
						}
					}

					else {

						break;
					}
				}
				else {

					amountOfInvalidTasks_Local++;
				}
			}

			for (int i = 0; i < amountOfInvalidTasks_Local; i++) {

				calculateColorsInfoQueue.RemoveAt(0, 1, true);
			}
		}

		// If there's still tasks left in the queue then there must've been at least one with valid components etc. 
		if (calculateColorsInfoQueue.Num() > 0) {

			FVertexPaintCalculateColorsQueueArrayStruct colorsQueueArrayTemp;
			colorsQueueArrayTemp.calculateColorsQueueArray = calculateColorsInfoQueue;

			int amountOfTasksTemp = 0;

			// Updates the queue with refreshed task array

			if (calculateColorsInfo.isPaintTask) {

				calculateColorsPaintQueue.Add(calculateColorsInfo.vertexPaintComponent, colorsQueueArrayTemp);
				amountOfTasksTemp = GetCalculateColorsPaintTasks().Num();
			}

			else if (calculateColorsInfo.isDetectionTask) {

				calculateColorsDetectionQueue.Add(calculateColorsInfo.vertexPaintComponent, colorsQueueArrayTemp);
				amountOfTasksTemp = GetCalculateColorsDetectionTasks().Num();
			}


			if (calculateColorsInfo.printLogsToScreen || calculateColorsInfo.printLogsToOutputLog)
				UKismetSystemLibrary::PrintString(GetWorld(), FString::Printf(TEXT("Runtime Vertex Color Paint and Detection Plugin - Finished (either Successfully or Fail, eitherway we move task) for Actor: %s   -   Tasks left in Que for Mesh: %i   -   Meshes with Tasks in Total: %i  -  Starting next Task for Mesh with ID: %i!"), *calculateColorsInfo.vertexPaintDetectionHitActor->GetName(), calculateColorsInfoQueue.Num(), amountOfTasksTemp, calculateColorsInfoQueue[0].taskID), calculateColorsInfo.printLogsToScreen, calculateColorsInfo.printLogsToOutputLog, FColor::Cyan, calculateColorsInfo.printLogsToScreen_Duration);


			// If this task was a paint job then we can prefill the next task meshVertexColorsPerLODArray with the result of this task since this has the latest colors
			if (calculateColorsInfo.paintDetectionType != EVertexPaintDetectionType::Detection) {

				// When starting a new task in the queue for a component we make sure it uses the latest colors from the previous task. If the next task is set to paint on more LODs than was finished in the previous task then if CPU Access true they will get it in runtime, otherwise the calculateColorsInfoQue[0].vertexDetectMeshData.meshDataPerLOD will have gotten those LODs set from the data asset before adding it to the queue
				for (int i = 0; i < calculateColorsInfo.meshVertexData.meshDataPerLOD.Num(); i++) {


					if (calculateColorsInfoQueue[0].meshVertexData.meshDataPerLOD.IsValidIndex(i)) {

						calculateColorsInfoQueue[0].meshVertexData.meshDataPerLOD[i].lod = calculateColorsInfo.meshVertexData.meshDataPerLOD[i].lod;

						if (calculateColorsInfo.meshVertexData.meshDataPerLOD[i].meshVertexColorsPerLODArray.Num() == calculateColorsInfo.amountOfVerticesAtEachLOD[i]) {

							calculateColorsInfoQueue[0].meshVertexData.meshDataPerLOD[i].meshVertexColorsPerLODArray = calculateColorsInfo.meshVertexData.meshDataPerLOD[i].meshVertexColorsPerLODArray;
						}

						else {

							if (i == 0 && paintTaskResult == EVertexPaintDetectionTaskResult::Success) {

								if (calculateColorsInfo.printLogsToScreen || calculateColorsInfo.printLogsToOutputLog)
									UKismetSystemLibrary::PrintString(GetWorld(), FString::Printf(TEXT("Runtime Vertex Color Paint and Detection Plugin - Trying to Pre-Fill the Next Tasks Colors in the Task Queue but we don't have access to the colors of the task that just finished, meaning the callback settings must have set it to not return the colors. This may save some performance if it's a really heavy mesh, but remember that if you have several things painting at the same Mesh like every frame, you may see a small flicker. ")), calculateColorsInfo.printLogsToScreen, calculateColorsInfo.printLogsToOutputLog, FColor::Orange, calculateColorsInfo.printLogsToScreen_Duration);
							}
						}
					}
				}
			}


			taskToStartNext_Local = calculateColorsInfoQueue[0];
		}

		// If there is no tasks left for the mesh
		else {

			int amountOfTasksTemp = 0;

			if (calculateColorsInfo.isPaintTask) {

				calculateColorsPaintQueue.Remove(calculateColorsInfo.vertexPaintComponent);
				amountOfTasksTemp = GetCalculateColorsPaintTasks().Num();
			}

			else if (calculateColorsInfo.isDetectionTask) {

				calculateColorsDetectionQueue.Remove(calculateColorsInfo.vertexPaintComponent);
				amountOfTasksTemp = GetCalculateColorsDetectionTasks().Num();
			}

			if (calculateColorsInfo.printLogsToScreen || calculateColorsInfo.printLogsToOutputLog)
				UKismetSystemLibrary::PrintString(GetWorld(), FString::Printf(TEXT("Runtime Vertex Color Paint and Detection Plugin - Task Finished for Actor: %s   -   No Tasks left in Que for Actor   -   Meshes with Tasks in Total: %i"), *calculateColorsInfo.vertexPaintDetectionHitActor->GetName(), amountOfTasksTemp), calculateColorsInfo.printLogsToScreen, calculateColorsInfo.printLogsToOutputLog, FColor::Cyan, calculateColorsInfo.printLogsToScreen_Duration);
		}
	}


	// If no more tasks left then starts a timer to reset the threadpool
	if (GetCalculateColorsPaintTasks().Num() <= 0 && GetCalculateColorsDetectionTasks().Num() <= 0) {

		if (IsValid(calculateColorsInfo.worldTaskWasCreatedIn)) {

			vertexColorPaint_QueueThreadPool_ResetTimerWorld = calculateColorsInfo.worldTaskWasCreatedIn;
			vertexColorPaint_QueueThreadPool_ResetTimerWorld->GetTimerManager().SetTimer(vertexColorPaint_QueueThreadPool_ResetTimer, this, &UVertexPaintDetectionGISubSystem::ResetThreadPool, 5, false, 5);
		}
		else {

			ResetThreadPool();
		}
	}

	else {

		if (vertexColorPaint_QueueThreadPool_ResetTimerWorld) {

			if (vertexColorPaint_QueueThreadPool_ResetTimerWorld->GetTimerManager().TimerExists(vertexColorPaint_QueueThreadPool_ResetTimer))
				vertexColorPaint_QueueThreadPool_ResetTimerWorld->GetTimerManager().ClearTimer(vertexColorPaint_QueueThreadPool_ResetTimer);
		}
	}


	// Wraps Up the Task after Removing it from the Queue
	if (IsValid(calculateColorsInfo.vertexPaintComponent)) {

		if (IsValid(calculateColorsInfo.worldTaskWasCreatedIn)) {

			if (calculateColorsInfo.worldTaskWasCreatedIn->IsGameWorld() && !calculateColorsInfo.worldTaskWasCreatedIn->bIsTearingDown) {

				if (paintTaskResult == EVertexPaintDetectionTaskResult::Success) {

					// Was necessary in case we painted on something and switched mesh in between when the paint task got finished as a success, and the time this finish function was run on the game thread. Then this function could run as a success, but the source mesh has changed so the task should no longer be valid and do anything
					if (calculateColorsInfo.vertexPaintSourceMesh == sourceMeshTemp) {


						if (validTask_Local) {

							if (calculateColorsInfo.printLogsToScreen || calculateColorsInfo.printLogsToOutputLog)
								UKismetSystemLibrary::PrintString(GetWorld(), FString::Printf(TEXT("Runtime Vertex Color Paint and Detection Plugin - Task Success for Actor: %s  -  Runs Wrap Up!"), *calculateColorsInfo.vertexPaintDetectionHitActor->GetName()), calculateColorsInfo.printLogsToScreen, calculateColorsInfo.printLogsToOutputLog, FColor::Green, calculateColorsInfo.printLogsToScreen_Duration);

							CalculateColorsTask_WrapUp(calculateColorsInfo, EVertexPaintDetectionTaskResult::Success, paintResultedInChange);
						}
					}

					else {

						if (calculateColorsInfo.printLogsToScreen || calculateColorsInfo.printLogsToOutputLog)
							UKismetSystemLibrary::PrintString(GetWorld(), FString::Printf(TEXT("Runtime Vertex Color Paint and Detection Plugin - Task Fail the Source Mesh has changed on the primitive component from the one that it had when the task was created. ")), calculateColorsInfo.printLogsToScreen, calculateColorsInfo.printLogsToOutputLog, FColor::Red, calculateColorsInfo.printLogsToScreen_Duration);

						CalculateColorsTask_WrapUp(calculateColorsInfo, EVertexPaintDetectionTaskResult::FailWithInvalidMesh, paintResultedInChange);
					}
				}

				else if (paintTaskResult == EVertexPaintDetectionTaskResult::Fail) {

					if (calculateColorsInfo.printLogsToScreen || calculateColorsInfo.printLogsToOutputLog)
						UKismetSystemLibrary::PrintString(GetWorld(), FString::Printf(TEXT("Runtime Vertex Color Paint and Detection Plugin - Task Failed. ")), calculateColorsInfo.printLogsToScreen, calculateColorsInfo.printLogsToOutputLog, FColor::Red, calculateColorsInfo.printLogsToScreen_Duration);

					// If not a success then Wrap Up just runs the delegates with as a fail, so no requirements that the source mesh has to be the same
					CalculateColorsTask_WrapUp(calculateColorsInfo, EVertexPaintDetectionTaskResult::Fail, paintResultedInChange);
				}

				else if (paintTaskResult == EVertexPaintDetectionTaskResult::FailWithInvalidMesh) {

					if (calculateColorsInfo.printLogsToScreen || calculateColorsInfo.printLogsToOutputLog)
						UKismetSystemLibrary::PrintString(GetWorld(), FString::Printf(TEXT("Runtime Vertex Color Paint and Detection Plugin - Task Failed - Invalid Mesh. Perhaps Source Mesh got switching during the calculation. ")), calculateColorsInfo.printLogsToScreen, calculateColorsInfo.printLogsToOutputLog, FColor::Red, calculateColorsInfo.printLogsToScreen_Duration);

					// If not a success then Wrap Up just runs the delegates with as a fail, so no requirements that the source mesh has to be the same
					CalculateColorsTask_WrapUp(calculateColorsInfo, EVertexPaintDetectionTaskResult::FailWithInvalidMesh, paintResultedInChange);
				}
			}

			else {

				if (calculateColorsInfo.printLogsToScreen || calculateColorsInfo.printLogsToOutputLog)
					UKismetSystemLibrary::PrintString(GetWorld(), FString::Printf(TEXT("Runtime Vertex Color Paint and Detection Plugin - Task Failed. World isn't game world or is tearing down. ")), calculateColorsInfo.printLogsToScreen, calculateColorsInfo.printLogsToOutputLog, FColor::Red, calculateColorsInfo.printLogsToScreen_Duration);

				ResetThreadPool();

				return;
			}
		}

		else {

			if (calculateColorsInfo.printLogsToScreen || calculateColorsInfo.printLogsToOutputLog)
				UKismetSystemLibrary::PrintString(GetWorld(), FString::Printf(TEXT("Runtime Vertex Color Paint and Detection Plugin - Task Failed, World not Valid anymore")), calculateColorsInfo.printLogsToScreen, calculateColorsInfo.printLogsToOutputLog, FColor::Red, calculateColorsInfo.printLogsToScreen_Duration);

			ResetThreadPool();

			return;
		}
	}

	// If primitive comp isn't valid anymore
	else {

		if (calculateColorsInfo.printLogsToScreen || calculateColorsInfo.printLogsToOutputLog)
			UKismetSystemLibrary::PrintString(GetWorld(), FString::Printf(TEXT("Runtime Vertex Color Paint and Detection Plugin - Task Failed. Primitive Component isn't valid anymore. ")), calculateColorsInfo.printLogsToScreen, calculateColorsInfo.printLogsToOutputLog, FColor::Red, calculateColorsInfo.printLogsToScreen_Duration);

		CalculateColorsTask_WrapUp(calculateColorsInfo, EVertexPaintDetectionTaskResult::FailWithInvalidMesh, paintResultedInChange);
	}


	// Starts the next calculate task 
	if (taskToStartNext_Local.vertexPaintDetectionHitActor) {

		// Sets this here instead of in StartCalculateColorsTask() so we can use a by ref with StartCalculateColorsTask() to save Memory since, FCalculateColorsInfo is a very heavy struct. 
		taskToStartNext_Local.taskStartedTimeStamp = taskToStartNext_Local.worldTaskWasCreatedIn->RealTimeSeconds;

		StartCalculateColorsTask(taskToStartNext_Local);
	}
}


//-------------------------------------------------------

// Calculate Colors Task Wrap Up

void UVertexPaintDetectionGISubSystem::CalculateColorsTask_WrapUp(FCalculateColorsInfo calculateColorsInfo, const EVertexPaintDetectionTaskResult& taskResult, const bool& paintResultedInChange) {


	calculateColorsInfo.taskResult.taskDuration = calculateColorsInfo.worldTaskWasCreatedIn->RealTimeSeconds - calculateColorsInfo.taskStartedTimeStamp;
	calculateColorsInfo.taskResult.anyVertexColorGotChangedByPaintJob = paintResultedInChange;


	if (taskResult == EVertexPaintDetectionTaskResult::Success) {

		calculateColorsInfo.taskResult.taskSuccessfull = true;

		TArray<FVector2D> closestVertexUV_Detection_Local;
		TArray<FVector2D> closestVertexUV_Painting_Local;

		// If got Closest Vertex then gets UV as well
		if (calculateColorsInfo.closestVertexFound_Paint >= 0 || calculateColorsInfo.closestVertexFound_Detection >= 0) {

			if (calculateColorsInfo.vertexPaintStaticMeshComponent) {

				// Note that vertex UV is only available if CPU Access is true
				if (calculateColorsInfo.vertexPaintStaticMeshComponent->GetStaticMesh()->bAllowCPUAccess) {

					if (calculateColorsInfo.vertexPaintStaticMeshComponent->GetStaticMesh()->GetRenderData()->LODResources[0].VertexBuffers.StaticMeshVertexBuffer.IsInitialized() && calculateColorsInfo.vertexPaintStaticMeshComponent->GetStaticMesh()->GetRenderData()->LODResources[0].VertexBuffers.StaticMeshVertexBuffer.TexCoordVertexBuffer.IsInitialized()) {

						// Had to use GetNumTexCoords since GetStaticMesh()->GetNumUVChannels(0); has a #if Editor only data
						for (uint32 i = 0; i < calculateColorsInfo.vertexPaintStaticMeshComponent->GetStaticMesh()->GetRenderData()->LODResources[0].VertexBuffers.StaticMeshVertexBuffer.GetNumTexCoords(); i++) {


#if ENGINE_MAJOR_VERSION == 4

							if (calculateColorsInfo.closestVertexFound_Paint >= 0)
								closestVertexUV_Painting_Local.Add(calculateColorsInfo.vertexPaintStaticMeshComponent->GetStaticMesh()->GetRenderData()->LODResources[0].VertexBuffers.StaticMeshVertexBuffer.GetVertexUV(calculateColorsInfo.closestVertexFound_Paint, i));

							if (calculateColorsInfo.closestVertexFound_Detection >= 0)
								closestVertexUV_Detection_Local.Add(calculateColorsInfo.vertexPaintStaticMeshComponent->GetStaticMesh()->GetRenderData()->LODResources[0].VertexBuffers.StaticMeshVertexBuffer.GetVertexUV(calculateColorsInfo.closestVertexFound_Detection, i));

#elif ENGINE_MAJOR_VERSION == 5

							if (calculateColorsInfo.closestVertexFound_Paint >= 0)
								closestVertexUV_Painting_Local.Add((FVector2D)calculateColorsInfo.vertexPaintStaticMeshComponent->GetStaticMesh()->GetRenderData()->LODResources[0].VertexBuffers.StaticMeshVertexBuffer.GetVertexUV(calculateColorsInfo.closestVertexFound_Paint, i));

							if (calculateColorsInfo.closestVertexFound_Detection >= 0)
								closestVertexUV_Detection_Local.Add((FVector2D)calculateColorsInfo.vertexPaintStaticMeshComponent->GetStaticMesh()->GetRenderData()->LODResources[0].VertexBuffers.StaticMeshVertexBuffer.GetVertexUV(calculateColorsInfo.closestVertexFound_Detection, i));

#endif

							if (closestVertexUV_Painting_Local.Num() > 0) {

								if (calculateColorsInfo.printLogsToScreen || calculateColorsInfo.printLogsToOutputLog)
									UKismetSystemLibrary::PrintString(GetWorld(), FString::Printf(TEXT("Runtime Vertex Color Paint and Detection Plugin - Static Mesh Component Closest Vertex UV at Channel for Painting: %s  -  %i"), *closestVertexUV_Painting_Local[i].ToString(), i), calculateColorsInfo.printLogsToScreen, calculateColorsInfo.printLogsToOutputLog, FColor::Cyan, calculateColorsInfo.printLogsToScreen_Duration);
							}

							if (closestVertexUV_Detection_Local.Num() > 0) {

								if (calculateColorsInfo.printLogsToScreen || calculateColorsInfo.printLogsToOutputLog)
									UKismetSystemLibrary::PrintString(GetWorld(), FString::Printf(TEXT("Runtime Vertex Color Paint and Detection Plugin - Static Mesh Component Closest Vertex UV at Channel for Detection: %s  -  %i"), *closestVertexUV_Detection_Local[i].ToString(), i), calculateColorsInfo.printLogsToScreen, calculateColorsInfo.printLogsToOutputLog, FColor::Cyan, calculateColorsInfo.printLogsToScreen_Duration);
							}
						}
					}
				}

				else {

					if (calculateColorsInfo.printLogsToScreen || calculateColorsInfo.printLogsToOutputLog)
						UKismetSystemLibrary::PrintString(GetWorld(), FString::Printf(TEXT("Runtime Vertex Color Paint and Detection Plugin - Can't get Closest Vertex UV since Mesh CPU Access is False")), calculateColorsInfo.printLogsToScreen, calculateColorsInfo.printLogsToOutputLog, FColor::Orange, calculateColorsInfo.printLogsToScreen_Duration);
				}
			}

			else if (calculateColorsInfo.vertexPaintSkelComponent) {

				FSkeletalMeshLODRenderData& LODData = calculateColorsInfo.vertexPaintSkelComponent->GetSkeletalMeshRenderData()->LODRenderData[0];

				if (LODData.StaticVertexBuffers.StaticMeshVertexBuffer.IsInitialized() && LODData.StaticVertexBuffers.StaticMeshVertexBuffer.TexCoordVertexBuffer.IsInitialized()) {

					for (uint32 i = 0; i < LODData.StaticVertexBuffers.StaticMeshVertexBuffer.GetNumTexCoords(); i++) {


#if ENGINE_MAJOR_VERSION == 4

						if (calculateColorsInfo.closestVertexFound_Paint >= 0)
							closestVertexUV_Painting_Local.Add(LODData.StaticVertexBuffers.StaticMeshVertexBuffer.GetVertexUV(calculateColorsInfo.closestVertexFound_Paint, i));

						if (calculateColorsInfo.closestVertexFound_Detection >= 0)
							closestVertexUV_Detection_Local.Add(LODData.StaticVertexBuffers.StaticMeshVertexBuffer.GetVertexUV(calculateColorsInfo.closestVertexFound_Detection, i));

#elif ENGINE_MAJOR_VERSION == 5

						if (calculateColorsInfo.closestVertexFound_Paint >= 0)
							closestVertexUV_Painting_Local.Add((FVector2D)LODData.StaticVertexBuffers.StaticMeshVertexBuffer.GetVertexUV(calculateColorsInfo.closestVertexFound_Paint, i));

						if (calculateColorsInfo.closestVertexFound_Detection >= 0)
							closestVertexUV_Detection_Local.Add((FVector2D)LODData.StaticVertexBuffers.StaticMeshVertexBuffer.GetVertexUV(calculateColorsInfo.closestVertexFound_Detection, i));

#endif

						if (closestVertexUV_Painting_Local.Num() > 0) {

							if (calculateColorsInfo.printLogsToScreen || calculateColorsInfo.printLogsToOutputLog)
								UKismetSystemLibrary::PrintString(GetWorld(), FString::Printf(TEXT("Runtime Vertex Color Paint and Detection Plugin - Skeletal Mesh Component Closest Vertex UV at Channel for Painting: %s  -  %i"), *closestVertexUV_Painting_Local[i].ToString(), i), calculateColorsInfo.printLogsToScreen, calculateColorsInfo.printLogsToOutputLog, FColor::Cyan, calculateColorsInfo.printLogsToScreen_Duration);
						}

						if (closestVertexUV_Detection_Local.Num() > 0) {

							if (calculateColorsInfo.printLogsToScreen || calculateColorsInfo.printLogsToOutputLog)
								UKismetSystemLibrary::PrintString(GetWorld(), FString::Printf(TEXT("Runtime Vertex Color Paint and Detection Plugin - Skeletal Mesh Component Closest Vertex UV at Channel for Detection: %s  -  %i"), *closestVertexUV_Detection_Local[i].ToString(), i), calculateColorsInfo.printLogsToScreen, calculateColorsInfo.printLogsToOutputLog, FColor::Cyan, calculateColorsInfo.printLogsToScreen_Duration);
						}
					}
				}
			}
		}


		// If painting we can print warnings in case we're trying to remove colors on a mesh that already has none etc. 
		if (calculateColorsInfo.amountOfPaintedColorsOfEachChannelAbove0.successfullyGotVerticesOfEachChannelAtTheMinAmount && calculateColorsInfo.paintDetectionType != EVertexPaintDetectionType::Detection) {

			if (calculateColorsInfo.printLogsToScreen || calculateColorsInfo.printLogsToOutputLog) {


				// If fully painted
				if (calculateColorsInfo.amountOfPaintedColorsOfEachChannelAbove0.averageAmountOfRedColorAtTheMinAmount == 1 && calculateColorsInfo.amountOfPaintedColorsOfEachChannelAbove0.averageAmountOfGreenColorAtTheMinAmount == 1 && calculateColorsInfo.amountOfPaintedColorsOfEachChannelAbove0.averageAmountOfBlueColorAtTheMinAmount == 1 && calculateColorsInfo.amountOfPaintedColorsOfEachChannelAbove0.averageAmountOfAlphaColorAtTheMinAmount == 1) {

					// If fully painted and something is trying to remove colors
					if (calculateColorsInfo.paintOnMeshColorSettings.applyVertexColorSettings.redColor < 0 || calculateColorsInfo.paintOnMeshColorSettings.applyVertexColorSettings.greenColor < 0 || calculateColorsInfo.paintOnMeshColorSettings.applyVertexColorSettings.blueColor < 0 || calculateColorsInfo.paintOnMeshColorSettings.applyVertexColorSettings.alphaColor < 0) {

						// 
					}
					else {

						UKismetSystemLibrary::PrintString(GetWorld(), FString::Printf(TEXT("Runtime Vertex Color Paint and Detection Plugin - Trying to Apply Color on an Already Fully Colored Mesh. So no visual difference will occur. ")), calculateColorsInfo.printLogsToScreen, calculateColorsInfo.printLogsToOutputLog, FColor::Orange, calculateColorsInfo.printLogsToScreen_Duration);
					}
				}

				else if (calculateColorsInfo.amountOfPaintedColorsOfEachChannelAbove0.averageAmountOfRedColorAtTheMinAmount == 0 && calculateColorsInfo.amountOfPaintedColorsOfEachChannelAbove0.averageAmountOfGreenColorAtTheMinAmount == 0 && calculateColorsInfo.amountOfPaintedColorsOfEachChannelAbove0.averageAmountOfBlueColorAtTheMinAmount == 0 && calculateColorsInfo.amountOfPaintedColorsOfEachChannelAbove0.averageAmountOfAlphaColorAtTheMinAmount == 0) {

					// If nothing is painted and trying to Add colors
					if (calculateColorsInfo.paintOnMeshColorSettings.applyVertexColorSettings.redColor > 0 || calculateColorsInfo.paintOnMeshColorSettings.applyVertexColorSettings.greenColor > 0 || calculateColorsInfo.paintOnMeshColorSettings.applyVertexColorSettings.blueColor > 0 || calculateColorsInfo.paintOnMeshColorSettings.applyVertexColorSettings.alphaColor > 0) {

						// 
					}
					else {

						UKismetSystemLibrary::PrintString(GetWorld(), FString::Printf(TEXT("Runtime Vertex Color Paint and Detection Plugin - Trying to Remove Colors on a Mesh that already has all of them removed. So no visual difference will occur. ")), calculateColorsInfo.printLogsToScreen, calculateColorsInfo.printLogsToOutputLog, FColor::Orange, calculateColorsInfo.printLogsToScreen_Duration);
					}
				}



				// If fully painted on Red and trying to apply red
				if (calculateColorsInfo.amountOfPaintedColorsOfEachChannelAbove0.averageAmountOfRedColorAtTheMinAmount == 1) {

					if (calculateColorsInfo.paintOnMeshColorSettings.applyVertexColorSettings.redColor > 0) {

						UKismetSystemLibrary::PrintString(GetWorld(), FString::Printf(TEXT("Runtime Vertex Color Paint and Detection Plugin - Trying to Apply Red Vertex Color but Red is already Full Color")), calculateColorsInfo.printLogsToScreen, calculateColorsInfo.printLogsToOutputLog, FColor::Orange, calculateColorsInfo.printLogsToScreen_Duration);
					}
				}

				else if (calculateColorsInfo.amountOfPaintedColorsOfEachChannelAbove0.averageAmountOfRedColorAtTheMinAmount == 0) {

					if (calculateColorsInfo.paintOnMeshColorSettings.applyVertexColorSettings.redColor < 0) {

						UKismetSystemLibrary::PrintString(GetWorld(), FString::Printf(TEXT("Runtime Vertex Color Paint and Detection Plugin - Trying to Remove Red Vertex Color but Red is Completely Removed")), calculateColorsInfo.printLogsToScreen, calculateColorsInfo.printLogsToOutputLog, FColor::Orange, calculateColorsInfo.printLogsToScreen_Duration);
					}
				}


				// If fully painted on Green and trying to apply green
				if (calculateColorsInfo.amountOfPaintedColorsOfEachChannelAbove0.averageAmountOfGreenColorAtTheMinAmount == 1) {

					if (calculateColorsInfo.paintOnMeshColorSettings.applyVertexColorSettings.greenColor > 0) {

						UKismetSystemLibrary::PrintString(GetWorld(), FString::Printf(TEXT("Runtime Vertex Color Paint and Detection Plugin - Trying to Apply Green Vertex Color but Green is already Full Color! ")), calculateColorsInfo.printLogsToScreen, calculateColorsInfo.printLogsToOutputLog, FColor::Orange, calculateColorsInfo.printLogsToScreen_Duration);
					}
				}

				else if (calculateColorsInfo.amountOfPaintedColorsOfEachChannelAbove0.averageAmountOfGreenColorAtTheMinAmount == 0) {

					if (calculateColorsInfo.paintOnMeshColorSettings.applyVertexColorSettings.greenColor < 0) {

						UKismetSystemLibrary::PrintString(GetWorld(), FString::Printf(TEXT("Runtime Vertex Color Paint and Detection Plugin - Trying to Remove Green Vertex Color but Green is Completely Removed")), calculateColorsInfo.printLogsToScreen, calculateColorsInfo.printLogsToOutputLog, FColor::Orange, calculateColorsInfo.printLogsToScreen_Duration);
					}
				}


				// If fully painted on Blue and trying to apply Blue
				if (calculateColorsInfo.amountOfPaintedColorsOfEachChannelAbove0.averageAmountOfBlueColorAtTheMinAmount == 1) {

					if (calculateColorsInfo.paintOnMeshColorSettings.applyVertexColorSettings.blueColor > 0) {

						UKismetSystemLibrary::PrintString(GetWorld(), FString::Printf(TEXT("Runtime Vertex Color Paint and Detection Plugin - Trying to Apply Blue Vertex Color but Blue is already Full Color! ")), calculateColorsInfo.printLogsToScreen, calculateColorsInfo.printLogsToOutputLog, FColor::Orange, calculateColorsInfo.printLogsToScreen_Duration);
					}
				}

				else if (calculateColorsInfo.amountOfPaintedColorsOfEachChannelAbove0.averageAmountOfBlueColorAtTheMinAmount == 0) {

					if (calculateColorsInfo.paintOnMeshColorSettings.applyVertexColorSettings.blueColor < 0) {

						UKismetSystemLibrary::PrintString(GetWorld(), FString::Printf(TEXT("Runtime Vertex Color Paint and Detection Plugin - Trying to Remove Blue Vertex Color but Blue is Completely Removed")), calculateColorsInfo.printLogsToScreen, calculateColorsInfo.printLogsToOutputLog, FColor::Orange, calculateColorsInfo.printLogsToScreen_Duration);
					}
				}


				// If fully painted on Alpha and trying to apply Alpha
				if (calculateColorsInfo.amountOfPaintedColorsOfEachChannelAbove0.averageAmountOfAlphaColorAtTheMinAmount == 1) {

					if (calculateColorsInfo.paintOnMeshColorSettings.applyVertexColorSettings.alphaColor > 0) {

						UKismetSystemLibrary::PrintString(GetWorld(), FString::Printf(TEXT("Runtime Vertex Color Paint and Detection Plugin - Trying to Apply Alpha Vertex Color but Alpha is already Full Color! ")), calculateColorsInfo.printLogsToScreen, calculateColorsInfo.printLogsToOutputLog, FColor::Orange, calculateColorsInfo.printLogsToScreen_Duration);
					}
				}

				else if (calculateColorsInfo.amountOfPaintedColorsOfEachChannelAbove0.averageAmountOfAlphaColorAtTheMinAmount == 0) {

					if (calculateColorsInfo.paintOnMeshColorSettings.applyVertexColorSettings.alphaColor < 0) {

						UKismetSystemLibrary::PrintString(GetWorld(), FString::Printf(TEXT("Runtime Vertex Color Paint and Detection Plugin - Trying to Remove Alpha Vertex Color but Alpha is Completely Removed")), calculateColorsInfo.printLogsToScreen, calculateColorsInfo.printLogsToOutputLog, FColor::Orange, calculateColorsInfo.printLogsToScreen_Duration);
					}
				}


				if (calculateColorsInfo.amountOfPaintedColorsOfEachChannelAtMinAmount.successfullyGotVerticesOfEachChannelAtTheMinAmount) {

					UKismetSystemLibrary::PrintString(GetWorld(), FString::Printf(TEXT("Runtime Vertex Color Paint and Detection Plugin - After Paint Job - Amount of Vertices with min Red Painted: %f - Amount of Vertices with min Green Painted: %f - Amount of Vertices with min Blue Painted: %f - Amount of Vertices with min Alpha Painted: %f"), calculateColorsInfo.amountOfPaintedColorsOfEachChannelAtMinAmount.amountOfVerticesWithAnyRedPaintedAtTheMinAmount, calculateColorsInfo.amountOfPaintedColorsOfEachChannelAtMinAmount.amountOfVerticesWithAnyGreenPaintedAtTheMinAmount, calculateColorsInfo.amountOfPaintedColorsOfEachChannelAtMinAmount.amountOfVerticesWithAnyBluePaintedAtTheMinAmount, calculateColorsInfo.amountOfPaintedColorsOfEachChannelAtMinAmount.amountOfVerticesWithAnyAlphaPaintedAtTheMinAmount), calculateColorsInfo.printLogsToScreen, calculateColorsInfo.printLogsToOutputLog, FColor::Cyan, calculateColorsInfo.printLogsToScreen_Duration);

					UKismetSystemLibrary::PrintString(GetWorld(), FString::Printf(TEXT("Runtime Vertex Color Paint and Detection Plugin - After Paint Job - Amount of Red Channel Percent Painted: %f - Amount of Green Channel Percent Painted: %f - Amount of Blue Channel Percent Painted: %f - Amount of Alpha Channel Percent Painted: %f"), calculateColorsInfo.amountOfPaintedColorsOfEachChannelAtMinAmount.amountOfRedChannelPercentPaintedAtTheMinAmount, calculateColorsInfo.amountOfPaintedColorsOfEachChannelAtMinAmount.amountOfGreenChannelPercentPaintedAtTheMinAmount, calculateColorsInfo.amountOfPaintedColorsOfEachChannelAtMinAmount.amountOfBlueChannelPercentPaintedAtTheMinAmount, calculateColorsInfo.amountOfPaintedColorsOfEachChannelAtMinAmount.amountOfAlphaChannelPercentPaintedAtTheMinAmount), calculateColorsInfo.printLogsToScreen, calculateColorsInfo.printLogsToOutputLog, FColor::Cyan, calculateColorsInfo.printLogsToScreen_Duration);

					UKismetSystemLibrary::PrintString(GetWorld(), FString::Printf(TEXT("Runtime Vertex Color Paint and Detection Plugin - After Paint Job - Average Amount of Red Color: %f - Average Amount of Green Color: %f - Average Amount of Blue Color: %f - Average Amount of Alpha Color: %f"), calculateColorsInfo.amountOfPaintedColorsOfEachChannelAtMinAmount.averageAmountOfRedColorAtTheMinAmount, calculateColorsInfo.amountOfPaintedColorsOfEachChannelAtMinAmount.averageAmountOfGreenColorAtTheMinAmount, calculateColorsInfo.amountOfPaintedColorsOfEachChannelAtMinAmount.averageAmountOfBlueColorAtTheMinAmount, calculateColorsInfo.amountOfPaintedColorsOfEachChannelAtMinAmount.averageAmountOfAlphaColorAtTheMinAmount), calculateColorsInfo.printLogsToScreen, calculateColorsInfo.printLogsToOutputLog, FColor::Cyan, calculateColorsInfo.printLogsToScreen_Duration);
				}
			}
		}


		bool appliedColorsWillMakeChange = true;

		// If painting and not detecting
		if (IsValid(calculateColorsInfo.paintOnMeshColorSettings.actor)) {

			appliedColorsWillMakeChange = GetWillAppliedColorsMakeChange(calculateColorsInfo);

			if (calculateColorsInfo.printLogsToScreen || calculateColorsInfo.printLogsToOutputLog) {

				if (appliedColorsWillMakeChange) {

					if (calculateColorsInfo.printLogsToScreen || calculateColorsInfo.printLogsToOutputLog)
						UKismetSystemLibrary::PrintString(GetWorld(), FString::Printf(TEXT("Runtime Vertex Color Paint and Detection Plugin - Paint Jobs Applied Color will Make a Change! ")), calculateColorsInfo.printLogsToScreen, calculateColorsInfo.printLogsToOutputLog, FColor::Cyan, calculateColorsInfo.printLogsToScreen_Duration);
				}
				else {

					if (calculateColorsInfo.printLogsToScreen || calculateColorsInfo.printLogsToOutputLog)
						UKismetSystemLibrary::PrintString(GetWorld(), FString::Printf(TEXT("Runtime Vertex Color Paint and Detection Plugin - Paint Jobs Applied Color will Not Make a Change! Possibly because we're trying to Add Color to a fully colored mesh, or the opposite and trying to remove colors on a mesh with no colors. ")), calculateColorsInfo.printLogsToScreen, calculateColorsInfo.printLogsToOutputLog, FColor::Cyan, calculateColorsInfo.printLogsToScreen_Duration);
				}
			}
		}


		// Adjusts it again here after we've used amountOfColorsOfEachChannel and thus should reset it if it's set not to be included, so it's consistent with the users settings
		calculateColorsInfo = UVertexPaintFunctionLibrary::AdjustCallbackVertexData(calculateColorsInfo, true, true, true);


		if (IsValid(calculateColorsInfo.getAllVertexColorsSettings.actor)) {

			GetAllVertexColorsOnly_WrapUp(calculateColorsInfo);
		}

		else if (IsValid(calculateColorsInfo.paintOnMeshAtLocationSettings.actor)) { // Has to be before Detect, in case Painting at Location but also running a Detection Before and/or After

			// Detection Before painting is applied, so you can for instance run proper SFX if a rain drop falls on a dry jacket before it gets wet
			if (calculateColorsInfo.paintOnMeshAtLocationSettings.detection.runGetClosestVertexDataOnMeshBeforeApplyingPaint) {

				GetClosestVertexDataOnMesh_WrapUp(calculateColorsInfo, calculateColorsInfo.detectInfoSettings, calculateColorsInfo.closestVertexColor_BeforeApplyingColors_Detect, calculateColorsInfo.avarageColorWithinArea_Detect_BeforeApplyingColor, calculateColorsInfo.estimatedColorAtHitLocation_BeforeApplyingColors_Detect, closestVertexUV_Detection_Local);
			}


			PaintOnMeshAtLocation_WrapUp(calculateColorsInfo, closestVertexUV_Painting_Local, appliedColorsWillMakeChange);


			// Detect After
			if (calculateColorsInfo.paintOnMeshAtLocationSettings.detection.runGetClosestVertexDataOnMeshAfterApplyingPaint)
				GetClosestVertexDataOnMesh_WrapUp(calculateColorsInfo, calculateColorsInfo.detectInfoSettings, calculateColorsInfo.closestVertexColor_AfterApplyingColors_Detect, calculateColorsInfo.avarageColorWithinArea_Detect_AfterApplyingColor, calculateColorsInfo.estimatedColorAtHitLocation_AfterApplyingColors_Detect, closestVertexUV_Detection_Local);
		}

		else if (IsValid(calculateColorsInfo.paintOnMeshWithinAreaSettings.actor)) {

			PaintWithinArea_WrapUp(calculateColorsInfo, appliedColorsWillMakeChange);
		}

		else if (IsValid(calculateColorsInfo.paintOnEntireMeshSettings.actor)) {

			PaintOnEntireMesh_WrapUp(calculateColorsInfo, appliedColorsWillMakeChange);
		}

		else if (IsValid(calculateColorsInfo.paintOnColorSnippetSettings.actor)) {

			PaintColorSnippet_WrapUp(calculateColorsInfo, appliedColorsWillMakeChange);
		}

		else if (IsValid(calculateColorsInfo.detectInfoSettings.actor)) {

			GetClosestVertexDataOnMesh_WrapUp(calculateColorsInfo, calculateColorsInfo.detectInfoSettings, calculateColorsInfo.closestVertexColor_BeforeApplyingColors_Detect, calculateColorsInfo.avarageColorWithinArea_Detect_BeforeApplyingColor, calculateColorsInfo.estimatedColorAtHitLocation_BeforeApplyingColors_Detect, closestVertexUV_Detection_Local);
		}

		else if (calculateColorsInfo.paintDetectionType == EVertexPaintDetectionType::ApplyVertexDataDirectly) {

			ApplyColorsDirectly_WrapUp(calculateColorsInfo, appliedColorsWillMakeChange);
		}


		// Affected Cloth Physics is exclusive to UE5 and ChaosCloth
#if ENGINE_MAJOR_VERSION == 5

		if (IsValid(calculateColorsInfo.vertexPaintSkelComponent) && calculateColorsInfo.paintOnMeshSettings.affectClothPhysics) {

			if (calculateColorsInfo.clothPhysicsSettings.Num() > 0) {

				for (auto& clothPhysSettingsTemp : calculateColorsInfo.clothPhysicsSettings) {

					// Sets Chaos Cloth Physics on the Game Thread as it seems it could rarely cause a crash on the Async Thread
					UVertexPaintFunctionLibrary::SetChaosClothPhysics(calculateColorsInfo.vertexPaintSkelComponent, clothPhysSettingsTemp.Key, clothPhysSettingsTemp.Value);
				}
			}

			// If the task run didn't loop through all verts, i.e. didn't set calculateColorsInfo.clothPhysicsSettings but are set to affect cloth physics, then we manually have to run Update Chaos Cloth
			else {

				// Runs this after we've run Wrap Ups Above, i.e. after colors should've been updated. 
				UVertexPaintFunctionLibrary::UpdateChaosClothPhysicsWithExistingColors(calculateColorsInfo.vertexPaintSkelComponent);
			}
		}

#endif

	}

	// If Task Failed then just runs delegates with fail and resets
	else {


		switch (calculateColorsInfo.paintDetectionType) {

		case EVertexPaintDetectionType::Detection:

			if (calculateColorsInfo.getAllVertexColorsSettings.actor) {

				RunCallbacks(false, calculateColorsInfo.getAllVertexColorsSettings.callbackSettings.runCallbackDelegate, false, false, false, false, false, false, calculateColorsInfo, calculateColorsInfo.detectInfoSettings.callbackSettings, FVertexDetectClosestVertexDataResultStruct(), FVertexDetectEstimatedColorAtHitLocationResultStruct(), FVertexDetectAvarageColorInAreaInfo());
			}
			else {

				RunCallbacks(calculateColorsInfo.detectInfoSettings.callbackSettings.runCallbackDelegate, false, false, false, false, false, false, false, calculateColorsInfo, calculateColorsInfo.detectInfoSettings.callbackSettings, FVertexDetectClosestVertexDataResultStruct(), FVertexDetectEstimatedColorAtHitLocationResultStruct(), FVertexDetectAvarageColorInAreaInfo());
			}


			break;

		case EVertexPaintDetectionType::PaintAtLocation:


			RunCallbacks(false, false, calculateColorsInfo.paintOnMeshAtLocationSettings.callbackSettings.runCallbackDelegate, false, false, false, false, false, calculateColorsInfo, calculateColorsInfo.paintOnMeshAtLocationSettings.callbackSettings, FVertexDetectClosestVertexDataResultStruct(), FVertexDetectEstimatedColorAtHitLocationResultStruct(), FVertexDetectAvarageColorInAreaInfo());

			break;

		case EVertexPaintDetectionType::PaintWithinArea:


			RunCallbacks(false, false, false, calculateColorsInfo.paintOnMeshWithinAreaSettings.callbackSettings.runCallbackDelegate, false, false, false, false, calculateColorsInfo, calculateColorsInfo.paintOnMeshWithinAreaSettings.callbackSettings, FVertexDetectClosestVertexDataResultStruct(), FVertexDetectEstimatedColorAtHitLocationResultStruct(), FVertexDetectAvarageColorInAreaInfo());

			break;

		case EVertexPaintDetectionType::PaintEntireMesh:

			RunCallbacks(false, false, false, false, calculateColorsInfo.paintOnEntireMeshSettings.callbackSettings.runCallbackDelegate, false, false, false, calculateColorsInfo, calculateColorsInfo.paintOnEntireMeshSettings.callbackSettings, FVertexDetectClosestVertexDataResultStruct(), FVertexDetectEstimatedColorAtHitLocationResultStruct(), FVertexDetectAvarageColorInAreaInfo());

			break;

		case EVertexPaintDetectionType::PaintColorSnippet:

			RunCallbacks(false, false, false, false, false, calculateColorsInfo.paintOnColorSnippetSettings.callbackSettings.runCallbackDelegate, false, false, calculateColorsInfo, calculateColorsInfo.paintOnColorSnippetSettings.callbackSettings, FVertexDetectClosestVertexDataResultStruct(), FVertexDetectEstimatedColorAtHitLocationResultStruct(), FVertexDetectAvarageColorInAreaInfo());

			break;

		case EVertexPaintDetectionType::ApplyVertexDataDirectly:


			if (calculateColorsInfo.setMeshComponentVertexColorsSettings.actor) {

				RunCallbacks(false, false, false, false, false, false, calculateColorsInfo.paintOnMeshColorSettings.callbackSettings.runCallbackDelegate, false, calculateColorsInfo, calculateColorsInfo.paintOnMeshColorSettings.callbackSettings, FVertexDetectClosestVertexDataResultStruct(), FVertexDetectEstimatedColorAtHitLocationResultStruct(), FVertexDetectAvarageColorInAreaInfo());
			}

			else if (calculateColorsInfo.setMeshComponentVertexColorsUsingSerializedStringSettings.actor) {

				RunCallbacks(false, false, false, false, false, false, false, calculateColorsInfo.paintOnMeshColorSettings.callbackSettings.runCallbackDelegate, calculateColorsInfo, calculateColorsInfo.paintOnMeshColorSettings.callbackSettings, FVertexDetectClosestVertexDataResultStruct(), FVertexDetectEstimatedColorAtHitLocationResultStruct(), FVertexDetectAvarageColorInAreaInfo());
			}

			break;

		default:
			break;
		}
	}
}


//-------------------------------------------------------

// Get Closest Vertex Data On Mesh Wrap Up

void UVertexPaintDetectionGISubSystem::GetClosestVertexDataOnMesh_WrapUp(const FCalculateColorsInfo& calculateColorsInfo, const FVertexDetectInfoStruct& detectStruct, const FColor& closestColor, const FColor& avarageColor, const FLinearColor& estimatedColorAtHitLocation, const TArray<FVector2D>& closestVertexUV_Detection) {


	if (calculateColorsInfo.printLogsToScreen || calculateColorsInfo.printLogsToOutputLog)
		UKismetSystemLibrary::PrintString(GetWorld(), FString::Printf(TEXT("Runtime Vertex Color Paint and Detection Plugin - Get Closest Vertex Data on Mesh Wrap Up")), calculateColorsInfo.printLogsToScreen, calculateColorsInfo.printLogsToOutputLog, FColor::Green, calculateColorsInfo.printLogsToScreen_Duration);


	FVertexDetectClosestVertexDataResultStruct closestVertexDataResult_Local;
	FVertexDetectEstimatedColorAtHitLocationResultStruct estimatedColorAtHitLocationResult_Local;
	FVertexDetectAvarageColorInAreaInfo avarageColor_Local;

	if (calculateColorsInfo.estimatedColorAtHitLocation_VertexToLerpToward_Detect >= 0) {

		estimatedColorAtHitLocationResult_Local.estimatedColorAtHitLocationDataSuccessfullyAcquired = true;
		estimatedColorAtHitLocationResult_Local.estimatedColorAtHitLocation = estimatedColorAtHitLocation;
		estimatedColorAtHitLocationResult_Local.physicalSurfaceInfo = GetPhysicsSurfaceData(estimatedColorAtHitLocation.ToFColor(false), calculateColorsInfo, calculateColorsInfo.materialAtClosestDetectVertex);
		estimatedColorAtHitLocationResult_Local.worldSpaceLocationWeEstimatedTheColorAt = calculateColorsInfo.estimatedColorAtHitLocation_LocationInWorldSpace_Detect;
	}


	// Takes in avarageColor as param since it can be different depending on running a detection before paint at location or after it when the colors have been applied. It also can't use the one paint at location uses, in case we run the detect with custom AoE so it has different area than the paint at location
	avarageColor_Local.avarageVertexColorsWithinAreaOfEffect = avarageColor.ReinterpretAsLinear();


	// If has it's default value by now then has been unable to get closest vertex data
	if (calculateColorsInfo.closestVertexFound_Detection == -1) {

		if (calculateColorsInfo.printLogsToScreen || calculateColorsInfo.printLogsToOutputLog)
			UKismetSystemLibrary::PrintString(GetWorld(), FString::Printf(TEXT("Runtime Vertex Color Paint and Detection Plugin - Was unable to get Closest Vertex Data for Detection")), calculateColorsInfo.printLogsToScreen, calculateColorsInfo.printLogsToOutputLog, FColor::Red, calculateColorsInfo.printLogsToScreen_Duration);
	}

	else {

		if (calculateColorsInfo.printLogsToScreen || calculateColorsInfo.printLogsToOutputLog)
			UKismetSystemLibrary::PrintString(GetWorld(), FString::Printf(TEXT("Runtime Vertex Color Paint and Detection Plugin - Closest Vertex Index Found for Detection: %i"), calculateColorsInfo.closestVertexFound_Detection), calculateColorsInfo.printLogsToScreen, calculateColorsInfo.printLogsToOutputLog, FColor::Cyan, calculateColorsInfo.printLogsToScreen_Duration);

		if (calculateColorsInfo.printLogsToScreen || calculateColorsInfo.printLogsToOutputLog)
			UKismetSystemLibrary::PrintString(GetWorld(), FString::Printf(TEXT("Runtime Vertex Color Paint and Detection Plugin - Average Color in Detection: %s"), *avarageColor_Local.avarageVertexColorsWithinAreaOfEffect.ToString()), calculateColorsInfo.printLogsToScreen, calculateColorsInfo.printLogsToOutputLog, FColor::Green, calculateColorsInfo.printLogsToScreen_Duration);


		closestVertexDataResult_Local.closestVertexDataSuccessfullyAcquired = true;
		closestVertexDataResult_Local.closestVertexGeneralInfo.closestVertexMaterial = calculateColorsInfo.materialAtClosestDetectVertex;
		closestVertexDataResult_Local.closestVertexGeneralInfo.closestSection = calculateColorsInfo.closestSectionFound_Detect;


		// Sets Closest Color, Position in World and Local, Normal in World and Local, Closest Material, Physics Surfaces etc. 
		closestVertexDataResult_Local = GetClosestVertexData(detectStruct.meshComponent, closestVertexDataResult_Local, calculateColorsInfo.closestVertexFound_Detection, closestColor, calculateColorsInfo.closestVertexPositionToHitLocationAtMinLOD_World_Detect, calculateColorsInfo.closestVertexNormalToHitLocationAtMinLOD_World_Detect, calculateColorsInfo);

		closestVertexDataResult_Local.closestVertexGeneralInfo.closestVertexUVAtEachUVChannel = closestVertexUV_Detection;

		// Gets the Physical Surface using the Avarage Color as well, but based off the closest index and closest index material
		if (IsValid(closestVertexDataResult_Local.closestVertexGeneralInfo.closestVertexMaterial)) {

			avarageColor_Local.avaragePhysicalSurfaceInfoBasedOffTheClosestVertexMaterial = GetPhysicsSurfaceData(avarageColor, calculateColorsInfo, calculateColorsInfo.materialAtClosestDetectVertex);
		}

		PrintClosestVertexColorResults(closestVertexDataResult_Local, estimatedColorAtHitLocationResult_Local, detectStruct.getAverageColorInAreaSettings.areaRangeToGetAvarageColorFrom, calculateColorsInfo);
	}


	if (!closestVertexDataResult_Local.closestVertexDataSuccessfullyAcquired) {

		if (calculateColorsInfo.printLogsToScreen || calculateColorsInfo.printLogsToOutputLog)
			UKismetSystemLibrary::PrintString(GetWorld(), FString::Printf(TEXT("Runtime Vertex Color Paint and Detection Plugin - Got Mesh Data but NOT the Closest Vertex Data From Hit Mesh which we wanted to get. Check if everything is correctly hooked up in the Detection Node!")), calculateColorsInfo.printLogsToScreen, calculateColorsInfo.printLogsToOutputLog, FColor::Orange, calculateColorsInfo.printLogsToScreen_Duration);
	}

	RunCallbacks(true, false, false, false, false, false, false, false, calculateColorsInfo, calculateColorsInfo.detectInfoSettings.callbackSettings, closestVertexDataResult_Local, estimatedColorAtHitLocationResult_Local, avarageColor_Local);
}


//-------------------------------------------------------

// Get All Vertex Colors Only Wrap Up

void UVertexPaintDetectionGISubSystem::GetAllVertexColorsOnly_WrapUp(const FCalculateColorsInfo& calculateColorsInfo) {


	if (calculateColorsInfo.printLogsToScreen || calculateColorsInfo.printLogsToOutputLog)
		UKismetSystemLibrary::PrintString(GetWorld(), FString::Printf(TEXT("Runtime Vertex Color Paint and Detection Plugin - Get All Vertex Colors Only Wrap Up")), calculateColorsInfo.printLogsToScreen, calculateColorsInfo.printLogsToOutputLog, FColor::Green, calculateColorsInfo.printLogsToScreen_Duration);


	RunCallbacks(false, true, false, true, false, false, false, false, calculateColorsInfo, calculateColorsInfo.getAllVertexColorsSettings.callbackSettings, FVertexDetectClosestVertexDataResultStruct(), FVertexDetectEstimatedColorAtHitLocationResultStruct(), FVertexDetectAvarageColorInAreaInfo());
}


//-------------------------------------------------------

// Paint On Mesh At Location Wrap Up

void UVertexPaintDetectionGISubSystem::PaintOnMeshAtLocation_WrapUp(const FCalculateColorsInfo& calculateColorsInfo, const TArray<FVector2D>& closestVertexUV_Painting, const bool& appliedColorsWillMakeChange) {


	if (calculateColorsInfo.printLogsToScreen || calculateColorsInfo.printLogsToOutputLog)
		UKismetSystemLibrary::PrintString(GetWorld(), FString::Printf(TEXT("Runtime Vertex Color Paint and Detection Plugin - Paint on Mesh at Location Wrap Up")), calculateColorsInfo.printLogsToScreen, calculateColorsInfo.printLogsToOutputLog, FColor::Green, calculateColorsInfo.printLogsToScreen_Duration);


	FVertexDetectClosestVertexDataResultStruct closestVertexDataResult_Local;
	FVertexDetectEstimatedColorAtHitLocationResultStruct estimatedColorAtHitLocationResult_Local;


	if (calculateColorsInfo.estimatedColorAtHitLocation_VertexToLerpToward_Paint >= 0) {

		estimatedColorAtHitLocationResult_Local.estimatedColorAtHitLocationDataSuccessfullyAcquired = true;
		estimatedColorAtHitLocationResult_Local.estimatedColorAtHitLocation = calculateColorsInfo.estimatedColorAtHitLocation_AfterApplyingColors_Paint;
		estimatedColorAtHitLocationResult_Local.physicalSurfaceInfo = GetPhysicsSurfaceData(calculateColorsInfo.estimatedColorAtHitLocation_AfterApplyingColors_Paint.ToFColor(false), calculateColorsInfo, calculateColorsInfo.materialAtClosestPaintVertex);
		estimatedColorAtHitLocationResult_Local.worldSpaceLocationWeEstimatedTheColorAt = calculateColorsInfo.estimatedColorAtHitLocation_LocationInWorldSpace_Paint;
	}


	if (calculateColorsInfo.closestVertexFound_Paint == -1) {

		if (calculateColorsInfo.printLogsToScreen || calculateColorsInfo.printLogsToOutputLog)
			UKismetSystemLibrary::PrintString(GetWorld(), FString::Printf(TEXT("Runtime Vertex Color Paint and Detection Plugin - Paint at Location - Was unable to get Closest Vertex Index")), calculateColorsInfo.printLogsToScreen, calculateColorsInfo.printLogsToOutputLog, FColor::Red, calculateColorsInfo.printLogsToScreen_Duration);
	}

	else {

		if (calculateColorsInfo.printLogsToScreen || calculateColorsInfo.printLogsToOutputLog)
			UKismetSystemLibrary::PrintString(GetWorld(), FString::Printf(TEXT("Runtime Vertex Color Paint and Detection Plugin - Get Closest Vertex Data - Closest Vertex Index Found for Painting: %i"), calculateColorsInfo.closestVertexFound_Paint), calculateColorsInfo.printLogsToScreen, calculateColorsInfo.printLogsToOutputLog, FColor::Cyan, calculateColorsInfo.printLogsToScreen_Duration);
	}


	closestVertexDataResult_Local.closestVertexDataSuccessfullyAcquired = true;
	closestVertexDataResult_Local.closestVertexGeneralInfo.closestVertexMaterial = calculateColorsInfo.materialAtClosestPaintVertex;
	closestVertexDataResult_Local.closestVertexGeneralInfo.closestSection = calculateColorsInfo.closestSectionFound_Paint;


	// Sets Closest Color, Position in World and Local, Normal in World and Local, Closest Material, Physics Surfaces etc. 
	closestVertexDataResult_Local = GetClosestVertexData(calculateColorsInfo.paintOnMeshAtLocationSettings.meshComponent, closestVertexDataResult_Local, calculateColorsInfo.closestVertexFound_Paint, calculateColorsInfo.closestVertexColor_AfterApplyingColors_Paint, calculateColorsInfo.closestVertexPositionToHitLocationAtMinLOD_World_Paint, calculateColorsInfo.closestVertexNormalToHitLocationAtMinLOD_World_Paint, calculateColorsInfo);
	closestVertexDataResult_Local.closestVertexGeneralInfo.closestVertexUVAtEachUVChannel = closestVertexUV_Painting;


	FVertexDetectAvarageColorInAreaInfo avarageColor_Local;
	avarageColor_Local.avarageVertexColorsWithinAreaOfEffect = calculateColorsInfo.avarageColorWithinArea_Paint.ReinterpretAsLinear();

	if (IsValid(closestVertexDataResult_Local.closestVertexGeneralInfo.closestVertexMaterial)) {

		avarageColor_Local.avaragePhysicalSurfaceInfoBasedOffTheClosestVertexMaterial = GetPhysicsSurfaceData(calculateColorsInfo.avarageColorWithinArea_Paint, calculateColorsInfo, calculateColorsInfo.materialAtClosestPaintVertex);
	}


	if (calculateColorsInfo.printLogsToScreen || calculateColorsInfo.printLogsToOutputLog)
		UKismetSystemLibrary::PrintString(GetWorld(), FString::Printf(TEXT("Runtime Vertex Color Paint and Detection Plugin - Average Color in Paint at Location Area: %s"), *avarageColor_Local.avarageVertexColorsWithinAreaOfEffect.ToString()), calculateColorsInfo.printLogsToScreen, calculateColorsInfo.printLogsToOutputLog, FColor::Green, calculateColorsInfo.printLogsToScreen_Duration);


	PrintClosestVertexColorResults(closestVertexDataResult_Local, estimatedColorAtHitLocationResult_Local, calculateColorsInfo.paintOnMeshAtLocationSettings.paintAtAreaSettings.areaOfEffect, calculateColorsInfo);


	if (appliedColorsWillMakeChange) {

		// If Paint actually resulted in a change, then demands that success get set based on the success of UpdateAndApplyVertexColors, if no change and we've made it this far then it's always consired a success. 
		if (calculateColorsInfo.taskResult.anyVertexColorGotChangedByPaintJob) {

			ApplyVertexColorsToMeshComponent(calculateColorsInfo.paintOnMeshSettings.meshComponent, calculateColorsInfo.newColorVertexBufferPerLOD);
		}

		else {

			// If PIE then always applies vertex colors, because if playing 2 players in pie the players share the same data asset, and if the server applies the colors slightly before the client, then when the client wants to do so they will result in no change and they won't get them applied, this could for instance happen when hitting a paint ball at a surface
			if (GetWorld()->IsPlayInEditor())
				ApplyVertexColorsToMeshComponent(calculateColorsInfo.paintOnMeshSettings.meshComponent, calculateColorsInfo.newColorVertexBufferPerLOD);
		}
	}


	if (calculateColorsInfo.taskResult.anyVertexColorGotChangedByPaintJob && appliedColorsWillMakeChange) {

		if (calculateColorsInfo.printLogsToScreen || calculateColorsInfo.printLogsToOutputLog)
			UKismetSystemLibrary::PrintString(GetWorld(), FString::Printf(TEXT("Runtime Vertex Color Paint and Detection Plugin - Paint on Mesh at Location Success - A change to colors was made")), calculateColorsInfo.printLogsToScreen, calculateColorsInfo.printLogsToOutputLog, FColor::Green, calculateColorsInfo.printLogsToScreen_Duration);
	}
	else {

		if (calculateColorsInfo.printLogsToScreen || calculateColorsInfo.printLogsToOutputLog)
			UKismetSystemLibrary::PrintString(GetWorld(), FString::Printf(TEXT("Runtime Vertex Color Paint and Detection Plugin - Paint on Mesh at Location Success - But there was no change in colors. Perhaps the mesh is already fully colored if you tried to add, or it is already fully removed if you tried to remove.")), calculateColorsInfo.printLogsToScreen, calculateColorsInfo.printLogsToOutputLog, FColor::Green, calculateColorsInfo.printLogsToScreen_Duration);
	}


	RunCallbacks(false, false, true, false, false, false, false, false, calculateColorsInfo, calculateColorsInfo.paintOnMeshAtLocationSettings.callbackSettings, closestVertexDataResult_Local, estimatedColorAtHitLocationResult_Local, avarageColor_Local);
}


//-------------------------------------------------------

// Paint Within Area Wrap Up

void UVertexPaintDetectionGISubSystem::PaintWithinArea_WrapUp(const FCalculateColorsInfo& calculateColorsInfo, const bool& appliedColorsWillMakeChange) {


	if (calculateColorsInfo.printLogsToScreen || calculateColorsInfo.printLogsToOutputLog)
		UKismetSystemLibrary::PrintString(GetWorld(), FString::Printf(TEXT("Runtime Vertex Color Paint and Detection Plugin - Paint Within Area Wrap Up")), calculateColorsInfo.printLogsToScreen, calculateColorsInfo.printLogsToOutputLog, FColor::Green, calculateColorsInfo.printLogsToScreen_Duration);


	if (appliedColorsWillMakeChange) {

		// If Paint actually resulted in a change, then demands that success get set based on the success of UpdateAndApplyVertexColors, if no change and we've made it this far then it's always consired a success. 
		if (calculateColorsInfo.taskResult.anyVertexColorGotChangedByPaintJob) {

			ApplyVertexColorsToMeshComponent(calculateColorsInfo.paintOnMeshSettings.meshComponent, calculateColorsInfo.newColorVertexBufferPerLOD);
		}

		else {

			// If PIE then always applies vertex colors, because if playing 2 players in pie the players share the same data asset, and if the server applies the colors slightly before the client, then when the client wants to do so they will result in no change and they won't get them applied, this could for instance happen when hitting a paint ball at a surface

			if (GetWorld()->IsPlayInEditor())
				ApplyVertexColorsToMeshComponent(calculateColorsInfo.paintOnMeshSettings.meshComponent, calculateColorsInfo.newColorVertexBufferPerLOD);
		}
	}


	if (calculateColorsInfo.taskResult.anyVertexColorGotChangedByPaintJob && appliedColorsWillMakeChange) {

		if (calculateColorsInfo.printLogsToScreen || calculateColorsInfo.printLogsToOutputLog)
			UKismetSystemLibrary::PrintString(GetWorld(), FString::Printf(TEXT("Runtime Vertex Color Paint and Detection Plugin - Paint on Mesh Within Area Success - A change to colors was made")), calculateColorsInfo.printLogsToScreen, calculateColorsInfo.printLogsToOutputLog, FColor::Green, calculateColorsInfo.printLogsToScreen_Duration);
	}

	else {

		if (calculateColorsInfo.printLogsToScreen || calculateColorsInfo.printLogsToOutputLog)
			UKismetSystemLibrary::PrintString(GetWorld(), FString::Printf(TEXT("Runtime Vertex Color Paint and Detection Plugin - Paint on Mesh Within Area Success - But no change in colors was made. Perhaps the mesh is already fully colored if you tried to add, or it is already fully removed if you tried to remove.")), calculateColorsInfo.printLogsToScreen, calculateColorsInfo.printLogsToOutputLog, FColor::Green, calculateColorsInfo.printLogsToScreen_Duration);
	}


	if (!calculateColorsInfo.triedToApplyColorOnAnyVertex) {

		if (calculateColorsInfo.printLogsToScreen || calculateColorsInfo.printLogsToOutputLog)
			UKismetSystemLibrary::PrintString(GetWorld(), FString::Printf(TEXT("Runtime Vertex Color Paint and Detection Plugin - Paint on Mesh Within Area Success - But no Vertex on the mesh we tried to paint on was inside any of the componentsToCheckIfWithin. If using complex shape, make sure the componentToCheckIfWithin that is set to use the complex shape has some collision. ")), calculateColorsInfo.printLogsToScreen, calculateColorsInfo.printLogsToOutputLog, FColor::Orange, calculateColorsInfo.printLogsToScreen_Duration);
	}


	RunCallbacks(false, false, false, true, false, false, false, false, calculateColorsInfo, calculateColorsInfo.paintOnMeshWithinAreaSettings.callbackSettings, FVertexDetectClosestVertexDataResultStruct(), FVertexDetectEstimatedColorAtHitLocationResultStruct(), FVertexDetectAvarageColorInAreaInfo());
}


//-------------------------------------------------------

// Paint Within Area Wrap Up

void UVertexPaintDetectionGISubSystem::PaintOnEntireMesh_WrapUp(const FCalculateColorsInfo& calculateColorsInfo, const bool& appliedColorsWillMakeChange) {


	if (calculateColorsInfo.printLogsToScreen || calculateColorsInfo.printLogsToOutputLog)
		UKismetSystemLibrary::PrintString(GetWorld(), FString::Printf(TEXT("Runtime Vertex Color Paint and Detection Plugin - Paint Entire Mesh Wrap Up")), calculateColorsInfo.printLogsToScreen, calculateColorsInfo.printLogsToOutputLog, FColor::Green, calculateColorsInfo.printLogsToScreen_Duration);


	if (appliedColorsWillMakeChange) {

		// If Paint actually resulted in a change, then demands that success get set based on the success of UpdateAndApplyVertexColors, if no change and we've made it this far then it's always consired a success. 
		if (calculateColorsInfo.taskResult.anyVertexColorGotChangedByPaintJob) {

			ApplyVertexColorsToMeshComponent(calculateColorsInfo.paintOnMeshSettings.meshComponent, calculateColorsInfo.newColorVertexBufferPerLOD);
		}

		else {

			// If PIE then always applies vertex colors, because if playing 2 players in pie the players share the same data asset, and if the server applies the colors slightly before the client, then when the client wants to do so they will result in no change and they won't get them applied, this could for instance happen when hitting a paint ball at a surface
			if (GetWorld()->IsPlayInEditor())
				ApplyVertexColorsToMeshComponent(calculateColorsInfo.paintOnMeshSettings.meshComponent, calculateColorsInfo.newColorVertexBufferPerLOD);
		}
	}


	if (calculateColorsInfo.taskResult.anyVertexColorGotChangedByPaintJob && appliedColorsWillMakeChange) {

		if (calculateColorsInfo.printLogsToScreen || calculateColorsInfo.printLogsToOutputLog)
			UKismetSystemLibrary::PrintString(GetWorld(), FString::Printf(TEXT("Runtime Vertex Color Paint and Detection Plugin - Paint on Entire Mesh Success - A change to colors was made")), calculateColorsInfo.printLogsToScreen, calculateColorsInfo.printLogsToOutputLog, FColor::Green, calculateColorsInfo.printLogsToScreen_Duration);
	}
	else {

		if (calculateColorsInfo.printLogsToScreen || calculateColorsInfo.printLogsToOutputLog)
			UKismetSystemLibrary::PrintString(GetWorld(), FString::Printf(TEXT("Runtime Vertex Color Paint and Detection Plugin - Paint on Entire Mesh Success - But there was no change in colors. Perhaps the mesh is already fully colored if you tried to add, or it is already fully removed if you tried to remove. ")), calculateColorsInfo.printLogsToScreen, calculateColorsInfo.printLogsToOutputLog, FColor::Green, calculateColorsInfo.printLogsToScreen_Duration);
	}

	RunCallbacks(false, false, false, false, true, false, false, false, calculateColorsInfo, calculateColorsInfo.paintOnEntireMeshSettings.callbackSettings, FVertexDetectClosestVertexDataResultStruct(), FVertexDetectEstimatedColorAtHitLocationResultStruct(), FVertexDetectAvarageColorInAreaInfo());
}


//-------------------------------------------------------

// Paint Color Snippet Wrap Up

void UVertexPaintDetectionGISubSystem::PaintColorSnippet_WrapUp(const FCalculateColorsInfo& calculateColorsInfo, const bool& appliedColorsWillMakeChange) {


	if (calculateColorsInfo.printLogsToScreen || calculateColorsInfo.printLogsToOutputLog)
		UKismetSystemLibrary::PrintString(GetWorld(), FString::Printf(TEXT("Runtime Vertex Color Paint and Detection Plugin - Paint Color Snippet Wrap Up")), calculateColorsInfo.printLogsToScreen, calculateColorsInfo.printLogsToOutputLog, FColor::Green, calculateColorsInfo.printLogsToScreen_Duration);


	if (appliedColorsWillMakeChange) {

		// If Paint actually resulted in a change, then demands that success get set based on the success of UpdateAndApplyVertexColors, if no change and we've made it this far then it's always consired a success. 
		if (calculateColorsInfo.taskResult.anyVertexColorGotChangedByPaintJob) {

			ApplyVertexColorsToMeshComponent(calculateColorsInfo.paintOnMeshSettings.meshComponent, calculateColorsInfo.newColorVertexBufferPerLOD);
		}

		else {

			// If PIE then always applies vertex colors, because if playing 2 players in pie the players share the same data asset, and if the server applies the colors slightly before the client, then when the client wants to do so they will result in no change and they won't get them applied, this could for instance happen when hitting a paint ball at a surface
			if (GetWorld()->IsPlayInEditor())
				ApplyVertexColorsToMeshComponent(calculateColorsInfo.paintOnMeshSettings.meshComponent, calculateColorsInfo.newColorVertexBufferPerLOD);
		}
	}


	if (calculateColorsInfo.printLogsToScreen || calculateColorsInfo.printLogsToOutputLog)
		UKismetSystemLibrary::PrintString(GetWorld(), FString::Printf(TEXT("Runtime Vertex Color Paint and Detection Plugin - Paint Color Snippet Success")), calculateColorsInfo.printLogsToScreen, calculateColorsInfo.printLogsToOutputLog, FColor::Green, calculateColorsInfo.printLogsToScreen_Duration);


	RunCallbacks(false, false, false, false, false, true, false, false, calculateColorsInfo, calculateColorsInfo.paintOnColorSnippetSettings.callbackSettings, FVertexDetectClosestVertexDataResultStruct(), FVertexDetectEstimatedColorAtHitLocationResultStruct(), FVertexDetectAvarageColorInAreaInfo());
}


//-------------------------------------------------------

// Apply Colors Directly

void UVertexPaintDetectionGISubSystem::ApplyColorsDirectly_WrapUp(const FCalculateColorsInfo& calculateColorsInfo, const bool& appliedColorsWillMakeChange) {


	if (calculateColorsInfo.printLogsToScreen || calculateColorsInfo.printLogsToOutputLog)
		UKismetSystemLibrary::PrintString(GetWorld(), FString::Printf(TEXT("Runtime Vertex Color Paint and Detection Plugin - Apply Colors Directly Wrap Up")), calculateColorsInfo.printLogsToScreen, calculateColorsInfo.printLogsToOutputLog, FColor::Green, calculateColorsInfo.printLogsToScreen_Duration);


	if (appliedColorsWillMakeChange) {

		// If Paint actually resulted in a change, then demands that success get set based on the success of UpdateAndApplyVertexColors, if no change and we've made it this far then it's always consired a success. 
		if (calculateColorsInfo.taskResult.anyVertexColorGotChangedByPaintJob) {

			ApplyVertexColorsToMeshComponent(calculateColorsInfo.paintOnMeshSettings.meshComponent, calculateColorsInfo.newColorVertexBufferPerLOD);
		}

		else {

			// If PIE then always applies vertex colors, because if playing 2 players in pie the players share the same data asset, and if the server applies the colors slightly before the client, then when the client wants to do so they will result in no change and they won't get them applied, this could for instance happen when hitting a paint ball at a surface

			if (GetWorld()->IsPlayInEditor())
				ApplyVertexColorsToMeshComponent(calculateColorsInfo.paintOnMeshSettings.meshComponent, calculateColorsInfo.newColorVertexBufferPerLOD);
		}
	}


	if (calculateColorsInfo.taskResult.anyVertexColorGotChangedByPaintJob && appliedColorsWillMakeChange) {

		if (calculateColorsInfo.printLogsToScreen || calculateColorsInfo.printLogsToOutputLog)
			UKismetSystemLibrary::PrintString(GetWorld(), FString::Printf(TEXT("Runtime Vertex Color Paint and Detection Plugin - Apply Colors Directly Success - A change to colors was made")), calculateColorsInfo.printLogsToScreen, calculateColorsInfo.printLogsToOutputLog, FColor::Green, calculateColorsInfo.printLogsToScreen_Duration);
	}

	else {

		if (calculateColorsInfo.printLogsToScreen || calculateColorsInfo.printLogsToOutputLog)
			UKismetSystemLibrary::PrintString(GetWorld(), FString::Printf(TEXT("Runtime Vertex Color Paint and Detection Plugin - Apply Colors Directly Success - But no change in colors was made. Perhaps the mesh is already fully colored if you tried to add, or it is already fully removed if you tried to remove. ")), calculateColorsInfo.printLogsToScreen, calculateColorsInfo.printLogsToOutputLog, FColor::Green, calculateColorsInfo.printLogsToScreen_Duration);
	}

	if (calculateColorsInfo.setMeshComponentVertexColorsSettings.actor) {

		RunCallbacks(false, false, false, false, false, false, true, false, calculateColorsInfo, calculateColorsInfo.paintOnMeshSettings.callbackSettings, FVertexDetectClosestVertexDataResultStruct(), FVertexDetectEstimatedColorAtHitLocationResultStruct(), FVertexDetectAvarageColorInAreaInfo());
	}

	else if (calculateColorsInfo.setMeshComponentVertexColorsUsingSerializedStringSettings.actor) {

		RunCallbacks(false, false, false, false, false, false, false, true, calculateColorsInfo, calculateColorsInfo.paintOnMeshSettings.callbackSettings, FVertexDetectClosestVertexDataResultStruct(), FVertexDetectEstimatedColorAtHitLocationResultStruct(), FVertexDetectAvarageColorInAreaInfo());
	}
}


//--------------------------------------------------------

// Set Mesh Component Vertex Color

void UVertexPaintDetectionGISubSystem::SetMeshComponentVertexColors(FVertexPaintSetMeshComponentVertexColors setMeshComponentVertexColorsSettings, FVertexDetectAdditionalDataToPassThrough additionalDataToPassThrough) {


	bool printString_Local = false;
	float printStringDuration_Local = 0;
	bool printLog_Local = false;
	UWorld* printLogsWorld = nullptr;
	bool passedChecks = true;

	if (IsValid(setMeshComponentVertexColorsSettings.meshComponent)) {


		if (IsValid(setMeshComponentVertexColorsSettings.meshComponent->GetOwner()))
			setMeshComponentVertexColorsSettings.actor = setMeshComponentVertexColorsSettings.meshComponent->GetOwner();

		printLogsWorld = setMeshComponentVertexColorsSettings.meshComponent->GetWorld();

		if (setMeshComponentVertexColorsSettings.optionalCallbackComponent) {

			printString_Local = setMeshComponentVertexColorsSettings.optionalCallbackComponent->printLogsToScreen;
			printStringDuration_Local = setMeshComponentVertexColorsSettings.optionalCallbackComponent->printLogsToScreen_Duration;
			printLog_Local = setMeshComponentVertexColorsSettings.optionalCallbackComponent->printLogsToOutputLog;
		}
	}

	if (!IsValid(setMeshComponentVertexColorsSettings.meshComponent)) {

		if (setMeshComponentVertexColorsSettings.optionalCallbackComponent) {

			if (printString_Local || printLog_Local)
				UKismetSystemLibrary::PrintString(printLogsWorld, FString::Printf(TEXT("Runtime Vertex Color Paint and Detection Plugin - Trying to Set Mesh Component Vertex Colors but Mesh Component provided is not Valid! Have you connected anything to the meshComponent pin on the Node?")), printString_Local, printLog_Local, FColor::Red, printStringDuration_Local);
		}

		passedChecks = false;
	}

	if (!IsValid(setMeshComponentVertexColorsSettings.actor)) {

		if (setMeshComponentVertexColorsSettings.optionalCallbackComponent) {

			if (printString_Local || printLog_Local)
				UKismetSystemLibrary::PrintString(printLogsWorld, FString::Printf(TEXT("Runtime Vertex Color Paint and Detection Plugin - Trying to Set Mesh Component Vertex Colors but Components Owning Actor is not Valid!")), printString_Local, printLog_Local, FColor::Red, printStringDuration_Local);
		}

		passedChecks = false;
	}

	if (!UVertexPaintFunctionLibrary::IsWorldValid(printLogsWorld)) {


		if (setMeshComponentVertexColorsSettings.optionalCallbackComponent) {

			if (printString_Local || printLog_Local)
				UKismetSystemLibrary::PrintString(printLogsWorld, FString::Printf(TEXT("Runtime Vertex Color Paint and Detection Plugin - Trying to Set Mesh Component Vertex Colors but World not Valid")), printString_Local, printLog_Local, FColor::Red, printStringDuration_Local);
		}

		passedChecks = false;
	}


	if (!IsInGameThread()) {

		if (setMeshComponentVertexColorsSettings.optionalCallbackComponent) {

			if (printString_Local || printLog_Local)
				UKismetSystemLibrary::PrintString(printLogsWorld, FString::Printf(TEXT("Runtime Vertex Color Paint and Detection Plugin - Trying to Set Mesh Component Vertex Colors but not from Game Thread!")), printString_Local, printLog_Local, FColor::Red, printStringDuration_Local);
		}

		passedChecks = false;
	}

	if (setMeshComponentVertexColorsSettings.vertexColorsAtLOD0ToSet.Num() <= 0) {

		if (setMeshComponentVertexColorsSettings.optionalCallbackComponent) {

			if (printString_Local || printLog_Local)
				UKismetSystemLibrary::PrintString(printLogsWorld, FString::Printf(TEXT("Runtime Vertex Color Paint and Detection Plugin - Trying to Set Mesh Component Vertex Colors but the color array passed in are 0 in length!")), printString_Local, printLog_Local, FColor::Red, printStringDuration_Local);
		}

		passedChecks = false;
	}


	if (passedChecks) {

		if (setMeshComponentVertexColorsSettings.optionalCallbackComponent) {

			if (printString_Local || printLog_Local)
				UKismetSystemLibrary::PrintString(printLogsWorld, FString::Printf(TEXT("Runtime Vertex Color Paint and Detection Plugin - Set Mesh Component Vertex Colors Checks Passed!")), printString_Local, printLog_Local, FColor::Green, printStringDuration_Local);
		}
	}

	else {

		if (setMeshComponentVertexColorsSettings.optionalCallbackComponent) {

			if (printString_Local || printLog_Local)
				UKismetSystemLibrary::PrintString(printLogsWorld, FString::Printf(TEXT("Runtime Vertex Color Paint and Detection Plugin - Set Mesh Component Vertex Colors Checks Failed!")), printString_Local, printLog_Local, FColor::Green, printStringDuration_Local);
		}

		FCalculateColorsInfo calculateColorsInfoTemp;
		calculateColorsInfoTemp.setMeshComponentVertexColorsSettings = setMeshComponentVertexColorsSettings;
		calculateColorsInfoTemp.initiatedByComponent = setMeshComponentVertexColorsSettings.optionalCallbackComponent;

		RunCallbacks(false, false, false, false, false, false, true, false, calculateColorsInfoTemp, calculateColorsInfoTemp.paintOnMeshSettings.callbackSettings, FVertexDetectClosestVertexDataResultStruct(), FVertexDetectEstimatedColorAtHitLocationResultStruct(), FVertexDetectAvarageColorInAreaInfo());

		return;
	}


	int lodsToLoopthrough_Local = UVertexPaintFunctionLibrary::GetAmountOfLODsToPaintOn(setMeshComponentVertexColorsSettings.meshComponent, setMeshComponentVertexColorsSettings.overrideLOD.overrideLODToPaintUpTo, setMeshComponentVertexColorsSettings.overrideLOD.amountOfLODsToPaint);


	FVertexDetectMeshDataStruct meshVertexData;
	meshVertexData.meshDataPerLOD.SetNum(lodsToLoopthrough_Local, true);
	meshVertexData.meshComp = setMeshComponentVertexColorsSettings.meshComponent;
	meshVertexData.meshDataPerLOD[0].meshVertexColorsPerLODArray = setMeshComponentVertexColorsSettings.vertexColorsAtLOD0ToSet;

	if (auto staticMeshComp = Cast<UStaticMeshComponent>(setMeshComponentVertexColorsSettings.meshComponent)) {

		meshVertexData.meshSource = staticMeshComp->GetStaticMesh();
	}
	else if (auto skeletalMeshComp = Cast<USkeletalMeshComponent>(setMeshComponentVertexColorsSettings.meshComponent)) {

#if ENGINE_MAJOR_VERSION == 4

		meshVertexData.meshSource = skeletalMeshComp->SkeletalMesh;

#elif ENGINE_MAJOR_VERSION == 5

#if ENGINE_MINOR_VERSION == 0

		meshVertexData.meshSource = skeletalMeshComp->SkeletalMesh.Get();

#else

		meshVertexData.meshSource = skeletalMeshComp->GetSkeletalMeshAsset();

#endif
#endif

	}


	// Removes any tasks here since we're gonna Set the Colors to be something so any queue before this is irrelevant
	RemoveCalculateColorsMeshFromPaintTaskQueue(setMeshComponentVertexColorsSettings.meshComponent);

	auto calculateColorsInfo_Local = ConstructCalculateColorsInfoStruct(setMeshComponentVertexColorsSettings.multiThreadSettings, EVertexPaintDetectionType::ApplyVertexDataDirectly, FVertexDetectInfoStruct(), FVertexDetectGetColorsOnlyStruct(), FVertexPaintAtLocationStruct(), FVertexPainthWithinAreaStruct(), FVertexPaintOnEntireMeshStruct(), FVertexPaintColorSnippetStruct(), setMeshComponentVertexColorsSettings, FVertexPaintSetMeshComponentVertexColorsUsingSerializedString(), FVertexPaintColorSettingStruct(), setMeshComponentVertexColorsSettings, lodsToLoopthrough_Local, setMeshComponentVertexColorsSettings.meshComponent, meshVertexData, setMeshComponentVertexColorsSettings.optionalCallbackComponent, setMeshComponentVertexColorsSettings, FVertexDetectEstimatedColorAtHitLocationStruct(), additionalDataToPassThrough);


	AddCalculateColorsTaskToQueue(calculateColorsInfo_Local);
}


//-------------------------------------------------------

// Set Mesh Component Vertex Color Using Serialized String

void UVertexPaintDetectionGISubSystem::SetMeshComponentVertexColorsUsingSerializedString(FVertexPaintSetMeshComponentVertexColorsUsingSerializedString setMeshComponentVertexColorsUsingSerializedStringSettings, FVertexDetectAdditionalDataToPassThrough additionalDataToPassThrough) {


	bool printString_Local = false;
	float printStringDuration_Local = 0;
	bool printLog_Local = false;
	UWorld* printLogsWorld = nullptr;
	bool passedChecks = true;

	if (IsValid(setMeshComponentVertexColorsUsingSerializedStringSettings.meshComponent)) {


		if (IsValid(setMeshComponentVertexColorsUsingSerializedStringSettings.meshComponent->GetOwner()))
			setMeshComponentVertexColorsUsingSerializedStringSettings.actor = setMeshComponentVertexColorsUsingSerializedStringSettings.meshComponent->GetOwner();

		printLogsWorld = setMeshComponentVertexColorsUsingSerializedStringSettings.meshComponent->GetWorld();

		if (setMeshComponentVertexColorsUsingSerializedStringSettings.optionalCallbackComponent) {

			printString_Local = setMeshComponentVertexColorsUsingSerializedStringSettings.optionalCallbackComponent->printLogsToScreen;
			printStringDuration_Local = setMeshComponentVertexColorsUsingSerializedStringSettings.optionalCallbackComponent->printLogsToScreen_Duration;
			printLog_Local = setMeshComponentVertexColorsUsingSerializedStringSettings.optionalCallbackComponent->printLogsToOutputLog;
		}
	}

	if (!IsValid(setMeshComponentVertexColorsUsingSerializedStringSettings.meshComponent)) {

		if (setMeshComponentVertexColorsUsingSerializedStringSettings.optionalCallbackComponent) {

			if (printString_Local || printLog_Local)
				UKismetSystemLibrary::PrintString(printLogsWorld, FString::Printf(TEXT("Runtime Vertex Color Paint and Detection Plugin -  Trying to Set Mesh Component Vertex Colors Using Serialized String but Mesh Component provided is not Valid! Have you connected anything to the meshComponent pin on the Node?")), printString_Local, printLog_Local, FColor::Red, printStringDuration_Local);
		}

		passedChecks = false;
	}

	if (!IsValid(setMeshComponentVertexColorsUsingSerializedStringSettings.actor)) {

		if (setMeshComponentVertexColorsUsingSerializedStringSettings.optionalCallbackComponent) {

			if (printString_Local || printLog_Local)
				UKismetSystemLibrary::PrintString(printLogsWorld, FString::Printf(TEXT("Runtime Vertex Color Paint and Detection Plugin -  Trying to Set Mesh Component Vertex Colors Using Serialized String but Components Owning Actor is not Valid!")), printString_Local, printLog_Local, FColor::Red, printStringDuration_Local);
		}

		passedChecks = false;
	}

	if (!UVertexPaintFunctionLibrary::IsWorldValid(printLogsWorld)) {


		if (setMeshComponentVertexColorsUsingSerializedStringSettings.optionalCallbackComponent) {

			if (printString_Local || printLog_Local)
				UKismetSystemLibrary::PrintString(printLogsWorld, FString::Printf(TEXT("Runtime Vertex Color Paint and Detection Plugin -  Trying to Set Mesh Component Vertex Colors Using Serialized String but World not Valid")), printString_Local, printLog_Local, FColor::Red, printStringDuration_Local);
		}

		passedChecks = false;
	}

	if (!IsInGameThread()) {

		if (setMeshComponentVertexColorsUsingSerializedStringSettings.optionalCallbackComponent) {

			if (printString_Local || printLog_Local)
				UKismetSystemLibrary::PrintString(printLogsWorld, FString::Printf(TEXT("Runtime Vertex Color Paint and Detection Plugin -  Trying to Set Mesh Component Vertex Colors Using Serialized String but not from Game Thread!")), printString_Local, printLog_Local, FColor::Red, printStringDuration_Local);
		}

		passedChecks = false;
	}

	if (setMeshComponentVertexColorsUsingSerializedStringSettings.serializedColorDataAtLOD0.Len() <= 0) {

		if (setMeshComponentVertexColorsUsingSerializedStringSettings.optionalCallbackComponent) {

			if (printString_Local || printLog_Local)
				UKismetSystemLibrary::PrintString(printLogsWorld, FString::Printf(TEXT("Runtime Vertex Color Paint and Detection Plugin - Trying to Set Mesh Component Vertex Colors Using Serialized String but the serializedColorData String passed in are 0 in length!")), printString_Local, printLog_Local, FColor::Red, printStringDuration_Local);
		}

		passedChecks = false;
	}


	if (passedChecks) {

		if (setMeshComponentVertexColorsUsingSerializedStringSettings.optionalCallbackComponent) {

			if (printString_Local || printLog_Local)
				UKismetSystemLibrary::PrintString(printLogsWorld, FString::Printf(TEXT("Runtime Vertex Color Paint and Detection Plugin - Set Mesh Component Vertex Colors Using Serialized String Checks Passed!")), printString_Local, printLog_Local, FColor::Green, printStringDuration_Local);
		}
	}

	else {

		if (setMeshComponentVertexColorsUsingSerializedStringSettings.optionalCallbackComponent) {

			if (printString_Local || printLog_Local)
				UKismetSystemLibrary::PrintString(printLogsWorld, FString::Printf(TEXT("Runtime Vertex Color Paint and Detection Plugin - Set Mesh Component Vertex Colors Using Serialized String Checks Failed!")), printString_Local, printLog_Local, FColor::Green, printStringDuration_Local);
		}

		FCalculateColorsInfo calculateColorsInfoTemp;
		calculateColorsInfoTemp.setMeshComponentVertexColorsUsingSerializedStringSettings = setMeshComponentVertexColorsUsingSerializedStringSettings;
		calculateColorsInfoTemp.initiatedByComponent = setMeshComponentVertexColorsUsingSerializedStringSettings.optionalCallbackComponent;

		RunCallbacks(false, false, false, false, false, false, true, false, calculateColorsInfoTemp, calculateColorsInfoTemp.paintOnMeshSettings.callbackSettings, FVertexDetectClosestVertexDataResultStruct(), FVertexDetectEstimatedColorAtHitLocationResultStruct(), FVertexDetectAvarageColorInAreaInfo());

		return;
	}


	int lodsToLoopthrough_Local = UVertexPaintFunctionLibrary::GetAmountOfLODsToPaintOn(setMeshComponentVertexColorsUsingSerializedStringSettings.meshComponent, setMeshComponentVertexColorsUsingSerializedStringSettings.overrideLOD.overrideLODToPaintUpTo, setMeshComponentVertexColorsUsingSerializedStringSettings.overrideLOD.amountOfLODsToPaint);


	FVertexDetectMeshDataStruct meshVertexData;
	meshVertexData.meshDataPerLOD.SetNum(lodsToLoopthrough_Local, true);
	meshVertexData.meshComp = setMeshComponentVertexColorsUsingSerializedStringSettings.meshComponent;

	if (auto staticMeshComp = Cast<UStaticMeshComponent>(setMeshComponentVertexColorsUsingSerializedStringSettings.meshComponent)) {

		meshVertexData.meshSource = staticMeshComp->GetStaticMesh();
	}
	else if (auto skeletalMeshComp = Cast<USkeletalMeshComponent>(setMeshComponentVertexColorsUsingSerializedStringSettings.meshComponent)) {

#if ENGINE_MAJOR_VERSION == 4

		meshVertexData.meshSource = skeletalMeshComp->SkeletalMesh;

#elif ENGINE_MAJOR_VERSION == 5

#if ENGINE_MINOR_VERSION == 0

		meshVertexData.meshSource = skeletalMeshComp->SkeletalMesh.Get();

#else

		meshVertexData.meshSource = skeletalMeshComp->GetSkeletalMeshAsset();

#endif
#endif

	}


	// Removes any tasks here since we're gonna Set the Colors to be something so any queue before this is irrelevant
	RemoveCalculateColorsMeshFromPaintTaskQueue(setMeshComponentVertexColorsUsingSerializedStringSettings.meshComponent);

	auto calculateColorsInfo_Local = ConstructCalculateColorsInfoStruct(setMeshComponentVertexColorsUsingSerializedStringSettings.multiThreadSettings, EVertexPaintDetectionType::ApplyVertexDataDirectly, FVertexDetectInfoStruct(), FVertexDetectGetColorsOnlyStruct(), FVertexPaintAtLocationStruct(), FVertexPainthWithinAreaStruct(), FVertexPaintOnEntireMeshStruct(), FVertexPaintColorSnippetStruct(), FVertexPaintSetMeshComponentVertexColors(), setMeshComponentVertexColorsUsingSerializedStringSettings, FVertexPaintColorSettingStruct(), setMeshComponentVertexColorsUsingSerializedStringSettings, lodsToLoopthrough_Local, setMeshComponentVertexColorsUsingSerializedStringSettings.meshComponent, meshVertexData, setMeshComponentVertexColorsUsingSerializedStringSettings.optionalCallbackComponent, setMeshComponentVertexColorsUsingSerializedStringSettings, FVertexDetectEstimatedColorAtHitLocationStruct(), additionalDataToPassThrough);

	AddCalculateColorsTaskToQueue(calculateColorsInfo_Local);
}


//-------------------------------------------------------

// Get Will Applied Colors Make Change

bool UVertexPaintDetectionGISubSystem::GetWillAppliedColorsMakeChange(const FCalculateColorsInfo& calculateColorsInfo) {


	// Since paint at location always fills the amountOfPaintedColorsOfEachChannel since it is looping through all of the vertices we can check whether we need to run ApplyVertexColors at all. 
	if (calculateColorsInfo.amountOfPaintedColorsOfEachChannelAbove0.successfullyGotVerticesOfEachChannelAtTheMinAmount) {

		// If running a paint type that adds color
		if (calculateColorsInfo.paintOnMeshColorSettings.applyVertexColorSettings.applyVertexColorSetting == EApplyVertexColorSetting::EAddVertexColor) {


			// If fully painted
			if (calculateColorsInfo.amountOfPaintedColorsOfEachChannelAbove0.averageAmountOfRedColorAtTheMinAmount == 1 && calculateColorsInfo.amountOfPaintedColorsOfEachChannelAbove0.averageAmountOfGreenColorAtTheMinAmount == 1 && calculateColorsInfo.amountOfPaintedColorsOfEachChannelAbove0.averageAmountOfBlueColorAtTheMinAmount == 1 && calculateColorsInfo.amountOfPaintedColorsOfEachChannelAbove0.averageAmountOfAlphaColorAtTheMinAmount == 1) {

				// If fully painted and something is trying to remove colors
				if (calculateColorsInfo.paintOnMeshColorSettings.applyVertexColorSettings.redColor < 0 || calculateColorsInfo.paintOnMeshColorSettings.applyVertexColorSettings.greenColor < 0 || calculateColorsInfo.paintOnMeshColorSettings.applyVertexColorSettings.blueColor < 0 || calculateColorsInfo.paintOnMeshColorSettings.applyVertexColorSettings.alphaColor < 0) {

					return true;
				}

				// If fully painted but Nothing is trying to remove colors, that means we're not gonna see any difference
				else {

					return false;
				}
			}

			else if (calculateColorsInfo.amountOfPaintedColorsOfEachChannelAbove0.averageAmountOfRedColorAtTheMinAmount == 0 && calculateColorsInfo.amountOfPaintedColorsOfEachChannelAbove0.averageAmountOfGreenColorAtTheMinAmount == 0 && calculateColorsInfo.amountOfPaintedColorsOfEachChannelAbove0.averageAmountOfBlueColorAtTheMinAmount == 0 && calculateColorsInfo.amountOfPaintedColorsOfEachChannelAbove0.averageAmountOfAlphaColorAtTheMinAmount == 0) {

				// If nothing is painted and trying to Add colors
				if (calculateColorsInfo.paintOnMeshColorSettings.applyVertexColorSettings.redColor > 0 || calculateColorsInfo.paintOnMeshColorSettings.applyVertexColorSettings.greenColor > 0 || calculateColorsInfo.paintOnMeshColorSettings.applyVertexColorSettings.blueColor > 0 || calculateColorsInfo.paintOnMeshColorSettings.applyVertexColorSettings.alphaColor > 0) {

					return true;
				}

				// If nothing is painted but Nothing is trying to Add Colors, then we won't see any difference
				else {

					return false;
				}
			}
		}

		// If sets the paint color
		else {

			return true;
		}
	}

	// If couldn't get amount of vertices of each channels then defaults to true so we apply the color
	return true;
}


//-------------------------------------------------------

// Run Call backs

void UVertexPaintDetectionGISubSystem::RunCallbacks(const bool& runCallbackForGetClosestVertexData, const bool& runCallbackForGetColorsOnly, const bool& runCallbackForPaintAtLocation, const bool& runCallbackForPaintWithinArea, const bool& runCallbackForPaintEntireMesh, const bool& runCallbackForPaintColorSnippet, const bool& runCallbackSetMeshVertexColors, const bool& runCallbackSetMeshVertexColorsUsingSerializedString, const FCalculateColorsInfo& calculateColorsInfo, const FVertexDetectEventSettings& eventSettings, const FVertexDetectClosestVertexDataResultStruct& closestVertexColorResult, const FVertexDetectEstimatedColorAtHitLocationResultStruct& estimatedColorAtHitLocationResult, const FVertexDetectAvarageColorInAreaInfo& avarageColor) {

	if (!eventSettings.runCallbackDelegate && !eventSettings.runCallbackInterfaces) return;

	FVertexPaintStruct vertexPaintStruct = FVertexPaintStruct();


	// Uses bools instead of .Actor because Paint at Locatino may run Detect before and/or after it's wrap up is run, and don't want paint at location delegate to run when it is detect that should run, and vice versa
	if (runCallbackForGetClosestVertexData) {

		if (eventSettings.runCallbackDelegate && IsValid(calculateColorsInfo.initiatedByComponent))
			calculateColorsInfo.initiatedByComponent->getClosestVertexDataDelegate.Broadcast(calculateColorsInfo.taskResult, calculateColorsInfo.meshVertexData, calculateColorsInfo.detectInfoSettings, closestVertexColorResult, estimatedColorAtHitLocationResult, avarageColor, calculateColorsInfo.amountOfPaintedColorsOfEachChannelAtMinAmount_BeforeApplyingColor, calculateColorsInfo.vertexColorsOnEachBone, calculateColorsInfo.additionalDataToPassThrough);

		if (IsValid(calculateColorsInfo.vertexPaintDetectionHitActor)) {

			if (eventSettings.runCallbackInterfaces && calculateColorsInfo.vertexPaintDetectionHitActor->GetClass()->ImplementsInterface(UVertexPaintDetectionInterface::StaticClass()))
				IVertexPaintDetectionInterface::Execute_GetClosestVertexDataOnActor(calculateColorsInfo.detectInfoSettings.actor, calculateColorsInfo.taskResult, calculateColorsInfo.meshVertexData, calculateColorsInfo.detectInfoSettings, closestVertexColorResult, estimatedColorAtHitLocationResult, avarageColor, calculateColorsInfo.amountOfPaintedColorsOfEachChannelAtMinAmount_BeforeApplyingColor, calculateColorsInfo.vertexColorsOnEachBone, calculateColorsInfo.additionalDataToPassThrough);
		}
	}

	else if (runCallbackForGetColorsOnly) {


		if (eventSettings.runCallbackDelegate && IsValid(calculateColorsInfo.initiatedByComponent))
			calculateColorsInfo.initiatedByComponent->getAllVertexColorsOnlyDelegate.Broadcast(calculateColorsInfo.taskResult, calculateColorsInfo.meshVertexData, calculateColorsInfo.getAllVertexColorsSettings, calculateColorsInfo.amountOfPaintedColorsOfEachChannelAtMinAmount_BeforeApplyingColor, calculateColorsInfo.vertexColorsOnEachBone, calculateColorsInfo.additionalDataToPassThrough);

		if (IsValid(calculateColorsInfo.vertexPaintDetectionHitActor)) {

			if (eventSettings.runCallbackInterfaces && calculateColorsInfo.vertexPaintDetectionHitActor->GetClass()->ImplementsInterface(UVertexPaintDetectionInterface::StaticClass()))
				IVertexPaintDetectionInterface::Execute_GetAllVertexColorsOnlyOnActor(calculateColorsInfo.detectInfoSettings.actor, calculateColorsInfo.taskResult, calculateColorsInfo.meshVertexData, calculateColorsInfo.getAllVertexColorsSettings, calculateColorsInfo.amountOfPaintedColorsOfEachChannelAtMinAmount_BeforeApplyingColor, calculateColorsInfo.vertexColorsOnEachBone, calculateColorsInfo.additionalDataToPassThrough);
		}

	}

	else if (runCallbackForPaintAtLocation) {

		vertexPaintStruct = calculateColorsInfo.paintOnMeshAtLocationSettings;

		if (eventSettings.runCallbackDelegate && IsValid(calculateColorsInfo.initiatedByComponent))
			calculateColorsInfo.initiatedByComponent->vertexColorsPaintedAtLocationDelegate.Broadcast(calculateColorsInfo.taskResult, calculateColorsInfo.meshVertexData, calculateColorsInfo.paintOnMeshAtLocationSettings, closestVertexColorResult, estimatedColorAtHitLocationResult, avarageColor, calculateColorsInfo.amountOfPaintedColorsOfEachChannelAtMinAmount, calculateColorsInfo.vertexColorsOnEachBone, calculateColorsInfo.additionalDataToPassThrough);

		if (IsValid(calculateColorsInfo.vertexPaintDetectionHitActor)) {

			if (eventSettings.runCallbackInterfaces && calculateColorsInfo.vertexPaintDetectionHitActor->GetClass()->ImplementsInterface(UVertexPaintDetectionInterface::StaticClass()))
				IVertexPaintDetectionInterface::Execute_PaintedOnActor_AtLocation(calculateColorsInfo.paintOnMeshAtLocationSettings.actor, calculateColorsInfo.taskResult, calculateColorsInfo.meshVertexData, calculateColorsInfo.paintOnMeshAtLocationSettings, closestVertexColorResult, estimatedColorAtHitLocationResult, avarageColor, calculateColorsInfo.amountOfPaintedColorsOfEachChannelAtMinAmount, calculateColorsInfo.vertexColorsOnEachBone, calculateColorsInfo.additionalDataToPassThrough);
		}
	}

	else if (runCallbackForPaintWithinArea) {

		vertexPaintStruct = calculateColorsInfo.paintOnMeshWithinAreaSettings;

		if (eventSettings.runCallbackDelegate && IsValid(calculateColorsInfo.initiatedByComponent))
			calculateColorsInfo.initiatedByComponent->vertexColorsPaintedMeshWithinAreaDelegate.Broadcast(calculateColorsInfo.taskResult, calculateColorsInfo.meshVertexData, calculateColorsInfo.paintOnMeshWithinAreaSettings, calculateColorsInfo.amountOfPaintedColorsOfEachChannelAtMinAmount, calculateColorsInfo.vertexColorsOnEachBone, calculateColorsInfo.additionalDataToPassThrough);

		if (IsValid(calculateColorsInfo.vertexPaintDetectionHitActor)) {

			if (eventSettings.runCallbackInterfaces && calculateColorsInfo.vertexPaintDetectionHitActor->GetClass()->ImplementsInterface(UVertexPaintDetectionInterface::StaticClass()))
				IVertexPaintDetectionInterface::Execute_PaintedOnActor_WithinArea(calculateColorsInfo.paintOnMeshWithinAreaSettings.actor, calculateColorsInfo.taskResult, calculateColorsInfo.meshVertexData, calculateColorsInfo.paintOnMeshWithinAreaSettings, calculateColorsInfo.amountOfPaintedColorsOfEachChannelAtMinAmount, calculateColorsInfo.vertexColorsOnEachBone, calculateColorsInfo.additionalDataToPassThrough);
		}
	}

	else if (runCallbackForPaintEntireMesh) {

		vertexPaintStruct = calculateColorsInfo.paintOnEntireMeshSettings;

		if (eventSettings.runCallbackDelegate && IsValid(calculateColorsInfo.initiatedByComponent))
			calculateColorsInfo.initiatedByComponent->vertexColorsPaintedEntireMeshDelegate.Broadcast(calculateColorsInfo.taskResult, calculateColorsInfo.meshVertexData, calculateColorsInfo.paintOnEntireMeshSettings, calculateColorsInfo.amountOfPaintedColorsOfEachChannelAtMinAmount, calculateColorsInfo.vertexColorsOnEachBone, calculateColorsInfo.additionalDataToPassThrough);

		if (IsValid(calculateColorsInfo.vertexPaintDetectionHitActor)) {

			if (eventSettings.runCallbackInterfaces && calculateColorsInfo.vertexPaintDetectionHitActor->GetClass()->ImplementsInterface(UVertexPaintDetectionInterface::StaticClass()))
				IVertexPaintDetectionInterface::Execute_PaintedOnActor_EntireMesh(calculateColorsInfo.paintOnEntireMeshSettings.actor, calculateColorsInfo.taskResult, calculateColorsInfo.meshVertexData, calculateColorsInfo.paintOnEntireMeshSettings, calculateColorsInfo.amountOfPaintedColorsOfEachChannelAtMinAmount, calculateColorsInfo.vertexColorsOnEachBone, calculateColorsInfo.additionalDataToPassThrough);
		}
	}

	else if (runCallbackForPaintColorSnippet) {

		vertexPaintStruct = calculateColorsInfo.paintOnColorSnippetSettings;

		if (eventSettings.runCallbackDelegate && IsValid(calculateColorsInfo.initiatedByComponent))
			calculateColorsInfo.initiatedByComponent->vertexColorsPaintColorSnippetDelegate.Broadcast(calculateColorsInfo.taskResult, calculateColorsInfo.meshVertexData, calculateColorsInfo.paintOnColorSnippetSettings, calculateColorsInfo.amountOfPaintedColorsOfEachChannelAtMinAmount, calculateColorsInfo.vertexColorsOnEachBone, calculateColorsInfo.additionalDataToPassThrough);


		if (IsValid(calculateColorsInfo.vertexPaintDetectionHitActor)) {

			// Calls interface on the painted actor so they can run custom things if they get painted on
			if (eventSettings.runCallbackInterfaces && calculateColorsInfo.vertexPaintDetectionHitActor->GetClass()->ImplementsInterface(UVertexPaintDetectionInterface::StaticClass()))
				IVertexPaintDetectionInterface::Execute_PaintedOnActor_PaintColorSnippet(calculateColorsInfo.paintOnColorSnippetSettings.actor, calculateColorsInfo.taskResult, calculateColorsInfo.meshVertexData, calculateColorsInfo.paintOnColorSnippetSettings, calculateColorsInfo.amountOfPaintedColorsOfEachChannelAtMinAmount, calculateColorsInfo.vertexColorsOnEachBone, calculateColorsInfo.additionalDataToPassThrough);
		}
	}

	else if (runCallbackSetMeshVertexColors) {

		vertexPaintStruct = calculateColorsInfo.setMeshComponentVertexColorsUsingSerializedStringSettings;

		if (eventSettings.runCallbackDelegate && IsValid(calculateColorsInfo.initiatedByComponent))
			calculateColorsInfo.initiatedByComponent->vertexColorsSetMeshColorsDelegate.Broadcast(calculateColorsInfo.taskResult, calculateColorsInfo.meshVertexData, calculateColorsInfo.paintOnMeshSettings, calculateColorsInfo.amountOfPaintedColorsOfEachChannelAtMinAmount, calculateColorsInfo.vertexColorsOnEachBone, calculateColorsInfo.additionalDataToPassThrough);
	}

	else if (runCallbackSetMeshVertexColorsUsingSerializedString) {

		vertexPaintStruct = calculateColorsInfo.paintOnColorSnippetSettings;

		if (eventSettings.runCallbackDelegate && IsValid(calculateColorsInfo.initiatedByComponent))
			calculateColorsInfo.initiatedByComponent->vertexColorsSetMeshColorsUsingSerializedStringDelegate.Broadcast(calculateColorsInfo.taskResult, calculateColorsInfo.meshVertexData, calculateColorsInfo.setMeshComponentVertexColorsUsingSerializedStringSettings, calculateColorsInfo.amountOfPaintedColorsOfEachChannelAtMinAmount, calculateColorsInfo.vertexColorsOnEachBone, calculateColorsInfo.additionalDataToPassThrough);
	}


	if (IsValid(calculateColorsInfo.vertexPaintDetectionHitActor)) {

		if (runCallbackForPaintAtLocation || runCallbackForPaintWithinArea || runCallbackForPaintEntireMesh || runCallbackForPaintColorSnippet || runCallbackSetMeshVertexColors || runCallbackSetMeshVertexColorsUsingSerializedString) {

			// Calls interface on the painted actor so they can run custom things if they get painted on
			if (eventSettings.runCallbackInterfaces && calculateColorsInfo.vertexPaintDetectionHitActor->GetClass()->ImplementsInterface(UVertexPaintDetectionInterface::StaticClass()))
				IVertexPaintDetectionInterface::Execute_ColorsAppliedOnActor(calculateColorsInfo.vertexPaintDetectionHitActor, calculateColorsInfo.taskResult, calculateColorsInfo.meshVertexData, vertexPaintStruct, calculateColorsInfo.amountOfPaintedColorsOfEachChannelAtMinAmount, calculateColorsInfo.vertexColorsOnEachBone, calculateColorsInfo.additionalDataToPassThrough);
		}
	}
}


//-------------------------------------------------------

// Get Closest Vertex Data

FVertexDetectClosestVertexDataResultStruct UVertexPaintDetectionGISubSystem::GetClosestVertexData(UPrimitiveComponent* meshComp, FVertexDetectClosestVertexDataResultStruct closestVertexDataResult, const int& closestVertexIndex, const FColor& closestVertexColor, const FVector& closestVertexPosition, const FVector& closestVertexNormal, const FCalculateColorsInfo& calculateColorsInfo) {

	if (!closestVertexDataResult.closestVertexDataSuccessfullyAcquired || closestVertexIndex == -1) return closestVertexDataResult;


	// Transforms from component local to world pos
	closestVertexDataResult.closestVertexGeneralInfo.closestVertexPositionInfo.closestVertexPositionWorld = closestVertexPosition;

	// Then from world to actor local
	closestVertexDataResult.closestVertexGeneralInfo.closestVertexPositionInfo.closestVertexPositionActorLocal = UKismetMathLibrary::InverseTransformLocation(meshComp->GetOwner()->GetTransform(), closestVertexDataResult.closestVertexGeneralInfo.closestVertexPositionInfo.closestVertexPositionWorld);

	closestVertexDataResult.closestVertexGeneralInfo.closestVertexColors = closestVertexColor.ReinterpretAsLinear();


	// Transforms from component local normal to world normal
	closestVertexDataResult.closestVertexGeneralInfo.closestVertexNormalInfo.closestVertexNormal = closestVertexNormal;

	closestVertexDataResult.closestVertexGeneralInfo.closestVertexNormalInfo.closestVertexNormalLocal = UKismetMathLibrary::InverseTransformDirection(meshComp->GetOwner()->GetTransform(), closestVertexNormal);


	closestVertexDataResult.closestVertexGeneralInfo.closestVertexIndex = closestVertexIndex;


	// If got the material then gets physics surface, if it's registered in the material data asset. 
	if (IsValid(closestVertexDataResult.closestVertexGeneralInfo.closestVertexMaterial)) {

		closestVertexDataResult.closestVertexPhysicalSurfaceInfo = GetPhysicsSurfaceData(closestVertexColor, calculateColorsInfo, closestVertexDataResult.closestVertexGeneralInfo.closestVertexMaterial);
	}


	return closestVertexDataResult;
}


//-------------------------------------------------------

// Get Physics Surface Data

FVertexDetectPhysicsSurfaceDataStruct UVertexPaintDetectionGISubSystem::GetPhysicsSurfaceData(const FColor& vertexColor, const FCalculateColorsInfo& calculateColorsInfo, UMaterialInterface* material) {

	FVertexDetectPhysicsSurfaceDataStruct closestVertexDataResult;

	if (!IsValid(material)) {

		if (calculateColorsInfo.printLogsToScreen || calculateColorsInfo.printLogsToOutputLog)
			UKismetSystemLibrary::PrintString(GetWorld(), FString::Printf(TEXT("Runtime Vertex Color Paint and Detection Plugin - Couldn't Get Physics Surface Data because couldn't get material at closest vertex to hit location. ")), calculateColorsInfo.printLogsToScreen, calculateColorsInfo.printLogsToOutputLog, FColor::Orange, calculateColorsInfo.printLogsToScreen_Duration);

		return closestVertexDataResult;
	}

	if (!UVertexPaintFunctionLibrary::GetVertexPaintMaterialDataAsset()) {

		if (calculateColorsInfo.printLogsToScreen || calculateColorsInfo.printLogsToOutputLog)
			UKismetSystemLibrary::PrintString(GetWorld(), FString::Printf(TEXT("Runtime Vertex Color Paint and Detection Plugin - Can't get Physics Surface Data because a Vertex Paint Material Data Asset hasn't been set in the Project Settings. ")), calculateColorsInfo.printLogsToScreen, calculateColorsInfo.printLogsToOutputLog, FColor::Orange, calculateColorsInfo.printLogsToScreen_Duration);

		return closestVertexDataResult;
	}

	if (!UVertexPaintFunctionLibrary::GetVertexPaintMaterialDataAsset()->GetVertexPaintMaterialInterface().Contains(material)) {

		if (calculateColorsInfo.printLogsToScreen || calculateColorsInfo.printLogsToOutputLog)
			UKismetSystemLibrary::PrintString(GetWorld(), FString::Printf(TEXT("Runtime Vertex Color Paint and Detection Plugin - Can't get Closest Vertex Physics Surface Data because Hit Material isn't added in the Vertex Paint Material Data Asset. You can register them in the Editor Widget in the Detection Tab. You can still get Vertex Color Values but not what surface is on each color channel. ")), calculateColorsInfo.printLogsToScreen, calculateColorsInfo.printLogsToOutputLog, FColor::Orange, calculateColorsInfo.printLogsToScreen_Duration);

		return closestVertexDataResult;
	}


	FVertexPaintMaterialDataAssetStruct materialDataInfo_Local;
	materialDataInfo_Local = UVertexPaintFunctionLibrary::GetVertexPaintMaterialDataAsset()->GetVertexPaintMaterialInterface().FindRef(material);

	// Used to make sure that not only did we get the color data, but we could get the surfaces as well, i.e. the material was registered in the data asset. 
	closestVertexDataResult.physicsSurfaceSuccessfullyAcquired = true;

	// Converts closest Color from Byte to float
	closestVertexDataResult.physicsSurface_AtRed.physicalSurfaceValueAtRedChannel = UKismetMathLibrary::Conv_ByteToFloat(vertexColor.R);
	closestVertexDataResult.physicsSurface_AtGreen.physicalSurfaceValueAtGreenChannel = UKismetMathLibrary::Conv_ByteToFloat(vertexColor.G);
	closestVertexDataResult.physicsSurface_AtBlue.physicalSurfaceValueAtBlueChannel = UKismetMathLibrary::Conv_ByteToFloat(vertexColor.B);
	closestVertexDataResult.physicsSurface_AtAlpha.physicalSurfaceValueAtAlphaChannel = UKismetMathLibrary::Conv_ByteToFloat(vertexColor.A);


	// Clamps it from 0-255 to 0-1
	closestVertexDataResult.physicsSurface_AtRed.physicalSurfaceValueAtRedChannel = UKismetMathLibrary::MapRangeClamped(closestVertexDataResult.physicsSurface_AtRed.physicalSurfaceValueAtRedChannel, 0, 255, 0, 1);
	closestVertexDataResult.physicsSurface_AtGreen.physicalSurfaceValueAtGreenChannel = UKismetMathLibrary::MapRangeClamped(closestVertexDataResult.physicsSurface_AtGreen.physicalSurfaceValueAtGreenChannel, 0, 255, 0, 1);
	closestVertexDataResult.physicsSurface_AtBlue.physicalSurfaceValueAtBlueChannel = UKismetMathLibrary::MapRangeClamped(closestVertexDataResult.physicsSurface_AtBlue.physicalSurfaceValueAtBlueChannel, 0, 255, 0, 1);
	closestVertexDataResult.physicsSurface_AtAlpha.physicalSurfaceValueAtAlphaChannel = UKismetMathLibrary::MapRangeClamped(closestVertexDataResult.physicsSurface_AtAlpha.physicalSurfaceValueAtAlphaChannel, 0, 255, 0, 1);


	closestVertexDataResult.physicsSurface_AtDefault.materialRegisteredToIncludeDefaultChannel = materialDataInfo_Local.includeDefaultChannelWhenDetecting;
	closestVertexDataResult.physicsSurface_AtDefault.physicalSurfaceAtDefault = materialDataInfo_Local.atDefault;
	closestVertexDataResult.physicsSurface_AtDefault.physicalSurfaceAsStringAtDefault = UVertexPaintFunctionLibrary::GetPhysicsSurfaceAsString(closestVertexDataResult.physicsSurface_AtDefault.physicalSurfaceAtDefault);
	closestVertexDataResult.physicsSurface_AtDefault.physicalSurfaceValueAtDefault = 1;


	// Sets EPhysicalSurface - Red
	closestVertexDataResult.physicsSurface_AtRed.physicalSurfaceAtRedChannel = materialDataInfo_Local.paintedAtRed;
	closestVertexDataResult.physicsSurface_AtRed.physicalSurfaceAsStringAtRedChannel = UVertexPaintFunctionLibrary::GetPhysicsSurfaceAsString(closestVertexDataResult.physicsSurface_AtRed.physicalSurfaceAtRedChannel); // Sets String that can be used with third party software like wwise and their RTCPs

	if (materialDataInfo_Local.paintedAtRed == EPhysicalSurface::SurfaceType_Default)
		closestVertexDataResult.physicsSurface_AtRed.physicalSurfaceValueAtRedChannel = 0;


	// Green
	closestVertexDataResult.physicsSurface_AtGreen.physicalSurfaceAtGreenChannel = materialDataInfo_Local.paintedAtGreen;
	closestVertexDataResult.physicsSurface_AtGreen.physicalSurfaceAsStringAtGreenChannel = UVertexPaintFunctionLibrary::GetPhysicsSurfaceAsString(closestVertexDataResult.physicsSurface_AtGreen.physicalSurfaceAtGreenChannel);

	if (closestVertexDataResult.physicsSurface_AtGreen.physicalSurfaceAtGreenChannel == EPhysicalSurface::SurfaceType_Default)
		closestVertexDataResult.physicsSurface_AtGreen.physicalSurfaceValueAtGreenChannel = 0;


	// Blue
	closestVertexDataResult.physicsSurface_AtBlue.physicalSurfaceAtBlueChannel = materialDataInfo_Local.paintedAtBlue;
	closestVertexDataResult.physicsSurface_AtBlue.physicalSurfaceAsStringAtBlueChannel = UVertexPaintFunctionLibrary::GetPhysicsSurfaceAsString(closestVertexDataResult.physicsSurface_AtBlue.physicalSurfaceAtBlueChannel);

	if (closestVertexDataResult.physicsSurface_AtBlue.physicalSurfaceAtBlueChannel == EPhysicalSurface::SurfaceType_Default)
		closestVertexDataResult.physicsSurface_AtBlue.physicalSurfaceValueAtBlueChannel = 0;


	// Alpha
	closestVertexDataResult.physicsSurface_AtAlpha.physicalSurfaceAtAlphaChannel = materialDataInfo_Local.paintedAtAlpha;
	closestVertexDataResult.physicsSurface_AtAlpha.physicalSurfaceAsStringAtAlphaChannel = UVertexPaintFunctionLibrary::GetPhysicsSurfaceAsString(closestVertexDataResult.physicsSurface_AtAlpha.physicalSurfaceAtAlphaChannel);

	if (closestVertexDataResult.physicsSurface_AtAlpha.physicalSurfaceAtAlphaChannel == EPhysicalSurface::SurfaceType_Default)
		closestVertexDataResult.physicsSurface_AtAlpha.physicalSurfaceValueAtAlphaChannel = 0;



	// Makes it so all Vertex Colors Returns a number proportionate to all of the channels, between 0-1. For example if 3 channels have painted to 1, they will each return 0.33 instead of each returning 1 like they otherwise would. 


	float retrieveVertexColorData_paintedColorDataTotalTemp = 0;
	float retrieveVertexColorData_clampColorValuesToTemp = 0;


	// Only includes default if material is set to do so. I.e. if nothing is painted at default it will return 1, if fully painted on one other channel, 0.5, 2 channels 0.33 etc. 
	if (materialDataInfo_Local.includeDefaultChannelWhenDetecting)
		retrieveVertexColorData_paintedColorDataTotalTemp = closestVertexDataResult.physicsSurface_AtDefault.physicalSurfaceValueAtDefault;


	// If set to clamp into 1 we use this down below. For instance if both puddle and sand i painted fully to 1, then it will return 0.5 on each (unless default is also included then it will return 0.33)
	retrieveVertexColorData_paintedColorDataTotalTemp += (closestVertexDataResult.physicsSurface_AtRed.physicalSurfaceValueAtRedChannel + closestVertexDataResult.physicsSurface_AtGreen.physicalSurfaceValueAtGreenChannel + closestVertexDataResult.physicsSurface_AtBlue.physicalSurfaceValueAtBlueChannel + closestVertexDataResult.physicsSurface_AtAlpha.physicalSurfaceValueAtAlphaChannel);

	// Scales up to
	retrieveVertexColorData_clampColorValuesToTemp = UKismetMathLibrary::FClamp(retrieveVertexColorData_paintedColorDataTotalTemp, 0, 1);


	// Only includes default if material is set to do so
	if (materialDataInfo_Local.includeDefaultChannelWhenDetecting) {

		closestVertexDataResult.physicsSurface_AtDefault.physicalSurfaceValueAtDefault = UKismetMathLibrary::MapRangeClamped(closestVertexDataResult.physicsSurface_AtDefault.physicalSurfaceValueAtDefault, 0, retrieveVertexColorData_paintedColorDataTotalTemp, 0, retrieveVertexColorData_clampColorValuesToTemp);
	}


	// Adds each channels share if set to clamp them into one
	closestVertexDataResult.physicsSurface_AtRed.physicalSurfaceValueAtRedChannel = UKismetMathLibrary::MapRangeClamped(closestVertexDataResult.physicsSurface_AtRed.physicalSurfaceValueAtRedChannel, 0, retrieveVertexColorData_paintedColorDataTotalTemp, 0, retrieveVertexColorData_clampColorValuesToTemp);

	closestVertexDataResult.physicsSurface_AtGreen.physicalSurfaceValueAtGreenChannel = UKismetMathLibrary::MapRangeClamped(closestVertexDataResult.physicsSurface_AtGreen.physicalSurfaceValueAtGreenChannel, 0, retrieveVertexColorData_paintedColorDataTotalTemp, 0, retrieveVertexColorData_clampColorValuesToTemp);

	closestVertexDataResult.physicsSurface_AtBlue.physicalSurfaceValueAtBlueChannel = UKismetMathLibrary::MapRangeClamped(closestVertexDataResult.physicsSurface_AtBlue.physicalSurfaceValueAtBlueChannel, 0, retrieveVertexColorData_paintedColorDataTotalTemp, 0, retrieveVertexColorData_clampColorValuesToTemp);

	closestVertexDataResult.physicsSurface_AtAlpha.physicalSurfaceValueAtAlphaChannel = UKismetMathLibrary::MapRangeClamped(closestVertexDataResult.physicsSurface_AtAlpha.physicalSurfaceValueAtAlphaChannel, 0, retrieveVertexColorData_paintedColorDataTotalTemp, 0, retrieveVertexColorData_clampColorValuesToTemp);



	// Fills the closest arrays which can be used to more comfortable loop through them without having to make arrays yourself. Note how even if a surface may be default it always get added to the array so it's always 5 in size if we've been able to get any close colors
	closestVertexDataResult.physicalSurfacesAsArray.Add(closestVertexDataResult.physicsSurface_AtDefault.physicalSurfaceAtDefault);
	closestVertexDataResult.physicalSurfacesAsArray.Add(closestVertexDataResult.physicsSurface_AtRed.physicalSurfaceAtRedChannel);
	closestVertexDataResult.physicalSurfacesAsArray.Add(closestVertexDataResult.physicsSurface_AtGreen.physicalSurfaceAtGreenChannel);
	closestVertexDataResult.physicalSurfacesAsArray.Add(closestVertexDataResult.physicsSurface_AtBlue.physicalSurfaceAtBlueChannel);
	closestVertexDataResult.physicalSurfacesAsArray.Add(closestVertexDataResult.physicsSurface_AtAlpha.physicalSurfaceAtAlphaChannel);

	closestVertexDataResult.surfacesAsStringArray.Add(closestVertexDataResult.physicsSurface_AtDefault.physicalSurfaceAsStringAtDefault);
	closestVertexDataResult.surfacesAsStringArray.Add(closestVertexDataResult.physicsSurface_AtRed.physicalSurfaceAsStringAtRedChannel);
	closestVertexDataResult.surfacesAsStringArray.Add(closestVertexDataResult.physicsSurface_AtGreen.physicalSurfaceAsStringAtGreenChannel);
	closestVertexDataResult.surfacesAsStringArray.Add(closestVertexDataResult.physicsSurface_AtBlue.physicalSurfaceAsStringAtBlueChannel);
	closestVertexDataResult.surfacesAsStringArray.Add(closestVertexDataResult.physicsSurface_AtAlpha.physicalSurfaceAsStringAtAlphaChannel);

	closestVertexDataResult.surfaceValuesArray.Add(closestVertexDataResult.physicsSurface_AtDefault.physicalSurfaceValueAtDefault);
	closestVertexDataResult.surfaceValuesArray.Add(closestVertexDataResult.physicsSurface_AtRed.physicalSurfaceValueAtRedChannel);
	closestVertexDataResult.surfaceValuesArray.Add(closestVertexDataResult.physicsSurface_AtGreen.physicalSurfaceValueAtGreenChannel);
	closestVertexDataResult.surfaceValuesArray.Add(closestVertexDataResult.physicsSurface_AtBlue.physicalSurfaceValueAtBlueChannel);
	closestVertexDataResult.surfaceValuesArray.Add(closestVertexDataResult.physicsSurface_AtAlpha.physicalSurfaceValueAtAlphaChannel);




	// If anything is painted then gets the most dominant one out of RGBA, otherwise just sets the default as the dominant one
	if (closestVertexDataResult.physicsSurface_AtRed.physicalSurfaceValueAtRedChannel > 0 || closestVertexDataResult.physicsSurface_AtGreen.physicalSurfaceValueAtGreenChannel > 0 || closestVertexDataResult.physicsSurface_AtBlue.physicalSurfaceValueAtBlueChannel > 0 || closestVertexDataResult.physicsSurface_AtAlpha.physicalSurfaceValueAtAlphaChannel > 0) {

		TArray<TEnumAsByte<EPhysicalSurface>> physiccalSurfacesToCheckTemp = closestVertexDataResult.physicalSurfacesAsArray;
		TArray<float> physicalSurfaceValuesToCheckTemp = closestVertexDataResult.surfaceValuesArray;

		// Removes the Default if set Not to include it, so we only check RGBA
		if (!materialDataInfo_Local.includeDefaultChannelWhenDetecting) {

			physiccalSurfacesToCheckTemp.RemoveAt(0);
			physicalSurfaceValuesToCheckTemp.RemoveAt(0);
		}

		TEnumAsByte<EPhysicalSurface> mostDominantSurface_Local;
		float mostDominantSurfaceValue_Local = 0;
		if (UVertexPaintFunctionLibrary::GetTheMostDominantPhysicsSurface_Wrapper(material, physiccalSurfacesToCheckTemp, physicalSurfaceValuesToCheckTemp, mostDominantSurface_Local, mostDominantSurfaceValue_Local)) {

			closestVertexDataResult.mostDominantPhysicsSurfaceInfo.mostDominantPhysicsSurface = mostDominantSurface_Local;
			closestVertexDataResult.mostDominantPhysicsSurfaceInfo.mostDominantPhysicsSurfaceAsString = UVertexPaintFunctionLibrary::GetPhysicsSurfaceAsString(mostDominantSurface_Local);
			closestVertexDataResult.mostDominantPhysicsSurfaceInfo.mostDominantPhysicstSurfaceValue = mostDominantSurfaceValue_Local;
		}
	}

	else {

		closestVertexDataResult.mostDominantPhysicsSurfaceInfo.mostDominantPhysicsSurface = closestVertexDataResult.physicsSurface_AtDefault.physicalSurfaceAtDefault;
		closestVertexDataResult.mostDominantPhysicsSurfaceInfo.mostDominantPhysicsSurfaceAsString = UVertexPaintFunctionLibrary::GetPhysicsSurfaceAsString(closestVertexDataResult.physicsSurface_AtDefault.physicalSurfaceAtDefault);
		closestVertexDataResult.mostDominantPhysicsSurfaceInfo.mostDominantPhysicstSurfaceValue = closestVertexDataResult.physicsSurface_AtDefault.physicalSurfaceValueAtDefault;
	}


	bool successfullyGotColorChannels_Local = false;
	TArray<Enum_SurfaceAtChannel> surfaceAtChannels_Local = UVertexPaintFunctionLibrary::GetAllVertexColorChannelsPhysicsSurfaceIsRegisteredTo_Wrapper(material, closestVertexDataResult.mostDominantPhysicsSurfaceInfo.mostDominantPhysicsSurface, successfullyGotColorChannels_Local);

	if (successfullyGotColorChannels_Local) {

		closestVertexDataResult.mostDominantPhysicsSurfaceInfo.mostDominantPhysicsSurfaceAtVertexColorChannels = surfaceAtChannels_Local;
	}


	// Returns Struct Updated with Names of channels from Data Asset
	return closestVertexDataResult;
}


//-------------------------------------------------------

// Print Vertex Color Results

void UVertexPaintDetectionGISubSystem::PrintClosestVertexColorResults(const FVertexDetectClosestVertexDataResultStruct& closestVertexDataResult, const FVertexDetectEstimatedColorAtHitLocationResultStruct& estimatedColorAtHitLocationResult, const float& avarageColorOfEffect, const FCalculateColorsInfo& calculateColorsInfo) {


	// Closest Color
	if (calculateColorsInfo.printLogsToScreen || calculateColorsInfo.printLogsToOutputLog)
		UKismetSystemLibrary::PrintString(GetWorld(), FString::Printf(TEXT("Runtime Vertex Color Paint and Detection Plugin - Closest Vertex Color: %s"), *closestVertexDataResult.closestVertexGeneralInfo.closestVertexColors.ToString()), calculateColorsInfo.printLogsToScreen, calculateColorsInfo.printLogsToOutputLog, FColor::Green, calculateColorsInfo.printLogsToScreen_Duration);

	// Estimated Color at Hit Location
	if (estimatedColorAtHitLocationResult.estimatedColorAtHitLocationDataSuccessfullyAcquired)
		if (calculateColorsInfo.printLogsToScreen || calculateColorsInfo.printLogsToOutputLog)
			UKismetSystemLibrary::PrintString(GetWorld(), FString::Printf(TEXT("Runtime Vertex Color Paint and Detection Plugin - Estimated Hit Location Color: %s"), *estimatedColorAtHitLocationResult.estimatedColorAtHitLocation.ToString()), calculateColorsInfo.printLogsToScreen, calculateColorsInfo.printLogsToOutputLog, FColor::Green, calculateColorsInfo.printLogsToScreen_Duration);

	// Closest Position
	if (calculateColorsInfo.printLogsToScreen || calculateColorsInfo.printLogsToOutputLog)
		UKismetSystemLibrary::PrintString(GetWorld(), FString::Printf(TEXT("Runtime Vertex Color Paint and Detection Plugin - Closest Vertex World Position: %s  -   Closest Vertex Local Position: %s"), *closestVertexDataResult.closestVertexGeneralInfo.closestVertexPositionInfo.closestVertexPositionWorld.ToString(), *closestVertexDataResult.closestVertexGeneralInfo.closestVertexPositionInfo.closestVertexPositionActorLocal.ToString()), calculateColorsInfo.printLogsToScreen, calculateColorsInfo.printLogsToOutputLog, FColor::Cyan, calculateColorsInfo.printLogsToScreen_Duration);

	// Closest Normal
	if (calculateColorsInfo.printLogsToScreen || calculateColorsInfo.printLogsToOutputLog)
		UKismetSystemLibrary::PrintString(GetWorld(), FString::Printf(TEXT("Runtime Vertex Color Paint and Detection Plugin - Closest Vertex Normal World: %s  -  Closest Vertex Normal Local: %s"), *closestVertexDataResult.closestVertexGeneralInfo.closestVertexNormalInfo.closestVertexNormal.ToString(), *closestVertexDataResult.closestVertexGeneralInfo.closestVertexNormalInfo.closestVertexNormalLocal.ToString()), calculateColorsInfo.printLogsToScreen, calculateColorsInfo.printLogsToOutputLog, FColor::Cyan, calculateColorsInfo.printLogsToScreen_Duration);

	// Closest Section
	if (closestVertexDataResult.closestVertexGeneralInfo.closestSection != -1)
		UKismetSystemLibrary::PrintString(GetWorld(), FString::Printf(TEXT("Runtime Vertex Color Paint and Detection Plugin - Closest Vertex Section: %i"), closestVertexDataResult.closestVertexGeneralInfo.closestSection), calculateColorsInfo.printLogsToScreen, calculateColorsInfo.printLogsToOutputLog, FColor::Cyan, calculateColorsInfo.printLogsToScreen_Duration);

	// Closest Material
	if (closestVertexDataResult.closestVertexGeneralInfo.closestVertexMaterial)
		UKismetSystemLibrary::PrintString(GetWorld(), FString::Printf(TEXT("Runtime Vertex Color Paint and Detection Plugin - Closest Material: %s"), *closestVertexDataResult.closestVertexGeneralInfo.closestVertexMaterial->GetName()), calculateColorsInfo.printLogsToScreen, calculateColorsInfo.printLogsToOutputLog, FColor::Cyan, calculateColorsInfo.printLogsToScreen_Duration);

	// Closest Surfaces
	if (closestVertexDataResult.closestVertexPhysicalSurfaceInfo.physicsSurfaceSuccessfullyAcquired) {

		if (calculateColorsInfo.printLogsToScreen || calculateColorsInfo.printLogsToOutputLog)
			UKismetSystemLibrary::PrintString(GetWorld(), FString::Printf(TEXT("Runtime Vertex Color Paint and Detection Plugin - Physics Surface and Color Values at Closest Vertex: Default: %s: %f  -  Red: %s: %f  -  Green: %s: %f  -  Blue: %s: %f  -  Alpha: %s: %f"), *closestVertexDataResult.closestVertexPhysicalSurfaceInfo.physicsSurface_AtDefault.physicalSurfaceAsStringAtDefault, closestVertexDataResult.closestVertexPhysicalSurfaceInfo.physicsSurface_AtDefault.physicalSurfaceValueAtDefault, *closestVertexDataResult.closestVertexPhysicalSurfaceInfo.physicsSurface_AtRed.physicalSurfaceAsStringAtRedChannel, closestVertexDataResult.closestVertexPhysicalSurfaceInfo.physicsSurface_AtRed.physicalSurfaceValueAtRedChannel, *closestVertexDataResult.closestVertexPhysicalSurfaceInfo.physicsSurface_AtGreen.physicalSurfaceAsStringAtGreenChannel, closestVertexDataResult.closestVertexPhysicalSurfaceInfo.physicsSurface_AtGreen.physicalSurfaceValueAtGreenChannel, *closestVertexDataResult.closestVertexPhysicalSurfaceInfo.physicsSurface_AtBlue.physicalSurfaceAsStringAtBlueChannel, closestVertexDataResult.closestVertexPhysicalSurfaceInfo.physicsSurface_AtBlue.physicalSurfaceValueAtBlueChannel, *closestVertexDataResult.closestVertexPhysicalSurfaceInfo.physicsSurface_AtAlpha.physicalSurfaceAsStringAtAlphaChannel, closestVertexDataResult.closestVertexPhysicalSurfaceInfo.physicsSurface_AtAlpha.physicalSurfaceValueAtAlphaChannel), calculateColorsInfo.printLogsToScreen, calculateColorsInfo.printLogsToOutputLog, FColor::Green, calculateColorsInfo.printLogsToScreen_Duration);
	}

	// If couldn't get physical surface but just closest colors
	else {

		if (calculateColorsInfo.printLogsToScreen || calculateColorsInfo.printLogsToOutputLog)
			UKismetSystemLibrary::PrintString(GetWorld(), FString::Printf(TEXT("Runtime Vertex Color Paint and Detection Plugin - Couldn't get Physical Surfaces at Closest Vertex, perhaps the Hit Material isn't registered in the Material Data Asset?")), calculateColorsInfo.printLogsToScreen, calculateColorsInfo.printLogsToOutputLog, FColor::Orange, calculateColorsInfo.printLogsToScreen_Duration);
	}

	// Print Debug Box and Directional Arrow
	if (calculateColorsInfo.drawGetClosestVertexDataDebugSymbols) {

		DrawDebugBox(GetWorld(), closestVertexDataResult.closestVertexGeneralInfo.closestVertexPositionInfo.closestVertexPositionWorld, FVector(5, 5, 5), FColor::Red, false, calculateColorsInfo.drawGetClosestVertexDataDebugSymbolsDuration, 0, 3);

		DrawDebugDirectionalArrow(GetWorld(), closestVertexDataResult.closestVertexGeneralInfo.closestVertexPositionInfo.closestVertexPositionWorld, (closestVertexDataResult.closestVertexGeneralInfo.closestVertexPositionInfo.closestVertexPositionWorld + (closestVertexDataResult.closestVertexGeneralInfo.closestVertexNormalInfo.closestVertexNormal * 100)), 50, FColor::Red, false, calculateColorsInfo.drawGetClosestVertexDataDebugSymbolsDuration, 0, 3);

		if (avarageColorOfEffect > 0) {

			DrawDebugSphere(GetWorld(), closestVertexDataResult.closestVertexGeneralInfo.closestVertexPositionInfo.closestVertexPositionWorld, avarageColorOfEffect, 16, FColor::Green, false, calculateColorsInfo.drawGetClosestVertexDataDebugSymbolsDuration, 0, 3);
		}
	}


	// Draw Estimated Color At Hit Location related sebug symbols
	if (estimatedColorAtHitLocationResult.estimatedColorAtHitLocationDataSuccessfullyAcquired) {


		if (calculateColorsInfo.drawGetEstimatedColorAtHitLocationDebugSymbols) {


			DrawDebugBox(calculateColorsInfo.vertexPaintDetectionHitActor->GetWorld(), estimatedColorAtHitLocationResult.worldSpaceLocationWeEstimatedTheColorAt, FVector(5, 5, 5), FQuat::Identity, FColor::Emerald, false, calculateColorsInfo.drawGetEstimatedColorAtHitLocationDebugSymbolsDuration, 0, 3);


			DrawDebugBox(calculateColorsInfo.vertexPaintDetectionHitActor->GetWorld(), closestVertexDataResult.closestVertexGeneralInfo.closestVertexPositionInfo.closestVertexPositionWorld, FVector(5, 5, 5), FQuat::Identity, FColor::Silver, false, calculateColorsInfo.drawGetEstimatedColorAtHitLocationDebugSymbolsDuration, 0, 3);


			if (calculateColorsInfo.estimatedColorAtHitLocation_VertexToLerpToward_Paint >= 0) {

				// Hit Location
				DrawDebugBox(calculateColorsInfo.vertexPaintDetectionHitActor->GetWorld(), calculateColorsInfo.paintOnMeshAtLocationSettings.hitFundementals.hitLocation, FVector(5, 5, 5), FQuat::Identity, FColor::Purple, false, calculateColorsInfo.drawGetEstimatedColorAtHitLocationDebugSymbolsDuration, 0, 3);

				// Vertex we Lerp Toward
				DrawDebugBox(calculateColorsInfo.vertexPaintDetectionHitActor->GetWorld(), calculateColorsInfo.estimatedColorAtHitLocation_VertexToLerpToward_LocationInWorldSpace_Paint, FVector(5, 5, 5), FQuat::Identity, FColor::Yellow, false, calculateColorsInfo.drawGetEstimatedColorAtHitLocationDebugSymbolsDuration, 0, 3);

				// calculateColorsInfo.estimated
				DrawDebugDirectionalArrow(calculateColorsInfo.vertexPaintDetectionHitActor->GetWorld(), calculateColorsInfo.closestVertexPositionToHitLocationAtMinLOD_World_Paint, calculateColorsInfo.paintOnMeshAtLocationSettings.hitFundementals.hitLocation, 10, FColor::Purple, false, calculateColorsInfo.drawGetEstimatedColorAtHitLocationDebugSymbolsDuration, 0, 5);

				// All of the 9 closest vertices Paint
				for (auto vertexWorldLocationTemp : calculateColorsInfo.estimatedColorAtHitLocation_ClosestVertexWorldLocationsToTheHitLocation_Paint) {

					DrawDebugBox(calculateColorsInfo.vertexPaintDetectionHitActor->GetWorld(), vertexWorldLocationTemp, FVector(2.5f, 2.5f, 2.5f), FQuat::Identity, FColor::Blue, false, calculateColorsInfo.drawGetEstimatedColorAtHitLocationDebugSymbolsDuration, 0, 3);
				}
			}

			if (calculateColorsInfo.estimatedColorAtHitLocation_VertexToLerpToward_Detect >= 0) {

				// Hit Location
				DrawDebugBox(calculateColorsInfo.vertexPaintDetectionHitActor->GetWorld(), calculateColorsInfo.detectInfoSettings.hitFundementals.hitLocation, FVector(5, 5, 5), FQuat::Identity, FColor::Purple, false, calculateColorsInfo.drawGetEstimatedColorAtHitLocationDebugSymbolsDuration, 0, 3);

				// Vertex we Lerp Toward
				DrawDebugBox(calculateColorsInfo.vertexPaintDetectionHitActor->GetWorld(), calculateColorsInfo.estimatedColorAtHitLocation_VertexToLerpToward_LocationInWorldSpace_Detect, FVector(5, 5, 5), FQuat::Identity, FColor::Yellow, false, calculateColorsInfo.drawGetEstimatedColorAtHitLocationDebugSymbolsDuration, 0, 3);

				// Direction from closest vertex to hit location
				DrawDebugDirectionalArrow(calculateColorsInfo.vertexPaintDetectionHitActor->GetWorld(), calculateColorsInfo.closestVertexPositionToHitLocationAtMinLOD_World_Detect, calculateColorsInfo.detectInfoSettings.hitFundementals.hitLocation, 10, FColor::Purple, false, calculateColorsInfo.drawGetEstimatedColorAtHitLocationDebugSymbolsDuration, 0, 5);


				// All of the 9 closest vertices Paint
				for (auto vertexWorldLocationTemp : calculateColorsInfo.estimatedColorAtHitLocation_ClosestVertexWorldLocationsToTheHitLocation_Detect) {

					DrawDebugBox(calculateColorsInfo.vertexPaintDetectionHitActor->GetWorld(), vertexWorldLocationTemp, FVector(2.5f, 2.5f, 2.5f), FQuat::Identity, FColor::Blue, false, calculateColorsInfo.drawGetEstimatedColorAtHitLocationDebugSymbolsDuration, 0, 3);
				}
			}
		}


		// Estimted Hit Location Surface Value
		if (estimatedColorAtHitLocationResult.physicalSurfaceInfo.physicsSurfaceSuccessfullyAcquired) {

			if (calculateColorsInfo.printLogsToScreen || calculateColorsInfo.printLogsToOutputLog)
				UKismetSystemLibrary::PrintString(GetWorld(), FString::Printf(TEXT("Runtime Vertex Color Paint and Detection Plugin - Physics Surfaces and Color Values at Estimated Color at Hit Location: Default: %s: %f  -  Red: %s: %f  -  Green: %s: %f  -  Blue: %s: %f  -  Alpha: %s: %f"), *estimatedColorAtHitLocationResult.physicalSurfaceInfo.physicsSurface_AtDefault.physicalSurfaceAsStringAtDefault, estimatedColorAtHitLocationResult.physicalSurfaceInfo.physicsSurface_AtDefault.physicalSurfaceValueAtDefault, *estimatedColorAtHitLocationResult.physicalSurfaceInfo.physicsSurface_AtRed.physicalSurfaceAsStringAtRedChannel, estimatedColorAtHitLocationResult.physicalSurfaceInfo.physicsSurface_AtRed.physicalSurfaceValueAtRedChannel, *estimatedColorAtHitLocationResult.physicalSurfaceInfo.physicsSurface_AtGreen.physicalSurfaceAsStringAtGreenChannel, estimatedColorAtHitLocationResult.physicalSurfaceInfo.physicsSurface_AtGreen.physicalSurfaceValueAtGreenChannel, *estimatedColorAtHitLocationResult.physicalSurfaceInfo.physicsSurface_AtBlue.physicalSurfaceAsStringAtBlueChannel, estimatedColorAtHitLocationResult.physicalSurfaceInfo.physicsSurface_AtBlue.physicalSurfaceValueAtBlueChannel, *estimatedColorAtHitLocationResult.physicalSurfaceInfo.physicsSurface_AtAlpha.physicalSurfaceAsStringAtAlphaChannel, estimatedColorAtHitLocationResult.physicalSurfaceInfo.physicsSurface_AtAlpha.physicalSurfaceValueAtAlphaChannel), calculateColorsInfo.printLogsToScreen, calculateColorsInfo.printLogsToOutputLog, FColor::Green, calculateColorsInfo.printLogsToScreen_Duration);
		}

		// If couldn't get physical surface but just colors
		else {

			if (calculateColorsInfo.printLogsToScreen || calculateColorsInfo.printLogsToOutputLog)
				UKismetSystemLibrary::PrintString(GetWorld(), FString::Printf(TEXT("Runtime Vertex Color Paint and Detection Plugin - Couldn't get Physical Surfaces at Estimated Color at Hit Location, perhaps the Hit Material isn't registered in the Material Data Asset?")), calculateColorsInfo.printLogsToScreen, calculateColorsInfo.printLogsToOutputLog, FColor::Orange, calculateColorsInfo.printLogsToScreen_Duration);
		}
	}
}


//-------------------------------------------------------

// Construct Calculate Colors Info

FCalculateColorsInfo UVertexPaintDetectionGISubSystem::ConstructCalculateColorsInfoStruct(const FVertexPaintMultiThreadSettingsStruct& multiThreadSettings, const EVertexPaintDetectionType& paintDetectionType, const FVertexDetectInfoStruct& detectSettings, const FVertexDetectGetColorsOnlyStruct& getAllVertexColorsOnlySettings, const FVertexPaintAtLocationStruct& paintAtLocationSettings, const FVertexPainthWithinAreaStruct& paintWithinAreaSettings, const FVertexPaintOnEntireMeshStruct& paintEntireMeshSettings, const FVertexPaintColorSnippetStruct& paintColorSnippetSettings, const FVertexPaintSetMeshComponentVertexColors& setMeshComponentVertexColorsSettings, const FVertexPaintSetMeshComponentVertexColorsUsingSerializedString& setMeshComponentVertexColorsUsingSerializedStringSettings, const FVertexPaintColorSettingStruct& paintColorSettings, const FVertexPaintStruct& paintOnMeshSettings, const int& lodToLoopThrough, UPrimitiveComponent* component, const FVertexDetectMeshDataStruct& meshVertexData, UVertexPaintDetectionComponent* initiatedByComponent, const FVertexDetectFundementalStruct& fundementalStruct, const FVertexDetectEstimatedColorAtHitLocationStruct& estimatedColorAtHitLocationStruct, const FVertexDetectAdditionalDataToPassThrough& additionalDataToPassThrough) {


	if (multiThreadSettings.useMultithreadingForCalculations && initiatedByComponent) {

		if (initiatedByComponent->atGameThread_drawVertexPositionDebugPoint || initiatedByComponent->atGameThread_drawVertexPositionDebugPointOnVertexThatGotPaintApplied || initiatedByComponent->atGameThread_drawClothVertexPositionDebugPoint || initiatedByComponent->atGameThread_drawVertexNormalDebugArrow) {

			if (initiatedByComponent->printLogsToScreen || initiatedByComponent->printLogsToOutputLog)
				UKismetSystemLibrary::PrintString(GetWorld(), FString::Printf(TEXT("Runtime Vertex Color Paint and Detection Plugin - Paint/Detect Task is set to Draw Debug Symbols at Vertices but it only works if not Multithreading, i.e. on the Game Thread.")), initiatedByComponent->printLogsToScreen, initiatedByComponent->printLogsToOutputLog, FColor::Orange, initiatedByComponent->printLogsToScreen_Duration);
		}
	}


	UObject* sourceMeshTemp = nullptr;
	UStaticMeshComponent* staticMeshComponentTemp = nullptr;
	USplineMeshComponent* splineMeshComponentTemp = nullptr;
	USkeletalMeshComponent* skeletalMeshComponentTemp = nullptr;

	staticMeshComponentTemp = Cast<UStaticMeshComponent>(component);

	if (staticMeshComponentTemp) {

		sourceMeshTemp = staticMeshComponentTemp->GetStaticMesh();
		splineMeshComponentTemp = Cast<USplineMeshComponent>(component);
	}

	else {

		skeletalMeshComponentTemp = Cast<USkeletalMeshComponent>(component);

		if (skeletalMeshComponentTemp) {

#if ENGINE_MAJOR_VERSION == 4

			sourceMeshTemp = skeletalMeshComponentTemp->SkeletalMesh;

#elif ENGINE_MAJOR_VERSION == 5

#if ENGINE_MINOR_VERSION == 0

			sourceMeshTemp = skeletalMeshComponentTemp->SkeletalMesh.Get();

#else

			sourceMeshTemp = skeletalMeshComponentTemp->GetSkeletalMeshAsset();

#endif
#endif
		}
	}


	FCalculateColorsInfo calculateColorsInfoTemp;
	calculateColorsInfoTemp.paintDetectionType = paintDetectionType;
	calculateColorsInfoTemp.multiThreadSettings = multiThreadSettings;
	calculateColorsInfoTemp.initiatedByComponent = initiatedByComponent;
	calculateColorsInfoTemp.lodsToLoopThrough = lodToLoopThrough;
	calculateColorsInfoTemp.vertexPaintDetectionHitActor = component->GetOwner();
	calculateColorsInfoTemp.vertexPaintComponent = component;
	calculateColorsInfoTemp.vertexPaintStaticMeshComponent = staticMeshComponentTemp;
	calculateColorsInfoTemp.vertexPaintSplineMeshComponent = splineMeshComponentTemp;
	calculateColorsInfoTemp.vertexPaintSkelComponent = skeletalMeshComponentTemp;
	calculateColorsInfoTemp.vertexPaintSourceMesh = sourceMeshTemp;
	calculateColorsInfoTemp.meshVertexData = meshVertexData;
	calculateColorsInfoTemp.fundementalStruct = fundementalStruct;
	calculateColorsInfoTemp.paintOnMeshAtLocationSettings = paintAtLocationSettings;
	calculateColorsInfoTemp.paintOnMeshWithinAreaSettings = paintWithinAreaSettings;
	calculateColorsInfoTemp.paintOnEntireMeshSettings = paintEntireMeshSettings;
	calculateColorsInfoTemp.paintOnColorSnippetSettings = paintColorSnippetSettings;
	calculateColorsInfoTemp.setMeshComponentVertexColorsSettings = setMeshComponentVertexColorsSettings;
	calculateColorsInfoTemp.setMeshComponentVertexColorsUsingSerializedStringSettings = setMeshComponentVertexColorsUsingSerializedStringSettings;
	calculateColorsInfoTemp.paintOnMeshColorSettings = paintColorSettings;
	calculateColorsInfoTemp.paintOnMeshSettings = paintOnMeshSettings;
	calculateColorsInfoTemp.detectInfoSettings = detectSettings;
	calculateColorsInfoTemp.getAllVertexColorsSettings = getAllVertexColorsOnlySettings;
	calculateColorsInfoTemp.estimatedColorAtHitLocationSettings = estimatedColorAtHitLocationStruct;
	calculateColorsInfoTemp.additionalDataToPassThrough = additionalDataToPassThrough;
	calculateColorsInfoTemp.worldTaskWasCreatedIn = calculateColorsInfoTemp.vertexPaintDetectionHitActor->GetWorld(); // Had to cache the world as well in case component or actor wasn't valid when the task was finished, but we needed to check if the world was valid and start reset timers etc. 


	if (paintDetectionType == EVertexPaintDetectionType::Detection) {

		calculateColorsInfoTemp.isDetectionTask = true;
	}
	else {

		calculateColorsInfoTemp.isPaintTask = true;
	}

	// Paint Color Snippets, Set Mesh Component Verte Colors regularly or with Serialized String only use LOD0 data, so for them we always propogate to other LODs. Paint Randomly over the Entire Mesh however has the option to do this since you might want to randomize on each LOD to save performance
	if (paintColorSnippetSettings.actor || setMeshComponentVertexColorsSettings.actor || setMeshComponentVertexColorsUsingSerializedStringSettings.actor || (paintEntireMeshSettings.actor && paintEntireMeshSettings.paintOnRandomVerticesSettings.paintAtRandomVerticesSpreadOutOverTheEntireMesh && paintEntireMeshSettings.paintOnRandomVerticesSettings.paintAtRandomVerticesSpreadOutOverTheEntireMesh_PropogateLOD0ToAllLODsMethod == Enum_PaintEntireMeshAtRandomVertices_PropogateToLODsMethod::ModifiedEngineMethod)) {

		if (calculateColorsInfoTemp.lodsToLoopThrough > 1)
			calculateColorsInfoTemp.propogateLOD0ToAllLODs = true;
	}

	if (initiatedByComponent) {

		calculateColorsInfoTemp.printLogsToScreen = initiatedByComponent->printLogsToScreen;
		calculateColorsInfoTemp.printLogsToScreen_Duration = initiatedByComponent->printLogsToScreen_Duration;
		calculateColorsInfoTemp.printLogsToOutputLog = initiatedByComponent->printLogsToOutputLog;
		calculateColorsInfoTemp.drawGetClosestVertexDataDebugSymbols = initiatedByComponent->drawGetClosestVertexDataDebugSymbols;
		calculateColorsInfoTemp.drawGetClosestVertexDataDebugSymbolsDuration = initiatedByComponent->drawGetClosestVertexDataDebugSymbolsDuration;
		calculateColorsInfoTemp.drawGetEstimatedColorAtHitLocationDebugSymbolsDuration = initiatedByComponent->drawGetEstimatedColorAtHitLocationDebugSymbolsDuration;
		calculateColorsInfoTemp.drawVertexPositionDebugPoint = initiatedByComponent->atGameThread_drawVertexPositionDebugPoint;
		calculateColorsInfoTemp.drawVertexPositionDebugPointOnVertexThatGotPaintApplied = initiatedByComponent->atGameThread_drawVertexPositionDebugPointOnVertexThatGotPaintApplied;
		calculateColorsInfoTemp.drawGetEstimatedColorAtHitLocationDebugSymbols = initiatedByComponent->drawGetEstimatedColorAtHitLocationDebugSymbols;
		calculateColorsInfoTemp.drawClothVertexPositionDebugPoint = initiatedByComponent->atGameThread_drawClothVertexPositionDebugPoint;
		calculateColorsInfoTemp.drawVertexNormalDebugArrow = initiatedByComponent->atGameThread_drawVertexNormalDebugArrow;
		calculateColorsInfoTemp.drawPaintConditionsDebugSymbols = initiatedByComponent->atGameThread_DrawPaintConditionsDebugSymbols;
		calculateColorsInfoTemp.drawPaintConditionsDebugSymbolsDuration = initiatedByComponent->atGameThread_DrawPaintConditionsDebugSymbolsDuration;
	}

	if (paintWithinAreaSettings.actor) {

		for (auto compsToCheckIfWithinTemp : paintWithinAreaSettings.componentsToCheckIfIsWithin) {


			// We can cache all the things we need such as transform, forward vector etc. so we know where the component was and it's necessary values When the task was created, so in case there is a high task queue and it won't be run until a few seconds later, it will still be calculated from the same place as created. 
			compsToCheckIfWithinTemp.componentToCheckIfIsWithin_ForwardVector = compsToCheckIfWithinTemp.componentToCheckIfIsWithin->GetForwardVector();
			compsToCheckIfWithinTemp.componentToCheckIfIsWithin_RightVector = compsToCheckIfWithinTemp.componentToCheckIfIsWithin->GetRightVector();
			compsToCheckIfWithinTemp.componentToCheckIfIsWithin_UpVector = compsToCheckIfWithinTemp.componentToCheckIfIsWithin->GetUpVector();

			compsToCheckIfWithinTemp.componentToCheckIfIsWithin_Bounds = compsToCheckIfWithinTemp.componentToCheckIfIsWithin->Bounds;
			compsToCheckIfWithinTemp.componentToCheckIfIsWithin->GetOwner()->GetActorBounds(false, compsToCheckIfWithinTemp.componentToCheckIfIsWithin_ActorBounds_Origin, compsToCheckIfWithinTemp.componentToCheckIfIsWithin_ActorBounds_Extent, true);

			compsToCheckIfWithinTemp.componentToCheckIfIsWithin_RelativeScale = compsToCheckIfWithinTemp.componentToCheckIfIsWithin->GetRelativeTransform().GetScale3D();

			// Caches World Transform as well and adjusts it down below so we can save Location, Rotation, Scale in mesh compoent to paint component space. Then when we actually do the Task, we transform those back into World Space, and then re-sets this to be them. So even if the task starts much later then when it was created, and things may have moved since then, we can check things relative to how it was when task was created. 
			compsToCheckIfWithinTemp.componentToCheckIfIsWithin_WorldTransform = compsToCheckIfWithinTemp.componentToCheckIfIsWithin->GetComponentTransform();


			if (auto boxComp = Cast<UBoxComponent>(compsToCheckIfWithinTemp.componentToCheckIfIsWithin)) {

				compsToCheckIfWithinTemp.componentToCheckIfIsWithin_IsBoxComponent = true;
				compsToCheckIfWithinTemp.componentToCheckIfIsWithin_ScaledBoxExtent = boxComp->GetScaledBoxExtent();

				compsToCheckIfWithinTemp.componentToCheckIfIsWithin_IsVertexWithinArea_CubeOrRectangle_SquareXSize = boxComp->GetScaledBoxExtent().X;
				compsToCheckIfWithinTemp.componentToCheckIfIsWithin_IsVertexWithinArea_CubeOrRectangle_SquareYSize = boxComp->GetScaledBoxExtent().Y;
				compsToCheckIfWithinTemp.componentToCheckIfIsWithin_IsVertexWithinArea_CubeOrRectangle_SquareZSize = boxComp->GetScaledBoxExtent().Z;

				if (initiatedByComponent) {

					if (initiatedByComponent->drawPaintWithinAreaDebugSymbols)
						DrawDebugBox(paintWithinAreaSettings.meshComponent->GetWorld(), compsToCheckIfWithinTemp.componentToCheckIfIsWithin_Bounds.GetBox().GetCenter(), compsToCheckIfWithinTemp.componentToCheckIfIsWithin_Bounds.GetBox().GetExtent(), FColor::Red, false, initiatedByComponent->drawPaintWithinAreaDebugSymbolsDuration, 0, 5);
				}
			}

			else if (auto sphereComp = Cast<USphereComponent>(compsToCheckIfWithinTemp.componentToCheckIfIsWithin)) {

				compsToCheckIfWithinTemp.componentToCheckIfIsWithin_IsSphereComponent = true;
				compsToCheckIfWithinTemp.componentToCheckIfIsWithin_IsVertexWithinArea_SphereShape = sphereComp->GetScaledSphereRadius();

				if (initiatedByComponent) {

					if (initiatedByComponent->drawPaintWithinAreaDebugSymbols)
						DrawDebugBox(paintWithinAreaSettings.meshComponent->GetWorld(), compsToCheckIfWithinTemp.componentToCheckIfIsWithin_Bounds.GetBox().GetCenter(), compsToCheckIfWithinTemp.componentToCheckIfIsWithin_Bounds.GetBox().GetExtent(), FColor::Red, false, initiatedByComponent->drawPaintWithinAreaDebugSymbolsDuration, 0, 5);
				}
			}

			else if (auto staticMeshComp = Cast<UStaticMeshComponent>(compsToCheckIfWithinTemp.componentToCheckIfIsWithin)) {

				// Since we can get Get Location on Spline Mesh Components we have to use their Box Get Center so we could still use cached World_Transform for somethings
				if (Cast<USplineMeshComponent>(compsToCheckIfWithinTemp.componentToCheckIfIsWithin)) {


					compsToCheckIfWithinTemp.componentToCheckIfIsWithin_IsSplineMeshComponent = true;
					compsToCheckIfWithinTemp.componentToCheckIfIsWithin_WorldTransform.SetLocation(compsToCheckIfWithinTemp.componentToCheckIfIsWithin_Bounds.GetBox().GetCenter());


					// Gets the AggGeom Bounds so we can get the thickness with any added box collisions the mesh may have. 
					FBoxSphereBounds boundsTemp;
					compsToCheckIfWithinTemp.componentToCheckIfIsWithin->GetBodySetup()->AggGeom.CalcBoxSphereBounds(boundsTemp, compsToCheckIfWithinTemp.componentToCheckIfIsWithin_WorldTransform);

					// Updated the extent thickness so we have the proper one with any added collisions
					compsToCheckIfWithinTemp.componentToCheckIfIsWithin_Bounds.BoxExtent.Z = boundsTemp.BoxExtent.Z;


					FVector adjustedLocationWithMeshBoxOffsetTakenIntoAccount = compsToCheckIfWithinTemp.componentToCheckIfIsWithin->Bounds.GetBox().GetCenter();

					// To get the extent from the correct center location we take added collisions into account as well so the bounds match
					if (staticMeshComp->GetStaticMesh()->GetBodySetup()) {

						if (staticMeshComp->GetStaticMesh()->GetBodySetup()->AggGeom.GetElementCount() > 0) {

							float differenceFromMeshLocationAndBoxCollisionZ = 0;


							for (int i = 0; i < staticMeshComp->GetStaticMesh()->GetBodySetup()->AggGeom.BoxElems.Num(); i++)
								differenceFromMeshLocationAndBoxCollisionZ += staticMeshComp->GetStaticMesh()->GetBodySetup()->AggGeom.BoxElems[i].Center.Z;

							for (int i = 0; i < compsToCheckIfWithinTemp.componentToCheckIfIsWithin->GetBodySetup()->AggGeom.ConvexElems.Num(); i++)
								differenceFromMeshLocationAndBoxCollisionZ += compsToCheckIfWithinTemp.componentToCheckIfIsWithin->GetBodySetup()->AggGeom.ConvexElems[i].GetTransform().GetLocation().Z;

							for (int i = 0; i < compsToCheckIfWithinTemp.componentToCheckIfIsWithin->GetBodySetup()->AggGeom.SphereElems.Num(); i++)
								differenceFromMeshLocationAndBoxCollisionZ += compsToCheckIfWithinTemp.componentToCheckIfIsWithin->GetBodySetup()->AggGeom.SphereElems[i].Center.Z;

							for (int i = 0; i < compsToCheckIfWithinTemp.componentToCheckIfIsWithin->GetBodySetup()->AggGeom.SphylElems.Num(); i++)
								differenceFromMeshLocationAndBoxCollisionZ += compsToCheckIfWithinTemp.componentToCheckIfIsWithin->GetBodySetup()->AggGeom.SphylElems[i].Center.Z;

							for (int i = 0; i < compsToCheckIfWithinTemp.componentToCheckIfIsWithin->GetBodySetup()->AggGeom.TaperedCapsuleElems.Num(); i++)
								differenceFromMeshLocationAndBoxCollisionZ += compsToCheckIfWithinTemp.componentToCheckIfIsWithin->GetBodySetup()->AggGeom.TaperedCapsuleElems[i].Center.Z;


							differenceFromMeshLocationAndBoxCollisionZ /= staticMeshComp->GetStaticMesh()->GetBodySetup()->AggGeom.GetElementCount();
							adjustedLocationWithMeshBoxOffsetTakenIntoAccount.Z += differenceFromMeshLocationAndBoxCollisionZ;

							// Sets World Transform Location to be the adjusted location so it's at the Real Center
							compsToCheckIfWithinTemp.componentToCheckIfIsWithin_WorldTransform.SetLocation(adjustedLocationWithMeshBoxOffsetTakenIntoAccount);
						}
					}


					if (initiatedByComponent) {

						if (initiatedByComponent->drawPaintWithinAreaDebugSymbols) {

							DrawDebugBox(paintWithinAreaSettings.meshComponent->GetWorld(), compsToCheckIfWithinTemp.componentToCheckIfIsWithin_WorldTransform.GetLocation(), compsToCheckIfWithinTemp.componentToCheckIfIsWithin_Bounds.BoxExtent, FColor::Red, false, initiatedByComponent->drawPaintWithinAreaDebugSymbolsDuration, 0, 5);
						}
					}
				}

				else {

					compsToCheckIfWithinTemp.componentToCheckIfIsWithin_IsStaticMeshComponent = true;

					// Calc Box Sphere Bounds Without taking the Rotation into account, this is because if for instance a rectangle is rotated, then that affects the bounds and the result we would get here would be the correct extents of the mesh and it's collision, and it is the Extent that is what we're after
					FTransform transformWithoutRotation_Local;
					transformWithoutRotation_Local.SetLocation(compsToCheckIfWithinTemp.componentToCheckIfIsWithin_WorldTransform.GetLocation());
					transformWithoutRotation_Local.SetScale3D(FVector(1, 1, 1));

					// Always runs this so we have proper Bounds no matter what paint within area type, so even if complex shape on static mesh component etc. 
					compsToCheckIfWithinTemp.componentToCheckIfIsWithin->GetBodySetup()->AggGeom.CalcBoxSphereBounds(compsToCheckIfWithinTemp.componentToCheckIfIsWithin_CleanAggGeomBounds, transformWithoutRotation_Local);

					// Also gets the Bounds but with Actual Rotation and Scale taken into account
					transformWithoutRotation_Local.SetScale3D(compsToCheckIfWithinTemp.componentToCheckIfIsWithin_WorldTransform.GetScale3D());
					transformWithoutRotation_Local.SetRotation(compsToCheckIfWithinTemp.componentToCheckIfIsWithin_WorldTransform.GetRotation());
					compsToCheckIfWithinTemp.componentToCheckIfIsWithin->GetBodySetup()->AggGeom.CalcBoxSphereBounds(compsToCheckIfWithinTemp.componentToCheckIfIsWithin_Bounds, transformWithoutRotation_Local);


					// If a Cube / Rectangle then checks if it has box collisions in it's static mesh, if so then we have to adjust the world transform so that it's location is in the center between the actor and the collision. For instance if you have a floor, with added box collision underneath it that stretches 1M, without this we would get the bounds offset since the location of the actor is at the floor height. But with this we can get the actual center location of the Bounds since it takes into account the box collision
					if (compsToCheckIfWithinTemp.paintWithinAreaShape == Enum_PaintWithinAreaShape::isSquareOrRectangleShape) {

						// To get the extent from the correct center location that takes added box collision into account we had to do this. 
						if (compsToCheckIfWithinTemp.componentToCheckIfIsWithin->GetBodySetup()) {


							FVector adjustedLocationWithMeshBoxOffsetTakenIntoAccount = compsToCheckIfWithinTemp.componentToCheckIfIsWithin->Bounds.GetBox().GetCenter();
							float differenceFromMeshLocationAndBoxCollisionZ = 0;


							if (compsToCheckIfWithinTemp.componentToCheckIfIsWithin->GetBodySetup()->AggGeom.BoxElems.Num() > 0) {

								// Sets them to a very high values so we will always set the min and max values down below. If they where 0 we would've had an issue where if for instance there where two boxes at -50 and -100, then none would be higher then maxValue 0 and -50 wouldn't get set to be the maxValue as it should. 
								float maxZValue_Local = -10000000;
								float minZValue_Local = 10000000;

								for (int i = 0; i < compsToCheckIfWithinTemp.componentToCheckIfIsWithin->GetBodySetup()->AggGeom.BoxElems.Num(); i++) {

									// Gets the current min and max values based on their position and their extent
									float currentBoxMaxZ = compsToCheckIfWithinTemp.componentToCheckIfIsWithin->GetBodySetup()->AggGeom.BoxElems[i].Center.Z + (compsToCheckIfWithinTemp.componentToCheckIfIsWithin->GetBodySetup()->AggGeom.BoxElems[i].Z / 2);

									float currentBoxMinZ = compsToCheckIfWithinTemp.componentToCheckIfIsWithin->GetBodySetup()->AggGeom.BoxElems[i].Center.Z - (compsToCheckIfWithinTemp.componentToCheckIfIsWithin->GetBodySetup()->AggGeom.BoxElems[i].Z / 2);


									// Caches the the Highest and Lowest Z, so we can get the correct center point of them for the bounds
									if (currentBoxMaxZ > maxZValue_Local)
										maxZValue_Local = currentBoxMaxZ;

									if (currentBoxMinZ < minZValue_Local)
										minZValue_Local = currentBoxMinZ;
								}

								// The Middle point between the max and min values
								differenceFromMeshLocationAndBoxCollisionZ = (maxZValue_Local + minZValue_Local) / 2;
							}

							adjustedLocationWithMeshBoxOffsetTakenIntoAccount.Z += differenceFromMeshLocationAndBoxCollisionZ;


							// Sets World Transform Location to be the adjusted location so it's at the Real Center
							compsToCheckIfWithinTemp.componentToCheckIfIsWithin_WorldTransform.SetLocation(adjustedLocationWithMeshBoxOffsetTakenIntoAccount);

							// If there's more than 1 Box, and they're not centered on top of eachother then it seizes to be a Square or Rectangle, so throws a Error warning about that if there's more than 1. Should be a pretty rare case though. 
							if (compsToCheckIfWithinTemp.componentToCheckIfIsWithin->GetBodySetup()->AggGeom.BoxElems.Num() > 1) {

								if (initiatedByComponent) {

									if (initiatedByComponent->printLogsToScreen || initiatedByComponent->printLogsToOutputLog)
										UKismetSystemLibrary::PrintString(GetWorld(), FString::Printf(TEXT("Runtime Vertex Color Paint and Detection Plugin - Paint Within Area with Square or Rectangle for Static Mesh Component. NOTE That the Static Mesh has more than 1 Box Collision under it. If they're not centered then then it's not a Square or Rectangle anymore and the Result may not be the expected one. ")), initiatedByComponent->printLogsToScreen, initiatedByComponent->printLogsToOutputLog, FColor::Orange, initiatedByComponent->printLogsToScreen_Duration);
								}
							}
						}

						compsToCheckIfWithinTemp.componentToCheckIfIsWithin_IsVertexWithinArea_CubeOrRectangle_SquareXSize = compsToCheckIfWithinTemp.componentToCheckIfIsWithin_CleanAggGeomBounds.GetBox().GetExtent().X * compsToCheckIfWithinTemp.componentToCheckIfIsWithin_WorldTransform.GetScale3D().X;
						compsToCheckIfWithinTemp.componentToCheckIfIsWithin_IsVertexWithinArea_CubeOrRectangle_SquareYSize = compsToCheckIfWithinTemp.componentToCheckIfIsWithin_CleanAggGeomBounds.GetBox().GetExtent().Y * compsToCheckIfWithinTemp.componentToCheckIfIsWithin_WorldTransform.GetScale3D().Y;
						compsToCheckIfWithinTemp.componentToCheckIfIsWithin_IsVertexWithinArea_CubeOrRectangle_SquareZSize = compsToCheckIfWithinTemp.componentToCheckIfIsWithin_CleanAggGeomBounds.GetBox().GetExtent().Z * compsToCheckIfWithinTemp.componentToCheckIfIsWithin_WorldTransform.GetScale3D().Z;
					}

					// Uses AggGeom Bounds so we get the correct bounds even if the mesh is 1, 1, 1 in scale but much larger than 50cm radius
					else if (compsToCheckIfWithinTemp.paintWithinAreaShape == Enum_PaintWithinAreaShape::isSphereShape) {

						compsToCheckIfWithinTemp.componentToCheckIfIsWithin_IsVertexWithinArea_SphereShape = (compsToCheckIfWithinTemp.componentToCheckIfIsWithin_CleanAggGeomBounds.SphereRadius * compsToCheckIfWithinTemp.componentToCheckIfIsWithin->GetComponentTransform().GetScale3D().X);;
					}

					if (initiatedByComponent) {

						if (initiatedByComponent->drawPaintWithinAreaDebugSymbols)
							DrawDebugBox(paintWithinAreaSettings.meshComponent->GetWorld(), compsToCheckIfWithinTemp.componentToCheckIfIsWithin_WorldTransform.GetLocation(), compsToCheckIfWithinTemp.componentToCheckIfIsWithin_CleanAggGeomBounds.GetBox().GetExtent() * compsToCheckIfWithinTemp.componentToCheckIfIsWithin_WorldTransform.GetScale3D(), FColor::Red, false, initiatedByComponent->drawPaintWithinAreaDebugSymbolsDuration, 0, 5);
					}
				}
			}

			else if (auto skeletalMeshComp = Cast<USkeletalMeshComponent>(compsToCheckIfWithinTemp.componentToCheckIfIsWithin)) {


				USkeletalMesh* paintWithinAreaSkelMeshTemp = nullptr;

#if ENGINE_MAJOR_VERSION == 4

				paintWithinAreaSkelMeshTemp = skeletalMeshComp->SkeletalMesh;

#elif ENGINE_MAJOR_VERSION == 5

#if ENGINE_MINOR_VERSION == 0

				paintWithinAreaSkelMeshTemp = skeletalMeshComp->SkeletalMesh.Get();

#else

				paintWithinAreaSkelMeshTemp = skeletalMeshComp->GetSkeletalMeshAsset();

#endif

#endif


				compsToCheckIfWithinTemp.componentToCheckIfIsWithin_Bounds = paintWithinAreaSkelMeshTemp->GetPhysicsAsset()->CalcAABB(skeletalMeshComp, skeletalMeshComp->GetComponentTransform());

				FVector locationTemp = compsToCheckIfWithinTemp.componentToCheckIfIsWithin_WorldTransform.GetLocation();
				locationTemp.Z += compsToCheckIfWithinTemp.componentToCheckIfIsWithin_Bounds.GetBox().GetCenter().Z - compsToCheckIfWithinTemp.componentToCheckIfIsWithin_WorldTransform.GetLocation().Z;
				compsToCheckIfWithinTemp.componentToCheckIfIsWithin_WorldTransform.SetLocation(locationTemp);

				compsToCheckIfWithinTemp.componentToCheckIfIsWithin_IsSkeletalMeshComponent = true;


				if (initiatedByComponent) {

					if (initiatedByComponent->drawPaintWithinAreaDebugSymbols)
						DrawDebugBox(paintWithinAreaSettings.meshComponent->GetWorld(), compsToCheckIfWithinTemp.componentToCheckIfIsWithin_WorldTransform.GetLocation(), compsToCheckIfWithinTemp.componentToCheckIfIsWithin_Bounds.GetBox().GetExtent(), FColor::Red, false, initiatedByComponent->drawPaintWithinAreaDebugSymbolsDuration, 0, 5);
				}
			}

			else if (Cast<ALandscape>(compsToCheckIfWithinTemp.componentToCheckIfIsWithin->GetOwner())) {

				compsToCheckIfWithinTemp.componentToCheckIfIsWithin_IsLandscape = true;

				if (initiatedByComponent) {

					if (initiatedByComponent->drawPaintWithinAreaDebugSymbols)
						DrawDebugBox(paintWithinAreaSettings.meshComponent->GetWorld(), compsToCheckIfWithinTemp.componentToCheckIfIsWithin_Bounds.GetBox().GetCenter(), compsToCheckIfWithinTemp.componentToCheckIfIsWithin_Bounds.GetBox().GetExtent(), FColor::Red, false, initiatedByComponent->drawPaintWithinAreaDebugSymbolsDuration, 0, 5);
				}
			}


			// After any adjustments to world transform, saves the location in meshComponent that we're gonna paint space, so we know relative to it, the componentToCheckIfIsWithin is. So when the task is finally run, we can convert it from that to world again, and check, where was it and what vertices are within it. Fixes any issue where paint within area is run and the task queue is high etc. 
			compsToCheckIfWithinTemp.componentToCheckIfIsWithin_LocationInMeshComponentToPaintSpace = UKismetMathLibrary::InverseTransformLocation(paintWithinAreaSettings.meshComponent->GetComponentTransform(), compsToCheckIfWithinTemp.componentToCheckIfIsWithin_WorldTransform.GetLocation());

			compsToCheckIfWithinTemp.componentToCheckIfIsWithin_RotationInMeshComponentToPaintSpace = UKismetMathLibrary::InverseTransformRotation(paintWithinAreaSettings.meshComponent->GetComponentTransform(), compsToCheckIfWithinTemp.componentToCheckIfIsWithin_WorldTransform.GetRotation().Rotator());

			compsToCheckIfWithinTemp.componentToCheckIfIsWithin_ScaleInMeshComponentToPaintSpace = UKismetMathLibrary::InverseTransformLocation(paintWithinAreaSettings.meshComponent->GetComponentTransform(), compsToCheckIfWithinTemp.componentToCheckIfIsWithin_WorldTransform.GetScale3D());


			calculateColorsInfoTemp.paintOnMeshWithinArea_ComponentsToCheckIfIsWithinInfo.Add(compsToCheckIfWithinTemp);
		}
	}

	return calculateColorsInfoTemp;
}


//-------------------------------------------------------

// Reset Thread Pool

void UVertexPaintDetectionGISubSystem::ResetThreadPool() {

	if (vertexColorPaint_QueueThreadPool && calculateColorsPaintQueue.Num() <= 0) {

		UE_LOG(LogTemp, Log, TEXT("Runtime Vertex Color Paint and Detection Plugin - Reset Thread Pool!"));

		vertexColorPaint_QueueThreadPool->Destroy();
		delete vertexColorPaint_QueueThreadPool;
		vertexColorPaint_QueueThreadPool = nullptr;
	}
}


//--------------------------------------------------------

// Apply Vertex Colors To Mesh Component

void UVertexPaintDetectionGISubSystem::ApplyVertexColorsToMeshComponent(UPrimitiveComponent* meshComp, TArray<FColorVertexBuffer*> newVertexColorBuffer) {

	if (IsValid(meshComp)) {

		meshesPaintedOnSinceSessionStarted.Add(meshComp, 0);
	}


	if (auto staticMeshComponent = Cast<UStaticMeshComponent>(meshComp)) {


		int lodMax_Local = newVertexColorBuffer.Num();

		// Had to run this as it seemed spawned meshes with 1 LOD didn't get painted properly otherwise. 
		if (staticMeshComponent->LODData.Num() < lodMax_Local) {

			staticMeshComponent->SetLODDataCount(lodMax_Local, lodMax_Local);
		}


		FStaticMeshComponentLODInfo* LODInfo_Local = nullptr;

		for (int i = 0; i < newVertexColorBuffer.Num(); i++) {

			if (!newVertexColorBuffer[i]) break;

			if (newVertexColorBuffer[i]->GetNumVertices() <= 0) break;

			LODInfo_Local = &staticMeshComponent->LODData[i];

			// Adds it to a array of old color buffers that we .CleanUp after a short delay when it is safe. RenderThread is 1-2 frames behind GameThread
			AddColorVertexBufferToBufferCleanup(staticMeshComponent->GetWorld(), LODInfo_Local->OverrideVertexColors);

			LODInfo_Local->OverrideVertexColors = newVertexColorBuffer[i];

			// Initialize resource and mark render state of object as dirty in order for the engine to re-render it
			BeginInitResource(LODInfo_Local->OverrideVertexColors);
		}

		staticMeshComponent->MarkRenderStateDirty();
	}

	else if (auto skeletalMeshComponent = Cast<USkeletalMeshComponent>(meshComp)) {

		FSkelMeshComponentLODInfo* LODInfo_Local = nullptr;

		for (int i = 0; i < newVertexColorBuffer.Num(); i++) {

			LODInfo_Local = &skeletalMeshComponent->LODInfo[i];

			// Adds it to a array of old color buffers that we .CleanUp after a short delay when it is safe. RenderThread is 1-2 frames behind GameThread
			AddColorVertexBufferToBufferCleanup(skeletalMeshComponent->GetWorld(), LODInfo_Local->OverrideVertexColors);

			LODInfo_Local->OverrideVertexColors = newVertexColorBuffer[i];

			BeginInitResource(LODInfo_Local->OverrideVertexColors);
		}

		skeletalMeshComponent->MarkRenderStateDirty();
	}
}


//--------------------------------------------------------

// Add Color Vertex Buffer To Buffer Cleanup

void UVertexPaintDetectionGISubSystem::AddColorVertexBufferToBufferCleanup(UWorld* world, FColorVertexBuffer* colorVertexBuffer) {

	if (!IsValid(world) || !colorVertexBuffer) return;

	FColorVertexBuffer* colorVertexBuffer_Local = colorVertexBuffer;

	// Releases Resource on the Render Thread so we can Delete the vertex buffer ptr after a short delay when it isn't used by the render thread. 
	AsyncTask(ENamedThreads::GetRenderThread(), [colorVertexBuffer_Local]() {

		colorVertexBuffer_Local->ReleaseResource();
		});

	oldVertexColorBufferPtrs.Add(colorVertexBuffer_Local);
	cleanupOldVertexColorBufferTimers.Add(FTimerHandle());

	// Cleans up Old Color Vertex Buffer for this LOD after a short delay when it is not used any more (RenderThread is 1-2 frames behind GameThread)
	world->GetTimerManager().SetTimer(cleanupOldVertexColorBufferTimers[cleanupOldVertexColorBufferTimers.Num() - 1], this, &UVertexPaintDetectionGISubSystem::CleanUpOldVertexColorBuffer, 0.3, false);
}


//--------------------------------------------------------

// Clean Up Old Vertex Color Buffer - Since RenderThreap is 1-2 frames behind Game Thread we have to CleanUp old Color Vertex Buffer after a delay to not get the issue where the Mesh looks completely clean if you continously paint it every frame, and to avoid a memory leak where old buffers remain in memory with their data. 

void UVertexPaintDetectionGISubSystem::CleanUpOldVertexColorBuffer() {


	oldVertexColorBufferPtrs[0]->CleanUp();
	delete oldVertexColorBufferPtrs[0];

	oldVertexColorBufferPtrs.RemoveAt(0);
	cleanupOldVertexColorBufferTimers.RemoveAt(0);
}


//-------------------------------------------------------

// Deinitialize

void UVertexPaintDetectionGISubSystem::Deinitialize() {

	UE_LOG(LogTemp, Log, TEXT("Runtime Vertex Color Paint and Detection Plugin Game Instance Subsystem De-Initialized"));
}
