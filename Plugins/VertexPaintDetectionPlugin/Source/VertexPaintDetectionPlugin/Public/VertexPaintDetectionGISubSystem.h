// Copyright 2022 Alexander Floden, Alias Alex River. All Rights Reserved. 

#pragma once

#include "CoreMinimal.h"
#include "Subsystems/GameInstanceSubsystem.h"
#include "Misc/QueuedThreadPool.h"
#include "VertexPaintDetectionStructs.h"
#include "VertexPaintDetectionGISubSystem.generated.h"


// Had to move Task Queue Logic to a Game Instance Subsystem from the Engine Subsystem because there was issues otherwise when playing Multiplayer in PIE since then the clients have the same engine subsystem and thus the same queue, which meant that it got 2 tasks added for the same job. 



/**
 *
 */
UCLASS()
class VERTEXPAINTDETECTIONPLUGIN_API UVertexPaintDetectionGISubSystem : public UGameInstanceSubsystem {

	GENERATED_BODY()

public:

	virtual void Initialize(FSubsystemCollectionBase& Collection) override;
	virtual void Deinitialize() override;


	void SetMeshComponentVertexColors(FVertexPaintSetMeshComponentVertexColors setMeshComponentVertexColorsSettings, FVertexDetectAdditionalDataToPassThrough additionalDataToPassThrough);

	void SetMeshComponentVertexColorsUsingSerializedString(FVertexPaintSetMeshComponentVertexColorsUsingSerializedString setMeshComponentVertexColorsUsingSerializedStringSettings, FVertexDetectAdditionalDataToPassThrough additionalDataToPassThrough);

	void GetClosestVertexDataOnMesh_WrapUp(const FCalculateColorsInfo& calculateColorsInfo, const FVertexDetectInfoStruct& detectStruct, const FColor& closestColor, const FColor& avarageColor, const FLinearColor& estimatedColorAtHitLocation, const TArray<FVector2D>& closestVertexUV_Detection);

	void GetAllVertexColorsOnly_WrapUp(const FCalculateColorsInfo& calculateColorsInfo);

	void PaintOnMeshAtLocation_WrapUp(const FCalculateColorsInfo& calculateColorsInfo, const TArray<FVector2D>& closestVertexUV_Painting, const bool& appliedColorsWillMakeChange);

	void PaintWithinArea_WrapUp(const FCalculateColorsInfo& calculateColorsInfo, const bool& appliedColorsWillMakeChange);

	void PaintOnEntireMesh_WrapUp(const FCalculateColorsInfo& calculateColorsInfo, const bool& appliedColorsWillMakeChange);

	void PaintColorSnippet_WrapUp(const FCalculateColorsInfo& calculateColorsInfo, const bool& appliedColorsWillMakeChange);

	void ApplyColorsDirectly_WrapUp(const FCalculateColorsInfo& calculateColorsInfo, const bool& appliedColorsWillMakeChange);

	bool GetWillAppliedColorsMakeChange(const FCalculateColorsInfo& calculateColorsInfo);

	void RunCallbacks(const bool& runCallbackForGetClosestVertexData, const bool& runCallbackForGetColorsOnly, const bool& runCallbackForPaintAtLocation, const bool& runCallbackForPaintWithinArea, const bool& runCallbackForPaintEntireMesh, const bool& runCallbackForPaintColorSnippet, const bool& runCallbackSetMeshVertexColors, const bool& runCallbackSetMeshVertexColorsUsingSerializedString, const FCalculateColorsInfo& calculateColorsInfo, const FVertexDetectEventSettings& eventSettings, const FVertexDetectClosestVertexDataResultStruct& closestVertexColorResult, const FVertexDetectEstimatedColorAtHitLocationResultStruct& estimatedColorAtHitLocationResult, const FVertexDetectAvarageColorInAreaInfo& avarageColor);

	FCalculateColorsInfo ConstructCalculateColorsInfoStruct(const FVertexPaintMultiThreadSettingsStruct& multiThreadSettings, const EVertexPaintDetectionType& paintDetectionType, const FVertexDetectInfoStruct& detectSettings, const FVertexDetectGetColorsOnlyStruct& getAllVertexColorsOnlySettings, const FVertexPaintAtLocationStruct& paintAtLocationSettings, const FVertexPainthWithinAreaStruct& paintWithinAreaSettings, const FVertexPaintOnEntireMeshStruct& paintEntireMeshSettings, const FVertexPaintColorSnippetStruct& paintColorSnippetSettings, const FVertexPaintSetMeshComponentVertexColors& setMeshComponentVertexColorsSettings, const FVertexPaintSetMeshComponentVertexColorsUsingSerializedString& setMeshComponentVertexColorsUsingSerializedStringSettings, const FVertexPaintColorSettingStruct& paintColorSettings, const FVertexPaintStruct& paintOnMeshSettings, const int& lodToLoopThrough, UPrimitiveComponent* component, const FVertexDetectMeshDataStruct& meshVertexData, UVertexPaintDetectionComponent* initiatedByComponent, const FVertexDetectFundementalStruct& fundementalStruct, const FVertexDetectEstimatedColorAtHitLocationStruct& estimatedColorAtHitLocationStruct, const FVertexDetectAdditionalDataToPassThrough& additionalDataToPassThrough);

	void ClearMeshPaintedSinceSessionStarted() { meshesPaintedOnSinceSessionStarted.Empty(); }

	TMap<UPrimitiveComponent*, int> GetMeshPaintedSinceSessionStarted() { return meshesPaintedOnSinceSessionStarted; }

	void AddCalculateColorsTaskToQueue(FCalculateColorsInfo calculateColorsInfo);

	void StartCalculateColorsTask(const FCalculateColorsInfo& calculateColorsInfo);

	void RemoveCalculateColorsMeshFromPaintTaskQueue(UPrimitiveComponent* meshComp) { if (calculateColorsPaintQueue.Contains(meshComp)) calculateColorsPaintQueue.Remove(meshComp); };

	TMap<UPrimitiveComponent*, FVertexPaintCalculateColorsQueueArrayStruct> GetCalculateColorsPaintTasks() { return calculateColorsPaintQueue; }

	void CalculateColorsTaskFinished(const FCalculateColorsInfo& calculateColorsInfo, const EVertexPaintDetectionTaskResult& paintTaskResult, const TArray<FString>& calculateColorsResultMessage, const bool& paintResultedInChange);

	void ClearCalculateColorsPaintTasks() { calculateColorsPaintQueue.Empty(); }

	TMap<UPrimitiveComponent*, int> GetCalculateColorsPaintTasksAmount();



	void RemoveCalculateColorsMeshFromDetectionTaskQueue(UPrimitiveComponent* meshComp) { if (calculateColorsDetectionQueue.Contains(meshComp)) calculateColorsDetectionQueue.Remove(meshComp); };

	TMap<UPrimitiveComponent*, FVertexPaintCalculateColorsQueueArrayStruct> GetCalculateColorsDetectionTasks() { return calculateColorsDetectionQueue; }

	void ClearCalculateColorsDetectionTasks() { calculateColorsDetectionQueue.Empty(); }

	TMap<UPrimitiveComponent*, int> GetCalculateColorsDetectionTasksAmount();

	TArray<UPhysicalMaterial*> GetAllCachedPhysicsMaterialAssets() { return cachedPhysicalMaterialAssets; }

private:

	void CalculateColorsTask_WrapUp(FCalculateColorsInfo calculateColorsInfo, const EVertexPaintDetectionTaskResult& taskResult, const bool& paintResultedInChange);

	FVertexDetectClosestVertexDataResultStruct GetClosestVertexData(UPrimitiveComponent* meshComp, FVertexDetectClosestVertexDataResultStruct closestVertexDataResult, const int& closestVertexIndex, const FColor& closestVertexColor, const FVector& closestVertexPosition, const FVector& closestVertexNormal, const FCalculateColorsInfo& calculateColorsInfo);

	FVertexDetectPhysicsSurfaceDataStruct GetPhysicsSurfaceData(const FColor& vertexColor, const FCalculateColorsInfo& calculateColorsInfo, UMaterialInterface* material);

	void PrintClosestVertexColorResults(const FVertexDetectClosestVertexDataResultStruct& closestVertexDataResult, const FVertexDetectEstimatedColorAtHitLocationResultStruct& estimatedColorAtHitLocationResult, const float& avarageColorOfEffect, const FCalculateColorsInfo& calculateColorsInfo);

	void ResetThreadPool();

	void CleanUpOldVertexColorBuffer();

	void AddColorVertexBufferToBufferCleanup(UWorld* world, FColorVertexBuffer* colorVertexBuffer);

	void ApplyVertexColorsToMeshComponent(UPrimitiveComponent* meshComp, TArray<FColorVertexBuffer*> newVertexColorBuffer);


	//--------------------------------------------------
	// Properties

	UPROPERTY()
		TMap<UPrimitiveComponent*, FVertexPaintCalculateColorsQueueArrayStruct> calculateColorsPaintQueue;

	UPROPERTY()
		TMap<UPrimitiveComponent*, FVertexPaintCalculateColorsQueueArrayStruct> calculateColorsDetectionQueue;

	UPROPERTY()
		TMap<int32, FCalculateColorsInfo> onGoingAsyncTasks;

	UPROPERTY()
		FTimerHandle vertexColorPaint_QueueThreadPool_ResetTimer;

	UPROPERTY()
		UWorld* vertexColorPaint_QueueThreadPool_ResetTimerWorld = nullptr;

	FQueuedThreadPool* vertexColorPaint_QueueThreadPool = nullptr;

	TArray<FColorVertexBuffer*> oldVertexColorBufferPtrs;

	UPROPERTY()
		TArray<FTimerHandle> cleanupOldVertexColorBufferTimers;

	// TMap so we can always just run .Add, instead of array where we have to run .Contain and only add if not in it
	UPROPERTY()
		TMap<UPrimitiveComponent*, int> meshesPaintedOnSinceSessionStarted;

	UPROPERTY()
		TArray<UPhysicalMaterial*> cachedPhysicalMaterialAssets;
};
