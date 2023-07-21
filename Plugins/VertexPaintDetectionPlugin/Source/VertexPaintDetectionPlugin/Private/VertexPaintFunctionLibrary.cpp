// Copyright 2022 Alexander Floden, Alias Alex River. All Rights Reserved. 


#include "VertexPaintFunctionLibrary.h"
#include "Kismet/KismetSystemLibrary.h"
#include "Kismet/KismetMathLibrary.h"
#include "Kismet/GameplayStatics.h"
#include "DrawDebugHelpers.h"
#include "Engine/EngineTypes.h"
#include "AssetRegistry/AssetRegistryModule.h"
#include "Math/GenericOctree.h"
#include "PhysicsEngine/PhysicsSettings.h"
#include "PhysicalMaterials/PhysicalMaterial.h"

#include "VertexPaintDetectionInterface.h"
#include "VertexPaintDetectionComponent.h"
#include "VertexPaintDetectionGISubSystem.h"
#include "VertexPaintMaterialDataAsset.h"
#include "VertexPaintDetectionSettings.h"
#include "VertexPaintColorSnippetRefs.h"
#include "VertexPaintOptimizationDataAsset.h"
#include "VertexPaintMaterialDataAsset.h"

#include "Engine/StaticMesh.h"
#include "StaticMeshResources.h"
#include "Engine/SkeletalMesh.h"
#include "Rendering/SkeletalMeshModel.h"
#include "Components/SkeletalMeshComponent.h"
#include "Rendering/SkeletalMeshRenderData.h"


#if ENGINE_MAJOR_VERSION == 5

#include "ChaosWheeledVehicleMovementComponent.h"
#include "ChaosCloth/ChaosClothingSimulation.h"
#include "ChaosCloth/ChaosClothingSimulationInteractor.h"
#include "ClothingAsset.h"

#endif


/** Helper struct for the mesh component vert position octree - Copied from MeshPaintHelpers.cpp ApplyVertexColorsToAllLODs */
struct FStaticMeshComponentVertPosOctreeSemantics {
	enum { MaxElementsPerLeaf = 16 };
	enum { MinInclusiveElementsPerNode = 7 };
	enum { MaxNodeDepth = 12 };

	typedef TInlineAllocator<MaxElementsPerLeaf> ElementAllocator;

	/**
	 * Get the bounding box of the provided octree element. In this case, the box
	 * is merely the point specified by the element.
	 *
	 * @param	Element	Octree element to get the bounding box for
	 *
	 * @return	Bounding box of the provided octree element
	 */
	FORCEINLINE static FBoxCenterAndExtent GetBoundingBox(const FPaintedVertex& Element)
	{
		return FBoxCenterAndExtent(Element.Position, FVector::ZeroVector);
	}

	/**
	 * Determine if two octree elements are equal
	 *
	 * @param	A	First octree element to check
	 * @param	B	Second octree element to check
	 *
	 * @return	true if both octree elements are equal, false if they are not
	 */
	FORCEINLINE static bool AreElementsEqual(const FPaintedVertex& A, const FPaintedVertex& B)
	{
		return (A.Position == B.Position && A.Normal == B.Normal && A.Color == B.Color);
	}

	/** Ignored for this implementation */
	FORCEINLINE static void SetElementId(const FPaintedVertex& Element, FOctreeElementId2 Id)
	{
	}
};

typedef TOctree2<FPaintedVertex, FStaticMeshComponentVertPosOctreeSemantics> TSMCVertPosOctree;


//--------------------------------------------------------

// Get Closest Vertex Data On Mesh Wrapper

void UVertexPaintFunctionLibrary::GetClosestVertexDataOnMesh_Wrapper(UVertexPaintDetectionComponent* runtimeVertexPaintAndDetectionComponent, UPrimitiveComponent* meshComponent, FVertexDetectInfoStruct getClosestVertexDataStruct, FVertexDetectAdditionalDataToPassThrough additionalDataToPassThrough) {

	if (IsValid(runtimeVertexPaintAndDetectionComponent)) {

		getClosestVertexDataStruct.meshComponent = meshComponent;

		// Note nothing more should be set here, because if a C++ Class calls the Paint/Detection Function Right Away it shouldn't lose out on anything being set

		runtimeVertexPaintAndDetectionComponent->GetClosestVertexDataOnMesh(getClosestVertexDataStruct, additionalDataToPassThrough);
	}

	else {

		UE_LOG(LogTemp, Warning, TEXT("Runtime Vertex Color Paint and Detection Plugin - Get Closest Vertex Data on Mesh Failed because the Paint Component sent in isn't valid! Perhaps the Actor or Component is being destroyed. "));
	}
}


//--------------------------------------------------------

// Get All Vertex Colors Only Wrapper

void UVertexPaintFunctionLibrary::GetAllVertexColorsOnly_Wrapper(UVertexPaintDetectionComponent* runtimeVertexPaintAndDetectionComponent, UPrimitiveComponent* meshComponent, FVertexDetectGetColorsOnlyStruct getAllVertexColorsStruct, FVertexDetectAdditionalDataToPassThrough additionalDataToPassThrough) {

	if (IsValid(runtimeVertexPaintAndDetectionComponent)) {

		getAllVertexColorsStruct.meshComponent = meshComponent;

		// Note nothing more should be set here, because if a C++ Class calls the Paint/Detection Function Right Away it shouldn't lose out on anything being set

		runtimeVertexPaintAndDetectionComponent->GetAllVertexColorsOnly(getAllVertexColorsStruct, additionalDataToPassThrough);
	}

	else {

		UE_LOG(LogTemp, Warning, TEXT("Runtime Vertex Color Paint and Detection Plugin - Get All Vertex Colors Failed because the Paint Component sent in isn't valid! Perhaps the Actor or Component is being destroyed. "));
	}
}


//--------------------------------------------------------

// Paint on Mesh at Location Wrapper

void UVertexPaintFunctionLibrary::PaintOnMeshAtLocation_Wrapper(UVertexPaintDetectionComponent* runtimeVertexPaintAndDetectionComponent, UPrimitiveComponent* meshComponent, FVertexPaintAtLocationStruct paintAtLocationStruct, FVertexDetectAdditionalDataToPassThrough additionalDataToPassThrough) {

	if (IsValid(runtimeVertexPaintAndDetectionComponent)) {

		paintAtLocationStruct.meshComponent = meshComponent;

		// Note nothing more should be set here, because if a C++ Class calls the Paint/Detection Function Right Away it shouldn't lose out on anything being set

		runtimeVertexPaintAndDetectionComponent->PaintOnMeshAtLocation(paintAtLocationStruct, additionalDataToPassThrough);
	}

	else {

		UE_LOG(LogTemp, Warning, TEXT("Runtime Vertex Color Paint and Detection Plugin - Paint at Location Failed because the Paint Component sent in isn't valid! Perhaps the Actor or Component is being destroyed. "));
	}
}


//--------------------------------------------------------

// Paint Within Area Wrapper

void UVertexPaintFunctionLibrary::PaintOnMeshWithinArea_Wrapper(UVertexPaintDetectionComponent* runtimeVertexPaintAndDetectionComponent, UPrimitiveComponent* meshComponent, TArray<FVertexPainthWithinArea_ComponentToCheckIfIsWithinInfo> componentsToCheckIfIsWithin, FVertexPainthWithinAreaStruct paintWithinAreaStruct, FVertexDetectAdditionalDataToPassThrough additionalDataToPassThrough) {

	if (IsValid(runtimeVertexPaintAndDetectionComponent)) {

		paintWithinAreaStruct.meshComponent = meshComponent;
		paintWithinAreaStruct.componentsToCheckIfIsWithin = componentsToCheckIfIsWithin;

		// Note nothing more should be set here, because if a C++ Class calls the Paint/Detection Function Right Away it shouldn't lose out on anything being set

		runtimeVertexPaintAndDetectionComponent->PaintOnMeshWithinArea(paintWithinAreaStruct, additionalDataToPassThrough);
	}

	else {

		UE_LOG(LogTemp, Warning, TEXT("Runtime Vertex Color Paint and Detection Plugin - Paint on Mesh Within Area Failed because the Paint Component sent in isn't valid! Perhaps the Actor or Component is being destroyed. "));
	}
}


//--------------------------------------------------------

// Paint on Entire Mesh Wrapper

void UVertexPaintFunctionLibrary::PaintOnEntireMesh_Wrapper(UVertexPaintDetectionComponent* runtimeVertexPaintAndDetectionComponent, UPrimitiveComponent* meshComponent, FVertexPaintOnEntireMeshStruct paintOnEntireMeshStruct, FVertexDetectAdditionalDataToPassThrough additionalDataToPassThrough) {

	if (IsValid(runtimeVertexPaintAndDetectionComponent)) {

		paintOnEntireMeshStruct.meshComponent = meshComponent;

		// Note nothing more should be set here, because if a C++ Class calls the Paint/Detection Function Right Away it shouldn't lose out on anything being set

		runtimeVertexPaintAndDetectionComponent->PaintOnEntireMesh(paintOnEntireMeshStruct, additionalDataToPassThrough);
	}

	else {

		UE_LOG(LogTemp, Warning, TEXT("Runtime Vertex Color Paint and Detection Plugin - Paint on Entire Mesh Failed because the Paint Component sent in isn't valid! Perhaps the Actor or Component is being destroyed. "));
	}
}


//--------------------------------------------------------

// Paint Color Snippet On Mesh

void UVertexPaintFunctionLibrary::PaintColorSnippetOnMesh_Wrappers(UVertexPaintDetectionComponent* runtimeVertexPaintAndDetectionComponent, UPrimitiveComponent* meshComponent, FVertexPaintColorSnippetStruct paintColorSnippetStruct, FVertexDetectAdditionalDataToPassThrough additionalDataToPassThrough) {

	if (IsValid(runtimeVertexPaintAndDetectionComponent)) {

		paintColorSnippetStruct.meshComponent = meshComponent;

		// Note nothing more should be set here, because if a C++ Class calls the Paint/Detection Function Right Away it shouldn't lose out on anything being set

		runtimeVertexPaintAndDetectionComponent->PaintColorSnippetOnMesh(paintColorSnippetStruct, additionalDataToPassThrough);
	}

	else {

		UE_LOG(LogTemp, Warning, TEXT("Runtime Vertex Color Paint and Detection Plugin - Paint Color Snippet on Mesh because the Paint Component sent in isn't valid! Perhaps the Actor or Component is being destroyed. "));
	}
}


//--------------------------------------------------------

// Set Mesh Component Vertex Colors

void UVertexPaintFunctionLibrary::SetMeshComponentVertexColors_Wrapper(UPrimitiveComponent* meshComponent, FVertexPaintSetMeshComponentVertexColors setMeshComponentVertexColorsSettings, FVertexDetectAdditionalDataToPassThrough additionalDataToPassThrough) {


	setMeshComponentVertexColorsSettings.meshComponent = meshComponent;

	if (IsValid(setMeshComponentVertexColorsSettings.meshComponent)) {

		if (setMeshComponentVertexColorsSettings.meshComponent->GetWorld()) {

			if (UGameplayStatics::GetGameInstance(setMeshComponentVertexColorsSettings.meshComponent->GetWorld())->GetSubsystem<UVertexPaintDetectionGISubSystem>())
				UGameplayStatics::GetGameInstance(setMeshComponentVertexColorsSettings.meshComponent->GetWorld())->GetSubsystem<UVertexPaintDetectionGISubSystem>()->SetMeshComponentVertexColors(setMeshComponentVertexColorsSettings, additionalDataToPassThrough);
		}
	}

	else {

		if (setMeshComponentVertexColorsSettings.optionalCallbackComponent) {

			if (setMeshComponentVertexColorsSettings.optionalCallbackComponent->printLogsToScreen || setMeshComponentVertexColorsSettings.optionalCallbackComponent->printLogsToOutputLog)
				UKismetSystemLibrary::PrintString(setMeshComponentVertexColorsSettings.optionalCallbackComponent->GetWorld(), FString::Printf(TEXT("Runtime Vertex Color Paint and Detection Plugin - SetMeshComponentVertexColors Fail because Mesh Component provided is not Valid! Have you connected anything to the meshComponent pin on the Node?")), setMeshComponentVertexColorsSettings.optionalCallbackComponent->printLogsToScreen, setMeshComponentVertexColorsSettings.optionalCallbackComponent->printLogsToOutputLog, FColor::Red, setMeshComponentVertexColorsSettings.optionalCallbackComponent->printLogsToScreen_Duration);
		}

		return;
	}
}


//--------------------------------------------------------

// Set Mesh Component Vertex Colors Using Serialized String

void UVertexPaintFunctionLibrary::SetMeshComponentVertexColorsUsingSerializedString_Wrapper(UPrimitiveComponent* meshComponent, FVertexPaintSetMeshComponentVertexColorsUsingSerializedString setMeshComponentVertexColorsUsingSerializedStringSettings, FVertexDetectAdditionalDataToPassThrough additionalDataToPassThrough) {


	setMeshComponentVertexColorsUsingSerializedStringSettings.meshComponent = meshComponent;

	if (IsValid(setMeshComponentVertexColorsUsingSerializedStringSettings.meshComponent)) {

		if (setMeshComponentVertexColorsUsingSerializedStringSettings.meshComponent->GetWorld()) {

			if (UGameplayStatics::GetGameInstance(setMeshComponentVertexColorsUsingSerializedStringSettings.meshComponent->GetWorld())->GetSubsystem<UVertexPaintDetectionGISubSystem>())
				UGameplayStatics::GetGameInstance(setMeshComponentVertexColorsUsingSerializedStringSettings.meshComponent->GetWorld())->GetSubsystem<UVertexPaintDetectionGISubSystem>()->SetMeshComponentVertexColorsUsingSerializedString(setMeshComponentVertexColorsUsingSerializedStringSettings, additionalDataToPassThrough);
		}
	}

	else {

		if (setMeshComponentVertexColorsUsingSerializedStringSettings.optionalCallbackComponent) {

			if (setMeshComponentVertexColorsUsingSerializedStringSettings.optionalCallbackComponent->printLogsToScreen || setMeshComponentVertexColorsUsingSerializedStringSettings.optionalCallbackComponent->printLogsToOutputLog)
				UKismetSystemLibrary::PrintString(setMeshComponentVertexColorsUsingSerializedStringSettings.optionalCallbackComponent->GetWorld(), FString::Printf(TEXT("Runtime Vertex Color Paint and Detection Plugin - SetMeshComponentVertexColorsUsingSerializedString Fail because Mesh Component provided is not Valid! Have you connected anything to the meshComponent pin on the Node?")), setMeshComponentVertexColorsUsingSerializedStringSettings.optionalCallbackComponent->printLogsToScreen, setMeshComponentVertexColorsUsingSerializedStringSettings.optionalCallbackComponent->printLogsToOutputLog, FColor::Red, setMeshComponentVertexColorsUsingSerializedStringSettings.optionalCallbackComponent->printLogsToScreen_Duration);
		}

		return;
	}
}


//--------------------------------------------------------

// Is World Valid

bool UVertexPaintFunctionLibrary::IsWorldValid(UWorld* world) {

	if (!world) return false;
	if (!IsValid(world)) return false;
	if (!world->IsGameWorld()) return false;
	if (world->bIsTearingDown) return false;

	return true;
}


//-------------------------------------------------------

// Clamp Amount Of Painted Colors Of Each Channel

FVertexDetectIncludeAmountOfPaintedColorsOfEachChannel UVertexPaintFunctionLibrary::ClampAmountOfPaintedColorsOfEachChannel(FVertexDetectIncludeAmountOfPaintedColorsOfEachChannel amountOfColorsOfEachChannel) {

	amountOfColorsOfEachChannel.includeAmountOfPaintedColorsOfEachChannel_IfMinColorAmount = UKismetMathLibrary::FClamp(amountOfColorsOfEachChannel.includeAmountOfPaintedColorsOfEachChannel_IfMinColorAmount, 0, 1);

	return amountOfColorsOfEachChannel;
}


//-------------------------------------------------------

// Clamp Paint Limits

FVertexPaintingLimitStruct UVertexPaintFunctionLibrary::ClampPaintLimits(FVertexPaintingLimitStruct paintLimits) {

	paintLimits.paintLimitOnRedChannel = UKismetMathLibrary::FClamp(paintLimits.paintLimitOnRedChannel, 0, 1);
	paintLimits.paintLimitOnGreenChannel = UKismetMathLibrary::FClamp(paintLimits.paintLimitOnGreenChannel, 0, 1);
	paintLimits.paintLimitOnBlueChannel = UKismetMathLibrary::FClamp(paintLimits.paintLimitOnBlueChannel, 0, 1);
	paintLimits.paintLimitOnAlphaChannel = UKismetMathLibrary::FClamp(paintLimits.paintLimitOnAlphaChannel, 0, 1);

	return paintLimits;
}


//--------------------------------------------------------

// Get Mesh Painted Since Session Started

TMap<UPrimitiveComponent*, int> UVertexPaintFunctionLibrary::GetMeshPaintedSinceSessionStarted_Wrapper(const UObject* WorldContextObject) {

	if (IsValid(WorldContextObject)) {

		if (UGameplayStatics::GetGameInstance(WorldContextObject)->GetSubsystem<UVertexPaintDetectionGISubSystem>())
			return UGameplayStatics::GetGameInstance(WorldContextObject)->GetSubsystem<UVertexPaintDetectionGISubSystem>()->GetMeshPaintedSinceSessionStarted();
	}

	return TMap<UPrimitiveComponent*, int>();
}


//--------------------------------------------------------

// Clear Mesh Painted Since Session Started

void UVertexPaintFunctionLibrary::ClearMeshPaintedSinceSessionStarted_Wrapper(const UObject* WorldContextObject) {

	if (IsValid(WorldContextObject)) {

		if (UGameplayStatics::GetGameInstance(WorldContextObject)->GetSubsystem<UVertexPaintDetectionGISubSystem>())
			UGameplayStatics::GetGameInstance(WorldContextObject)->GetSubsystem<UVertexPaintDetectionGISubSystem>()->ClearMeshPaintedSinceSessionStarted();
	}
}

//-------------------------------------------------------

// Get Calculate Colors Paint Task Amount

TMap<UPrimitiveComponent*, int> UVertexPaintFunctionLibrary::GetCalculateColorsPaintTasksAmount_Wrapper(const UObject* WorldContextObject) {

	if (IsValid(WorldContextObject)) {

		if (UGameplayStatics::GetGameInstance(WorldContextObject)->GetSubsystem<UVertexPaintDetectionGISubSystem>())
			return UGameplayStatics::GetGameInstance(WorldContextObject)->GetSubsystem<UVertexPaintDetectionGISubSystem>()->GetCalculateColorsPaintTasksAmount();
	}

	return TMap<UPrimitiveComponent*, int>();
}


//-------------------------------------------------------

// Get Calculate Colors Detection Task Amount

TMap<UPrimitiveComponent*, int> UVertexPaintFunctionLibrary::GetCalculateColorsDetectionTasksAmount_Wrapper(const UObject* WorldContextObject) {

	if (IsValid(WorldContextObject)) {

		if (UGameplayStatics::GetGameInstance(WorldContextObject)->GetSubsystem<UVertexPaintDetectionGISubSystem>())
			return UGameplayStatics::GetGameInstance(WorldContextObject)->GetSubsystem<UVertexPaintDetectionGISubSystem>()->GetCalculateColorsDetectionTasksAmount();
	}

	return TMap<UPrimitiveComponent*, int>();
}


//--------------------------------------------------------

// Get All Available Color Snippets on Mesh

void UVertexPaintFunctionLibrary::GetAllMeshColorSnippetsAsString_Wrapper(UPrimitiveComponent* meshComponent, TMap<FString, TSoftObjectPtr<UVertexPaintColorSnippetDataAsset>>& availableColorSnippetsAndDataAssets) {

	availableColorSnippetsAndDataAssets.Empty();

	if (!IsValid(meshComponent)) return;

	if (!GetColorSnippetReferenceDataAsset()) {

		UE_LOG(LogTemp, Warning, TEXT("Runtime Vertex Color Paint and Detection Plugin - GetAllAvailableColorSnippetsOnMesh Fail because there's no Color Snippet Reference Data Asset Set in Settings so we can't get color snippet data assets a mesh has!"));

		return;
	}


	TMap<FString, TSoftObjectPtr<UVertexPaintColorSnippetDataAsset>> colorSnippets_Local;

	if (auto staticMeshComp_Local = Cast<UStaticMeshComponent>(meshComponent)) {

		colorSnippets_Local = GetColorSnippetReferenceDataAsset()->GetAllColorSnippetsAndDataAssetForObject(staticMeshComp_Local->GetStaticMesh());
	}

	else if (auto skeletalMeshComponent_Local = Cast<USkeletalMeshComponent>(meshComponent)) {

		UObject* meshAsset_Local = nullptr;

#if ENGINE_MAJOR_VERSION == 4

		meshAsset_Local = skeletalMeshComponent_Local->SkeletalMesh;

#elif ENGINE_MAJOR_VERSION == 5

#if ENGINE_MINOR_VERSION == 0

		meshAsset_Local = skeletalMeshComponent_Local->SkeletalMesh.Get();

#else

		meshAsset_Local = skeletalMeshComponent_Local->GetSkeletalMeshAsset();

#endif
#endif

		colorSnippets_Local = GetColorSnippetReferenceDataAsset()->GetAllColorSnippetsAndDataAssetForObject(meshAsset_Local);
	}

	// If is stored on a data asset
	if (colorSnippets_Local.Num() > 0)
		availableColorSnippetsAndDataAssets = colorSnippets_Local;
}


//--------------------------------------------------------

// Get All Available Color Snippets Tags on Mesh

void UVertexPaintFunctionLibrary::GetAllMeshColorSnippetsAsTags_Wrapper(UPrimitiveComponent* meshComponent, TMap<FGameplayTag, TSoftObjectPtr<UVertexPaintColorSnippetDataAsset>>& availableColorSnippetTagsAndDataAssets) {

	availableColorSnippetTagsAndDataAssets.Empty();

	if (!IsValid(meshComponent) || !GetColorSnippetReferenceDataAsset()) return;


	TMap<FString, TSoftObjectPtr<UVertexPaintColorSnippetDataAsset>> availableColorSnippetsAndDataAssets;
	GetAllMeshColorSnippetsAsString_Wrapper(meshComponent, availableColorSnippetsAndDataAssets);


	if (availableColorSnippetsAndDataAssets.Num() > 0) {

		TArray<FString> availableColorSnippets_Local;
		availableColorSnippetsAndDataAssets.GetKeys(availableColorSnippets_Local);

		TArray<TSoftObjectPtr<UVertexPaintColorSnippetDataAsset>> colorSnippetDataAssets_Local;
		availableColorSnippetsAndDataAssets.GenerateValueArray(colorSnippetDataAssets_Local);


		FGameplayTag topLevelTag = FGameplayTag::RequestGameplayTag(FName("ColorSnippets"));
		FGameplayTagContainer tagContainerTemp;
		tagContainerTemp.AddTag(FGameplayTag::RequestGameplayTag(topLevelTag.GetTagName(), false));
		FGameplayTagContainer tagContainer_Local = GetColorSnippetReferenceDataAsset()->allAvailableColorSnippets.Filter(tagContainerTemp);


		TArray<FGameplayTag> allAvailableTagsUnderCategory_Local;
		tagContainer_Local.GetGameplayTagArray(allAvailableTagsUnderCategory_Local);


		for (auto tag : allAvailableTagsUnderCategory_Local) {

			// If Mesh has Snippet ID that matches Tag under category 
			if (availableColorSnippets_Local.Contains(tag.GetTagName().ToString())) {

				int arrayIndex = -1;

				availableColorSnippets_Local.Find(tag.GetTagName().ToString(), arrayIndex);

				if (colorSnippetDataAssets_Local.IsValidIndex(arrayIndex))
					availableColorSnippetTagsAndDataAssets.Add(tag, colorSnippetDataAssets_Local[arrayIndex]);
			}
		}
	}
}


//--------------------------------------------------------

// Get All Mesh Color Snippets Tags Under Tag Category

void UVertexPaintFunctionLibrary::GetAllMeshColorSnippetsTagsUnderTagCategory_Wrapper(UPrimitiveComponent* meshComponent, FGameplayTag tagCategory, TMap<FGameplayTag, TSoftObjectPtr<UVertexPaintColorSnippetDataAsset>>& availableColorSnippetTagsAndDataAssetsUnderTagCategory) {

	availableColorSnippetTagsAndDataAssetsUnderTagCategory.Empty();

	if (!IsValid(meshComponent) || !GetColorSnippetReferenceDataAsset()) return;


	TMap<FGameplayTag, TSoftObjectPtr<UVertexPaintColorSnippetDataAsset>> availableColorSnippetTagsAndDataAssets;
	GetAllMeshColorSnippetsAsTags_Wrapper(meshComponent, availableColorSnippetTagsAndDataAssets);

	TArray<FGameplayTag> availableColorSnippetTags_Local;
	availableColorSnippetTagsAndDataAssets.GetKeys(availableColorSnippetTags_Local);

	TArray<TSoftObjectPtr<UVertexPaintColorSnippetDataAsset>> colorSnippetDataAssets_Local;
	availableColorSnippetTagsAndDataAssets.GenerateValueArray(colorSnippetDataAssets_Local);


	FGameplayTagContainer tagContainerTemp;
	tagContainerTemp.AddTag(FGameplayTag::RequestGameplayTag(tagCategory.GetTagName(), false));
	FGameplayTagContainer tagContainer_Local = GetColorSnippetReferenceDataAsset()->allAvailableColorSnippets.Filter(tagContainerTemp);

	TArray<FGameplayTag> allAvailableTagsUnderCategory_Local;
	tagContainer_Local.GetGameplayTagArray(allAvailableTagsUnderCategory_Local);


	for (auto tag : allAvailableTagsUnderCategory_Local) {

		// If Mesh has Snippet Tag that matches Tag under category 
		if (availableColorSnippetTags_Local.Contains(tag)) {

			int arrayIndex = -1;
			availableColorSnippetTags_Local.Find(tag, arrayIndex);

			if (colorSnippetDataAssets_Local.IsValidIndex(arrayIndex))
				availableColorSnippetTagsAndDataAssetsUnderTagCategory.Add(tag, colorSnippetDataAssets_Local[arrayIndex]);
		}
	}
}


//--------------------------------------------------------

// Get Mesh Color Snippets Tags In Tag Category

void UVertexPaintFunctionLibrary::GetMeshColorSnippetsTagsInTagCategory_Wrapper(UPrimitiveComponent* meshComponent, FGameplayTag tagCategory, TMap<FGameplayTag, TSoftObjectPtr<UVertexPaintColorSnippetDataAsset>>& availableColorSnippetTagsAndDataAssetsUnderTagCategory) {

	availableColorSnippetTagsAndDataAssetsUnderTagCategory.Empty();

	if (!IsValid(meshComponent) || !GetColorSnippetReferenceDataAsset()) return;


	TMap<FGameplayTag, TSoftObjectPtr<UVertexPaintColorSnippetDataAsset>> availableColorSnippetTagsAndDataAssets;
	GetAllMeshColorSnippetsAsTags_Wrapper(meshComponent, availableColorSnippetTagsAndDataAssets);

	TArray<FGameplayTag> availableColorSnippetTags_Local;
	availableColorSnippetTagsAndDataAssets.GetKeys(availableColorSnippetTags_Local);

	TArray<TSoftObjectPtr<UVertexPaintColorSnippetDataAsset>> colorSnippetDataAssets_Local;
	availableColorSnippetTagsAndDataAssets.GenerateValueArray(colorSnippetDataAssets_Local);


	FGameplayTagContainer tagContainerTemp;
	tagContainerTemp.AddTag(FGameplayTag::RequestGameplayTag(tagCategory.GetTagName(), false));

	FGameplayTagContainer tagContainer_Local = GetColorSnippetReferenceDataAsset()->allAvailableColorSnippets.Filter(tagContainerTemp);
	TArray<FGameplayTag> allAvailableTagsUnderCategory_Local;
	tagContainer_Local.GetGameplayTagArray(allAvailableTagsUnderCategory_Local);


	for (auto tag : allAvailableTagsUnderCategory_Local) {

		FString tagAsString = tag.GetTagName().ToString();

		// Plus 1 so we don't have the . after the parent category
		FString tagStringWithoutParentCategory = tagAsString.RightChop(tagCategory.GetTagName().ToString().Len() + 1);

		int charIndexWithPeriod = -1;

		// If has a ., i.e. this is not tag that is directly in the tag category but another under that. 
		if (tagStringWithoutParentCategory.FindChar('.', charIndexWithPeriod))
			continue;


		// If Mesh has Snippet Tag that matches Tag under category 
		if (availableColorSnippetTags_Local.Contains(tag)) {

			int arrayIndex = -1;
			availableColorSnippetTags_Local.Find(tag, arrayIndex);

			if (colorSnippetDataAssets_Local.IsValidIndex(arrayIndex))
				availableColorSnippetTagsAndDataAssetsUnderTagCategory.Add(tag, colorSnippetDataAssets_Local[arrayIndex]);
		}
	}
}


//--------------------------------------------------------

// Get Color Snippet Reference Data Asset

UVertexPaintColorSnippetRefs* UVertexPaintFunctionLibrary::GetColorSnippetReferenceDataAsset() {

	if (auto vertexPaintDetectionSettings_Local = GetDefault<UVertexPaintDetectionSettings>())
		return vertexPaintDetectionSettings_Local->vertexPaintAndDetectionPlugin_ColorSnippetReferencesDataAssetToUse.LoadSynchronous();

	return nullptr;
}


//--------------------------------------------------------

// Get Optimization Data Asset

UVertexPaintOptimizationDataAsset* UVertexPaintFunctionLibrary::GetOptimizationDataAsset() {

	if (auto vertexPaintDetectionSettings_Local = GetDefault<UVertexPaintDetectionSettings>())
		return vertexPaintDetectionSettings_Local->vertexPaintAndDetectionPlugin_OptimizationDataAssetToUse.LoadSynchronous();

	return nullptr;
}


//--------------------------------------------------------

// Get Vertex Paint Material Data Asset

UVertexPaintMaterialDataAsset* UVertexPaintFunctionLibrary::GetVertexPaintMaterialDataAsset() {

	if (auto vertexPaintDetectionSettings_Local = GetDefault<UVertexPaintDetectionSettings>())
		return vertexPaintDetectionSettings_Local->vertexPaintAndDetectionPlugin_MaterialsDataAssetToUse.LoadSynchronous();

	return nullptr;
}


//-------------------------------------------------------

// Get Max LOD To Paint On

int UVertexPaintFunctionLibrary::GetAmountOfLODsToPaintOn(UPrimitiveComponent* meshComp, bool overrideLODToPaintUpOn, int overrideUpToLOD) {

	if (!IsValid(meshComp)) return 0;


	int lodsToPaint_Local = 0;
	int maxLODsAvailable_Local = 0;


	if (auto staticMesh_Local = Cast<UStaticMeshComponent>(meshComp)) {


		if (staticMesh_Local->GetStaticMesh()->bAllowCPUAccess) {

			maxLODsAvailable_Local = staticMesh_Local->GetStaticMesh()->GetRenderData()->LODResources.Num();
		}

		else {

			maxLODsAvailable_Local = staticMesh_Local->LODData.Num();
		}


		lodsToPaint_Local = maxLODsAvailable_Local;


		if (GetOptimizationDataAsset()) {

			// If the mesh is added to only be painted a certain number of LODs in the Optimization Data Asset 
			if (GetOptimizationDataAsset()->staticMeshNumOfLODsToPaint.Contains(staticMesh_Local->GetStaticMesh())) {

				int LODsLimitToPaint_Local = GetOptimizationDataAsset()->staticMeshNumOfLODsToPaint.FindRef(staticMesh_Local->GetStaticMesh()).maxAmountOfLODsToPaint;


				if (LODsLimitToPaint_Local <= maxLODsAvailable_Local)
					lodsToPaint_Local = LODsLimitToPaint_Local;
			}
		}


		if (overrideLODToPaintUpOn) {

			if (maxLODsAvailable_Local >= overrideUpToLOD) {

				return overrideUpToLOD;
			}

			else {

				// If lodsToPaint_Local was less than override LOD, then just returns the maximum LODs we have so we get as close to the Override LOD 
				return maxLODsAvailable_Local;
			}
		}

		return lodsToPaint_Local;
	}

	else if (auto skeletalMeshComp_Local = Cast<USkeletalMeshComponent>(meshComp)) {


		USkeletalMesh* skelMesh_Local = nullptr;

#if ENGINE_MAJOR_VERSION == 4

		skelMesh_Local = skeletalMeshComp_Local->SkeletalMesh;

#elif ENGINE_MAJOR_VERSION == 5

#if ENGINE_MINOR_VERSION == 0

		skelMesh_Local = skeletalMeshComp_Local->SkeletalMesh.Get();

#else

		skelMesh_Local = skeletalMeshComp_Local->GetSkeletalMeshAsset();

#endif
#endif


		maxLODsAvailable_Local = skeletalMeshComp_Local->GetSkeletalMeshRenderData()->LODRenderData.Num();

		lodsToPaint_Local = maxLODsAvailable_Local;


		if (GetOptimizationDataAsset()) {

			if (GetOptimizationDataAsset()->skeletalMeshNumOfLODsToPaint.Contains(skelMesh_Local)) {

				int LODsLimitToPaint_Local = GetOptimizationDataAsset()->skeletalMeshNumOfLODsToPaint.FindRef(skelMesh_Local).maxAmountOfLODsToPaint;

				if (LODsLimitToPaint_Local <= maxLODsAvailable_Local)
					lodsToPaint_Local = LODsLimitToPaint_Local;
			}
		}


		if (overrideLODToPaintUpOn) {

			if (maxLODsAvailable_Local >= overrideUpToLOD) {

				return overrideUpToLOD;
			}

			else {

				return maxLODsAvailable_Local;
			}
		}

		return lodsToPaint_Local;
	}

	return 0;
}


//--------------------------------------------------------

// Multisphere Trace For Paint At Location

TArray<FHitResult> UVertexPaintFunctionLibrary::MultisphereTraceForPaintAtLocation_Wrapper(const UObject* WorldContextObject, const FVector& location, const float& areaOfEffect, const TArray<TEnumAsByte<EObjectTypeQuery>>& objectTypesToTraceFor, int& expectedCallbacksFromPaintAtLocation) {

	expectedCallbacksFromPaintAtLocation = 0;

	if (!WorldContextObject) return TArray<FHitResult>();
	if (areaOfEffect <= 0) return TArray<FHitResult>();
	if (objectTypesToTraceFor.Num() <= 0) return TArray<FHitResult>();


	TArray<FHitResult> multiSweepHitResultsTemp;
	FCollisionQueryParams multiSweepQueryParams;

	// * 1.00001 since there's a bugg where if you sweep from and to the same exact location the hit results won't be 100%, the normal for instance can be very innacurate. 
	if (WorldContextObject->GetWorld()->SweepMultiByObjectType(multiSweepHitResultsTemp, location, location * 1.00001, FQuat::Identity, objectTypesToTraceFor, FCollisionShape::MakeSphere(areaOfEffect), multiSweepQueryParams)) {

		TArray<FHitResult> hitResultWithUniqueMeshesTemp;
		TArray<UPrimitiveComponent*> uniqueComponentsTemp;

		for (auto hitResult : multiSweepHitResultsTemp) {

			if (IsValid(hitResult.Component.Get())) {

				if (!uniqueComponentsTemp.Contains(hitResult.Component.Get())) {

					uniqueComponentsTemp.Add(hitResult.Component.Get());
					hitResultWithUniqueMeshesTemp.Add(hitResult);
				}
			}
		}

		float closestDistanceTemp = 100000000;
		FHitResult closestHitResultTemp = FHitResult();

		for (auto hitResult : hitResultWithUniqueMeshesTemp) {

			if ((hitResult.Location - location).Size() < closestDistanceTemp) {

				closestDistanceTemp = (hitResult.ImpactPoint - location).Size();
				closestHitResultTemp = hitResult;
			}
		}

		for (int i = 0; i < hitResultWithUniqueMeshesTemp.Num(); i++) {

			// Updates so the Hit Results we run a Paint at Location On, is Based from location we want to paint, so we paint on other nearby meshes if there are any, but on an offset location, so even if there are different meshes, any seems won't be noticable. 
			hitResultWithUniqueMeshesTemp[i].ImpactPoint = location;
		}

		// This is mostly to make users aware of the amount of tasks that should be created, but more importantly the amount of callback events you should get. This is useful if you have something that should be destroyed like a paintball hitting a wall, but you can't destroy it after just 1 callback, since the first callback may come before all of the tasks has even finished being called and created. 
		expectedCallbacksFromPaintAtLocation = hitResultWithUniqueMeshesTemp.Num();

		return hitResultWithUniqueMeshesTemp;
	}

	return TArray<FHitResult>();
}


//--------------------------------------------------------

// Get Amount Of Tasks Started By Component

int UVertexPaintFunctionLibrary::GetAmountOfTasksStartedByComponent(UVertexPaintDetectionComponent* paintComponent) {

	if (!IsValid(paintComponent)) return 0;
	if (!IsValid(paintComponent->GetWorld())) return 0;
	if (paintComponent->GetWorld()->bIsTearingDown) return 0;
	if (!paintComponent->GetWorld()->IsGameWorld()) return 0;

	int amountOfTasks_Local = 0;

	if (UGameplayStatics::GetGameInstance(paintComponent->GetWorld())->GetSubsystem<UVertexPaintDetectionGISubSystem>()) {

		auto calculateColorsTasks = UGameplayStatics::GetGameInstance(paintComponent->GetWorld())->GetSubsystem<UVertexPaintDetectionGISubSystem>()->GetCalculateColorsPaintTasks();

		for (auto& calculateColorsTaskTemp : calculateColorsTasks) {

			for (auto calculateColorsInfoTemp : calculateColorsTaskTemp.Value.calculateColorsQueueArray) {

				if (calculateColorsInfoTemp.initiatedByComponent == paintComponent)
					amountOfTasks_Local++;
			}
		}
	}

	return amountOfTasks_Local;
}


//--------------------------------------------------------

// Set Static Mesh And Release Override Vertex Colors

void UVertexPaintFunctionLibrary::VertexPaintDetectionPlugin_SetStaticMeshAndReleaseOverrideVertexColors(UStaticMeshComponent* staticMeshComponent, UStaticMesh* newMesh) {

	if (!IsValid(staticMeshComponent) || !IsValid(newMesh)) return;


	// Necessary otherwise it had the same amount of LODs as the previous static mesh
	staticMeshComponent->SetLODDataCount(newMesh->GetNumLODs(), newMesh->GetNumLODs());

	if (staticMeshComponent->LODData.Num() > 0) {

		for (int i = 0; i < staticMeshComponent->LODData.Num(); i++) {


			int amountOfVertsToSwitchTo = 0;
			TArray<FColor> colorLOD_Local;

			if (newMesh->GetRenderData()->LODResources.IsValidIndex(i)) {

				amountOfVertsToSwitchTo = newMesh->GetRenderData()->LODResources[i].GetNumVertices();
				auto colVertBufferAtLOD_Local = &newMesh->GetRenderData()->LODResources[i].VertexBuffers.ColorVertexBuffer;

				// If color buffer isn't initialized it means its default colors are White and it hasn't been painted either in editor or in runtime, if this is the case we init the array with white so even unstored, unpainted cpu meshes with all default white vertex colors can be painted and look as they should. 
				if (colVertBufferAtLOD_Local) {

					if (colVertBufferAtLOD_Local->IsInitialized())
						colorLOD_Local.Init(FColor(0, 0, 0, 0), amountOfVertsToSwitchTo);
					else
						colorLOD_Local.Init(FColor::White, amountOfVertsToSwitchTo);
				}

				else {

					colorLOD_Local.Init(FColor::White, amountOfVertsToSwitchTo);
				}
			}

			// Had to make a new color vertex buffer and init it, otherwise when switching mesh, the new mesh could get really weird colors, as if the old buffer "bleed" to the next mesh but where the vertex color didn't match since it's a new mesh with different vertex amount etc. 
			staticMeshComponent->LODData[i].OverrideVertexColors = new FColorVertexBuffer();
			staticMeshComponent->LODData[i].OverrideVertexColors->InitFromColorArray(colorLOD_Local);
			BeginInitResource(staticMeshComponent->LODData[i].OverrideVertexColors);
		}
	}

	staticMeshComponent->SetStaticMesh(newMesh);

	staticMeshComponent->MarkRenderStateDirty();


}


//--------------------------------------------------------

// Release Resources And Set Skeletal Mesh

void UVertexPaintFunctionLibrary::VertexPaintDetectionPlugin_SetSkeletalMeshAndReleaseResources(USkeletalMeshComponent* skeletalMeshComponent, USkeletalMesh* newMesh) {

	if (!IsValid(skeletalMeshComponent) || !IsValid(newMesh)) return;


	USkeletalMesh* skelMeshTemp = nullptr;

#if ENGINE_MAJOR_VERSION == 4

	skelMeshTemp = skeletalMeshComponent->SkeletalMesh;

#elif ENGINE_MAJOR_VERSION == 5

#if ENGINE_MINOR_VERSION == 0

	skelMeshTemp = skeletalMeshComponent->SkeletalMesh.Get();

#else

	skelMeshTemp = skeletalMeshComponent->GetSkeletalMeshAsset();

#endif

#endif


	skeletalMeshComponent->ReleaseResources(); // Fixes so we don't get crash if we're applying colors to the skeletal mesh and switching


	// When i tested painting every single frame and switching characters like crazy i once still got a crash when running SetSkeletalMesh(), with trying to delete vertex color buffer before releasing it or something. So added all these to really make sure everything gets released before we switch


	skeletalMeshComponent->ReleaseAllClothingResources();

	for (int i = 0; i < skeletalMeshComponent->LODInfo.Num(); i++) {

		skeletalMeshComponent->ClearVertexColorOverride(i);
		skeletalMeshComponent->LODInfo[i].BeginReleaseOverrideVertexColors();
		skeletalMeshComponent->LODInfo[i].ReleaseOverrideVertexColorsAndBlock();
	}

	if (skelMeshTemp)
		skelMeshTemp->ReleaseResourcesFence.Wait();

	//----------

#if ENGINE_MAJOR_VERSION == 4

	skeletalMeshComponent->SetSkeletalMesh(newMesh, false);

#elif ENGINE_MAJOR_VERSION == 5

#if ENGINE_MINOR_VERSION == 0

	skeletalMeshComponent->SetSkeletalMesh(newMesh, false);

#else

	skeletalMeshComponent->SetSkeletalMeshAsset(newMesh);

#endif

#endif
}


//--------------------------------------------------------

// Sort String Array Alphabetically

TArray<FString> UVertexPaintFunctionLibrary::VertexPaintDetectionPlugin_SortStringArrayAlphabetically(TArray<FString> strings) {

	FString tempString;

	for (int i = 0; i < strings.Num(); ++i) {

		for (int j = i + 1; j < strings.Num(); ++j) {

			if (strings[i] > strings[j]) {

				tempString = strings[i];
				strings[i] = strings[j];
				strings[j] = tempString;
			}
		}
	}

	return strings;
}


//--------------------------------------------------------

// Sort Assets Names Alphabetically

TMap<int, FString> UVertexPaintFunctionLibrary::VertexPaintDetectionPlugin_SortAssetsNamesAlphabetically(TMap<int, FString> assetIndexAndName) {


	FString name_Local;
	TArray<FString> names_Local;
	assetIndexAndName.GenerateValueArray(names_Local);

	int index_Local;
	TArray<int> indexes_Local;
	assetIndexAndName.GetKeys(indexes_Local);


	for (int i = 0; i < names_Local.Num(); ++i) {

		for (int j = i + 1; j < names_Local.Num(); ++j) {

			if (names_Local[i] > names_Local[j]) {

				name_Local = names_Local[i];
				index_Local = indexes_Local[i];

				names_Local[i] = names_Local[j];
				indexes_Local[i] = indexes_Local[j];

				names_Local[j] = name_Local;
				indexes_Local[j] = index_Local;
			}
		}
	}

	TMap<int, FString> indexesAndTheirName_Local;

	for (int i = 0; i < indexes_Local.Num(); i++) {

		indexesAndTheirName_Local.Add(indexes_Local[i], names_Local[i]);
	}

	return indexesAndTheirName_Local;
}


//--------------------------------------------------------

// Draw Primitive Bounds Box

void UVertexPaintFunctionLibrary::DrawPrimitiveComponentBoundsBox(UPrimitiveComponent* component, float lifetime, float thickness, FLinearColor colorToDraw) {

	if (!IsInGameThread()) return;
	if (!IsValid(component)) return;
	if (!IsValid(component->GetWorld())) return;
	if (!component->GetWorld()->IsGameWorld()) return;
	if (component->GetWorld()->bIsTearingDown) return;


	if (Cast<USkeletalMeshComponent>(component)) {

		DrawDebugBox(component->GetWorld(), component->Bounds.GetBox().GetCenter(), component->Bounds.GetBox().GetExtent(), colorToDraw.ToFColor(false), false, lifetime, 0, thickness);
	}

	// In order to take the added collision of static meshes into account we had to get the AggGeom
	else if (Cast<UStaticMeshComponent>(component)) {

		FBoxSphereBounds AggGeomBounds;
		component->GetBodySetup()->AggGeom.CalcBoxSphereBounds(AggGeomBounds, component->GetComponentToWorld());

		DrawDebugBox(component->GetWorld(), component->Bounds.GetBox().GetCenter(), AggGeomBounds.GetBox().GetExtent(), colorToDraw.ToFColor(false), false, lifetime, 0, thickness);
	}
}


//--------------------------------------------------------

// Get Amount Of Fully Painted Colors For Each Channel - Gets % of each color from FColor Array

FVertexDetectAmountOfPaintedColorsOfEachChannel UVertexPaintFunctionLibrary::GetAmountOfPaintedColorsForEachChannel(const TArray<FColor>& vertexColors, float minColorAmountToBeConsidered) {

	if (vertexColors.Num() <= 0) return FVertexDetectAmountOfPaintedColorsOfEachChannel();


	FVertexDetectAmountOfPaintedColorsOfEachChannel amountOfPaintedColorsOfEachChannel_Local;
	FLinearColor linearColor_Local;


	for (auto colorTemp : vertexColors) {

		linearColor_Local = colorTemp.ReinterpretAsLinear(); // So we only have to run Reinterpret once


		if (linearColor_Local.R >= minColorAmountToBeConsidered) {

			amountOfPaintedColorsOfEachChannel_Local.amountOfVerticesWithAnyRedPaintedAtTheMinAmount++;
			amountOfPaintedColorsOfEachChannel_Local.averageAmountOfRedColorAtTheMinAmount += linearColor_Local.R;
		}
		if (linearColor_Local.G >= minColorAmountToBeConsidered) {

			amountOfPaintedColorsOfEachChannel_Local.amountOfVerticesWithAnyGreenPaintedAtTheMinAmount++;
			amountOfPaintedColorsOfEachChannel_Local.averageAmountOfGreenColorAtTheMinAmount += linearColor_Local.G;
		}
		if (linearColor_Local.B >= minColorAmountToBeConsidered) {

			amountOfPaintedColorsOfEachChannel_Local.amountOfVerticesWithAnyBluePaintedAtTheMinAmount++;
			amountOfPaintedColorsOfEachChannel_Local.averageAmountOfBlueColorAtTheMinAmount += linearColor_Local.B;
		}
		if (linearColor_Local.A >= minColorAmountToBeConsidered) {

			amountOfPaintedColorsOfEachChannel_Local.amountOfVerticesWithAnyAlphaPaintedAtTheMinAmount++;
			amountOfPaintedColorsOfEachChannel_Local.averageAmountOfAlphaColorAtTheMinAmount += linearColor_Local.A;
		}
	}


	amountOfPaintedColorsOfEachChannel_Local.averageAmountOfRedColorAtTheMinAmount = amountOfPaintedColorsOfEachChannel_Local.averageAmountOfRedColorAtTheMinAmount / vertexColors.Num();
	amountOfPaintedColorsOfEachChannel_Local.averageAmountOfGreenColorAtTheMinAmount = amountOfPaintedColorsOfEachChannel_Local.averageAmountOfGreenColorAtTheMinAmount / vertexColors.Num();
	amountOfPaintedColorsOfEachChannel_Local.averageAmountOfBlueColorAtTheMinAmount = amountOfPaintedColorsOfEachChannel_Local.averageAmountOfBlueColorAtTheMinAmount / vertexColors.Num();
	amountOfPaintedColorsOfEachChannel_Local.averageAmountOfAlphaColorAtTheMinAmount = amountOfPaintedColorsOfEachChannel_Local.averageAmountOfAlphaColorAtTheMinAmount / vertexColors.Num();


	amountOfPaintedColorsOfEachChannel_Local.amountOfRedChannelPercentPaintedAtTheMinAmount = amountOfPaintedColorsOfEachChannel_Local.amountOfVerticesWithAnyRedPaintedAtTheMinAmount / vertexColors.Num();
	amountOfPaintedColorsOfEachChannel_Local.amountOfGreenChannelPercentPaintedAtTheMinAmount = amountOfPaintedColorsOfEachChannel_Local.amountOfVerticesWithAnyGreenPaintedAtTheMinAmount / vertexColors.Num();
	amountOfPaintedColorsOfEachChannel_Local.amountOfBlueChannelPercentPaintedAtTheMinAmount = amountOfPaintedColorsOfEachChannel_Local.amountOfVerticesWithAnyBluePaintedAtTheMinAmount / vertexColors.Num();
	amountOfPaintedColorsOfEachChannel_Local.amountOfAlphaChannelPercentPaintedAtTheMinAmount = amountOfPaintedColorsOfEachChannel_Local.amountOfVerticesWithAnyAlphaPaintedAtTheMinAmount / vertexColors.Num();

	amountOfPaintedColorsOfEachChannel_Local.amountOfRedChannelPercentPaintedAtTheMinAmount *= 100;
	amountOfPaintedColorsOfEachChannel_Local.amountOfGreenChannelPercentPaintedAtTheMinAmount *= 100;
	amountOfPaintedColorsOfEachChannel_Local.amountOfBlueChannelPercentPaintedAtTheMinAmount *= 100;
	amountOfPaintedColorsOfEachChannel_Local.amountOfAlphaChannelPercentPaintedAtTheMinAmount *= 100;

	amountOfPaintedColorsOfEachChannel_Local.successfullyGotVerticesOfEachChannelAtTheMinAmount = true;

	return amountOfPaintedColorsOfEachChannel_Local;
}


//--------------------------------------------------------

// Get Skeletal Mesh

USkeletalMesh* UVertexPaintFunctionLibrary::VertexPaintDetectionPlugin_GetSkeletalMesh(USkeletalMeshComponent* skeletalMeshComp) {

	if (!IsValid(skeletalMeshComp)) return nullptr;


#if ENGINE_MAJOR_VERSION == 4

	return skeletalMeshComp->SkeletalMesh;

#elif ENGINE_MAJOR_VERSION == 5

#if ENGINE_MINOR_VERSION == 0

	return skeletalMeshComp->SkeletalMesh.Get();

#else

	return skeletalMeshComp->GetSkeletalMeshAsset();

#endif
#endif

	return nullptr;
}



//--------------------------------------------------------

// Get Mesh Component Vertex Colors

FVertexDetectMeshDataStruct UVertexPaintFunctionLibrary::GetMeshComponentVertexColors_Wrapper(UPrimitiveComponent* meshComponent, bool& success, bool getColorsForAllLODs, int getColorsUpToLOD) {

	success = false;
	if (!IsValid(meshComponent)) return FVertexDetectMeshDataStruct();
	if (!getColorsForAllLODs && getColorsUpToLOD <= 0) return FVertexDetectMeshDataStruct();


	FVertexDetectMeshDataStruct vertexMeshData_Local;
	TArray<FVertexDetectMeshDataPerLODStruct> meshDataPerLod_Local;
	int amountOfLODsToGet = getColorsUpToLOD;


	if (auto staticMeshComponent = Cast<UStaticMeshComponent>(meshComponent)) {

		if (!IsValid(staticMeshComponent->GetStaticMesh())) return FVertexDetectMeshDataStruct();


		vertexMeshData_Local.meshComp = staticMeshComponent;
		vertexMeshData_Local.meshSource = staticMeshComponent->GetStaticMesh();

		if (getColorsForAllLODs)
			amountOfLODsToGet = staticMeshComponent->GetStaticMesh()->GetRenderData()->LODResources.Num();


		for (int i = 0; i < amountOfLODsToGet; i++) {

			FVertexDetectMeshDataPerLODStruct meshDataPerLodTemp;
			meshDataPerLodTemp.lod = i;
			meshDataPerLodTemp.meshVertexColorsPerLODArray = VertexPaintDetectionPlugin_GetStaticMeshVertexColorsAtLOD(staticMeshComponent, i);

			// If actually got any colors, i.e. the lod was valid
			if (meshDataPerLodTemp.meshVertexColorsPerLODArray.Num() > 0)
				meshDataPerLod_Local.Add(meshDataPerLodTemp);
		}

		vertexMeshData_Local.meshDataPerLOD = meshDataPerLod_Local;
		success = true;

		return vertexMeshData_Local;
	}

	else if (auto skeletalMeshComponent = Cast<USkeletalMeshComponent>(meshComponent)) {

		USkeletalMesh* skelMesh = nullptr;

#if ENGINE_MAJOR_VERSION == 4

		skelMesh = skeletalMeshComponent->SkeletalMesh;

#elif ENGINE_MAJOR_VERSION == 5

#if ENGINE_MINOR_VERSION == 0

		skelMesh = skeletalMeshComponent->SkeletalMesh.Get();

#else

		skelMesh = skeletalMeshComponent->GetSkeletalMeshAsset();
#endif
#endif

		if (!IsValid(skelMesh)) return FVertexDetectMeshDataStruct();


		vertexMeshData_Local.meshComp = skeletalMeshComponent;
		vertexMeshData_Local.meshSource = skelMesh;

		if (getColorsForAllLODs)
			amountOfLODsToGet = skeletalMeshComponent->GetSkeletalMeshRenderData()->LODRenderData.Num();


		for (int i = 0; i < amountOfLODsToGet; i++) {

			FVertexDetectMeshDataPerLODStruct meshDataPerLodTemp;
			meshDataPerLodTemp.lod = i;
			meshDataPerLodTemp.meshVertexColorsPerLODArray = VertexPaintDetectionPlugin_GetSkeletalMeshVertexColorsAtLOD(skeletalMeshComponent, i);

			// If actually got any colors, i.e. the lod was valid
			if (meshDataPerLodTemp.meshVertexColorsPerLODArray.Num() > 0)
				meshDataPerLod_Local.Add(meshDataPerLodTemp);
		}

		vertexMeshData_Local.meshDataPerLOD = meshDataPerLod_Local;
		success = true;

		return vertexMeshData_Local;
	}

	return FVertexDetectMeshDataStruct();
}


//--------------------------------------------------------

// Get Skeletal Mesh Vertex Colors At LOD

TArray<FColor> UVertexPaintFunctionLibrary::VertexPaintDetectionPlugin_GetSkeletalMeshVertexColorsAtLOD(USkeletalMeshComponent* skeletalMeshComponent, int lod) {

	if (!IsValid(skeletalMeshComponent)) return TArray<FColor>();


	TArray<FColor> colorFromLOD_Local;

	if (skeletalMeshComponent->LODInfo.IsValidIndex(lod)) {

		// If been painted on before then can get the current Instance Color
		if (skeletalMeshComponent->LODInfo[lod].OverrideVertexColors) {

			skeletalMeshComponent->LODInfo[lod].OverrideVertexColors->GetVertexColors(colorFromLOD_Local);
		}
		else {

			if (skeletalMeshComponent->GetSkeletalMeshRenderData()->LODRenderData.IsValidIndex(lod))
				skeletalMeshComponent->GetSkeletalMeshRenderData()->LODRenderData[lod].StaticVertexBuffers.ColorVertexBuffer.GetVertexColors(colorFromLOD_Local);
		}
	}

	else {

		if (skeletalMeshComponent->GetSkeletalMeshRenderData()->LODRenderData.IsValidIndex(lod))
			skeletalMeshComponent->GetSkeletalMeshRenderData()->LODRenderData[lod].StaticVertexBuffers.ColorVertexBuffer.GetVertexColors(colorFromLOD_Local);
	}


	// In one instance when i tested on a side project with a purchased character, it got 0 in Num when first time painting at it, i.e. got vertex colors from SkeletalMeshRenderData. This only occured if the character hadn't gotten any paint on it and was imported with FColor(255,255,255,255) so it was an easy solution to just fill arrays to that color in this rare instance. So unlike the static mesh solution i couldn't initialize colorFromLOD_Local to be a length before running GetVertexColors because then i couldn't detect this rare case. 
	if (colorFromLOD_Local.Num() > 0) {

		// 
	}

	else {

		if (skeletalMeshComponent->GetSkeletalMeshRenderData()->LODRenderData.IsValidIndex(lod))
			colorFromLOD_Local.Init(FColor(255, 255, 255, 255), skeletalMeshComponent->GetSkeletalMeshRenderData()->LODRenderData[lod].GetNumVertices());
	}

	return colorFromLOD_Local;
}


//--------------------------------------------------------

// Get Static Mesh Vertex Colors At LOD

TArray<FColor> UVertexPaintFunctionLibrary::VertexPaintDetectionPlugin_GetStaticMeshVertexColorsAtLOD(UStaticMeshComponent* staticMeshComponent, int lod) {

	if (!IsValid(staticMeshComponent)) return TArray<FColor>();
	if (!IsValid(staticMeshComponent->GetStaticMesh())) return TArray<FColor>();
	if (!staticMeshComponent->GetStaticMesh()->bAllowCPUAccess) return TArray<FColor>();
	if (!staticMeshComponent->GetStaticMesh()->GetRenderData()->LODResources.IsValidIndex(lod)) return TArray<FColor>();


	TArray<FColor> colorFromLOD_Local;
	FColorVertexBuffer* colVertBufferAtLOD_Local = nullptr;
	int meshLODTotalAmountOfVerts_Local = staticMeshComponent->GetStaticMesh()->GetRenderData()->LODResources[lod].VertexBuffers.PositionVertexBuffer.GetNumVertices();

	colorFromLOD_Local.SetNum(meshLODTotalAmountOfVerts_Local, true);

	// Depending if override vertex colors is valid, we get the Vertex Colors from it, i.e. the instanced colors
	if (staticMeshComponent->LODData.IsValidIndex(lod)) {

		if (staticMeshComponent->LODData[lod].OverrideVertexColors) {

			staticMeshComponent->LODData[lod].OverrideVertexColors->GetVertexColors(colorFromLOD_Local);
		}

		else {

			staticMeshComponent->GetStaticMesh()->GetRenderData()->LODResources[lod].VertexBuffers.ColorVertexBuffer.GetVertexColors(colorFromLOD_Local);
		}
	}

	else {

		colVertBufferAtLOD_Local = &staticMeshComponent->GetStaticMesh()->GetRenderData()->LODResources[lod].VertexBuffers.ColorVertexBuffer;

		// If color buffer isn't initialized it means its default colors are White and it hasn't been painted either in editor or in runtime, if this is the case we init the array with white so even unstored, unpainted cpu meshes with all default white vertex colors can be painted and look as they should. 
		if (colVertBufferAtLOD_Local) {

			if (colVertBufferAtLOD_Local->IsInitialized()) {

				colVertBufferAtLOD_Local->GetVertexColors(colorFromLOD_Local);
			}
			else {

				colorFromLOD_Local.Init(FColor::White, meshLODTotalAmountOfVerts_Local);
			}
		}

		else {

			colorFromLOD_Local.Init(FColor::White, meshLODTotalAmountOfVerts_Local);
		}
	}

	return colorFromLOD_Local;
}


//-------------------------------------------------------

// Collision Channel to Object Type

EObjectTypeQuery UVertexPaintFunctionLibrary::CollisionChannelToObjectType(ECollisionChannel channel) {

	// Has this here since i don't want to include UnrealTypes in.h
	return UEngineTypes::ConvertToObjectType(channel);
}


//-------------------------------------------------------

// Object Type to Collision Channel

ECollisionChannel UVertexPaintFunctionLibrary::ObjectTypeToCollisionChannel(EObjectTypeQuery object) {

	// Has this here since i don't want to include UnrealTypes in.h
	return UEngineTypes::ConvertToCollisionChannel(object);
}


//-------------------------------------------------------

// Get Colors To Apply Based Off Detected Physics Material

bool UVertexPaintFunctionLibrary::GetColorsToApplyFromPhysicsMaterial_Wrapper(UMaterialInterface* materialToApplyColorsTo, TEnumAsByte<EPhysicalSurface> physicalSurface, float& redAmountToApply, float& greenAmountToApply, float& blueAmountToApply, float& alphaAmountToApply, float defaultAmountIfFailOrChannelIsNotRegistered) {

	redAmountToApply = defaultAmountIfFailOrChannelIsNotRegistered;
	greenAmountToApply = defaultAmountIfFailOrChannelIsNotRegistered;
	blueAmountToApply = defaultAmountIfFailOrChannelIsNotRegistered;
	alphaAmountToApply = defaultAmountIfFailOrChannelIsNotRegistered;

	if (physicalSurface == EPhysicalSurface::SurfaceType_Default) return false;
	if (!GEngine) return false;
	if (!IsValid(materialToApplyColorsTo)) return false;
	if (!UVertexPaintFunctionLibrary::GetVertexPaintMaterialDataAsset()) return false;
	if (!UVertexPaintFunctionLibrary::GetVertexPaintMaterialDataAsset()->GetVertexPaintMaterialInterface().Contains(materialToApplyColorsTo)) return false;


	bool gotAnyAmountToApply = false;

	if (UVertexPaintFunctionLibrary::GetVertexPaintMaterialDataAsset()->GetVertexPaintMaterialInterface().FindRef(materialToApplyColorsTo).vertexColorToApplyOnMaterialBasedOffPhysicsSurface.Contains(physicalSurface)) {

		gotAnyAmountToApply = true;

		// The TMap only stored channels that actually have a value, i.e. not 0. 
		for (auto& channelsAndAmountToApplyTemp : UVertexPaintFunctionLibrary::GetVertexPaintMaterialDataAsset()->GetVertexPaintMaterialInterface().FindRef(materialToApplyColorsTo).vertexColorToApplyOnMaterialBasedOffPhysicsSurface.FindRef(physicalSurface).channelsAndAmountToApply) {


			switch (channelsAndAmountToApplyTemp.Key) {

			case Enum_SurfaceAtChannel::RedChannel:

				redAmountToApply = channelsAndAmountToApplyTemp.Value;

				break;

			case Enum_SurfaceAtChannel::GreenChannel:

				greenAmountToApply = channelsAndAmountToApplyTemp.Value;

				break;

			case Enum_SurfaceAtChannel::BlueChannel:

				blueAmountToApply = channelsAndAmountToApplyTemp.Value;

				break;

			case Enum_SurfaceAtChannel::AlphaChannel:

				alphaAmountToApply = channelsAndAmountToApplyTemp.Value;

				break;

			default:
				break;
			}
		}
	}

	return gotAnyAmountToApply;
}


//-------------------------------------------------------

// Get The Most Dominant Physics Surface

bool UVertexPaintFunctionLibrary::GetTheMostDominantPhysicsSurface_Wrapper(UMaterialInterface* optionalMaterialPhysicsSurfaceWasDetectedOn, TArray<TEnumAsByte<EPhysicalSurface>> physicsSurfaces, TArray<float> physicsSurfaceValues, TEnumAsByte<EPhysicalSurface>& mostDominantPhysicsSurfaceFromArray, float& mostDominantPhysicsSurfaceColorValue) {

	mostDominantPhysicsSurfaceFromArray = EPhysicalSurface::SurfaceType_Default;
	mostDominantPhysicsSurfaceColorValue = 0;

	if (!GEngine) return false;
	if (physicsSurfaces.Num() <= 0) return false;
	if (physicsSurfaceValues.Num() <= 0) return false;
	if (physicsSurfaces.Num() != physicsSurfaceValues.Num()) return false;

	float strongestSurfaceValue_Local = 0;
	TEnumAsByte<EPhysicalSurface> strongestSurface_Local = EPhysicalSurface::SurfaceType_Default;
	TArray<TEnumAsByte<EPhysicalSurface>> blendedSurfaceResults_Local;
	TArray<float> blendedSurfaceValueResults_Local;


	// First just gets the surface with the strongest value
	for (int i = 0; i < physicsSurfaces.Num(); i++) {

		// Has to have something. So if you send in an array where everything is 0 then you shouldn't be able to get a dominant surface
		if (physicsSurfaceValues[i] > 0) {

			if (physicsSurfaceValues[i] >= strongestSurfaceValue_Local) {

				strongestSurface_Local = physicsSurfaces[i];
				strongestSurfaceValue_Local = physicsSurfaceValues[i];
			}
		}
	}

	// If material is registered then checks if any of the surfaces can blend
	if (IsValid(UVertexPaintFunctionLibrary::GetVertexPaintMaterialDataAsset())) {


		TArray<FVertexPaintPhysicsSurfaceBlendingSettings> surfaceBlendSettings_Local;

		if (UVertexPaintFunctionLibrary::GetVertexPaintMaterialDataAsset()->GetVertexPaintMaterialInterface().Contains(optionalMaterialPhysicsSurfaceWasDetectedOn)) {

			UVertexPaintFunctionLibrary::GetVertexPaintMaterialDataAsset()->GetVertexPaintMaterialInterface().FindRef(optionalMaterialPhysicsSurfaceWasDetectedOn).physicsSurfaceBlendingSettings.GenerateValueArray(surfaceBlendSettings_Local);


			bool blendedSurfaces_ContainsAll_Local = true;
			bool blendedSurfaces_AllHaveMinAmount_Local = true;
			float blendedSurfaces_TotalAmount_Local = 0;


			// Then checks if any of the surface we got as a parameter can blendand if their value combined allows them to blendand is then the strongest surface
			for (auto blendSettingTemp : surfaceBlendSettings_Local) {

				blendedSurfaces_ContainsAll_Local = true;

				// If the phys surface array sent in even has all necessary surfaces for this blend setting
				for (auto physSurfaceThatBlendTemp : blendSettingTemp.physicsSurfacesThatCanBlend) {

					if (!physicsSurfaces.Contains(physSurfaceThatBlendTemp)) {

						blendedSurfaces_ContainsAll_Local = false;
						break;
					}
				}

				if (!blendedSurfaces_ContainsAll_Local) continue;


				blendedSurfaces_AllHaveMinAmount_Local = true;
				blendedSurfaces_TotalAmount_Local = 0;

				// If we know we have all phys surfaces requires, then checks if each has min required color amount that they require to blend
				for (auto physSurfaceThatBlendTemp : blendSettingTemp.physicsSurfacesThatCanBlend) {

					if (physicsSurfaceValues[physicsSurfaces.Find(physSurfaceThatBlendTemp)] >= blendSettingTemp.minAmountOnEachSurfaceToBeAbleToBlend) {

						blendedSurfaces_TotalAmount_Local += physicsSurfaceValues[physicsSurfaces.Find(physSurfaceThatBlendTemp)];
					}
					else {

						blendedSurfaces_AllHaveMinAmount_Local = false;
						break;
					}
				}

				if (!blendedSurfaces_AllHaveMinAmount_Local) continue;


				blendedSurfaceResults_Local.Add(blendSettingTemp.physicsSurfaceToResultIn);
				blendedSurfaceValueResults_Local.Add(blendedSurfaces_TotalAmount_Local);
			}
		}
	}

	// If got any blendes surfaces then checks if they're stronger than the strongest surface we got earlier when we checked them invidiually and updates it. If there are several blendes surfaces, the one that combines has the strongest value will be considered the strongest surface
	for (int i = 0; i < blendedSurfaceValueResults_Local.Num(); i++) {

		if (blendedSurfaceValueResults_Local[i] > strongestSurfaceValue_Local) {


			strongestSurfaceValue_Local = blendedSurfaceValueResults_Local[i];
			strongestSurface_Local = blendedSurfaceResults_Local[i];
		}
	}

	// Only returns true if we actually got a surface, if they where all 0 so strongest surface is the default 0 then we don't want to return anything surface
	if (strongestSurface_Local != EPhysicalSurface::SurfaceType_Default && strongestSurfaceValue_Local > 0) {

		mostDominantPhysicsSurfaceFromArray = strongestSurface_Local;
		mostDominantPhysicsSurfaceColorValue = strongestSurfaceValue_Local;

		return true;
	}

	return false;
}


//-------------------------------------------------------

// Get Vertex Color Channels Physics Surface Is Registered To Wrapper

TArray<Enum_SurfaceAtChannel> UVertexPaintFunctionLibrary::GetAllVertexColorChannelsPhysicsSurfaceIsRegisteredTo_Wrapper(UMaterialInterface* material, TEnumAsByte<EPhysicalSurface> physicsSurface, bool& successfull) {

	successfull = false;
	TArray< Enum_SurfaceAtChannel> surfaceAtChannels; // Array in case it's a blendable where there are several channels that make up the physics surface

	if (!IsValid(material)) return surfaceAtChannels;
	if (!GEngine) return surfaceAtChannels;
	if (!IsValid(UVertexPaintFunctionLibrary::GetVertexPaintMaterialDataAsset())) return surfaceAtChannels;
	if (!UVertexPaintFunctionLibrary::GetVertexPaintMaterialDataAsset()->GetVertexPaintMaterialInterface().Contains(material)) return surfaceAtChannels;


	auto materialDataAssetTemp = UVertexPaintFunctionLibrary::GetVertexPaintMaterialDataAsset()->GetVertexPaintMaterialInterface().FindRef(material);

	// Gets if physics surface is registered to R, G, B or A for this Material, if so then returns
	surfaceAtChannels = GetVertexColorChannelsPhysicsSurfaceIsRegisteredTo(material, physicsSurface, successfull);

	if (successfull) {

		return surfaceAtChannels;
	}

	// If couldn't find any, then checks if there are several blendables that make up this surface, and get the surface channels for them. 
	for (auto& blendSettingTemp : materialDataAssetTemp.physicsSurfaceBlendingSettings) {

		if (blendSettingTemp.Key == physicsSurface) {

			for (auto blendedPhysSurfacesThatMakeUpThePhysicsSurface : blendSettingTemp.Value.physicsSurfacesThatCanBlend) {

				TArray< Enum_SurfaceAtChannel> blendableChannelsThatMakeUpPhysicsSurfaceTemp = GetVertexColorChannelsPhysicsSurfaceIsRegisteredTo(material, blendedPhysSurfacesThatMakeUpThePhysicsSurface, successfull);

				if (successfull)
					surfaceAtChannels.Append(blendableChannelsThatMakeUpPhysicsSurfaceTemp);
			}

			if (successfull)
				return surfaceAtChannels;
		}
	}

	return surfaceAtChannels;
}


//-------------------------------------------------------

// Get Vertex Color Channels Physics Surface Is Registered To - This just checks the RGBA channels and not Blendables like the one above

TArray<Enum_SurfaceAtChannel> UVertexPaintFunctionLibrary::GetVertexColorChannelsPhysicsSurfaceIsRegisteredTo(UMaterialInterface* material, TEnumAsByte<EPhysicalSurface> physicsSurface, bool& successfull) {

	successfull = false;

	if (!IsValid(material)) return TArray<Enum_SurfaceAtChannel>();
	if (!GEngine) return TArray<Enum_SurfaceAtChannel>();
	if (!IsValid(UVertexPaintFunctionLibrary::GetVertexPaintMaterialDataAsset())) return TArray<Enum_SurfaceAtChannel>();
	if (!UVertexPaintFunctionLibrary::GetVertexPaintMaterialDataAsset()->GetVertexPaintMaterialInterface().Contains(material)) return TArray<Enum_SurfaceAtChannel>();


	auto materialDataAssetTemp = UVertexPaintFunctionLibrary::GetVertexPaintMaterialDataAsset()->GetVertexPaintMaterialInterface().FindRef(material);

	TArray<Enum_SurfaceAtChannel> atSurfaceChannels_Local;


	if (materialDataAssetTemp.atDefault == physicsSurface) {

		successfull = true;
		atSurfaceChannels_Local.Add(Enum_SurfaceAtChannel::Default);
	}

	if (materialDataAssetTemp.paintedAtRed == physicsSurface) {

		successfull = true;
		atSurfaceChannels_Local.Add(Enum_SurfaceAtChannel::RedChannel);
	}

	if (materialDataAssetTemp.paintedAtGreen == physicsSurface) {

		successfull = true;
		atSurfaceChannels_Local.Add(Enum_SurfaceAtChannel::GreenChannel);
	}

	if (materialDataAssetTemp.paintedAtBlue == physicsSurface) {

		successfull = true;
		atSurfaceChannels_Local.Add(Enum_SurfaceAtChannel::BlueChannel);
	}

	if (materialDataAssetTemp.paintedAtAlpha == physicsSurface) {

		successfull = true;
		atSurfaceChannels_Local.Add(Enum_SurfaceAtChannel::AlphaChannel);
	}

	return atSurfaceChannels_Local;
}

//-------------------------------------------------------

// Adjust Callback Vertex Data

FCalculateColorsInfo UVertexPaintFunctionLibrary::AdjustCallbackVertexData(FCalculateColorsInfo calculateColorsInfo, bool resetColorsOfBoneIfNotIncluded, bool resetAmountOfPaintedColorsOfEachChannelIfNotIncluded, bool resetMeshVertexDataIfNotIncluded) {


	if (!calculateColorsInfo.fundementalStruct.callbackSettings.includeColorsOfEachBone && resetColorsOfBoneIfNotIncluded) {

		calculateColorsInfo.vertexColorsOnEachBone = FVertexDetectVertexColorsOnEachBone();
	}


	if (!calculateColorsInfo.fundementalStruct.callbackSettings.includeAmountOfPaintedColorsOfEachChannel.includeAmountOfPaintedColorsOfEachChannel && resetAmountOfPaintedColorsOfEachChannelIfNotIncluded) {

		calculateColorsInfo.amountOfPaintedColorsOfEachChannelAtMinAmount = FVertexDetectAmountOfPaintedColorsOfEachChannel();
	}


	if (calculateColorsInfo.fundementalStruct.callbackSettings.includeVertexDataOnlyForLOD0 && calculateColorsInfo.meshVertexData.meshDataPerLOD.Num() > 1)
		calculateColorsInfo.meshVertexData.meshDataPerLOD.SetNum(1, true);


	if (resetMeshVertexDataIfNotIncluded) {

		for (int i = 0; i < calculateColorsInfo.meshVertexData.meshDataPerLOD.Num(); i++) {

			if (!calculateColorsInfo.fundementalStruct.callbackSettings.includeVertexColorData || !calculateColorsInfo.fundementalStruct.callbackSettings.runCallbackDelegate)
				calculateColorsInfo.meshVertexData.meshDataPerLOD[i].meshVertexColorsPerLODArray.Empty();

			if (!calculateColorsInfo.fundementalStruct.callbackSettings.includeVertexPositionData || !calculateColorsInfo.fundementalStruct.callbackSettings.runCallbackDelegate)
				calculateColorsInfo.meshVertexData.meshDataPerLOD[i].meshVertexPositionsInComponentSpacePerLODArray.Empty();

			if (!calculateColorsInfo.fundementalStruct.callbackSettings.includeVertexNormalData || !calculateColorsInfo.fundementalStruct.callbackSettings.runCallbackDelegate)
				calculateColorsInfo.meshVertexData.meshDataPerLOD[i].meshVertexNormalsPerLODArray.Empty();
		}
	}


	return calculateColorsInfo;
}


//-------------------------------------------------------

// Propogate LOD 0 Vertex Colors to the Rest of the Mesh

FVertexDetectMeshDataStruct UVertexPaintFunctionLibrary::PropogateLOD0VertexColorsToLODs(const TArray<FPaintedVertex>& lod0PaintedVerts, FVertexDetectMeshDataStruct vertexDetectMeshData, const TArray<FBox>& lodBaseBounds, TArray<FColorVertexBuffer*>& optionalColorVertexBufferToUpdate) {

	if (vertexDetectMeshData.meshDataPerLOD.Num() <= 1) return vertexDetectMeshData; // Has to have more than 1 LOD to build color data for the other LODs
	if (vertexDetectMeshData.meshDataPerLOD[0].meshVertexColorsPerLODArray.Num() <= 0)  return vertexDetectMeshData; // And the LOD0 has to have some colors that we can propogate


	for (uint32 i = 1; i < (uint32)vertexDetectMeshData.meshDataPerLOD.Num(); ++i) {


		// UMeshPaintingSubsystem::ApplyVertexColorsToAllLODs -> RemapPaintedVertexColors in StaticMeshBuild

		// This was copied from StaticMeshBuild->RemapPaintedVertexColors() and adjusted a bit so it works for both Static and Skeletal Meshes in Runtime and gets what each vertex color on LOD1, 2 etc. should have based on LOD0. It's a bit more expensive and I didn't see a noticable better result using it so i opted to use my own solution which allows me to break out from the main loop once all the vertices has been randomized, since it doesn't build Bounds and doesn't need All LOD0 positions at once. Also my own solution only loops through the as many LOD0 vertices that was actually randomized, instead of looping through all of them for every LOD1 vertex etc.


		FBox Bounds = lodBaseBounds[0]; // First sets BaseBounds for LOD0
		Bounds += lodBaseBounds[i]; // Then adds the current LOD for a Combined Bounds


		TSMCVertPosOctree VertPosOctree(Bounds.GetCenter(), Bounds.GetExtent().GetMax());

		for (int32 PaintedVertexIndex = 0; PaintedVertexIndex < lod0PaintedVerts.Num(); ++PaintedVertexIndex) {

			VertPosOctree.AddElement(lod0PaintedVerts[PaintedVertexIndex]);
		}


		FVector CurPosition;
		FVector CurNormal;
		TArray<FPaintedVertex> PointsToConsider;
		const float DistanceOverNormalThreshold = KINDA_SMALL_NUMBER;

		FPaintedVertex BestVertex;
		FVector BestVertexNormal;
		float BestDistanceSquared;
		float BestNormalDot;
		FPaintedVertex VertexToConsider;
		FVector VertexNormalToConsider;
		float DistSqrdToConsider;
		float NormalDotToConsider;

		for (uint32 NewVertIndex = 0; NewVertIndex < (uint32)vertexDetectMeshData.meshDataPerLOD[i].meshVertexPositionsInComponentSpacePerLODArray.Num(); ++NewVertIndex) {

			PointsToConsider.Reset();
			CurPosition = vertexDetectMeshData.meshDataPerLOD[i].meshVertexPositionsInComponentSpacePerLODArray[NewVertIndex];
			CurNormal = vertexDetectMeshData.meshDataPerLOD[i].meshVertexNormalsPerLODArray[NewVertIndex];

			// Iterate through the octree attempting to find the vertices closest to the current new point
			VertPosOctree.FindNearbyElements(CurPosition, [&PointsToConsider](const FPaintedVertex& Vertex) {

				PointsToConsider.Add(Vertex);
				});

			// If any points to consider were found, iterate over each and find which one is the closest to the new point 
			if (PointsToConsider.Num() > 0) {

				BestVertex = PointsToConsider[0];
				BestVertexNormal = BestVertex.Normal;

				BestDistanceSquared = (BestVertex.Position - CurPosition).SizeSquared();
				BestNormalDot = BestVertexNormal | CurNormal;

				for (int32 ConsiderationIndex = 1; ConsiderationIndex < PointsToConsider.Num(); ++ConsiderationIndex) {

					VertexToConsider = PointsToConsider[ConsiderationIndex];
					VertexNormalToConsider = VertexToConsider.Normal;

					DistSqrdToConsider = (VertexToConsider.Position - CurPosition).SizeSquared();
					NormalDotToConsider = VertexNormalToConsider | CurNormal;

					if (DistSqrdToConsider < BestDistanceSquared - DistanceOverNormalThreshold) {

						BestVertex = VertexToConsider;
						BestDistanceSquared = DistSqrdToConsider;
						BestNormalDot = NormalDotToConsider;
					}

					else if (DistSqrdToConsider < BestDistanceSquared + DistanceOverNormalThreshold && NormalDotToConsider > BestNormalDot) {

						BestVertex = VertexToConsider;
						BestDistanceSquared = DistSqrdToConsider;
						BestNormalDot = NormalDotToConsider;
					}
				}

				vertexDetectMeshData.meshDataPerLOD[i].meshVertexColorsPerLODArray[NewVertIndex] = BestVertex.Color;

				if (optionalColorVertexBufferToUpdate.IsValidIndex(i))
					optionalColorVertexBufferToUpdate[i]->VertexColor(NewVertIndex) = BestVertex.Color;
			}
		}
	}

	//-----------

	return vertexDetectMeshData;
}


//--------------------------------------------------------

// Get Clothing Assets

TArray<UClothingAssetBase*> UVertexPaintFunctionLibrary::GetClothAssets(USkeletalMesh* skeletalMesh) {

	if (!IsValid(skeletalMesh)) return TArray<UClothingAssetBase*>();

	return skeletalMesh->GetMeshClothingAssets();
}


//-------------------------------------------------------

// Set Cloth Physics

void UVertexPaintFunctionLibrary::SetChaosClothPhysics(USkeletalMeshComponent* skeletalMeshComponent, UClothingAssetBase* clothingAsset, const FVertexDetectChaosClothPhysicsSettings& clothPhysicsSettings) {

#if ENGINE_MAJOR_VERSION == 5

	if (!IsValid(skeletalMeshComponent) || !IsValid(clothingAsset)) return;


	auto clothingSimulationInteractorTemp = skeletalMeshComponent->GetClothingSimulationInteractor();

	if (auto chaosClothingSimilationInteractorTemp = Cast<UChaosClothingSimulationInteractor>(clothingSimulationInteractorTemp)) {

		if (auto clothingInteractorTemp = chaosClothingSimilationInteractorTemp->GetClothingInteractor(clothingAsset->GetName())) {

			if (auto chaosClothingInteractorTemp = Cast<UChaosClothingInteractor>(clothingInteractorTemp)) {


				if (clothPhysicsSettings.SetDamping)
					chaosClothingInteractorTemp->SetDamping(clothPhysicsSettings.clothDampingSettings.SetDamping_dampingCoefficient);

				if (clothPhysicsSettings.SetGravity)
					chaosClothingInteractorTemp->SetGravity(clothPhysicsSettings.clothGravitySettings.SetGravity_gravityScale, clothPhysicsSettings.clothGravitySettings.SetGravity_overrideGravity, clothPhysicsSettings.clothGravitySettings.SetGravity_gravityOverride);

				if (clothPhysicsSettings.SetWind)
					chaosClothingInteractorTemp->SetWind(clothPhysicsSettings.clothWindSettings.SetWind_drag, clothPhysicsSettings.clothWindSettings.SetWind_lift, clothPhysicsSettings.clothWindSettings.SetWind_airDensity, clothPhysicsSettings.clothWindSettings.SetWind_windVelocity);

				if (clothPhysicsSettings.SetAnimDrive)
					chaosClothingInteractorTemp->SetAnimDrive(clothPhysicsSettings.clothAnimDriveSettings.SetAnimDrive_Stiffness, clothPhysicsSettings.clothAnimDriveSettings.SetAnimDrive_Damping);

				if (clothPhysicsSettings.SetCollision)
					chaosClothingInteractorTemp->SetCollision(clothPhysicsSettings.clothCollisionSettings.SetCollision_CollisionThickness, clothPhysicsSettings.clothCollisionSettings.SetCollision_FrictionCoefficient, clothPhysicsSettings.clothCollisionSettings.SetCollision_UseCCD, clothPhysicsSettings.clothCollisionSettings.SetCollision_SelfCollisionThickness);

				if (clothPhysicsSettings.SetLongRangeAttachment)
					chaosClothingInteractorTemp->SetLongRangeAttachment(clothPhysicsSettings.clothLongRangeAttachmentSettings.LongRangeAttachment_TetherThickness, clothPhysicsSettings.clothLongRangeAttachmentSettings.LongRangeAttachment_TetherScale);

				if (clothPhysicsSettings.SetMaterial)
					chaosClothingInteractorTemp->SetMaterial(clothPhysicsSettings.clothMaterialSettings.Material_EdgeStiffness, clothPhysicsSettings.clothMaterialSettings.Material_BendingStiffness, clothPhysicsSettings.clothMaterialSettings.Material_AreaStiffness);

				if (clothPhysicsSettings.SetPhysicsVelocityScale)
					chaosClothingInteractorTemp->SetVelocityScale(clothPhysicsSettings.clothPhysicsVelocityScaleSettings.PhysicsVelocityScale_LinearVelocityScale, clothPhysicsSettings.clothPhysicsVelocityScaleSettings.PhysicVelocityScale_AngularVelocityScale, clothPhysicsSettings.clothPhysicsVelocityScaleSettings.PhysicsVelocityScale_FictitiousAngularVelocityScale);
			}
		}
	}


#endif
}


//-------------------------------------------------------

// Updated Chaos Cloth Physics With Existing Colors

void UVertexPaintFunctionLibrary::UpdateChaosClothPhysicsWithExistingColors(USkeletalMeshComponent* skeletalMeshComponent) {

#if ENGINE_MAJOR_VERSION == 5

	if (!IsValid(skeletalMeshComponent) || !GEngine) return;

	UpdateChaosClothPhysics(skeletalMeshComponent->GetOwner(), skeletalMeshComponent, false, FLinearColor::White);

#endif
}

#if ENGINE_MAJOR_VERSION == 5

//-------------------------------------------------------

// Update Chaos Cloth Physics

void UVertexPaintFunctionLibrary::UpdateChaosClothPhysics(AActor* actor, USkeletalMeshComponent* skeletalMeshComponent, bool useGivenColorAsAvarageColor, FLinearColor avarageColor) {

	if (!IsValid(skeletalMeshComponent) || !IsValid(actor)) return;


	const FSkeletalMeshLODRenderData& skelMeshRenderDataTemp = skeletalMeshComponent->GetSkeletalMeshRenderData()->LODRenderData[skeletalMeshComponent->GetPredictedLODLevel()];


	if (skelMeshRenderDataTemp.HasClothData()) {

		TMap<UClothingAssetBase*, FVertexDetectClothSettingsStruct> clothsAndTheirPhysicsSettings_Local;

		if (UKismetSystemLibrary::DoesImplementInterface(actor, UVertexPaintDetectionInterface::StaticClass()))
			clothsAndTheirPhysicsSettings_Local = IVertexPaintDetectionInterface::Execute_GetSkeletalMeshClothPhysicsSettings(actor, skeletalMeshComponent);


		if (clothsAndTheirPhysicsSettings_Local.Num() > 0) {

			USkeletalMesh* skelMeshTemp = nullptr;

#if ENGINE_MAJOR_VERSION == 4

			skelMeshTemp = skeletalMeshComponent->SkeletalMesh;

#elif ENGINE_MAJOR_VERSION == 5

#if ENGINE_MINOR_VERSION == 0

			skelMeshTemp = skeletalMeshComponent->SkeletalMesh.Get();

#else

			skelMeshTemp = skeletalMeshComponent->GetSkeletalMeshAsset();

#endif

#endif


			// Loops through Cloths
			for (int i = 0; i < skelMeshTemp->GetMeshClothingAssets().Num(); i++) {

				// Loops through Render Sections on current LOD
				for (int j = 0; j < skeletalMeshComponent->GetSkeletalMeshRenderData()->LODRenderData[skeletalMeshComponent->GetPredictedLODLevel()].RenderSections.Num(); j++) {

					// When on the same section as the Cloth
					if (i == skeletalMeshComponent->GetSkeletalMeshRenderData()->LODRenderData[skeletalMeshComponent->GetPredictedLODLevel()].RenderSections[j].CorrespondClothAssetIndex) {

						// Gets start and end vertex, which could be for instance 2300-2600 or something. So we get vertex colors below for just these verts
						int sectionStartVertexIndex = skeletalMeshComponent->GetSkeletalMeshRenderData()->LODRenderData[skeletalMeshComponent->GetPredictedLODLevel()].RenderSections[j].BaseVertexIndex;

						int sectionTotalAmountOfVertices = sectionStartVertexIndex + skeletalMeshComponent->GetSkeletalMeshRenderData()->LODRenderData[skeletalMeshComponent->GetPredictedLODLevel()].RenderSections[j].GetNumVertices();


						TArray<FColor> clothColorsTemp;

						// If Setting the entire mesh to be a specific color, then we already know the avarage color and doesn't have to run loops
						if (!useGivenColorAsAvarageColor) {

							FColor vertexColorTemp;
							for (int32 k = sectionStartVertexIndex; k < sectionTotalAmountOfVertices; k++) {


								// If been painted on before then can get the current Instance Color
								if (skeletalMeshComponent->LODInfo[skeletalMeshComponent->GetPredictedLODLevel()].OverrideVertexColors)
									vertexColorTemp = skeletalMeshComponent->LODInfo[skeletalMeshComponent->GetPredictedLODLevel()].OverrideVertexColors->VertexColor(k);

								// If haven't been painted on before then we get the Default Color
								else
									vertexColorTemp = skeletalMeshComponent->GetSkeletalMeshRenderData()->LODRenderData[skeletalMeshComponent->GetPredictedLODLevel()].StaticVertexBuffers.ColorVertexBuffer.VertexColor(k);

								clothColorsTemp.Add(vertexColorTemp);
							}
						}

						FVertexDetectClothSettingsStruct physicsSettingsAtColorTemp = clothsAndTheirPhysicsSettings_Local.FindRef(skelMeshTemp->GetMeshClothingAssets()[i]);

						auto chaosClothPhysicsSettingsTemp = GetChaosClothPhysicsSettingsBasedOnVertexColors(skelMeshTemp->GetMeshClothingAssets()[i], clothColorsTemp, physicsSettingsAtColorTemp, skeletalMeshComponent, useGivenColorAsAvarageColor, avarageColor);

						UVertexPaintFunctionLibrary::SetChaosClothPhysics(skeletalMeshComponent, skelMeshTemp->GetMeshClothingAssets()[i], chaosClothPhysicsSettingsTemp);
					}
				}
			}
		}
	}
}


//-------------------------------------------------------

// Get Chaos Cloth Physics Settings Based On Vertex Colors

FVertexDetectChaosClothPhysicsSettings UVertexPaintFunctionLibrary::GetChaosClothPhysicsSettingsBasedOnVertexColors(UClothingAssetBase* clothingAsset, TArray<FColor> clothColors, FVertexDetectClothSettingsStruct clothPhysicsSettings, USkeletalMeshComponent* skeletalMeshComponent, bool useGivenColorAsAvarageColor, FLinearColor avarageColor) {

	if (!IsValid(skeletalMeshComponent) || !IsValid(clothingAsset)) return FVertexDetectChaosClothPhysicsSettings();


	// https://docs.unrealengine.com/4.27/en-US/API/Plugins/ChaosCloth/ChaosCloth/UChaosClothingInteractor/


	float redAvarageColorValue;
	float greenAvarageColorValue;
	float blueAvarageColorValue;
	float alphaAvarageColorValue;

	// If Setting the entire mesh to be a specific color, then we already know the avarage color and doesn't have to run loops
	if (!useGivenColorAsAvarageColor) {

		FVertexDetectAmountOfPaintedColorsOfEachChannel amountPerChannelTemp = UVertexPaintFunctionLibrary::GetAmountOfPaintedColorsForEachChannel(clothColors, 0.01f);

		redAvarageColorValue = amountPerChannelTemp.averageAmountOfRedColorAtTheMinAmount;
		greenAvarageColorValue = amountPerChannelTemp.averageAmountOfGreenColorAtTheMinAmount;
		blueAvarageColorValue = amountPerChannelTemp.averageAmountOfBlueColorAtTheMinAmount;
		alphaAvarageColorValue = amountPerChannelTemp.averageAmountOfAlphaColorAtTheMinAmount;
	}
	else {

		redAvarageColorValue = avarageColor.R;
		greenAvarageColorValue = avarageColor.G;
		blueAvarageColorValue = avarageColor.B;
		alphaAvarageColorValue = avarageColor.A;
	}


	TArray<float> clothPhysicsSettingsAtColorAvarageValue_Local;
	TArray<FVertexDetectClothPhysicsSettingsAtVertexColorStruct> clothPhysicsSettingsAtColor_Local;


	if (clothPhysicsSettings.clothPhysicsSettingsAtRedChannel.affectClothPhysicsAtColorValue) {

		clothPhysicsSettingsAtColorAvarageValue_Local.Add(redAvarageColorValue);
		clothPhysicsSettingsAtColor_Local.Add(clothPhysicsSettings.clothPhysicsSettingsAtRedChannel);
	}

	if (clothPhysicsSettings.clothPhysicsSettingsAtGreenChannel.affectClothPhysicsAtColorValue) {

		clothPhysicsSettingsAtColorAvarageValue_Local.Add(greenAvarageColorValue);
		clothPhysicsSettingsAtColor_Local.Add(clothPhysicsSettings.clothPhysicsSettingsAtGreenChannel);
	}

	if (clothPhysicsSettings.clothPhysicsSettingsAtBlueChannel.affectClothPhysicsAtColorValue) {

		clothPhysicsSettingsAtColorAvarageValue_Local.Add(blueAvarageColorValue);
		clothPhysicsSettingsAtColor_Local.Add(clothPhysicsSettings.clothPhysicsSettingsAtBlueChannel);
	}

	if (clothPhysicsSettings.clothPhysicsSettingsAtAlphaChannel.affectClothPhysicsAtColorValue) {

		clothPhysicsSettingsAtColorAvarageValue_Local.Add(alphaAvarageColorValue);
		clothPhysicsSettingsAtColor_Local.Add(clothPhysicsSettings.clothPhysicsSettingsAtAlphaChannel);
	}

	// NOTE Removed the minRequiredPaintAmount to affect Gravity or damping etc. because it caused an issue when Removing colors and trying to reset the cloth, since it couldn't do anything if not above 0.25 or something

	FVertexDetectChaosClothPhysicsSettings chaosClothPhysicsSettingsLocal;

	for (int i = 0; i < clothPhysicsSettingsAtColor_Local.Num(); i++) {


		// Damping
		if (clothPhysicsSettingsAtColor_Local[i].SetDamping) {

			chaosClothPhysicsSettingsLocal.SetDamping = true;

			chaosClothPhysicsSettingsLocal.clothDampingSettings.SetDamping_dampingCoefficient += FMath::Lerp(clothPhysicsSettingsAtColor_Local[i].clothDampingSettingsWithNoColorPaintedAtChannel.SetDamping_dampingCoefficient, clothPhysicsSettingsAtColor_Local[i].clothDampingSettingsWithFullColorPaintedAtChannel.SetDamping_dampingCoefficient, clothPhysicsSettingsAtColorAvarageValue_Local[i]);
		}

		// Gravity
		if (clothPhysicsSettingsAtColor_Local[i].SetGravity) {

			chaosClothPhysicsSettingsLocal.SetGravity = true;

			chaosClothPhysicsSettingsLocal.clothGravitySettings.SetGravity_gravityScale += FMath::Lerp(clothPhysicsSettingsAtColor_Local[i].clothGravitySettingsWithNoColorPaintedAtChannel.SetGravity_gravityScale, clothPhysicsSettingsAtColor_Local[i].clothGravitySettingsWithFullColorPaintedAtChannel.SetGravity_gravityScale, clothPhysicsSettingsAtColorAvarageValue_Local[i]);

			chaosClothPhysicsSettingsLocal.clothGravitySettings.SetGravity_gravityOverride += FMath::Lerp(clothPhysicsSettingsAtColor_Local[i].clothGravitySettingsWithNoColorPaintedAtChannel.SetGravity_gravityOverride, clothPhysicsSettingsAtColor_Local[i].clothGravitySettingsWithFullColorPaintedAtChannel.SetGravity_gravityOverride, clothPhysicsSettingsAtColorAvarageValue_Local[i]);

			// If at least 1 color has set it to override gravity then that is what it will do
			if (clothPhysicsSettingsAtColorAvarageValue_Local[i] > 0.5) {

				// If already true then can't set it to false
				if (!chaosClothPhysicsSettingsLocal.clothGravitySettings.SetGravity_overrideGravity)
					chaosClothPhysicsSettingsLocal.clothGravitySettings.SetGravity_overrideGravity = clothPhysicsSettingsAtColor_Local[i].clothGravitySettingsWithFullColorPaintedAtChannel.SetGravity_overrideGravity;
			}

			else {

				if (!chaosClothPhysicsSettingsLocal.clothGravitySettings.SetGravity_overrideGravity)
					chaosClothPhysicsSettingsLocal.clothGravitySettings.SetGravity_overrideGravity = clothPhysicsSettingsAtColor_Local[i].clothGravitySettingsWithNoColorPaintedAtChannel.SetGravity_overrideGravity;
			}
		}

		// Wind
		if (clothPhysicsSettingsAtColor_Local[i].SetWind) {

			chaosClothPhysicsSettingsLocal.SetWind = true;

			chaosClothPhysicsSettingsLocal.clothWindSettings.SetWind_drag += FMath::Lerp(clothPhysicsSettingsAtColor_Local[i].clothWindSettingsWithNoColorPaintedAtChannel.SetWind_drag, clothPhysicsSettingsAtColor_Local[i].clothWindSettingsWithFullColorPaintedAtChannel.SetWind_drag, clothPhysicsSettingsAtColorAvarageValue_Local[i]);

			chaosClothPhysicsSettingsLocal.clothWindSettings.SetWind_lift += FMath::Lerp(clothPhysicsSettingsAtColor_Local[i].clothWindSettingsWithNoColorPaintedAtChannel.SetWind_lift, clothPhysicsSettingsAtColor_Local[i].clothWindSettingsWithFullColorPaintedAtChannel.SetWind_lift, clothPhysicsSettingsAtColorAvarageValue_Local[i]);

			chaosClothPhysicsSettingsLocal.clothWindSettings.SetWind_airDensity += FMath::Lerp(clothPhysicsSettingsAtColor_Local[i].clothWindSettingsWithNoColorPaintedAtChannel.SetWind_airDensity, clothPhysicsSettingsAtColor_Local[i].clothWindSettingsWithFullColorPaintedAtChannel.SetWind_airDensity, clothPhysicsSettingsAtColorAvarageValue_Local[i]);

			chaosClothPhysicsSettingsLocal.clothWindSettings.SetWind_windVelocity += FMath::Lerp(clothPhysicsSettingsAtColor_Local[i].clothWindSettingsWithNoColorPaintedAtChannel.SetWind_windVelocity, clothPhysicsSettingsAtColor_Local[i].clothWindSettingsWithFullColorPaintedAtChannel.SetWind_windVelocity, clothPhysicsSettingsAtColorAvarageValue_Local[i]);
		}

		// Anim Drive
		if (clothPhysicsSettingsAtColor_Local[i].SetAnimDrive) {

			chaosClothPhysicsSettingsLocal.SetAnimDrive = true;

			chaosClothPhysicsSettingsLocal.clothAnimDriveSettings.SetAnimDrive_Stiffness += FMath::Lerp(clothPhysicsSettingsAtColor_Local[i].clothAnimDriveSettingsWithNoColorPaintedAtChannel.SetAnimDrive_Stiffness, clothPhysicsSettingsAtColor_Local[i].clothAnimDriveSettingsWithFullColorPaintedAtChannel.SetAnimDrive_Stiffness, clothPhysicsSettingsAtColorAvarageValue_Local[i]);

			chaosClothPhysicsSettingsLocal.clothAnimDriveSettings.SetAnimDrive_Damping += FMath::Lerp(clothPhysicsSettingsAtColor_Local[i].clothAnimDriveSettingsWithNoColorPaintedAtChannel.SetAnimDrive_Damping, clothPhysicsSettingsAtColor_Local[i].clothAnimDriveSettingsWithFullColorPaintedAtChannel.SetAnimDrive_Damping, clothPhysicsSettingsAtColorAvarageValue_Local[i]);

		}

		// Collision
		if (clothPhysicsSettingsAtColor_Local[i].SetCollision) {

			chaosClothPhysicsSettingsLocal.SetCollision = true;

			chaosClothPhysicsSettingsLocal.clothCollisionSettings.SetCollision_CollisionThickness += FMath::Lerp(clothPhysicsSettingsAtColor_Local[i].clothCollisionSettingsWithNoColorPaintedAtChannel.SetCollision_CollisionThickness, clothPhysicsSettingsAtColor_Local[i].clothCollisionSettingsWithFullColorPaintedAtChannel.SetCollision_CollisionThickness, clothPhysicsSettingsAtColorAvarageValue_Local[i]);

			chaosClothPhysicsSettingsLocal.clothCollisionSettings.SetCollision_FrictionCoefficient += FMath::Lerp(clothPhysicsSettingsAtColor_Local[i].clothCollisionSettingsWithNoColorPaintedAtChannel.SetCollision_FrictionCoefficient, clothPhysicsSettingsAtColor_Local[i].clothCollisionSettingsWithFullColorPaintedAtChannel.SetCollision_FrictionCoefficient, clothPhysicsSettingsAtColorAvarageValue_Local[i]);

			chaosClothPhysicsSettingsLocal.clothCollisionSettings.SetCollision_SelfCollisionThickness += FMath::Lerp(clothPhysicsSettingsAtColor_Local[i].clothCollisionSettingsWithNoColorPaintedAtChannel.SetCollision_SelfCollisionThickness, clothPhysicsSettingsAtColor_Local[i].clothCollisionSettingsWithFullColorPaintedAtChannel.SetCollision_SelfCollisionThickness, clothPhysicsSettingsAtColorAvarageValue_Local[i]);


			// If at least 1 color has set it to use CCD then that is what it will do
			if (clothPhysicsSettingsAtColorAvarageValue_Local[i] > 0.5) {

				if (!chaosClothPhysicsSettingsLocal.clothCollisionSettings.SetCollision_UseCCD)
					chaosClothPhysicsSettingsLocal.clothCollisionSettings.SetCollision_UseCCD = clothPhysicsSettingsAtColor_Local[i].clothCollisionSettingsWithFullColorPaintedAtChannel.SetCollision_UseCCD;
			}

			else {

				if (!chaosClothPhysicsSettingsLocal.clothCollisionSettings.SetCollision_UseCCD)
					chaosClothPhysicsSettingsLocal.clothCollisionSettings.SetCollision_UseCCD = clothPhysicsSettingsAtColor_Local[i].clothCollisionSettingsWithNoColorPaintedAtChannel.SetCollision_UseCCD;
			}
		}

		// Long Range Attachment
		if (clothPhysicsSettingsAtColor_Local[i].SetLongRangeAttachment) {

			chaosClothPhysicsSettingsLocal.SetLongRangeAttachment = true;

			chaosClothPhysicsSettingsLocal.clothLongRangeAttachmentSettings.LongRangeAttachment_TetherThickness += FMath::Lerp(clothPhysicsSettingsAtColor_Local[i].clothLongRangeAttachmentSettingsWithNoColorPaintedAtChannel.LongRangeAttachment_TetherThickness, clothPhysicsSettingsAtColor_Local[i].clothLongRangeAttachmentSettingsWithFullColorPaintedAtChannel.LongRangeAttachment_TetherThickness, clothPhysicsSettingsAtColorAvarageValue_Local[i]);

			chaosClothPhysicsSettingsLocal.clothLongRangeAttachmentSettings.LongRangeAttachment_TetherScale += FMath::Lerp(clothPhysicsSettingsAtColor_Local[i].clothLongRangeAttachmentSettingsWithNoColorPaintedAtChannel.LongRangeAttachment_TetherScale, clothPhysicsSettingsAtColor_Local[i].clothLongRangeAttachmentSettingsWithFullColorPaintedAtChannel.LongRangeAttachment_TetherScale, clothPhysicsSettingsAtColorAvarageValue_Local[i]);
		}

		// Material
		if (clothPhysicsSettingsAtColor_Local[i].SetMaterial) {

			chaosClothPhysicsSettingsLocal.SetMaterial = true;

			chaosClothPhysicsSettingsLocal.clothMaterialSettings.Material_EdgeStiffness += FMath::Lerp(clothPhysicsSettingsAtColor_Local[i].clothMaterialSettingsWithNoColorPaintedAtChannel.Material_EdgeStiffness, clothPhysicsSettingsAtColor_Local[i].clothMaterialSettingsWithFullColorPaintedAtChannel.Material_EdgeStiffness, clothPhysicsSettingsAtColorAvarageValue_Local[i]);

			chaosClothPhysicsSettingsLocal.clothMaterialSettings.Material_BendingStiffness += FMath::Lerp(clothPhysicsSettingsAtColor_Local[i].clothMaterialSettingsWithNoColorPaintedAtChannel.Material_BendingStiffness, clothPhysicsSettingsAtColor_Local[i].clothMaterialSettingsWithFullColorPaintedAtChannel.Material_BendingStiffness, clothPhysicsSettingsAtColorAvarageValue_Local[i]);

			chaosClothPhysicsSettingsLocal.clothMaterialSettings.Material_AreaStiffness += FMath::Lerp(clothPhysicsSettingsAtColor_Local[i].clothMaterialSettingsWithNoColorPaintedAtChannel.Material_AreaStiffness, clothPhysicsSettingsAtColor_Local[i].clothMaterialSettingsWithFullColorPaintedAtChannel.Material_AreaStiffness, clothPhysicsSettingsAtColorAvarageValue_Local[i]);
		}

		// Physics Velocity Scale
		if (clothPhysicsSettingsAtColor_Local[i].SetPhysicsVelocityScale) {

			chaosClothPhysicsSettingsLocal.SetPhysicsVelocityScale = true;

			chaosClothPhysicsSettingsLocal.clothPhysicsVelocityScaleSettings.PhysicsVelocityScale_LinearVelocityScale += FMath::Lerp(clothPhysicsSettingsAtColor_Local[i].clothPhysicsVelocityScaleSettingsWithNoColorPaintedAtChannel.PhysicsVelocityScale_LinearVelocityScale, clothPhysicsSettingsAtColor_Local[i].clothPhysicsVelocityScaleSettingsWithFullColorPaintedAtChannel.PhysicsVelocityScale_LinearVelocityScale, clothPhysicsSettingsAtColorAvarageValue_Local[i]);

			chaosClothPhysicsSettingsLocal.clothPhysicsVelocityScaleSettings.PhysicVelocityScale_AngularVelocityScale += FMath::Lerp(clothPhysicsSettingsAtColor_Local[i].clothPhysicsVelocityScaleSettingsWithNoColorPaintedAtChannel.PhysicVelocityScale_AngularVelocityScale, clothPhysicsSettingsAtColor_Local[i].clothPhysicsVelocityScaleSettingsWithFullColorPaintedAtChannel.PhysicVelocityScale_AngularVelocityScale, clothPhysicsSettingsAtColorAvarageValue_Local[i]);

			chaosClothPhysicsSettingsLocal.clothPhysicsVelocityScaleSettings.PhysicsVelocityScale_FictitiousAngularVelocityScale += FMath::Lerp(clothPhysicsSettingsAtColor_Local[i].clothPhysicsVelocityScaleSettingsWithNoColorPaintedAtChannel.PhysicsVelocityScale_FictitiousAngularVelocityScale, clothPhysicsSettingsAtColor_Local[i].clothPhysicsVelocityScaleSettingsWithFullColorPaintedAtChannel.PhysicsVelocityScale_FictitiousAngularVelocityScale, clothPhysicsSettingsAtColorAvarageValue_Local[i]);
		}
	}

	return chaosClothPhysicsSettingsLocal;
}



#endif


//-------------------------------------------------------

// Set Chaos Wheeled Vehicle Friction Multiplier - Made this into a wrapper since in UE4 the function doesn't exist so couldn't have it in BP

void UVertexPaintFunctionLibrary::SetChaosWheeledVehicleFrictionMultiplier_Wrapper(UChaosWheeledVehicleMovementComponent* chaosWheeledVehicleMovementComponent, int wheelIndex, float friction) {

#if ENGINE_MAJOR_VERSION == 5

	if (!IsValid(chaosWheeledVehicleMovementComponent) || wheelIndex < 0) return;

	chaosWheeledVehicleMovementComponent->SetWheelFrictionMultiplier(wheelIndex, friction);

#endif

}


//-------------------------------------------------------

// Get Physics Surface as String

FString UVertexPaintFunctionLibrary::GetPhysicsSurfaceAsString(TEnumAsByte<EPhysicalSurface> physicsSurface) {

	if (physicsSurface == EPhysicalSurface::SurfaceType_Default)
		return "Default";

	for (auto physSurfaceNameTemp : GetDefault<UPhysicsSettings>()->PhysicalSurfaces) {

		if (physSurfaceNameTemp.Type == physicsSurface)
			return physSurfaceNameTemp.Name.ToString();
	}

	return FString();
}


//-------------------------------------------------------

// Get Physical Material Using Physics Surface

UPhysicalMaterial* UVertexPaintFunctionLibrary::GetPhysicalMaterialUsingPhysicsSurface_Wrapper(const UObject* WorldContextObject, TSubclassOf<UPhysicalMaterial> physicalMaterialClass, TEnumAsByte<EPhysicalSurface> physicsSurface) {

	if (physicsSurface == EPhysicalSurface::SurfaceType_Default) return nullptr;
	if (!IsValid(WorldContextObject)) return nullptr;
	if (!physicalMaterialClass) return nullptr;


	if (UGameplayStatics::GetGameInstance(WorldContextObject)->GetSubsystem<UVertexPaintDetectionGISubSystem>()) {

		for (auto physicalMaterial : UGameplayStatics::GetGameInstance(WorldContextObject)->GetSubsystem<UVertexPaintDetectionGISubSystem>()->GetAllCachedPhysicsMaterialAssets()) {


			// If set to only check in specific class then makes sure that the physical material is that class
			if (physicalMaterialClass->GetClass() != UPhysicalMaterial::StaticClass()->GetClass()) {

				// If you have custom phys material classes then you can check only through your specific class instead of all of them. 
				if (physicalMaterial->GetClass() == physicalMaterialClass) {

					if (physicalMaterial->SurfaceType == physicsSurface)
						return physicalMaterial;
				}
			}

			else if (physicalMaterial->SurfaceType == physicsSurface) {

				return physicalMaterial;
			}
		}
	}

	return nullptr;
}


//--------------------------------------------------------

// Get All Physics Surfaces

TArray<TEnumAsByte<EPhysicalSurface>> UVertexPaintFunctionLibrary::GetAllPhysicsSurfaces() {

	TArray<TEnumAsByte<EPhysicalSurface>> physicalSurfaces_Local;

	for (auto physSurfaceNameTemp : GetDefault<UPhysicsSettings>()->PhysicalSurfaces)
		physicalSurfaces_Local.Add(physSurfaceNameTemp.Type);

	return physicalSurfaces_Local;
}

#if WITH_EDITOR


//--------------------------------------------------------

// Get Objects Of Class

TArray<UObject*> UVertexPaintFunctionLibrary::VertexPaintDetectionPlugin_GetObjectsOfClass(TSubclassOf<UObject> objectsToGet, bool onlyGetObjectsFromContentFolder) {

	if (!objectsToGet.Get()) return TArray<UObject*>();


	FAssetRegistryModule& AssetRegistryModule_Local = FModuleManager::LoadModuleChecked<FAssetRegistryModule>("AssetRegistry");
	TArray<FAssetData> AssetData_Local;
	TArray<UObject*> objects_Local;


#if ENGINE_MAJOR_VERSION == 4

	AssetRegistryModule_Local.Get().GetAssetsByClass(objectsToGet.Get()->GetFName(), AssetData_Local);

#elif ENGINE_MAJOR_VERSION == 5

#if ENGINE_MINOR_VERSION == 0

	AssetRegistryModule_Local.Get().GetAssetsByClass(objectsToGet.Get()->GetFName(), AssetData_Local);


#else

	AssetRegistryModule_Local.Get().GetAssetsByClass(objectsToGet.Get()->GetClassPathName(), AssetData_Local);

#endif
#endif


	for (auto asset_Local : AssetData_Local) {


		// If asset it not in the content folder
		if (!asset_Local.ToSoftObjectPath().ToString().StartsWith("/Game", ESearchCase::IgnoreCase)) {

			if (onlyGetObjectsFromContentFolder)
				continue;
		}

		if (asset_Local.GetAsset())
			objects_Local.Add(asset_Local.GetAsset());
	}

	return objects_Local;
}

//--------------------------------------------------------

// Get Soft Object Path From Soft Object Ptr

FSoftObjectPath UVertexPaintFunctionLibrary::VertexPaintDetectionPlugin_GetSoftObjectPathFromSoftObjectPtr(TSoftObjectPtr<UObject> object) {

	if (!object) return FSoftObjectPath();

	return object.ToSoftObjectPath();
}


//--------------------------------------------------------

// Get Soft Object Name From Soft Object Ptr

FString UVertexPaintFunctionLibrary::VertexPaintDetectionPlugin_GetObjectNameFromSoftObjectPtr(TSoftObjectPtr<UObject> object) {

	if (!object) return FString();

	return object.GetAssetName();
}


//--------------------------------------------------------

// Get Object Of Class as Soft Ptrs

TArray<TSoftObjectPtr<UObject>> UVertexPaintFunctionLibrary::VertexPaintDetectionPlugin_GetObjectsOfClassAsSoftPtrs(TSubclassOf<UObject> objectsToGet, bool loadObjects) {

	if (!objectsToGet.Get()) return TArray<TSoftObjectPtr<UObject>>();


	FAssetRegistryModule& AssetRegistryModule_Local = FModuleManager::LoadModuleChecked<FAssetRegistryModule>("AssetRegistry");
	TArray<FAssetData> AssetData_Local;


#if ENGINE_MAJOR_VERSION == 4

	AssetRegistryModule_Local.Get().GetAssetsByClass(objectsToGet.Get()->GetFName(), AssetData_Local);

#elif ENGINE_MAJOR_VERSION == 5

#if ENGINE_MINOR_VERSION == 0

	AssetRegistryModule_Local.Get().GetAssetsByClass(objectsToGet.Get()->GetFName(), AssetData_Local);


#else

	AssetRegistryModule_Local.Get().GetAssetsByClass(objectsToGet.Get()->GetClassPathName(), AssetData_Local);

#endif
#endif


	TArray<TSoftObjectPtr<UObject>> softObjectPtrs_Local;
	TSoftObjectPtr<UObject> tempSoftObject;

	for (auto asset_Local : AssetData_Local) {


		// If asset it not in the content folder
		if (!asset_Local.ToSoftObjectPath().ToString().StartsWith("/Game", ESearchCase::IgnoreCase)) {

			continue;
		}

		tempSoftObject = asset_Local.ToSoftObjectPath();


		if (loadObjects)
			tempSoftObject.LoadSynchronous();

		if (!tempSoftObject) continue;

		softObjectPtrs_Local.Add(tempSoftObject);
	}

	return softObjectPtrs_Local;
}


#endif

