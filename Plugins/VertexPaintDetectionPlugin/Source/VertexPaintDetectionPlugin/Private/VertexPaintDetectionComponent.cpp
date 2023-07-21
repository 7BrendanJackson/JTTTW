// Copyright 2022 Alexander Floden, Alias Alex River. All Rights Reserved. 

#include "VertexPaintDetectionComponent.h"
#include "DrawDebugHelpers.h"
#include "Kismet/KismetMathLibrary.h"
#include "Kismet/KismetStringLibrary.h"
#include "Kismet/GameplayStatics.h"
#include "Engine/AssetManager.h"

#include "VertexPaintDetectionGISubSystem.h"
#include "VertexPaintFunctionLibrary.h"
#include "VertexPaintDetectionInterface.h"
#include "VertexPaintDetectionSettings.h"

#include "VertexPaintMaterialDataAsset.h"
#include "VertexPaintColorSnippetDataAsset.h"

#include "Engine/StaticMesh.h"
#include "StaticMeshResources.h"
#include "Engine/SkeletalMesh.h"
#include "Rendering/SkeletalMeshRenderData.h"

#include "Components/StaticMeshComponent.h"
#include "Components/SkeletalMeshComponent.h"
#include "Components/SplineMeshComponent.h"
#include "Components/BoxComponent.h"
#include "Components/SphereComponent.h"
#include "Landscape.h"


//-------------------------------------------------------

// Construct

UVertexPaintDetectionComponent::UVertexPaintDetectionComponent() {

	PrimaryComponentTick.bCanEverTick = false;

	SetComponentTickEnabled(false);
}


//--------------------------------------------------------

// Begin Play

void UVertexPaintDetectionComponent::BeginPlay() {

	Super::BeginPlay();

	if (UGameplayStatics::GetGameInstance(GetWorld())) {

		vertexPaintGameInstanceSubsystem_Global = UGameplayStatics::GetGameInstance(GetWorld())->GetSubsystem<UVertexPaintDetectionGISubSystem>();
	}

	if (GetDefault<UVertexPaintDetectionSettings>())
		maxAllowedTasksPerMesh = GetDefault<UVertexPaintDetectionSettings>()->vertexPaintAndDetectionPlugin_MaxAmountOfAllowedTasksPerMesh;
}


//-------------------------------------------------------

// Get Closest Vertex Data On Mesh

void UVertexPaintDetectionComponent::GetClosestVertexDataOnMesh(FVertexDetectInfoStruct getClosestVertexDataStruct, FVertexDetectAdditionalDataToPassThrough additionalDataToPassThrough) {


	if (IsValid(getClosestVertexDataStruct.meshComponent)) {

		if (IsValid(getClosestVertexDataStruct.meshComponent->GetOwner()))
			getClosestVertexDataStruct.actor = getClosestVertexDataStruct.meshComponent->GetOwner();
	}


	getClosestVertexDataStruct.hitFundementals.hitLocationInComponentSpace = UKismetMathLibrary::InverseTransformLocation(getClosestVertexDataStruct.meshComponent->GetComponentTransform(), getClosestVertexDataStruct.hitFundementals.hitLocation);

	// Clamps these between 0-1 in case the user set a different value
	getClosestVertexDataStruct.callbackSettings.includeAmountOfPaintedColorsOfEachChannel = UVertexPaintFunctionLibrary::ClampAmountOfPaintedColorsOfEachChannel(getClosestVertexDataStruct.callbackSettings.includeAmountOfPaintedColorsOfEachChannel);


	int lodToLoopThrough_Local = 0;
	FVertexDetectMeshDataStruct meshVertexData;

	if (!CheckIfValid(getClosestVertexDataStruct.meshComponent, getClosestVertexDataStruct.multiThreadSettings, EVertexPaintDetectionType::Detection, getClosestVertexDataStruct, FVertexDetectGetColorsOnlyStruct(), FVertexPaintAtLocationStruct(), FVertexPainthWithinAreaStruct(), FVertexPaintOnEntireMeshStruct(), FVertexPaintColorSnippetStruct(), FVertexPaintColorSettingStruct(), FVertexPaintStruct(), lodToLoopThrough_Local, meshVertexData)) {

		if (printLogsToScreen || printLogsToOutputLog)
			UKismetSystemLibrary::PrintString(GetWorld(), FString::Printf(TEXT("Runtime Vertex Color Paint and Detection Plugin - Check Valid Failed at Get Closest Vertex Data On Mesh!")), printLogsToScreen, printLogsToOutputLog, FColor::Red, printLogsToScreen_Duration);

		// If check valid failed we fill a few essentials so when callback is run, we can still get what settings we failed with etc. 
		FCalculateColorsInfo calculateColorsInfoTemp;
		calculateColorsInfoTemp.detectInfoSettings = getClosestVertexDataStruct;
		calculateColorsInfoTemp.initiatedByComponent = this;
		calculateColorsInfoTemp.additionalDataToPassThrough = additionalDataToPassThrough;

		vertexPaintGameInstanceSubsystem_Global->RunCallbacks(true, false, false, false, false, false, false, false, calculateColorsInfoTemp, getClosestVertexDataStruct.callbackSettings, FVertexDetectClosestVertexDataResultStruct(), FVertexDetectEstimatedColorAtHitLocationResultStruct(), FVertexDetectAvarageColorInAreaInfo());

		return;
	}


	if (printLogsToScreen || printLogsToOutputLog)
		UKismetSystemLibrary::PrintString(GetWorld(), FString::Printf(TEXT("Runtime Vertex Color Paint and Detection Plugin - Get Closest Vertex Data On Mesh CheckValid Successfull. ")), printLogsToScreen, printLogsToOutputLog, FColor::Green, printLogsToScreen_Duration);


	auto calculateColorsInfo_Local = vertexPaintGameInstanceSubsystem_Global->ConstructCalculateColorsInfoStruct(getClosestVertexDataStruct.multiThreadSettings, EVertexPaintDetectionType::Detection, getClosestVertexDataStruct, FVertexDetectGetColorsOnlyStruct(), FVertexPaintAtLocationStruct(), FVertexPainthWithinAreaStruct(), FVertexPaintOnEntireMeshStruct(), FVertexPaintColorSnippetStruct(), FVertexPaintSetMeshComponentVertexColors(), FVertexPaintSetMeshComponentVertexColorsUsingSerializedString(), FVertexPaintColorSettingStruct(), FVertexPaintStruct(), lodToLoopThrough_Local, getClosestVertexDataStruct.meshComponent, meshVertexData, this, getClosestVertexDataStruct, getClosestVertexDataStruct.getEstimatedColorAtHitLocationSettings, additionalDataToPassThrough);

	vertexPaintGameInstanceSubsystem_Global->AddCalculateColorsTaskToQueue(calculateColorsInfo_Local);
}


//-------------------------------------------------------

// Get Vertex Colors Only

void UVertexPaintDetectionComponent::GetAllVertexColorsOnly(FVertexDetectGetColorsOnlyStruct getAllVertexColorsStruct, FVertexDetectAdditionalDataToPassThrough additionalDataToPassThrough) {


	if (IsValid(getAllVertexColorsStruct.meshComponent)) {

		if (IsValid(getAllVertexColorsStruct.meshComponent->GetOwner()))
			getAllVertexColorsStruct.actor = getAllVertexColorsStruct.meshComponent->GetOwner();
	}

	// Clamps these between 0-1 in case the user set a different value
	getAllVertexColorsStruct.callbackSettings.includeAmountOfPaintedColorsOfEachChannel = UVertexPaintFunctionLibrary::ClampAmountOfPaintedColorsOfEachChannel(getAllVertexColorsStruct.callbackSettings.includeAmountOfPaintedColorsOfEachChannel);


	// Re-uses the detectStruct but just sets the DetectVertexColor Setting. Was safest since FVertexDetectInfoStruct is used everywhere and checks if it's .actor is valid. If we where to make a new struct just for Get All Vertex Colors we have to add checks just for that as well, which comes at a risk of creating bugs 
	FVertexDetectInfoStruct detectStruct;
	detectStruct.meshComponent = getAllVertexColorsStruct.meshComponent;
	detectStruct.callbackSettings = getAllVertexColorsStruct.callbackSettings;
	detectStruct.multiThreadSettings = getAllVertexColorsStruct.multiThreadSettings;
	detectStruct.actor = getAllVertexColorsStruct.actor;


	int lodToLoopThrough_Local = 0;
	FVertexDetectMeshDataStruct meshVertexData;

	if (!CheckIfValid(detectStruct.meshComponent, detectStruct.multiThreadSettings, EVertexPaintDetectionType::Detection, detectStruct, getAllVertexColorsStruct, FVertexPaintAtLocationStruct(), FVertexPainthWithinAreaStruct(), FVertexPaintOnEntireMeshStruct(), FVertexPaintColorSnippetStruct(), FVertexPaintColorSettingStruct(), FVertexPaintStruct(), lodToLoopThrough_Local, meshVertexData)) {

		if (printLogsToScreen || printLogsToOutputLog)
			UKismetSystemLibrary::PrintString(GetWorld(), FString::Printf(TEXT("Runtime Vertex Color Paint and Detection Plugin - Check Valid Failed at Get All Vertex Colors Only!")), printLogsToScreen, printLogsToOutputLog, FColor::Red, printLogsToScreen_Duration);

		// If check valid failed we fill a few essentials so when callback is run, we can still get what settings we failed with etc. 
		FCalculateColorsInfo calculateColorsInfoTemp;
		calculateColorsInfoTemp.detectInfoSettings = detectStruct;
		calculateColorsInfoTemp.initiatedByComponent = this;
		calculateColorsInfoTemp.additionalDataToPassThrough = additionalDataToPassThrough;

		vertexPaintGameInstanceSubsystem_Global->RunCallbacks(false, true, false, false, false, false, false, false, calculateColorsInfoTemp, detectStruct.callbackSettings, FVertexDetectClosestVertexDataResultStruct(), FVertexDetectEstimatedColorAtHitLocationResultStruct(), FVertexDetectAvarageColorInAreaInfo());

		return;
	}


	if (printLogsToScreen || printLogsToOutputLog)
		UKismetSystemLibrary::PrintString(GetWorld(), FString::Printf(TEXT("Runtime Vertex Color Paint and Detection Plugin - Get All Vertex Colors Only CheckValid Successfull. ")), printLogsToScreen, printLogsToOutputLog, FColor::Green, printLogsToScreen_Duration);


	auto calculateColorsInfo_Local = vertexPaintGameInstanceSubsystem_Global->ConstructCalculateColorsInfoStruct(detectStruct.multiThreadSettings, EVertexPaintDetectionType::Detection, detectStruct, getAllVertexColorsStruct, FVertexPaintAtLocationStruct(), FVertexPainthWithinAreaStruct(), FVertexPaintOnEntireMeshStruct(), FVertexPaintColorSnippetStruct(), FVertexPaintSetMeshComponentVertexColors(), FVertexPaintSetMeshComponentVertexColorsUsingSerializedString(), FVertexPaintColorSettingStruct(), FVertexPaintStruct(), lodToLoopThrough_Local, detectStruct.meshComponent, meshVertexData, this, detectStruct, FVertexDetectEstimatedColorAtHitLocationStruct(), additionalDataToPassThrough);

	vertexPaintGameInstanceSubsystem_Global->AddCalculateColorsTaskToQueue(calculateColorsInfo_Local);
}


//-------------------------------------------------------

// Paint On Mesh At Location

void UVertexPaintDetectionComponent::PaintOnMeshAtLocation(FVertexPaintAtLocationStruct paintAtLocationStruct, FVertexDetectAdditionalDataToPassThrough additionalDataToPassThrough) {


	if (IsValid(paintAtLocationStruct.meshComponent)) {

		if (IsValid(paintAtLocationStruct.meshComponent->GetOwner()))
			paintAtLocationStruct.actor = paintAtLocationStruct.meshComponent->GetOwner();
	}


	SetPaintConditionLineOfSightToActorLocation(paintAtLocationStruct);

	paintAtLocationStruct.hitFundementals.hitLocationInComponentSpace = UKismetMathLibrary::InverseTransformLocation(paintAtLocationStruct.meshComponent->GetComponentTransform(), paintAtLocationStruct.hitFundementals.hitLocation);


	// Clamps these between 0-1 in case the user set a different value
	paintAtLocationStruct.callbackSettings.includeAmountOfPaintedColorsOfEachChannel = UVertexPaintFunctionLibrary::ClampAmountOfPaintedColorsOfEachChannel(paintAtLocationStruct.callbackSettings.includeAmountOfPaintedColorsOfEachChannel);
	paintAtLocationStruct.limitPaintColor = UVertexPaintFunctionLibrary::ClampPaintLimits(paintAtLocationStruct.limitPaintColor);


	FVertexDetectInfoStruct detectSettingsTemp;

	// Sets these if gonna detect before painting so can use them in case we need to do any checks in check valid etc. 
	if (paintAtLocationStruct.detection.runGetClosestVertexDataOnMeshBeforeApplyingPaint || paintAtLocationStruct.detection.runGetClosestVertexDataOnMeshAfterApplyingPaint) {

		detectSettingsTemp.actor = paintAtLocationStruct.actor;
		detectSettingsTemp.meshComponent = paintAtLocationStruct.meshComponent;
		detectSettingsTemp.multiThreadSettings = paintAtLocationStruct.multiThreadSettings;
		detectSettingsTemp.callbackSettings = paintAtLocationStruct.callbackSettings;
		detectSettingsTemp.getEstimatedColorAtHitLocationSettings = paintAtLocationStruct.getEstimatedColorAtHitLocationSettings;
		detectSettingsTemp.getAverageColorInAreaSettings = paintAtLocationStruct.detection.getAverageColorInAreaSettings;
		detectSettingsTemp.getEstimatedColorAtHitLocationSettings = paintAtLocationStruct.getEstimatedColorAtHitLocationSettings;

		if (paintAtLocationStruct.detection.useCustomHitFundementalsForDetection) {

			detectSettingsTemp.hitFundementals.hitLocation = paintAtLocationStruct.detection.detectHitFundementals.hitLocation;
			detectSettingsTemp.hitFundementals.hitLocationInComponentSpace = UKismetMathLibrary::InverseTransformLocation(paintAtLocationStruct.meshComponent->GetComponentTransform(), paintAtLocationStruct.detection.detectHitFundementals.hitLocation);
			detectSettingsTemp.hitFundementals.hitNormal = paintAtLocationStruct.detection.detectHitFundementals.hitNormal;
			detectSettingsTemp.hitFundementals.optionalFaceIndexForStaticMeshComponents = paintAtLocationStruct.detection.detectHitFundementals.optionalFaceIndexForStaticMeshComponents;
			detectSettingsTemp.hitFundementals.runTaskFor = paintAtLocationStruct.detection.detectHitFundementals.runTaskFor;
			detectSettingsTemp.hitFundementals.hitBone = paintAtLocationStruct.detection.detectHitFundementals.hitBone;
		}

		else {

			detectSettingsTemp.hitFundementals.hitLocation = paintAtLocationStruct.hitFundementals.hitLocation;
			detectSettingsTemp.hitFundementals.hitLocationInComponentSpace = UKismetMathLibrary::InverseTransformLocation(paintAtLocationStruct.meshComponent->GetComponentTransform(), paintAtLocationStruct.hitFundementals.hitLocation);
			detectSettingsTemp.hitFundementals.hitNormal = paintAtLocationStruct.hitFundementals.hitNormal;
			detectSettingsTemp.hitFundementals.optionalFaceIndexForStaticMeshComponents = paintAtLocationStruct.hitFundementals.optionalFaceIndexForStaticMeshComponents;
			detectSettingsTemp.hitFundementals.runTaskFor = paintAtLocationStruct.hitFundementals.runTaskFor;
			detectSettingsTemp.hitFundementals.hitBone = paintAtLocationStruct.hitFundementals.hitBone;
		}
	}

	int lodToLoopThrough_Local = 0;
	FVertexDetectMeshDataStruct meshVertexData;

	if (!CheckIfValid(paintAtLocationStruct.meshComponent, paintAtLocationStruct.multiThreadSettings, EVertexPaintDetectionType::PaintAtLocation, detectSettingsTemp, FVertexDetectGetColorsOnlyStruct(), paintAtLocationStruct, FVertexPainthWithinAreaStruct(), FVertexPaintOnEntireMeshStruct(), FVertexPaintColorSnippetStruct(), paintAtLocationStruct, paintAtLocationStruct, lodToLoopThrough_Local, meshVertexData)) {

		if (printLogsToScreen || printLogsToOutputLog)
			UKismetSystemLibrary::PrintString(GetWorld(), FString::Printf(TEXT("Runtime Vertex Color Paint and Detection Plugin - Check Valid Failed at Paint on Mesh at Location!")), printLogsToScreen, printLogsToOutputLog, FColor::Red, printLogsToScreen_Duration);


		// If check valid failed we fill a few essentials so when callback is run, we can still get what settings we failed with etc. 
		FCalculateColorsInfo calculateColorsInfoTemp;
		calculateColorsInfoTemp.paintOnMeshAtLocationSettings = paintAtLocationStruct;
		calculateColorsInfoTemp.detectInfoSettings = detectSettingsTemp;
		calculateColorsInfoTemp.initiatedByComponent = this;
		calculateColorsInfoTemp.additionalDataToPassThrough = additionalDataToPassThrough;


		vertexPaintGameInstanceSubsystem_Global->RunCallbacks(false, false, true, false, false, false, false, false, calculateColorsInfoTemp, paintAtLocationStruct.callbackSettings, FVertexDetectClosestVertexDataResultStruct(), FVertexDetectEstimatedColorAtHitLocationResultStruct(), FVertexDetectAvarageColorInAreaInfo());

		// If fail and set to run detections then we expect fail callbacks on the get closest vertex data delegates as well
		if (paintAtLocationStruct.detection.runGetClosestVertexDataOnMeshBeforeApplyingPaint)
			vertexPaintGameInstanceSubsystem_Global->RunCallbacks(true, false, false, false, false, false, false, false, calculateColorsInfoTemp, detectSettingsTemp.callbackSettings, FVertexDetectClosestVertexDataResultStruct(), FVertexDetectEstimatedColorAtHitLocationResultStruct(), FVertexDetectAvarageColorInAreaInfo());

		if (paintAtLocationStruct.detection.runGetClosestVertexDataOnMeshAfterApplyingPaint)
			vertexPaintGameInstanceSubsystem_Global->RunCallbacks(true, false, false, false, false, false, false, false, calculateColorsInfoTemp, detectSettingsTemp.callbackSettings, FVertexDetectClosestVertexDataResultStruct(), FVertexDetectEstimatedColorAtHitLocationResultStruct(), FVertexDetectAvarageColorInAreaInfo());

		return;
	}


	if (printLogsToScreen || printLogsToOutputLog)
		UKismetSystemLibrary::PrintString(GetWorld(), FString::Printf(TEXT("Runtime Vertex Color Paint and Detection Plugin - Paint on Mesh at Location CheckValid Successfull. Trying to Apply Color: %s  Area of Effect: %f  Falloff Strength: %f"), *FLinearColor(paintAtLocationStruct.applyVertexColorSettings.redColor, paintAtLocationStruct.applyVertexColorSettings.greenColor, paintAtLocationStruct.applyVertexColorSettings.blueColor, paintAtLocationStruct.applyVertexColorSettings.alphaColor).ToString(), paintAtLocationStruct.paintAtAreaSettings.areaOfEffect, paintAtLocationStruct.paintAtAreaSettings.fallOffStrength), printLogsToScreen, printLogsToOutputLog, FColor::Green, printLogsToScreen_Duration);


	auto calculateColorsInfo_Local = vertexPaintGameInstanceSubsystem_Global->ConstructCalculateColorsInfoStruct(paintAtLocationStruct.multiThreadSettings, EVertexPaintDetectionType::PaintAtLocation, detectSettingsTemp, FVertexDetectGetColorsOnlyStruct(), paintAtLocationStruct, FVertexPainthWithinAreaStruct(), FVertexPaintOnEntireMeshStruct(), FVertexPaintColorSnippetStruct(), FVertexPaintSetMeshComponentVertexColors(), FVertexPaintSetMeshComponentVertexColorsUsingSerializedString(), paintAtLocationStruct, paintAtLocationStruct, lodToLoopThrough_Local, paintAtLocationStruct.meshComponent, meshVertexData, this, paintAtLocationStruct, paintAtLocationStruct.getEstimatedColorAtHitLocationSettings, additionalDataToPassThrough);


	vertexPaintGameInstanceSubsystem_Global->AddCalculateColorsTaskToQueue(calculateColorsInfo_Local);
}


//-------------------------------------------------------

// Paint Within Area

void UVertexPaintDetectionComponent::PaintOnMeshWithinArea(FVertexPainthWithinAreaStruct paintWithinAreaStruct, FVertexDetectAdditionalDataToPassThrough additionalDataToPassThrough) {


	if (IsValid(paintWithinAreaStruct.meshComponent)) {

		if (IsValid(paintWithinAreaStruct.meshComponent->GetOwner()))
			paintWithinAreaStruct.actor = paintWithinAreaStruct.meshComponent->GetOwner();
	}

	SetPaintConditionLineOfSightToActorLocation(paintWithinAreaStruct);


	// Clamps these between 0-1 in case the user set a different value
	paintWithinAreaStruct.callbackSettings.includeAmountOfPaintedColorsOfEachChannel = UVertexPaintFunctionLibrary::ClampAmountOfPaintedColorsOfEachChannel(paintWithinAreaStruct.callbackSettings.includeAmountOfPaintedColorsOfEachChannel);
	paintWithinAreaStruct.limitPaintColor = UVertexPaintFunctionLibrary::ClampPaintLimits(paintWithinAreaStruct.limitPaintColor);


	int lodToLoopThrough_Local = 0;
	FVertexDetectMeshDataStruct meshVertexData;

	if (!CheckIfValid(paintWithinAreaStruct.meshComponent, paintWithinAreaStruct.multiThreadSettings, EVertexPaintDetectionType::PaintWithinArea, FVertexDetectInfoStruct(), FVertexDetectGetColorsOnlyStruct(), FVertexPaintAtLocationStruct(), paintWithinAreaStruct, FVertexPaintOnEntireMeshStruct(), FVertexPaintColorSnippetStruct(), paintWithinAreaStruct, paintWithinAreaStruct, lodToLoopThrough_Local, meshVertexData)) {

		if (printLogsToScreen || printLogsToOutputLog)
			UKismetSystemLibrary::PrintString(GetWorld(), FString::Printf(TEXT("Runtime Vertex Color Paint and Detection Plugin - Check Valid Failed at Paint on Mesh Within Area!")), printLogsToScreen, printLogsToOutputLog, FColor::Red, printLogsToScreen_Duration);

		// If check valid failed we fill a few essentials so when callback is run, we can still get what settings we failed with etc. 
		FCalculateColorsInfo calculateColorsInfoTemp;
		calculateColorsInfoTemp.paintOnMeshWithinAreaSettings = paintWithinAreaStruct;
		calculateColorsInfoTemp.initiatedByComponent = this;
		calculateColorsInfoTemp.additionalDataToPassThrough = additionalDataToPassThrough;

		vertexPaintGameInstanceSubsystem_Global->RunCallbacks(false, false, false, true, false, false, false, false, calculateColorsInfoTemp, paintWithinAreaStruct.callbackSettings, FVertexDetectClosestVertexDataResultStruct(), FVertexDetectEstimatedColorAtHitLocationResultStruct(), FVertexDetectAvarageColorInAreaInfo());

		return;
	}


	if (printLogsToScreen || printLogsToOutputLog)
		UKismetSystemLibrary::PrintString(GetWorld(), FString::Printf(TEXT("Runtime Vertex Color Paint and Detection Plugin - Paint on Mesh Within Area CheckValid Successfull. Trying to Apply Color: %s"), *FLinearColor(paintWithinAreaStruct.applyVertexColorSettings.redColor, paintWithinAreaStruct.applyVertexColorSettings.greenColor, paintWithinAreaStruct.applyVertexColorSettings.blueColor, paintWithinAreaStruct.applyVertexColorSettings.alphaColor).ToString()), printLogsToScreen, printLogsToOutputLog, FColor::Green, printLogsToScreen_Duration);


	auto calculateColorsInfo_Local = vertexPaintGameInstanceSubsystem_Global->ConstructCalculateColorsInfoStruct(paintWithinAreaStruct.multiThreadSettings, EVertexPaintDetectionType::PaintWithinArea, FVertexDetectInfoStruct(), FVertexDetectGetColorsOnlyStruct(), FVertexPaintAtLocationStruct(), paintWithinAreaStruct, FVertexPaintOnEntireMeshStruct(), FVertexPaintColorSnippetStruct(), FVertexPaintSetMeshComponentVertexColors(), FVertexPaintSetMeshComponentVertexColorsUsingSerializedString(), paintWithinAreaStruct, paintWithinAreaStruct, lodToLoopThrough_Local, paintWithinAreaStruct.meshComponent, meshVertexData, this, paintWithinAreaStruct, FVertexDetectEstimatedColorAtHitLocationStruct(), additionalDataToPassThrough);


	vertexPaintGameInstanceSubsystem_Global->AddCalculateColorsTaskToQueue(calculateColorsInfo_Local);
}


//-------------------------------------------------------

// Paint On Entire Mesh

void UVertexPaintDetectionComponent::PaintOnEntireMesh(FVertexPaintOnEntireMeshStruct paintOnEntireMeshStruct, FVertexDetectAdditionalDataToPassThrough additionalDataToPassThrough) {


	if (IsValid(paintOnEntireMeshStruct.meshComponent)) {

		if (IsValid(paintOnEntireMeshStruct.meshComponent->GetOwner()))
			paintOnEntireMeshStruct.actor = paintOnEntireMeshStruct.meshComponent->GetOwner();
	}

	SetPaintConditionLineOfSightToActorLocation(paintOnEntireMeshStruct);


	// Clamps these between 0-1 in case the user set a different value
	paintOnEntireMeshStruct.callbackSettings.includeAmountOfPaintedColorsOfEachChannel = UVertexPaintFunctionLibrary::ClampAmountOfPaintedColorsOfEachChannel(paintOnEntireMeshStruct.callbackSettings.includeAmountOfPaintedColorsOfEachChannel);
	paintOnEntireMeshStruct.limitPaintColor = UVertexPaintFunctionLibrary::ClampPaintLimits(paintOnEntireMeshStruct.limitPaintColor);


	int lodToLoopThrough_Local = 0;
	FVertexDetectMeshDataStruct meshVertexData;

	if (!CheckIfValid(paintOnEntireMeshStruct.meshComponent, paintOnEntireMeshStruct.multiThreadSettings, EVertexPaintDetectionType::PaintEntireMesh, FVertexDetectInfoStruct(), FVertexDetectGetColorsOnlyStruct(), FVertexPaintAtLocationStruct(), FVertexPainthWithinAreaStruct(), paintOnEntireMeshStruct, FVertexPaintColorSnippetStruct(), paintOnEntireMeshStruct, paintOnEntireMeshStruct, lodToLoopThrough_Local, meshVertexData)) {

		if (printLogsToScreen || printLogsToOutputLog)
			UKismetSystemLibrary::PrintString(GetWorld(), FString::Printf(TEXT("Runtime Vertex Color Paint and Detection Plugin - Check Valid Failed at Paint on Entire Mesh!")), printLogsToScreen, printLogsToOutputLog, FColor::Red, printLogsToScreen_Duration);

		// If check valid failed we fill a few essentials so when callback is run, we can still get what settings we failed with etc. 
		FCalculateColorsInfo calculateColorsInfoTemp;
		calculateColorsInfoTemp.paintOnEntireMeshSettings = paintOnEntireMeshStruct;
		calculateColorsInfoTemp.initiatedByComponent = this;
		calculateColorsInfoTemp.additionalDataToPassThrough = additionalDataToPassThrough;


		vertexPaintGameInstanceSubsystem_Global->RunCallbacks(false, false, false, false, true, false, false, false, calculateColorsInfoTemp, paintOnEntireMeshStruct.callbackSettings, FVertexDetectClosestVertexDataResultStruct(), FVertexDetectEstimatedColorAtHitLocationResultStruct(), FVertexDetectAvarageColorInAreaInfo());

		return;
	}


	if (printLogsToScreen || printLogsToOutputLog)
		UKismetSystemLibrary::PrintString(GetWorld(), FString::Printf(TEXT("Runtime Vertex Color Paint and Detection Plugin - Paint on Entire Mesh CheckValid Successfull. Trying to Apply Color: %s"), *FLinearColor(paintOnEntireMeshStruct.applyVertexColorSettings.redColor, paintOnEntireMeshStruct.applyVertexColorSettings.greenColor, paintOnEntireMeshStruct.applyVertexColorSettings.blueColor, paintOnEntireMeshStruct.applyVertexColorSettings.alphaColor).ToString()), printLogsToScreen, printLogsToOutputLog, FColor::Green, printLogsToScreen_Duration);


	auto calculateColorsInfo_Local = vertexPaintGameInstanceSubsystem_Global->ConstructCalculateColorsInfoStruct(paintOnEntireMeshStruct.multiThreadSettings, EVertexPaintDetectionType::PaintEntireMesh, FVertexDetectInfoStruct(), FVertexDetectGetColorsOnlyStruct(), FVertexPaintAtLocationStruct(), FVertexPainthWithinAreaStruct(), paintOnEntireMeshStruct, FVertexPaintColorSnippetStruct(), FVertexPaintSetMeshComponentVertexColors(), FVertexPaintSetMeshComponentVertexColorsUsingSerializedString(), paintOnEntireMeshStruct, paintOnEntireMeshStruct, lodToLoopThrough_Local, paintOnEntireMeshStruct.meshComponent, meshVertexData, this, paintOnEntireMeshStruct, FVertexDetectEstimatedColorAtHitLocationStruct(), additionalDataToPassThrough);


	vertexPaintGameInstanceSubsystem_Global->AddCalculateColorsTaskToQueue(calculateColorsInfo_Local);
}


//--------------------------------------------------------

// Paint Color Snippet on Mesh

void UVertexPaintDetectionComponent::PaintColorSnippetOnMesh(FVertexPaintColorSnippetStruct paintColorSnippetStruct, FVertexDetectAdditionalDataToPassThrough additionalDataToPassThrough) {


	if (IsValid(paintColorSnippetStruct.meshComponent)) {

		if (IsValid(paintColorSnippetStruct.meshComponent->GetOwner()))
			paintColorSnippetStruct.actor = paintColorSnippetStruct.meshComponent->GetOwner();
	}


	// Clamps these between 0-1 in case the user set a different value
	paintColorSnippetStruct.callbackSettings.includeAmountOfPaintedColorsOfEachChannel = UVertexPaintFunctionLibrary::ClampAmountOfPaintedColorsOfEachChannel(paintColorSnippetStruct.callbackSettings.includeAmountOfPaintedColorsOfEachChannel);


	int lodToLoopThrough_Local = 0;
	FVertexDetectMeshDataStruct meshVertexData;

	if (!CheckIfValid(paintColorSnippetStruct.meshComponent, FVertexPaintMultiThreadSettingsStruct(), EVertexPaintDetectionType::PaintColorSnippet, FVertexDetectInfoStruct(), FVertexDetectGetColorsOnlyStruct(), FVertexPaintAtLocationStruct(), FVertexPainthWithinAreaStruct(), FVertexPaintOnEntireMeshStruct(), paintColorSnippetStruct, FVertexPaintColorSettingStruct(), paintColorSnippetStruct, lodToLoopThrough_Local, meshVertexData)) {

		if (printLogsToScreen || printLogsToOutputLog)
			UKismetSystemLibrary::PrintString(GetWorld(), FString::Printf(TEXT("Runtime Vertex Color Paint and Detection Plugin - Check Valid Failed at Paint Color Snippet!")), printLogsToScreen, printLogsToOutputLog, FColor::Red, printLogsToScreen_Duration);

		// If check valid failed we fill a few essentials so when callback is run, we can still get what settings we failed with etc. 
		FCalculateColorsInfo calculateColorsInfoTemp;
		calculateColorsInfoTemp.paintOnColorSnippetSettings = paintColorSnippetStruct;
		calculateColorsInfoTemp.initiatedByComponent = this;
		calculateColorsInfoTemp.additionalDataToPassThrough = additionalDataToPassThrough;


		vertexPaintGameInstanceSubsystem_Global->RunCallbacks(false, false, false, false, false, true, false, false, calculateColorsInfoTemp, paintColorSnippetStruct.callbackSettings, FVertexDetectClosestVertexDataResultStruct(), FVertexDetectEstimatedColorAtHitLocationResultStruct(), FVertexDetectAvarageColorInAreaInfo());

		return;
	}


	if (printLogsToScreen || printLogsToOutputLog)
		UKismetSystemLibrary::PrintString(GetWorld(), FString::Printf(TEXT("Runtime Vertex Color Paint and Detection Plugin - Paint Color Snippet CheckValid Successfull. ")), printLogsToScreen, printLogsToOutputLog, FColor::Green, printLogsToScreen_Duration);



	TMap<FGameplayTag, TSoftObjectPtr<UVertexPaintColorSnippetDataAsset>> availableColorSnippetTags_Local;
	UVertexPaintFunctionLibrary::GetAllMeshColorSnippetsAsTags_Wrapper(paintColorSnippetStruct.meshComponent, availableColorSnippetTags_Local);


	// If colorSnippetTag isn't set, or it's set but the Mesh doesn't have the Color Snippet Tag, and the randomizeAnyColorSnippetTagUnderThisCategory is set, then we can Randomize any available color snippet tag under the category, if there are any. 
	if (paintColorSnippetStruct.colorSnippetTag.IsValid() && availableColorSnippetTags_Local.Contains(paintColorSnippetStruct.colorSnippetTag)) {

		paintColorSnippetStruct.colorSnippetID = paintColorSnippetStruct.colorSnippetTag.GetTagName().ToString();
	}

	else if (paintColorSnippetStruct.randomizeAnyColorSnippetTagUnderThisCategory.IsValid()) {

		TMap<FGameplayTag, TSoftObjectPtr<UVertexPaintColorSnippetDataAsset>> availableColorSnippetTagsAndDataAssets;
		UVertexPaintFunctionLibrary::GetAllMeshColorSnippetsTagsUnderTagCategory_Wrapper(paintColorSnippetStruct.meshComponent, paintColorSnippetStruct.randomizeAnyColorSnippetTagUnderThisCategory, availableColorSnippetTagsAndDataAssets);

		TArray<FGameplayTag> meshTagsUnderCategory_Local;
		availableColorSnippetTagsAndDataAssets.GetKeys(meshTagsUnderCategory_Local);


		if (availableColorSnippetTagsAndDataAssets.Num() > 0) {

			paintColorSnippetStruct.colorSnippetID = meshTagsUnderCategory_Local[UKismetMathLibrary::RandomIntegerInRange(0, availableColorSnippetTagsAndDataAssets.Num() - 1)].GetTagName().ToString();

			// So even if randomizing, the colorSnippetToPaint Tag will match the randomized snippet ID. 
			paintColorSnippetStruct.colorSnippetTag = FGameplayTag::RequestGameplayTag(FName(*paintColorSnippetStruct.colorSnippetID));
		}

		else {

			if (printLogsToScreen || printLogsToOutputLog)
				UKismetSystemLibrary::PrintString(GetWorld(), FString::Printf(TEXT("Runtime Vertex Color Paint and Detection Plugin - Paint Color Snippet Task Failed as it was set to Randomize a Snippet under Category, but we couldn't find any Snippet Tag under the Category for the Mesh: %s"), *paintColorSnippetStruct.meshComponent->GetName()), printLogsToScreen, printLogsToOutputLog, FColor::Red, printLogsToScreen_Duration);

			// If check valid failed we fill a few essentials so when callback is run, we can still get what settings we failed with etc. 
			FCalculateColorsInfo calculateColorsInfoTemp;
			calculateColorsInfoTemp.paintOnColorSnippetSettings = paintColorSnippetStruct;
			calculateColorsInfoTemp.initiatedByComponent = this;

			vertexPaintGameInstanceSubsystem_Global->RunCallbacks(false, false, false, false, false, true, false, false, calculateColorsInfoTemp, paintColorSnippetStruct.callbackSettings, FVertexDetectClosestVertexDataResultStruct(), FVertexDetectEstimatedColorAtHitLocationResultStruct(), FVertexDetectAvarageColorInAreaInfo());

			return;
		}
	}


	bool successfullyStartedAsyncLoadRequest = false;

	// If Color Snippet ID has been set and matches the tag
	if (paintColorSnippetStruct.colorSnippetID == paintColorSnippetStruct.colorSnippetTag.GetTagName().ToString()) {

		// If valid soft ptr
		if (availableColorSnippetTags_Local.FindRef(paintColorSnippetStruct.colorSnippetTag).ToSoftObjectPath().ToString().Len() > 0) {


			TArray<int> currentColorSnippetRequestAsyncTaskIDs_Local;
			colorSnippetAsyncLoadHandleMap.GenerateKeyArray(currentColorSnippetRequestAsyncTaskIDs_Local);

			int randomColorSnippetRequestAsyncTaskID_Local = 0;

			do {
				randomColorSnippetRequestAsyncTaskID_Local = UKismetMathLibrary::RandomIntegerInRange(0, 214748364);
			} while (currentColorSnippetRequestAsyncTaskIDs_Local.Contains(randomColorSnippetRequestAsyncTaskID_Local)); // Randomized to get a unique task ID. 


			TAsyncLoadPriority asyncLoadPriority = FStreamableManager::AsyncLoadHighPriority;
			colorSnippetAsyncLoadHandleMap.Add(randomColorSnippetRequestAsyncTaskID_Local, UAssetManager::GetStreamableManager().RequestAsyncLoad(availableColorSnippetTags_Local.FindRef(paintColorSnippetStruct.colorSnippetTag).ToSoftObjectPath(), FStreamableDelegate::CreateUObject(this, &UVertexPaintDetectionComponent::PaintColorSnippetOnMesh_FinishedLoadingColorSnippetDataAsset, randomColorSnippetRequestAsyncTaskID_Local, paintColorSnippetStruct, additionalDataToPassThrough), asyncLoadPriority, false, false, "Async Loading Color Snippet Data Asset"));

			successfullyStartedAsyncLoadRequest = true;
		}

		else {

			if (printLogsToScreen || printLogsToOutputLog)
				UKismetSystemLibrary::PrintString(GetWorld(), FString::Printf(TEXT("Runtime Vertex Color Paint and Detection Plugin - Paint Color Snippet Fail as we the Snippet Found didn't point to a valid color snippet data asset soft pointer. ")), printLogsToScreen, printLogsToOutputLog, FColor::Red, printLogsToScreen_Duration);
		}
	}

	else {

		if (printLogsToScreen || printLogsToOutputLog)
			UKismetSystemLibrary::PrintString(GetWorld(), FString::Printf(TEXT("Runtime Vertex Color Paint and Detection Plugin - Paint Color Snippet Fail as the Color Snippet ID didn't get set correctly. The Tag you tried to Paint is probably not Registered to this Mesh. If you know it is, try saving and restarting the editor. ")), printLogsToScreen, printLogsToOutputLog, FColor::Red, printLogsToScreen_Duration);
	}


	if (!successfullyStartedAsyncLoadRequest) {

		if (printLogsToScreen || printLogsToOutputLog)
			UKismetSystemLibrary::PrintString(GetWorld(), FString::Printf(TEXT("Runtime Vertex Color Paint and Detection Plugin - Failed to Start Color Snippet Async Load Request and thus the Task!")), printLogsToScreen, printLogsToOutputLog, FColor::Red, printLogsToScreen_Duration);

		// If check valid failed we fill a few essentials so when callback is run, we can still get what settings we failed with etc. 
		FCalculateColorsInfo calculateColorsInfoTemp;
		calculateColorsInfoTemp.paintOnColorSnippetSettings = paintColorSnippetStruct;
		calculateColorsInfoTemp.initiatedByComponent = this;

		vertexPaintGameInstanceSubsystem_Global->RunCallbacks(false, false, false, false, false, true, false, false, calculateColorsInfoTemp, paintColorSnippetStruct.callbackSettings, FVertexDetectClosestVertexDataResultStruct(), FVertexDetectEstimatedColorAtHitLocationResultStruct(), FVertexDetectAvarageColorInAreaInfo());
	}
}


//--------------------------------------------------------

// Paint Color Snippet on Mesh - Finished Loading Color Snippet Data Asset

void UVertexPaintDetectionComponent::PaintColorSnippetOnMesh_FinishedLoadingColorSnippetDataAsset(int finishedID, FVertexPaintColorSnippetStruct paintColorSnippetStruct, FVertexDetectAdditionalDataToPassThrough additionalDataToPassThrough) {


	bool worldValid = true;
	bool successfullyGotColorSnippetDataAsset_Local = false;
	TSharedPtr<FStreamableHandle> finishedStreamableHandle_Local;

	int lodToLoopThrough_Local = 0;
	FVertexDetectMeshDataStruct meshVertexData;


	// Runs Checkvalid again after finished loading in case the mesh component or world has gotten invalid. 
	if (!CheckIfValid(paintColorSnippetStruct.meshComponent, FVertexPaintMultiThreadSettingsStruct(), EVertexPaintDetectionType::PaintColorSnippet, FVertexDetectInfoStruct(), FVertexDetectGetColorsOnlyStruct(), FVertexPaintAtLocationStruct(), FVertexPainthWithinAreaStruct(), FVertexPaintOnEntireMeshStruct(), paintColorSnippetStruct, FVertexPaintColorSettingStruct(), paintColorSnippetStruct, lodToLoopThrough_Local, meshVertexData)) {

		if (printLogsToScreen || printLogsToOutputLog)
			UKismetSystemLibrary::PrintString(GetWorld(), FString::Printf(TEXT("Runtime Vertex Color Paint and Detection Plugin - Check Valid Failed at Paint Color Snippet after Finishing Loading Color Snippet Data Asset!")), printLogsToScreen, printLogsToOutputLog, FColor::Red, printLogsToScreen_Duration);

		// If check valid failed we fill a few essentials so when callback is run, we can still get what settings we failed with etc. 
		FCalculateColorsInfo calculateColorsInfoTemp;
		calculateColorsInfoTemp.paintOnColorSnippetSettings = paintColorSnippetStruct;
		calculateColorsInfoTemp.initiatedByComponent = this;


		vertexPaintGameInstanceSubsystem_Global->RunCallbacks(false, false, false, false, false, true, false, false, calculateColorsInfoTemp, paintColorSnippetStruct.callbackSettings, FVertexDetectClosestVertexDataResultStruct(), FVertexDetectEstimatedColorAtHitLocationResultStruct(), FVertexDetectAvarageColorInAreaInfo());

		return;
	}


	TArray<int> currentColorSnippetRequestAsyncTaskIDs_Local;
	colorSnippetAsyncLoadHandleMap.GenerateKeyArray(currentColorSnippetRequestAsyncTaskIDs_Local);

	TArray<TSharedPtr<FStreamableHandle>> currentColorSnippetRequestAsyncTaskStreamableHandles_Local;
	colorSnippetAsyncLoadHandleMap.GenerateValueArray(currentColorSnippetRequestAsyncTaskStreamableHandles_Local);

	// Finds the streamable handle assocaited with the finished handle ID and then removes the ID from the TMap
	for (int i = 0; i < currentColorSnippetRequestAsyncTaskIDs_Local.Num(); i++) {

		if (currentColorSnippetRequestAsyncTaskIDs_Local[i] == finishedID) {

			finishedStreamableHandle_Local = currentColorSnippetRequestAsyncTaskStreamableHandles_Local[i];
			colorSnippetAsyncLoadHandleMap.Remove(currentColorSnippetRequestAsyncTaskIDs_Local[i]);

			break;
		}
	}

	if (finishedStreamableHandle_Local.Get()) {

		if (finishedStreamableHandle_Local.Get()->GetLoadedAsset()) {

			if (auto colorSnippetDataAsset_Local = Cast<UVertexPaintColorSnippetDataAsset>(finishedStreamableHandle_Local.Get()->GetLoadedAsset())) {

				if (colorSnippetDataAsset_Local->snippetColorData.Contains(paintColorSnippetStruct.colorSnippetID)) {

					if (colorSnippetDataAsset_Local->snippetColorData.FindRef(paintColorSnippetStruct.colorSnippetID).colorSnippetPerLODAsRapidJSon.IsValidIndex(0)) {

						meshVertexData.meshDataPerLOD.SetNum(lodToLoopThrough_Local);
						meshVertexData.meshDataPerLOD[0].lod = 0;
						paintColorSnippetStruct.colorSnippetDataAssetSnippetIsStoredIn = colorSnippetDataAsset_Local;

						successfullyGotColorSnippetDataAsset_Local = true;
					}

					else {

						if (printLogsToScreen || printLogsToOutputLog)
							UKismetSystemLibrary::PrintString(GetWorld(), FString::Printf(TEXT("Runtime Vertex Color Paint and Detection Plugin - PaintColorSnippet Fail! - The Color Snippet JSon Per LOD doesn't have a valid LOD0 index. ")), printLogsToScreen, printLogsToOutputLog, FColor::Red, printLogsToScreen_Duration);
					}
				}

				else {

					if (printLogsToScreen || printLogsToOutputLog)
						UKismetSystemLibrary::PrintString(GetWorld(), FString::Printf(TEXT("Runtime Vertex Color Paint and Detection Plugin - PaintColorSnippet Fail! - The Color Snippet Data Asset the Mesh have referenced to store their color snippet doesn't have the Snippet ID Registered! Try removing the snippet from the Editor Widget and adding it again.")), printLogsToScreen, printLogsToOutputLog, FColor::Red, printLogsToScreen_Duration);
				}
			}

			else {

				if (printLogsToScreen || printLogsToOutputLog)
					UKismetSystemLibrary::PrintString(GetWorld(), FString::Printf(TEXT("Runtime Vertex Color Paint and Detection Plugin - PaintColorSnippet Fail! - The Color Snippet Data Asset could not be loaded. If you have deleted it after storing snippets on it then recommend opening up the Editor Utility widget which will refresh and clear up if any mesh has references to old data assets ")), printLogsToScreen, printLogsToOutputLog, FColor::Red, printLogsToScreen_Duration);
			}
		}

		else {

			if (printLogsToScreen || printLogsToOutputLog)
				UKismetSystemLibrary::PrintString(GetWorld(), FString::Printf(TEXT("Runtime Vertex Color Paint and Detection Plugin - PaintColorSnippet Fail! - The Color Snippet Data Asset could not be loaded. If you have deleted it after storing snippets on it then recommend opening up the Editor Utility widget which will refresh and clear up if any mesh has references to old data assets ")), printLogsToScreen, printLogsToOutputLog, FColor::Red, printLogsToScreen_Duration);
		}
	}

	else {

		if (printLogsToScreen || printLogsToOutputLog)
			UKismetSystemLibrary::PrintString(GetWorld(), FString::Printf(TEXT("Runtime Vertex Color Paint and Detection Plugin - PaintColorSnippet Fail! - After Attempting to Load the Color Snippet Data Asset the FStreamableHandle wasn't Valid! ")), printLogsToScreen, printLogsToOutputLog, FColor::Red, printLogsToScreen_Duration);
	}


	if (!successfullyGotColorSnippetDataAsset_Local) {

		// If check valid failed we fill a few essentials so when callback is run, we can still get what settings we failed with etc. 
		FCalculateColorsInfo calculateColorsInfoTemp;
		calculateColorsInfoTemp.paintOnColorSnippetSettings = paintColorSnippetStruct;
		calculateColorsInfoTemp.initiatedByComponent = this;

		vertexPaintGameInstanceSubsystem_Global->RunCallbacks(false, false, false, false, false, true, false, false, calculateColorsInfoTemp, paintColorSnippetStruct.callbackSettings, FVertexDetectClosestVertexDataResultStruct(), FVertexDetectEstimatedColorAtHitLocationResultStruct(), FVertexDetectAvarageColorInAreaInfo());

		return;
	}

	if (printLogsToScreen || printLogsToOutputLog)
		UKismetSystemLibrary::PrintString(GetWorld(), FString::Printf(TEXT("Runtime Vertex Color Paint and Detection Plugin - Paint Color Snippet Load Color Snippet Data Asset Successfull. Trying to Apply Snippet: %s"), *paintColorSnippetStruct.colorSnippetID), printLogsToScreen, printLogsToOutputLog, FColor::Green, printLogsToScreen_Duration);


	auto calculateColorsInfo_Local = vertexPaintGameInstanceSubsystem_Global->ConstructCalculateColorsInfoStruct(paintColorSnippetStruct.multiThreadSettings, EVertexPaintDetectionType::PaintColorSnippet, FVertexDetectInfoStruct(), FVertexDetectGetColorsOnlyStruct(), FVertexPaintAtLocationStruct(), FVertexPainthWithinAreaStruct(), FVertexPaintOnEntireMeshStruct(), paintColorSnippetStruct, FVertexPaintSetMeshComponentVertexColors(), FVertexPaintSetMeshComponentVertexColorsUsingSerializedString(), FVertexPaintColorSettingStruct(), paintColorSnippetStruct, lodToLoopThrough_Local, paintColorSnippetStruct.meshComponent, meshVertexData, this, paintColorSnippetStruct, FVertexDetectEstimatedColorAtHitLocationStruct(), additionalDataToPassThrough);

	vertexPaintGameInstanceSubsystem_Global->AddCalculateColorsTaskToQueue(calculateColorsInfo_Local);
}


//-------------------------------------------------------

// Check If Valid Hit - Checks if valid Actor, component etc. and also get data from data asset if stored static mesh comp

bool UVertexPaintDetectionComponent::CheckIfValid(UPrimitiveComponent* component, const FVertexPaintMultiThreadSettingsStruct& multithreadSettings, const EVertexPaintDetectionType& paintDetectionType, const FVertexDetectInfoStruct& detectSettings, const FVertexDetectGetColorsOnlyStruct& getVertexColorsOnlySettings, const FVertexPaintAtLocationStruct& paintAtLocationSettings, const FVertexPainthWithinAreaStruct& paintWithinAreaSettings, const FVertexPaintOnEntireMeshStruct& paintEntireMeshSettings, const FVertexPaintColorSnippetStruct& paintColorSnippetSettings, const FVertexPaintColorSettingStruct& paintColorSettings, FVertexPaintStruct paintOnMeshSettings, int& lodToLoopThrough, FVertexDetectMeshDataStruct& meshVertexData) {

	lodToLoopThrough = 0;
	meshVertexData = FVertexDetectMeshDataStruct();


	if (!IsValid(GetWorld())) {

		if (printLogsToScreen || printLogsToOutputLog)
			UKismetSystemLibrary::PrintString(GetWorld(), FString::Printf(TEXT("Runtime Vertex Color Paint and Detection Plugin - World not Valid")), printLogsToScreen, printLogsToOutputLog, FColor::Red, printLogsToScreen_Duration);

		return false;
	}

	if (!GetWorld()->IsGameWorld()) {


		if (printLogsToScreen || printLogsToOutputLog)
			UKismetSystemLibrary::PrintString(GetWorld(), FString::Printf(TEXT("Runtime Vertex Color Paint and Detection Plugin - World Valid but isn't Game World")), printLogsToScreen, printLogsToOutputLog, FColor::Red, printLogsToScreen_Duration);

		return false;
	}

	if (!IsInGameThread()) {

		if (printLogsToScreen || printLogsToOutputLog)
			UKismetSystemLibrary::PrintString(GetWorld(), FString::Printf(TEXT("Runtime Vertex Color Paint and Detection Plugin - Trying to Start a Task but not from Game Thread!")), printLogsToScreen, printLogsToOutputLog, FColor::Red, printLogsToScreen_Duration);

		return false;
	}

	if (!IsValid(component)) {

		if (printLogsToScreen || printLogsToOutputLog)
			UKismetSystemLibrary::PrintString(GetWorld(), FString::Printf(TEXT("Runtime Vertex Color Paint and Detection Plugin - Trying to Paint/Detect but Component provided is not Valid! Have you connected anything to the component pin on the Node?")), printLogsToScreen, printLogsToOutputLog, FColor::Red, printLogsToScreen_Duration);

		return false;
	}

	if (!IsValid(component->GetOwner())) {

		if (printLogsToScreen || printLogsToOutputLog)
			UKismetSystemLibrary::PrintString(GetWorld(), FString::Printf(TEXT("Runtime Vertex Color Paint and Detection Plugin - Trying to Paint/Detect but Components Owning Actor is not Valid!")), printLogsToScreen, printLogsToOutputLog, FColor::Red, printLogsToScreen_Duration);

		return false;
	}


	paintOnMeshSettings.actor = component->GetOwner();


	if (printLogsToScreen || printLogsToOutputLog)
		UKismetSystemLibrary::PrintString(GetWorld(), FString::Printf(TEXT("Runtime Vertex Color Paint and Detection Plugin - Trying to Paint/Detect on Actor: %s"), *component->GetOwner()->GetName()), printLogsToScreen, printLogsToOutputLog, FColor::Cyan, printLogsToScreen_Duration);


	// If painting
	if (paintOnMeshSettings.actor) {

		if (paintOnMeshSettings.overrideLOD.overrideLODToPaintUpTo) {

			if (paintOnMeshSettings.overrideLOD.amountOfLODsToPaint <= 0) {

				if (printLogsToScreen || printLogsToOutputLog)
					UKismetSystemLibrary::PrintString(GetWorld(), FString::Printf(TEXT("Runtime Vertex Color Paint and Detection Plugin - Trying to Paint and Override LOD to paint on but LOD given is <= 0!"), *GetName()), printLogsToScreen, printLogsToOutputLog, FColor::Red, printLogsToScreen_Duration);

				return false;
			}
		}

		// If anything is added onto the array
		if (canOnlyApplyPaintOnTheseActors.Num() > 0) {

			// If the actor we're trying to paint on isn't in the array. 
			if (!canOnlyApplyPaintOnTheseActors.Contains(paintOnMeshSettings.actor)) {

				if (printLogsToScreen || printLogsToOutputLog)
					UKismetSystemLibrary::PrintString(GetWorld(), FString::Printf(TEXT("Runtime Vertex Color Paint and Detection Plugin - %s is trying to paint on Actor: %s  -   that isn't in the canOnlyApplyPaintOnTheseActors array. Either add the actor to it, or clear the array so it can paint on anything."), *GetName(), *paintOnMeshSettings.actor->GetName()), printLogsToScreen, printLogsToOutputLog, FColor::Red, printLogsToScreen_Duration);

				return false;
			}
		}

		if (paintAtLocationSettings.actor) {

			if (paintAtLocationSettings.paintAtAreaSettings.areaOfEffect <= 0) {

				if (printLogsToScreen || printLogsToOutputLog)
					UKismetSystemLibrary::PrintString(GetWorld(), FString::Printf(TEXT("Runtime Vertex Color Paint and Detection Plugin - Check Valid, Paint at Location Fail: Paint Area of Effect is <= 0")), printLogsToScreen, printLogsToOutputLog, FColor::Red, printLogsToScreen_Duration);

				return false;
			}

			if (!IsPaintSettingsSetToApplyAnyColor(paintColorSettings)) {

				if (printLogsToScreen || printLogsToOutputLog)
					UKismetSystemLibrary::PrintString(GetWorld(), FString::Printf(TEXT("Runtime Vertex Color Paint and Detection Plugin - Trying to Paint At Location with 0 Strength in Colors which wouldn't make any difference. ")), printLogsToScreen, printLogsToOutputLog, FColor::Red, printLogsToScreen_Duration);

				return false;
			}
		}

		if (paintWithinAreaSettings.actor) {

			if (!IsPaintSettingsSetToApplyAnyColor(paintColorSettings)) {

				if (printLogsToScreen || printLogsToOutputLog)
					UKismetSystemLibrary::PrintString(GetWorld(), FString::Printf(TEXT("Runtime Vertex Color Paint and Detection Plugin - Trying to Paint Within Area with 0 Strength in Colors which wouldn't make any difference. ")), printLogsToScreen, printLogsToOutputLog, FColor::Red, printLogsToScreen_Duration);

				return false;
			}
		}

		if (paintEntireMeshSettings.actor) {

			if (paintEntireMeshSettings.paintOnRandomVerticesSettings.paintAtRandomVerticesSpreadOutOverTheEntireMesh) {

				if (paintEntireMeshSettings.paintOnRandomVerticesSettings.paintAtRandomVerticesSpreadOutOverTheEntireMesh_PercentToPaint <= 0) {

					if (printLogsToScreen || printLogsToOutputLog)
						UKismetSystemLibrary::PrintString(GetWorld(), FString::Printf(TEXT("Runtime Vertex Color Paint and Detection Plugin - Check Valid, Paint at Entire Mesh Fail: Set to Paint Random Vertices Spread Out Over the Entire Mesh but the % to Spread out is 0 when it should be between 0-100. ")), printLogsToScreen, printLogsToOutputLog, FColor::Red, printLogsToScreen_Duration);

					return false;
				}
				else if (paintEntireMeshSettings.paintOnRandomVerticesSettings.paintAtRandomVerticesSpreadOutOverTheEntireMesh_PercentToPaint >= 100) {

					if (printLogsToScreen || printLogsToOutputLog)
						UKismetSystemLibrary::PrintString(GetWorld(), FString::Printf(TEXT("Runtime Vertex Color Paint and Detection Plugin - Check Valid, Paint at Entire Mesh Fail: Set to Paint Random Vertices Spread Out Over the Entire Mesh to 100%, meaning the Entire Mesh should be painted, which makes it unnecessary and un-optimized to use Paint at Random Vertices when you can just turn that off and just use Paint Entire Mesh the regular way. ")), printLogsToScreen, printLogsToOutputLog, FColor::Red, printLogsToScreen_Duration);

					return false;
				}
			}

			if (!IsPaintSettingsSetToApplyAnyColor(paintColorSettings)) {

				if (printLogsToScreen || printLogsToOutputLog)
					UKismetSystemLibrary::PrintString(GetWorld(), FString::Printf(TEXT("Runtime Vertex Color Paint and Detection Plugin - Trying to Paint Entire Mesh with 0 Strength in Colors which wouldn't make any difference. ")), printLogsToScreen, printLogsToOutputLog, FColor::Red, printLogsToScreen_Duration);

				return false;
			}
		}

		if (paintColorSnippetSettings.actor) {

			if (!paintColorSnippetSettings.colorSnippetTag.IsValid() && !paintColorSnippetSettings.randomizeAnyColorSnippetTagUnderThisCategory.IsValid()) {

				if (printLogsToScreen || printLogsToOutputLog)
					UKismetSystemLibrary::PrintString(GetWorld(), FString::Printf(TEXT("Runtime Vertex Color Paint and Detection Plugin - PaintColorSnippet Failed because no Snippet Tag was provided and it's not set to Randomize a Snippet Tag either!")), printLogsToScreen, printLogsToOutputLog, FColor::Red, printLogsToScreen_Duration);

				return false;
			}
		}
	}


	UStaticMeshComponent* staticMeshComp = nullptr;
	USkeletalMeshComponent* skelMeshComp = nullptr;
	USkeletalMesh* skelMesh_Local = nullptr;

	staticMeshComp = Cast<UStaticMeshComponent>(component);

	if (!Cast<UStaticMeshComponent>(component)) {

		skelMeshComp = Cast<USkeletalMeshComponent>(component);
	}


	if (!staticMeshComp && !skelMeshComp) {

		if (printLogsToScreen || printLogsToOutputLog)
			UKismetSystemLibrary::PrintString(GetWorld(), FString::Printf(TEXT("Runtime Vertex Color Paint and Detection Plugin - Trying to Paint/Detect but Component %s is not a Static, Spline or Skeletal Mesh!"), *component->GetName()), printLogsToScreen, printLogsToOutputLog, FColor::Red, printLogsToScreen_Duration);

		return false;
	}


	if (printLogsToScreen || printLogsToOutputLog)
		UKismetSystemLibrary::PrintString(GetWorld(), FString::Printf(TEXT("Runtime Vertex Color Paint and Detection Plugin - Trying to Paint/Detect on Component: %s"), *component->GetName()), printLogsToScreen, printLogsToOutputLog, FColor::Cyan, printLogsToScreen_Duration);


	meshVertexData.meshComp = component;

	if (staticMeshComp) {

		if (!IsValid(staticMeshComp->GetStaticMesh())) {

			if (printLogsToScreen || printLogsToOutputLog)
				UKismetSystemLibrary::PrintString(GetWorld(), FString::Printf(TEXT("Runtime Vertex Color Paint and Detection Plugin - Trying to Paint/Detect on Static Mesh Component %s but it has no Mesh is Set"), *staticMeshComp->GetName()), printLogsToScreen, printLogsToOutputLog, FColor::Red, printLogsToScreen_Duration);

			return false;
		}

		if (!staticMeshComp->GetStaticMesh()->bAllowCPUAccess) {


			if (printLogsToScreen || printLogsToOutputLog)
				UKismetSystemLibrary::PrintString(GetWorld(), FString::Printf(TEXT("Runtime Vertex Color Paint and Detection Plugin - Trying to Paint/Detect on Static Mesh but it's CPU Access is not set to True")), printLogsToScreen, printLogsToOutputLog, FColor::Red, printLogsToScreen_Duration);

			return false;
		}

		meshVertexData.meshSource = staticMeshComp->GetStaticMesh();

		if (printLogsToScreen || printLogsToOutputLog)
			UKismetSystemLibrary::PrintString(GetWorld(), FString::Printf(TEXT("Runtime Vertex Color Paint and Detection Plugin - Trying to Paint/Detect on Static Mesh Component, with Source Mesh: %s"), *staticMeshComp->GetStaticMesh()->GetName()), printLogsToScreen, printLogsToOutputLog, FColor::Cyan, printLogsToScreen_Duration);
	}

	else if (skelMeshComp) {


#if ENGINE_MAJOR_VERSION == 4

		skelMesh_Local = skelMeshComp->SkeletalMesh;

#elif ENGINE_MAJOR_VERSION == 5

#if ENGINE_MINOR_VERSION == 0

		skelMesh_Local = skelMeshComp->SkeletalMesh.Get();

#else

		skelMesh_Local = skelMeshComp->GetSkeletalMeshAsset();

#endif
#endif


		if (!IsValid(skelMesh_Local)) {

			if (printLogsToScreen || printLogsToOutputLog)
				UKismetSystemLibrary::PrintString(GetWorld(), FString::Printf(TEXT("Runtime Vertex Color Paint and Detection Plugin - Trying to Paint/Detect on Skeletal Mesh Component but source mesh is null")), printLogsToScreen, printLogsToOutputLog, FColor::Red, printLogsToScreen_Duration);

			return false;
		}

		else {

			meshVertexData.meshSource = skelMesh_Local;

			if (printLogsToScreen || printLogsToOutputLog)
				UKismetSystemLibrary::PrintString(GetWorld(), FString::Printf(TEXT("Runtime Vertex Color Paint and Detection Plugin - Trying to Paint/Detect on Skeletal Mesh Component, with Source Mesh: %s"), *skelMesh_Local->GetName()), printLogsToScreen, printLogsToOutputLog, FColor::Cyan, printLogsToScreen_Duration);
		}
	}


	if (!IsValid(component->GetOwner()->GetLevel()->GetOuter())) {

		if (printLogsToScreen || printLogsToOutputLog)
			UKismetSystemLibrary::PrintString(GetWorld(), FString::Printf(TEXT("Runtime Vertex Color Paint and Detection Plugin - Actor not in valid sub level!")), printLogsToScreen, printLogsToOutputLog, FColor::Red, printLogsToScreen_Duration);

		return false;
	}

	TSoftObjectPtr<UWorld> worldActorIsIn_Local = component->GetOwner()->GetLevel()->GetOuter();

	if (printLogsToScreen || printLogsToOutputLog)
		UKismetSystemLibrary::PrintString(GetWorld(), FString::Printf(TEXT("Runtime Vertex Color Paint and Detection Plugin - Trying to Paint/Detect on Actor which is in Level: %s"), *worldActorIsIn_Local.Get()->GetName()), printLogsToScreen, printLogsToOutputLog, FColor::Cyan, printLogsToScreen_Duration);



	if (vertexPaintGameInstanceSubsystem_Global->GetCalculateColorsPaintTasks().FindRef(component).calculateColorsQueueArray.Num() > maxAllowedTasksPerMesh) {

		// Always prints this to log so users can see in the output that something may not be fully optimized
		UKismetSystemLibrary::PrintString(GetWorld(), FString::Printf(TEXT("Runtime Vertex Color Paint and Detection Plugin - Mesh: %s Has over %i Allowed Paint Tasks Queue Limit and we don't Allow any more per Mesh as the Performance gets affected if the queue per mesh becomes to big since the TMaps become more expensive to use! You can change this in the Project Settings, but if the queue grows to big you will get unwanted result as well since it may take a while for a paint job to show it's effect. \nRecommend Reviewing how often you Add new Tasks. You can for instance Add a New Task when the Old one is Finished instead of adding them every frame. "), *component->GetName(), maxAllowedTasksPerMesh), printLogsToScreen, true, FColor::Red, printLogsToScreen_Duration);

		return false;
	}


	lodToLoopThrough = UVertexPaintFunctionLibrary::GetAmountOfLODsToPaintOn(component, paintOnMeshSettings.overrideLOD.overrideLODToPaintUpTo, paintOnMeshSettings.overrideLOD.amountOfLODsToPaint);

	if (lodToLoopThrough <= 0) {

		if (printLogsToScreen || printLogsToOutputLog)
			UKismetSystemLibrary::PrintString(GetWorld(), FString::Printf(TEXT("Runtime Vertex Color Paint and Detection Plugin - LODs to Loop through is <= 0!")), printLogsToScreen, printLogsToOutputLog, FColor::Red, printLogsToScreen_Duration);

		return false;
	}

	// If just Detecting and set to only include vertex data for lod 0 in the callback, there's no reason to loop through more LODs, unlike painting where even you may still need to paint on all LODs eventhough you only want LOD0 in the callback. 
	if (!paintColorSettings.actor && detectSettings.actor) {

		if (detectSettings.callbackSettings.includeVertexDataOnlyForLOD0)
			lodToLoopThrough = 1;
	}


	meshVertexData.meshDataPerLOD.SetNum(lodToLoopThrough, true);


	// If Paint Within Area & componentToCheckIfIsWithin is skeletal mesh then demands that it's complex shape, if not then returns false
	if (IsValid(paintWithinAreaSettings.actor)) {


		if (paintWithinAreaSettings.componentsToCheckIfIsWithin.Num() <= 0) {

			if (printLogsToScreen || printLogsToOutputLog)
				UKismetSystemLibrary::PrintString(GetWorld(), FString::Printf(TEXT("Runtime Vertex Color Paint and Detection Plugin - Paint Within Area Check Valid Fail! It has no componentsToCheckIfIsWithin!")), printLogsToScreen, printLogsToOutputLog, FColor::Red, printLogsToScreen_Duration);

			return false;
		}

		for (auto compToCheckWithinTemp : paintWithinAreaSettings.componentsToCheckIfIsWithin) {

			if (IsValid(compToCheckWithinTemp.componentToCheckIfIsWithin)) {

				// Some component types require a specific shape to be set
				if (Cast<ALandscape>(compToCheckWithinTemp.componentToCheckIfIsWithin->GetOwner())) {

					if (compToCheckWithinTemp.paintWithinAreaShape != Enum_PaintWithinAreaShape::isComplexShape) {

						if (printLogsToScreen || printLogsToOutputLog)
							UKismetSystemLibrary::PrintString(GetWorld(), FString::Printf(TEXT("Runtime Vertex Color Paint and Detection Plugin - Paint Within Area Check Valid Failed since one of the componentToCheckIfWithin is a Landscape, but the PaintWithinArea Shape is not set to be Complex Shape which is required to check if you're within Landscapes!")), printLogsToScreen, printLogsToOutputLog, FColor::Red, printLogsToScreen_Duration);

						return false;
					}
				}

				else if (Cast<USphereComponent>(compToCheckWithinTemp.componentToCheckIfIsWithin)) {

					if (compToCheckWithinTemp.paintWithinAreaShape != Enum_PaintWithinAreaShape::isSphereShape) {


						if (printLogsToScreen || printLogsToOutputLog)
							UKismetSystemLibrary::PrintString(GetWorld(), FString::Printf(TEXT("Runtime Vertex Color Paint and Detection Plugin - Paint Within Area Check Valid Failed since one of the componentToCheckIfWithin is a Sphere Component, but the PaintWithinArea Shape is not set to be sphereShape!")), printLogsToScreen, printLogsToOutputLog, FColor::Red, printLogsToScreen_Duration);

						return false;
					}
				}

				else if (Cast<UBoxComponent>(compToCheckWithinTemp.componentToCheckIfIsWithin)) {

					if (compToCheckWithinTemp.paintWithinAreaShape != Enum_PaintWithinAreaShape::isSquareOrRectangleShape) {


						if (printLogsToScreen || printLogsToOutputLog)
							UKismetSystemLibrary::PrintString(GetWorld(), FString::Printf(TEXT("Runtime Vertex Color Paint and Detection Plugin - Paint Within Area Check Valid Failed since one of the componentToCheckIfWithin is a Box Component, but the PaintWithinArea Shape is not set to be Square or Rectangle Shape!")), printLogsToScreen, printLogsToOutputLog, FColor::Red, printLogsToScreen_Duration);

						return false;
					}
				}

				else if (Cast<USkeletalMeshComponent>(compToCheckWithinTemp.componentToCheckIfIsWithin)) {

					if (compToCheckWithinTemp.paintWithinAreaShape != Enum_PaintWithinAreaShape::isComplexShape) {

						if (printLogsToScreen || printLogsToOutputLog)
							UKismetSystemLibrary::PrintString(GetWorld(), FString::Printf(TEXT("Runtime Vertex Color Paint and Detection Plugin - Paint Within Area Check Valid Failed since one of the componentToCheckIfWithin is a Skeletal Mesh Component, but the PaintWithinArea Shape is not set to be Complex!")), printLogsToScreen, printLogsToOutputLog, FColor::Red, printLogsToScreen_Duration);

						return false;
					}
				}

				else if (Cast<USplineMeshComponent>(compToCheckWithinTemp.componentToCheckIfIsWithin)) {

					if (compToCheckWithinTemp.paintWithinAreaShape != Enum_PaintWithinAreaShape::isComplexShape) {

						if (printLogsToScreen || printLogsToOutputLog)
							UKismetSystemLibrary::PrintString(GetWorld(), FString::Printf(TEXT("Runtime Vertex Color Paint and Detection Plugin - Paint Within Area Check Valid Failed since one of the componentToCheckIfWithin is a Spline Mesh Component, but the PaintWithinArea Shape is not set to be Complex!")), printLogsToScreen, printLogsToOutputLog, FColor::Red, printLogsToScreen_Duration);

						return false;
					}
				}


				if (compToCheckWithinTemp.paintWithinAreaShape == Enum_PaintWithinAreaShape::isComplexShape) {

					// 
				}
			}

			else {

				if (printLogsToScreen || printLogsToOutputLog)
					UKismetSystemLibrary::PrintString(GetWorld(), FString::Printf(TEXT("Runtime Vertex Color Paint and Detection Plugin - Paint Within Area Check Valid Fail! One of the componentsToCheckIfIsWithin is Not Valid! ")), printLogsToScreen, printLogsToOutputLog, FColor::Red, printLogsToScreen_Duration);

				return false;
			}
		}
	}


	// Skeletal Meshes doesnt get stored in the data asset so if it checks out here then we can fill meshVertexPositionArray and returns
	if (skelMeshComp) {

		if (!skelMeshComp->GetSkeletalMeshRenderData()->IsInitialized()) {

			if (printLogsToScreen || printLogsToOutputLog)
				UKismetSystemLibrary::PrintString(GetWorld(), FString::Printf(TEXT("Runtime Vertex Color Paint and Detection Plugin - Trying to Paint/Detect on Skeletal Mesh but it's SkeletalMeshRenderData isn't Initialized yet. "), *GetName(), *component->GetOwner()->GetName()), printLogsToScreen, printLogsToOutputLog, FColor::Red, printLogsToScreen_Duration);

			return false;
		}

		if (!skelMesh_Local->GetResourceForRendering()) {

			if (printLogsToScreen || printLogsToOutputLog)
				UKismetSystemLibrary::PrintString(GetWorld(), FString::Printf(TEXT("Runtime Vertex Color Paint and Detection Plugin - Trying to Paint/Detect on Skeletal Mesh but it has invalid ResourceForRendering!"), *GetName(), *component->GetOwner()->GetName()), printLogsToScreen, printLogsToOutputLog, FColor::Red, printLogsToScreen_Duration);

			return false;
		}

		// If current viewable LOD has cloth then requires bWaitForParallelClothTask to be true
		if (skelMeshComp->GetSkeletalMeshRenderData()->LODRenderData[skelMeshComp->GetPredictedLODLevel()].HasClothData()) {


			if (!skelMeshComp->bWaitForParallelClothTask && paintColorSettings.affectClothPhysics) {

				if (printLogsToScreen || printLogsToOutputLog)
					UKismetSystemLibrary::PrintString(GetWorld(), FString::Printf(TEXT("Runtime Vertex Color Paint and Detection Plugin - Trying to Detect/Paint on Skeletal Mesh with Cloth but the Skeletal Mesh Component bWaitForParallelClothTask is false!")), printLogsToScreen, printLogsToOutputLog, FColor::Red, printLogsToScreen_Duration);

				return false;
			}
		}


		//----------

		if (!skelMeshComp->GetSkeletalMeshRenderData()) {

			if (printLogsToScreen || printLogsToOutputLog)
				UKismetSystemLibrary::PrintString(GetWorld(), FString::Printf(TEXT("Runtime Vertex Color Paint and Detection Plugin - Trying to Paint/Detect on Skeletal Mesh but it hasn't properly been initialized yet, i.e. the paint job is run to early. ")), printLogsToScreen, printLogsToOutputLog, FColor::Red, printLogsToScreen_Duration);

			return false;
		}

		// Could get a crash very rarely if switching skeletal meshes and painting every frame, so added these for extra checks so we hopefully can't create a task if these aren't valid. We also have these in the task itself in case they become invalid after this. 
		int lodsFromRenderData_Local = skelMeshComp->GetSkeletalMeshRenderData()->LODRenderData.Num();


		for (int currentLOD_Local = 0; currentLOD_Local < lodsFromRenderData_Local; currentLOD_Local++) {


			const FSkeletalMeshLODRenderData& skelMeshRenderData_Local = skelMeshComp->GetSkeletalMeshRenderData()->LODRenderData[currentLOD_Local];

			if (skelMeshRenderData_Local.HasClothData()) {

				if (!skelMeshRenderData_Local.ClothVertexBuffer.IsInitialized()) {

					if (printLogsToScreen || printLogsToOutputLog)
						UKismetSystemLibrary::PrintString(GetWorld(), FString::Printf(TEXT("Runtime Vertex Color Paint and Detection Plugin - Trying to Paint/Detect on Skeletal Mesh with Cloth but cloth vertex buffer hasn't properly been initialized yet, i.e. the paint job is run to early. ")), printLogsToScreen, printLogsToOutputLog, FColor::Red, printLogsToScreen_Duration);

					return false;
				}
			}

			if (!skelMeshRenderData_Local.StaticVertexBuffers.StaticMeshVertexBuffer.IsInitialized() || !skelMeshRenderData_Local.StaticVertexBuffers.StaticMeshVertexBuffer.TangentsVertexBuffer.IsInitialized() || !skelMeshRenderData_Local.StaticVertexBuffers.StaticMeshVertexBuffer.GetTangentData()) {

				if (printLogsToScreen || printLogsToOutputLog)
					UKismetSystemLibrary::PrintString(GetWorld(), FString::Printf(TEXT("Runtime Vertex Color Paint and Detection Plugin - Trying to Paint/Detect on Skeletal Mesh but it hasn't properly been initialized yet, i.e. the paint job is run to early. ")), printLogsToScreen, printLogsToOutputLog, FColor::Red, printLogsToScreen_Duration);

				return false;
			}

			if (currentLOD_Local == 0 && paintEntireMeshSettings.actor && paintEntireMeshSettings.paintOnRandomVerticesSettings.paintAtRandomVerticesSpreadOutOverTheEntireMesh) {

				if (UKismetMathLibrary::MapRangeClamped(paintEntireMeshSettings.paintOnRandomVerticesSettings.paintAtRandomVerticesSpreadOutOverTheEntireMesh_PercentToPaint, 0, 100, 0, skelMeshComp->GetSkeletalMeshRenderData()->LODRenderData[currentLOD_Local].GetNumVertices()) <= 0) {

					if (printLogsToScreen || printLogsToOutputLog)
						UKismetSystemLibrary::PrintString(GetWorld(), FString::Printf(TEXT("Runtime Vertex Color Paint and Detection Plugin - Check Valid, Paint at Entire Mesh Fail: Set to Paint Random Vertices Spread Out Over the Entire Mesh but the % set to Spread out is so low that not even a single vertex at LOD0 would get painted.")), printLogsToScreen, printLogsToOutputLog, FColor::Red, printLogsToScreen_Duration);

					return false;
				}
			}
		}

		//----------

		return true;
	}


	else if (staticMeshComp) {

		// If Paint at Location or GetClosestVertexData
		if (paintAtLocationSettings.actor || (detectSettings.actor && !getVertexColorsOnlySettings.actor)) {

			if (paintAtLocationSettings.actor && paintAtLocationSettings.hitFundementals.optionalFaceIndexForStaticMeshComponents <= -1) {

				if (printLogsToScreen || printLogsToOutputLog)
					UKismetSystemLibrary::PrintString(GetWorld(), FString::Printf(TEXT("Runtime Vertex Color Paint and Detection Plugin - face index hasn't been properly set for Paint at Location on Static Mesh Component, which means you will not be able to get the closest vertex material or the physics surfaces. ")), printLogsToScreen, printLogsToOutputLog, FColor::Orange, printLogsToScreen_Duration);
			}

			else if (detectSettings.actor && !getVertexColorsOnlySettings.actor && detectSettings.hitFundementals.optionalFaceIndexForStaticMeshComponents <= -1) {

				if (printLogsToScreen || printLogsToOutputLog)
					UKismetSystemLibrary::PrintString(GetWorld(), FString::Printf(TEXT("Runtime Vertex Color Paint and Detection Plugin - face index hasn't been properly set for Get Closest Vertex Data to Hit Location on Static Mesh Component, which means you will not be able to get the closest vertex material or the physics surfaces. ")), printLogsToScreen, printLogsToOutputLog, FColor::Orange, printLogsToScreen_Duration);
			}
		}

		if (paintEntireMeshSettings.actor && paintEntireMeshSettings.paintOnRandomVerticesSettings.paintAtRandomVerticesSpreadOutOverTheEntireMesh) {

			if (UKismetMathLibrary::MapRangeClamped(paintEntireMeshSettings.paintOnRandomVerticesSettings.paintAtRandomVerticesSpreadOutOverTheEntireMesh_PercentToPaint, 0, 100, 0, staticMeshComp->GetStaticMesh()->GetRenderData()->LODResources[0].GetNumVertices()) < 1) {

				if (printLogsToScreen || printLogsToOutputLog)
					UKismetSystemLibrary::PrintString(GetWorld(), FString::Printf(TEXT("Runtime Vertex Color Paint and Detection Plugin - Check Valid, Paint at Entire Mesh Fail: Set to Paint Random Vertices Spread Out Over the Entire Mesh but the % set to Spread out is so low that not even a single vertex at LOD0 would get painted.")), printLogsToScreen, printLogsToOutputLog, FColor::Red, printLogsToScreen_Duration);

				return false;
			}
		}

		meshVertexData.meshSource = staticMeshComp->GetStaticMesh();
		meshVertexData.meshComp = staticMeshComp;

		return true;
	}

	return false;
}


//-------------------------------------------------------

// Set Paint Condition Line Of Sight To Actor Location

void UVertexPaintDetectionComponent::SetPaintConditionLineOfSightToActorLocation(FVertexPaintColorSettingStruct& paintColorSettings) {


	for (int i = 0; i < paintColorSettings.applyVertexColorSettings.redColorCondition.ifVertexHasLineOfSightTo.Num(); i++) {

		if (paintColorSettings.applyVertexColorSettings.redColorCondition.ifVertexHasLineOfSightTo[i].ifVertexHasLineOfSightToActor.IsValid()) {

			if (paintColorSettings.applyVertexColorSettings.redColorCondition.ifVertexHasLineOfSightTo[i].ifVertexHasLineOfSightToActor.Get()) {

				paintColorSettings.applyVertexColorSettings.redColorCondition.ifVertexHasLineOfSightTo[i].ifVertexHasLineOfSightToPosition = paintColorSettings.applyVertexColorSettings.redColorCondition.ifVertexHasLineOfSightTo[i].ifVertexHasLineOfSightToActor.Get()->GetActorLocation();
			}
		}
	}

	for (int i = 0; i < paintColorSettings.applyVertexColorSettings.greenColorCondition.ifVertexHasLineOfSightTo.Num(); i++) {

		if (paintColorSettings.applyVertexColorSettings.greenColorCondition.ifVertexHasLineOfSightTo[i].ifVertexHasLineOfSightToActor.IsValid()) {

			if (paintColorSettings.applyVertexColorSettings.greenColorCondition.ifVertexHasLineOfSightTo[i].ifVertexHasLineOfSightToActor.Get()) {

				paintColorSettings.applyVertexColorSettings.greenColorCondition.ifVertexHasLineOfSightTo[i].ifVertexHasLineOfSightToPosition = paintColorSettings.applyVertexColorSettings.greenColorCondition.ifVertexHasLineOfSightTo[i].ifVertexHasLineOfSightToActor.Get()->GetActorLocation();
			}
		}
	}

	for (int i = 0; i < paintColorSettings.applyVertexColorSettings.blueColorCondition.ifVertexHasLineOfSightTo.Num(); i++) {

		if (paintColorSettings.applyVertexColorSettings.blueColorCondition.ifVertexHasLineOfSightTo[i].ifVertexHasLineOfSightToActor.IsValid()) {

			if (paintColorSettings.applyVertexColorSettings.blueColorCondition.ifVertexHasLineOfSightTo[i].ifVertexHasLineOfSightToActor.Get()) {

				paintColorSettings.applyVertexColorSettings.blueColorCondition.ifVertexHasLineOfSightTo[i].ifVertexHasLineOfSightToPosition = paintColorSettings.applyVertexColorSettings.blueColorCondition.ifVertexHasLineOfSightTo[i].ifVertexHasLineOfSightToActor.Get()->GetActorLocation();
			}
		}
	}

	for (int i = 0; i < paintColorSettings.applyVertexColorSettings.alphaColorCondition.ifVertexHasLineOfSightTo.Num(); i++) {

		if (paintColorSettings.applyVertexColorSettings.alphaColorCondition.ifVertexHasLineOfSightTo[i].ifVertexHasLineOfSightToActor.IsValid()) {

			if (paintColorSettings.applyVertexColorSettings.alphaColorCondition.ifVertexHasLineOfSightTo[i].ifVertexHasLineOfSightToActor.Get()) {

				paintColorSettings.applyVertexColorSettings.alphaColorCondition.ifVertexHasLineOfSightTo[i].ifVertexHasLineOfSightToPosition = paintColorSettings.applyVertexColorSettings.alphaColorCondition.ifVertexHasLineOfSightTo[i].ifVertexHasLineOfSightToActor.Get()->GetActorLocation();
			}
		}
	}
}


//-------------------------------------------------------

// Is Paint Settings Set To Apply Any Color

bool UVertexPaintDetectionComponent::IsPaintSettingsSetToApplyAnyColor(const FVertexPaintColorSettingStruct& colorSettings) {


	if (colorSettings.applyVertexColorSettings.applyVertexColorSetting == EApplyVertexColorSetting::EAddVertexColor) {

		// If all apply color is 0, checks if we have any paint conditions that are set to apply color if a certain condition is met
		if (colorSettings.applyVertexColorSettings.redColor == 0 && colorSettings.applyVertexColorSettings.greenColor == 0 && colorSettings.applyVertexColorSettings.blueColor == 0 && colorSettings.applyVertexColorSettings.alphaColor == 0) {

			return false;
		}
	}

	return true;
}


//-------------------------------------------------------

// De-Construct

UVertexPaintDetectionComponent::~UVertexPaintDetectionComponent() {

	//
}
