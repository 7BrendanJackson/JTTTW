// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "VertexPaintDetectionPlugin/Public/VertexPaintFunctionLibrary.h"
#include "Engine/Classes/Engine/HitResult.h"
#include "GameplayTags/Classes/GameplayTagContainer.h"
#include "VertexPaintDetectionPlugin/Public/VertexPaintDetectionStructs.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeVertexPaintFunctionLibrary() {}
// Cross Module References
	CHAOSVEHICLES_API UClass* Z_Construct_UClass_UChaosWheeledVehicleMovementComponent_NoRegister();
	CLOTHINGSYSTEMRUNTIMEINTERFACE_API UClass* Z_Construct_UClass_UClothingAssetBase_NoRegister();
	COREUOBJECT_API UClass* Z_Construct_UClass_UClass();
	COREUOBJECT_API UClass* Z_Construct_UClass_UObject_NoRegister();
	COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FColor();
	COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FLinearColor();
	COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FSoftObjectPath();
	COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FVector();
	ENGINE_API UClass* Z_Construct_UClass_UBlueprintFunctionLibrary();
	ENGINE_API UClass* Z_Construct_UClass_UMaterialInterface_NoRegister();
	ENGINE_API UClass* Z_Construct_UClass_UPrimitiveComponent_NoRegister();
	ENGINE_API UClass* Z_Construct_UClass_USkeletalMesh_NoRegister();
	ENGINE_API UClass* Z_Construct_UClass_USkeletalMeshComponent_NoRegister();
	ENGINE_API UClass* Z_Construct_UClass_UStaticMesh_NoRegister();
	ENGINE_API UClass* Z_Construct_UClass_UStaticMeshComponent_NoRegister();
	ENGINE_API UClass* Z_Construct_UClass_UWorld_NoRegister();
	ENGINE_API UEnum* Z_Construct_UEnum_Engine_ECollisionChannel();
	ENGINE_API UEnum* Z_Construct_UEnum_Engine_EObjectTypeQuery();
	ENGINE_API UScriptStruct* Z_Construct_UScriptStruct_FHitResult();
	GAMEPLAYTAGS_API UScriptStruct* Z_Construct_UScriptStruct_FGameplayTag();
	PHYSICSCORE_API UClass* Z_Construct_UClass_UPhysicalMaterial_NoRegister();
	PHYSICSCORE_API UEnum* Z_Construct_UEnum_PhysicsCore_EPhysicalSurface();
	UPackage* Z_Construct_UPackage__Script_VertexPaintDetectionPlugin();
	VERTEXPAINTDETECTIONPLUGIN_API UClass* Z_Construct_UClass_UVertexPaintColorSnippetDataAsset_NoRegister();
	VERTEXPAINTDETECTIONPLUGIN_API UClass* Z_Construct_UClass_UVertexPaintColorSnippetRefs_NoRegister();
	VERTEXPAINTDETECTIONPLUGIN_API UClass* Z_Construct_UClass_UVertexPaintDetectionComponent_NoRegister();
	VERTEXPAINTDETECTIONPLUGIN_API UClass* Z_Construct_UClass_UVertexPaintFunctionLibrary();
	VERTEXPAINTDETECTIONPLUGIN_API UClass* Z_Construct_UClass_UVertexPaintFunctionLibrary_NoRegister();
	VERTEXPAINTDETECTIONPLUGIN_API UClass* Z_Construct_UClass_UVertexPaintMaterialDataAsset_NoRegister();
	VERTEXPAINTDETECTIONPLUGIN_API UClass* Z_Construct_UClass_UVertexPaintOptimizationDataAsset_NoRegister();
	VERTEXPAINTDETECTIONPLUGIN_API UEnum* Z_Construct_UEnum_VertexPaintDetectionPlugin_Enum_SurfaceAtChannel();
	VERTEXPAINTDETECTIONPLUGIN_API UScriptStruct* Z_Construct_UScriptStruct_FVertexDetectAdditionalDataToPassThrough();
	VERTEXPAINTDETECTIONPLUGIN_API UScriptStruct* Z_Construct_UScriptStruct_FVertexDetectAmountOfPaintedColorsOfEachChannel();
	VERTEXPAINTDETECTIONPLUGIN_API UScriptStruct* Z_Construct_UScriptStruct_FVertexDetectChaosClothPhysicsSettings();
	VERTEXPAINTDETECTIONPLUGIN_API UScriptStruct* Z_Construct_UScriptStruct_FVertexDetectGetColorsOnlyStruct();
	VERTEXPAINTDETECTIONPLUGIN_API UScriptStruct* Z_Construct_UScriptStruct_FVertexDetectInfoStruct();
	VERTEXPAINTDETECTIONPLUGIN_API UScriptStruct* Z_Construct_UScriptStruct_FVertexDetectMeshDataStruct();
	VERTEXPAINTDETECTIONPLUGIN_API UScriptStruct* Z_Construct_UScriptStruct_FVertexPaintAtLocationStruct();
	VERTEXPAINTDETECTIONPLUGIN_API UScriptStruct* Z_Construct_UScriptStruct_FVertexPaintColorSnippetStruct();
	VERTEXPAINTDETECTIONPLUGIN_API UScriptStruct* Z_Construct_UScriptStruct_FVertexPainthWithinArea_ComponentToCheckIfIsWithinInfo();
	VERTEXPAINTDETECTIONPLUGIN_API UScriptStruct* Z_Construct_UScriptStruct_FVertexPainthWithinAreaStruct();
	VERTEXPAINTDETECTIONPLUGIN_API UScriptStruct* Z_Construct_UScriptStruct_FVertexPaintOnEntireMeshStruct();
	VERTEXPAINTDETECTIONPLUGIN_API UScriptStruct* Z_Construct_UScriptStruct_FVertexPaintSetMeshComponentVertexColors();
	VERTEXPAINTDETECTIONPLUGIN_API UScriptStruct* Z_Construct_UScriptStruct_FVertexPaintSetMeshComponentVertexColorsUsingSerializedString();
// End Cross Module References
	DEFINE_FUNCTION(UVertexPaintFunctionLibrary::execUpdateChaosClothPhysicsWithExistingColors)
	{
		P_GET_OBJECT(USkeletalMeshComponent,Z_Param_skeletalMeshComponent);
		P_FINISH;
		P_NATIVE_BEGIN;
		UVertexPaintFunctionLibrary::UpdateChaosClothPhysicsWithExistingColors(Z_Param_skeletalMeshComponent);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UVertexPaintFunctionLibrary::execSetChaosClothPhysics)
	{
		P_GET_OBJECT(USkeletalMeshComponent,Z_Param_skeletalMeshComponent);
		P_GET_OBJECT(UClothingAssetBase,Z_Param_clothingAsset);
		P_GET_STRUCT_REF(FVertexDetectChaosClothPhysicsSettings,Z_Param_Out_clothPhysicsSettings);
		P_FINISH;
		P_NATIVE_BEGIN;
		UVertexPaintFunctionLibrary::SetChaosClothPhysics(Z_Param_skeletalMeshComponent,Z_Param_clothingAsset,Z_Param_Out_clothPhysicsSettings);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UVertexPaintFunctionLibrary::execGetClothAssets)
	{
		P_GET_OBJECT(USkeletalMesh,Z_Param_skeletalMesh);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(TArray<UClothingAssetBase*>*)Z_Param__Result=UVertexPaintFunctionLibrary::GetClothAssets(Z_Param_skeletalMesh);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UVertexPaintFunctionLibrary::execSetChaosWheeledVehicleFrictionMultiplier_Wrapper)
	{
		P_GET_OBJECT(UChaosWheeledVehicleMovementComponent,Z_Param_chaosWheeledVehicleMovementComponent);
		P_GET_PROPERTY(FIntProperty,Z_Param_wheelIndex);
		P_GET_PROPERTY(FFloatProperty,Z_Param_friction);
		P_FINISH;
		P_NATIVE_BEGIN;
		UVertexPaintFunctionLibrary::SetChaosWheeledVehicleFrictionMultiplier_Wrapper(Z_Param_chaosWheeledVehicleMovementComponent,Z_Param_wheelIndex,Z_Param_friction);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UVertexPaintFunctionLibrary::execGetPhysicalMaterialUsingPhysicsSurface_Wrapper)
	{
		P_GET_OBJECT(UObject,Z_Param_WorldContextObject);
		P_GET_OBJECT(UClass,Z_Param_physicalMaterialClass);
		P_GET_PROPERTY(FByteProperty,Z_Param_physicsSurface);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(UPhysicalMaterial**)Z_Param__Result=UVertexPaintFunctionLibrary::GetPhysicalMaterialUsingPhysicsSurface_Wrapper(Z_Param_WorldContextObject,Z_Param_physicalMaterialClass,EPhysicalSurface(Z_Param_physicsSurface));
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UVertexPaintFunctionLibrary::execObjectTypeToCollisionChannel)
	{
		P_GET_PROPERTY(FByteProperty,Z_Param_object);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(TEnumAsByte<ECollisionChannel>*)Z_Param__Result=UVertexPaintFunctionLibrary::ObjectTypeToCollisionChannel(EObjectTypeQuery(Z_Param_object));
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UVertexPaintFunctionLibrary::execCollisionChannelToObjectType)
	{
		P_GET_PROPERTY(FByteProperty,Z_Param_channel);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(TEnumAsByte<EObjectTypeQuery>*)Z_Param__Result=UVertexPaintFunctionLibrary::CollisionChannelToObjectType(ECollisionChannel(Z_Param_channel));
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UVertexPaintFunctionLibrary::execVertexPaintDetectionPlugin_GetStaticMeshVertexColorsAtLOD)
	{
		P_GET_OBJECT(UStaticMeshComponent,Z_Param_staticMeshComponent);
		P_GET_PROPERTY(FIntProperty,Z_Param_lod);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(TArray<FColor>*)Z_Param__Result=UVertexPaintFunctionLibrary::VertexPaintDetectionPlugin_GetStaticMeshVertexColorsAtLOD(Z_Param_staticMeshComponent,Z_Param_lod);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UVertexPaintFunctionLibrary::execVertexPaintDetectionPlugin_GetSkeletalMeshVertexColorsAtLOD)
	{
		P_GET_OBJECT(USkeletalMeshComponent,Z_Param_skeletalMeshComponent);
		P_GET_PROPERTY(FIntProperty,Z_Param_lod);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(TArray<FColor>*)Z_Param__Result=UVertexPaintFunctionLibrary::VertexPaintDetectionPlugin_GetSkeletalMeshVertexColorsAtLOD(Z_Param_skeletalMeshComponent,Z_Param_lod);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UVertexPaintFunctionLibrary::execVertexPaintDetectionPlugin_GetSkeletalMesh)
	{
		P_GET_OBJECT(USkeletalMeshComponent,Z_Param_skeletalMeshComp);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(USkeletalMesh**)Z_Param__Result=UVertexPaintFunctionLibrary::VertexPaintDetectionPlugin_GetSkeletalMesh(Z_Param_skeletalMeshComp);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UVertexPaintFunctionLibrary::execVertexPaintDetectionPlugin_SortAssetsNamesAlphabetically)
	{
		P_GET_TMAP(int32,FString,Z_Param_assetIndexAndName);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(TMap<int32,FString>*)Z_Param__Result=UVertexPaintFunctionLibrary::VertexPaintDetectionPlugin_SortAssetsNamesAlphabetically(Z_Param_assetIndexAndName);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UVertexPaintFunctionLibrary::execVertexPaintDetectionPlugin_SortStringArrayAlphabetically)
	{
		P_GET_TARRAY(FString,Z_Param_strings);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(TArray<FString>*)Z_Param__Result=UVertexPaintFunctionLibrary::VertexPaintDetectionPlugin_SortStringArrayAlphabetically(Z_Param_strings);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UVertexPaintFunctionLibrary::execVertexPaintDetectionPlugin_SetSkeletalMeshAndReleaseResources)
	{
		P_GET_OBJECT(USkeletalMeshComponent,Z_Param_skeletalMeshComponent);
		P_GET_OBJECT(USkeletalMesh,Z_Param_newMesh);
		P_FINISH;
		P_NATIVE_BEGIN;
		UVertexPaintFunctionLibrary::VertexPaintDetectionPlugin_SetSkeletalMeshAndReleaseResources(Z_Param_skeletalMeshComponent,Z_Param_newMesh);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UVertexPaintFunctionLibrary::execVertexPaintDetectionPlugin_SetStaticMeshAndReleaseOverrideVertexColors)
	{
		P_GET_OBJECT(UStaticMeshComponent,Z_Param_staticMeshComponent);
		P_GET_OBJECT(UStaticMesh,Z_Param_newMesh);
		P_FINISH;
		P_NATIVE_BEGIN;
		UVertexPaintFunctionLibrary::VertexPaintDetectionPlugin_SetStaticMeshAndReleaseOverrideVertexColors(Z_Param_staticMeshComponent,Z_Param_newMesh);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UVertexPaintFunctionLibrary::execGetAmountOfPaintedColorsForEachChannel)
	{
		P_GET_TARRAY_REF(FColor,Z_Param_Out_vertexColors);
		P_GET_PROPERTY(FFloatProperty,Z_Param_minColorAmountToBeConsidered);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(FVertexDetectAmountOfPaintedColorsOfEachChannel*)Z_Param__Result=UVertexPaintFunctionLibrary::GetAmountOfPaintedColorsForEachChannel(Z_Param_Out_vertexColors,Z_Param_minColorAmountToBeConsidered);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UVertexPaintFunctionLibrary::execDrawPrimitiveComponentBoundsBox)
	{
		P_GET_OBJECT(UPrimitiveComponent,Z_Param_component);
		P_GET_PROPERTY(FFloatProperty,Z_Param_lifetime);
		P_GET_PROPERTY(FFloatProperty,Z_Param_thickness);
		P_GET_STRUCT(FLinearColor,Z_Param_colorToDraw);
		P_FINISH;
		P_NATIVE_BEGIN;
		UVertexPaintFunctionLibrary::DrawPrimitiveComponentBoundsBox(Z_Param_component,Z_Param_lifetime,Z_Param_thickness,Z_Param_colorToDraw);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UVertexPaintFunctionLibrary::execGetAllPhysicsSurfaces)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		*(TArray<TEnumAsByte<EPhysicalSurface> >*)Z_Param__Result=UVertexPaintFunctionLibrary::GetAllPhysicsSurfaces();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UVertexPaintFunctionLibrary::execGetAllVertexColorChannelsPhysicsSurfaceIsRegisteredTo_Wrapper)
	{
		P_GET_OBJECT(UMaterialInterface,Z_Param_material);
		P_GET_PROPERTY(FByteProperty,Z_Param_physicsSurface);
		P_GET_UBOOL_REF(Z_Param_Out_successfull);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(TArray<Enum_SurfaceAtChannel>*)Z_Param__Result=UVertexPaintFunctionLibrary::GetAllVertexColorChannelsPhysicsSurfaceIsRegisteredTo_Wrapper(Z_Param_material,EPhysicalSurface(Z_Param_physicsSurface),Z_Param_Out_successfull);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UVertexPaintFunctionLibrary::execGetTheMostDominantPhysicsSurface_Wrapper)
	{
		P_GET_OBJECT(UMaterialInterface,Z_Param_optionalMaterialPhysicsSurfaceWasDetectedOn);
		P_GET_TARRAY(TEnumAsByte<EPhysicalSurface>,Z_Param_physicsSurfaces);
		P_GET_TARRAY(float,Z_Param_physicsSurfaceValues);
		P_GET_PROPERTY_REF(FByteProperty,Z_Param_Out_mostDominantPhysicsSurfaceFromArray);
		P_GET_PROPERTY_REF(FFloatProperty,Z_Param_Out_mostDominantPhysicsSurfaceColorValue);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(bool*)Z_Param__Result=UVertexPaintFunctionLibrary::GetTheMostDominantPhysicsSurface_Wrapper(Z_Param_optionalMaterialPhysicsSurfaceWasDetectedOn,Z_Param_physicsSurfaces,Z_Param_physicsSurfaceValues,(TEnumAsByte<EPhysicalSurface>&)(Z_Param_Out_mostDominantPhysicsSurfaceFromArray),Z_Param_Out_mostDominantPhysicsSurfaceColorValue);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UVertexPaintFunctionLibrary::execGetColorsToApplyFromPhysicsMaterial_Wrapper)
	{
		P_GET_OBJECT(UMaterialInterface,Z_Param_materialToApplyColorsTo);
		P_GET_PROPERTY(FByteProperty,Z_Param_physicalSurface);
		P_GET_PROPERTY_REF(FFloatProperty,Z_Param_Out_redAmountToApply);
		P_GET_PROPERTY_REF(FFloatProperty,Z_Param_Out_greenAmountToApply);
		P_GET_PROPERTY_REF(FFloatProperty,Z_Param_Out_blueAmountToApply);
		P_GET_PROPERTY_REF(FFloatProperty,Z_Param_Out_alphaAmountToApply);
		P_GET_PROPERTY(FFloatProperty,Z_Param_defaultAmountIfFailOrChannelIsNotRegistered);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(bool*)Z_Param__Result=UVertexPaintFunctionLibrary::GetColorsToApplyFromPhysicsMaterial_Wrapper(Z_Param_materialToApplyColorsTo,EPhysicalSurface(Z_Param_physicalSurface),Z_Param_Out_redAmountToApply,Z_Param_Out_greenAmountToApply,Z_Param_Out_blueAmountToApply,Z_Param_Out_alphaAmountToApply,Z_Param_defaultAmountIfFailOrChannelIsNotRegistered);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UVertexPaintFunctionLibrary::execGetMeshComponentVertexColors_Wrapper)
	{
		P_GET_OBJECT(UPrimitiveComponent,Z_Param_meshComponent);
		P_GET_UBOOL_REF(Z_Param_Out_success);
		P_GET_UBOOL(Z_Param_getColorsForAllLODs);
		P_GET_PROPERTY(FIntProperty,Z_Param_getColorsUpToLOD);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(FVertexDetectMeshDataStruct*)Z_Param__Result=UVertexPaintFunctionLibrary::GetMeshComponentVertexColors_Wrapper(Z_Param_meshComponent,Z_Param_Out_success,Z_Param_getColorsForAllLODs,Z_Param_getColorsUpToLOD);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UVertexPaintFunctionLibrary::execGetMeshColorSnippetsTagsInTagCategory_Wrapper)
	{
		P_GET_OBJECT(UPrimitiveComponent,Z_Param_meshComponent);
		P_GET_STRUCT(FGameplayTag,Z_Param_tagCategory);
		P_GET_TMAP_REF(FGameplayTag,TSoftObjectPtr<UVertexPaintColorSnippetDataAsset>,Z_Param_Out_availableColorSnippetTagsAndDataAssetsUnderTagCategory);
		P_FINISH;
		P_NATIVE_BEGIN;
		UVertexPaintFunctionLibrary::GetMeshColorSnippetsTagsInTagCategory_Wrapper(Z_Param_meshComponent,Z_Param_tagCategory,Z_Param_Out_availableColorSnippetTagsAndDataAssetsUnderTagCategory);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UVertexPaintFunctionLibrary::execGetAllMeshColorSnippetsTagsUnderTagCategory_Wrapper)
	{
		P_GET_OBJECT(UPrimitiveComponent,Z_Param_meshComponent);
		P_GET_STRUCT(FGameplayTag,Z_Param_tagCategory);
		P_GET_TMAP_REF(FGameplayTag,TSoftObjectPtr<UVertexPaintColorSnippetDataAsset>,Z_Param_Out_availableColorSnippetTagsAndDataAssetsUnderTagCategory);
		P_FINISH;
		P_NATIVE_BEGIN;
		UVertexPaintFunctionLibrary::GetAllMeshColorSnippetsTagsUnderTagCategory_Wrapper(Z_Param_meshComponent,Z_Param_tagCategory,Z_Param_Out_availableColorSnippetTagsAndDataAssetsUnderTagCategory);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UVertexPaintFunctionLibrary::execGetAllMeshColorSnippetsAsTags_Wrapper)
	{
		P_GET_OBJECT(UPrimitiveComponent,Z_Param_meshComponent);
		P_GET_TMAP_REF(FGameplayTag,TSoftObjectPtr<UVertexPaintColorSnippetDataAsset>,Z_Param_Out_availableColorSnippetTagsAndDataAssets);
		P_FINISH;
		P_NATIVE_BEGIN;
		UVertexPaintFunctionLibrary::GetAllMeshColorSnippetsAsTags_Wrapper(Z_Param_meshComponent,Z_Param_Out_availableColorSnippetTagsAndDataAssets);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UVertexPaintFunctionLibrary::execGetAllMeshColorSnippetsAsString_Wrapper)
	{
		P_GET_OBJECT(UPrimitiveComponent,Z_Param_meshComponent);
		P_GET_TMAP_REF(FString,TSoftObjectPtr<UVertexPaintColorSnippetDataAsset>,Z_Param_Out_availableColorSnippetsAndDataAssets);
		P_FINISH;
		P_NATIVE_BEGIN;
		UVertexPaintFunctionLibrary::GetAllMeshColorSnippetsAsString_Wrapper(Z_Param_meshComponent,Z_Param_Out_availableColorSnippetsAndDataAssets);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UVertexPaintFunctionLibrary::execGetCalculateColorsDetectionTasksAmount_Wrapper)
	{
		P_GET_OBJECT(UObject,Z_Param_WorldContextObject);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(TMap<UPrimitiveComponent*,int32>*)Z_Param__Result=UVertexPaintFunctionLibrary::GetCalculateColorsDetectionTasksAmount_Wrapper(Z_Param_WorldContextObject);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UVertexPaintFunctionLibrary::execGetCalculateColorsPaintTasksAmount_Wrapper)
	{
		P_GET_OBJECT(UObject,Z_Param_WorldContextObject);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(TMap<UPrimitiveComponent*,int32>*)Z_Param__Result=UVertexPaintFunctionLibrary::GetCalculateColorsPaintTasksAmount_Wrapper(Z_Param_WorldContextObject);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UVertexPaintFunctionLibrary::execClearMeshPaintedSinceSessionStarted_Wrapper)
	{
		P_GET_OBJECT(UObject,Z_Param_WorldContextObject);
		P_FINISH;
		P_NATIVE_BEGIN;
		UVertexPaintFunctionLibrary::ClearMeshPaintedSinceSessionStarted_Wrapper(Z_Param_WorldContextObject);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UVertexPaintFunctionLibrary::execGetMeshPaintedSinceSessionStarted_Wrapper)
	{
		P_GET_OBJECT(UObject,Z_Param_WorldContextObject);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(TMap<UPrimitiveComponent*,int32>*)Z_Param__Result=UVertexPaintFunctionLibrary::GetMeshPaintedSinceSessionStarted_Wrapper(Z_Param_WorldContextObject);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UVertexPaintFunctionLibrary::execGetAmountOfLODsToPaintOn)
	{
		P_GET_OBJECT(UPrimitiveComponent,Z_Param_meshComp);
		P_GET_UBOOL(Z_Param_overrideLODToPaintUpOn);
		P_GET_PROPERTY(FIntProperty,Z_Param_overrideUpToLOD);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(int32*)Z_Param__Result=UVertexPaintFunctionLibrary::GetAmountOfLODsToPaintOn(Z_Param_meshComp,Z_Param_overrideLODToPaintUpOn,Z_Param_overrideUpToLOD);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UVertexPaintFunctionLibrary::execGetVertexPaintMaterialDataAsset)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		*(UVertexPaintMaterialDataAsset**)Z_Param__Result=UVertexPaintFunctionLibrary::GetVertexPaintMaterialDataAsset();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UVertexPaintFunctionLibrary::execGetOptimizationDataAsset)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		*(UVertexPaintOptimizationDataAsset**)Z_Param__Result=UVertexPaintFunctionLibrary::GetOptimizationDataAsset();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UVertexPaintFunctionLibrary::execGetColorSnippetReferenceDataAsset)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		*(UVertexPaintColorSnippetRefs**)Z_Param__Result=UVertexPaintFunctionLibrary::GetColorSnippetReferenceDataAsset();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UVertexPaintFunctionLibrary::execGetAmountOfTasksStartedByComponent)
	{
		P_GET_OBJECT(UVertexPaintDetectionComponent,Z_Param_paintComponent);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(int32*)Z_Param__Result=UVertexPaintFunctionLibrary::GetAmountOfTasksStartedByComponent(Z_Param_paintComponent);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UVertexPaintFunctionLibrary::execMultisphereTraceForPaintAtLocation_Wrapper)
	{
		P_GET_OBJECT(UObject,Z_Param_WorldContextObject);
		P_GET_STRUCT_REF(FVector,Z_Param_Out_location);
		P_GET_PROPERTY_REF(FFloatProperty,Z_Param_Out_areaOfEffect);
		P_GET_TARRAY_REF(TEnumAsByte<EObjectTypeQuery>,Z_Param_Out_objectTypesToTraceFor);
		P_GET_PROPERTY_REF(FIntProperty,Z_Param_Out_expectedCallbacksFromPaintAtLocation);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(TArray<FHitResult>*)Z_Param__Result=UVertexPaintFunctionLibrary::MultisphereTraceForPaintAtLocation_Wrapper(Z_Param_WorldContextObject,Z_Param_Out_location,Z_Param_Out_areaOfEffect,Z_Param_Out_objectTypesToTraceFor,Z_Param_Out_expectedCallbacksFromPaintAtLocation);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UVertexPaintFunctionLibrary::execIsWorldValid)
	{
		P_GET_OBJECT(UWorld,Z_Param_world);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(bool*)Z_Param__Result=UVertexPaintFunctionLibrary::IsWorldValid(Z_Param_world);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UVertexPaintFunctionLibrary::execSetMeshComponentVertexColorsUsingSerializedString_Wrapper)
	{
		P_GET_OBJECT(UPrimitiveComponent,Z_Param_meshComponent);
		P_GET_STRUCT(FVertexPaintSetMeshComponentVertexColorsUsingSerializedString,Z_Param_setMeshComponentVertexColorsUsingSerializedStringSettings);
		P_GET_STRUCT(FVertexDetectAdditionalDataToPassThrough,Z_Param_additionalDataToPassThrough);
		P_FINISH;
		P_NATIVE_BEGIN;
		UVertexPaintFunctionLibrary::SetMeshComponentVertexColorsUsingSerializedString_Wrapper(Z_Param_meshComponent,Z_Param_setMeshComponentVertexColorsUsingSerializedStringSettings,Z_Param_additionalDataToPassThrough);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UVertexPaintFunctionLibrary::execSetMeshComponentVertexColors_Wrapper)
	{
		P_GET_OBJECT(UPrimitiveComponent,Z_Param_meshComponent);
		P_GET_STRUCT(FVertexPaintSetMeshComponentVertexColors,Z_Param_setMeshComponentVertexColorsSettings);
		P_GET_STRUCT(FVertexDetectAdditionalDataToPassThrough,Z_Param_additionalDataToPassThrough);
		P_FINISH;
		P_NATIVE_BEGIN;
		UVertexPaintFunctionLibrary::SetMeshComponentVertexColors_Wrapper(Z_Param_meshComponent,Z_Param_setMeshComponentVertexColorsSettings,Z_Param_additionalDataToPassThrough);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UVertexPaintFunctionLibrary::execPaintColorSnippetOnMesh_Wrappers)
	{
		P_GET_OBJECT(UVertexPaintDetectionComponent,Z_Param_runtimeVertexPaintAndDetectionComponent);
		P_GET_OBJECT(UPrimitiveComponent,Z_Param_meshComponent);
		P_GET_STRUCT(FVertexPaintColorSnippetStruct,Z_Param_paintColorSnippetStruct);
		P_GET_STRUCT(FVertexDetectAdditionalDataToPassThrough,Z_Param_additionalDataToPassThrough);
		P_FINISH;
		P_NATIVE_BEGIN;
		UVertexPaintFunctionLibrary::PaintColorSnippetOnMesh_Wrappers(Z_Param_runtimeVertexPaintAndDetectionComponent,Z_Param_meshComponent,Z_Param_paintColorSnippetStruct,Z_Param_additionalDataToPassThrough);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UVertexPaintFunctionLibrary::execPaintOnEntireMesh_Wrapper)
	{
		P_GET_OBJECT(UVertexPaintDetectionComponent,Z_Param_runtimeVertexPaintAndDetectionComponent);
		P_GET_OBJECT(UPrimitiveComponent,Z_Param_meshComponent);
		P_GET_STRUCT(FVertexPaintOnEntireMeshStruct,Z_Param_paintOnEntireMeshStruct);
		P_GET_STRUCT(FVertexDetectAdditionalDataToPassThrough,Z_Param_additionalDataToPassThrough);
		P_FINISH;
		P_NATIVE_BEGIN;
		UVertexPaintFunctionLibrary::PaintOnEntireMesh_Wrapper(Z_Param_runtimeVertexPaintAndDetectionComponent,Z_Param_meshComponent,Z_Param_paintOnEntireMeshStruct,Z_Param_additionalDataToPassThrough);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UVertexPaintFunctionLibrary::execPaintOnMeshWithinArea_Wrapper)
	{
		P_GET_OBJECT(UVertexPaintDetectionComponent,Z_Param_runtimeVertexPaintAndDetectionComponent);
		P_GET_OBJECT(UPrimitiveComponent,Z_Param_meshComponent);
		P_GET_TARRAY(FVertexPainthWithinArea_ComponentToCheckIfIsWithinInfo,Z_Param_componentsToCheckIfIsWithin);
		P_GET_STRUCT(FVertexPainthWithinAreaStruct,Z_Param_paintWithinAreaStruct);
		P_GET_STRUCT(FVertexDetectAdditionalDataToPassThrough,Z_Param_additionalDataToPassThrough);
		P_FINISH;
		P_NATIVE_BEGIN;
		UVertexPaintFunctionLibrary::PaintOnMeshWithinArea_Wrapper(Z_Param_runtimeVertexPaintAndDetectionComponent,Z_Param_meshComponent,Z_Param_componentsToCheckIfIsWithin,Z_Param_paintWithinAreaStruct,Z_Param_additionalDataToPassThrough);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UVertexPaintFunctionLibrary::execPaintOnMeshAtLocation_Wrapper)
	{
		P_GET_OBJECT(UVertexPaintDetectionComponent,Z_Param_runtimeVertexPaintAndDetectionComponent);
		P_GET_OBJECT(UPrimitiveComponent,Z_Param_meshComponent);
		P_GET_STRUCT(FVertexPaintAtLocationStruct,Z_Param_paintAtLocationStruct);
		P_GET_STRUCT(FVertexDetectAdditionalDataToPassThrough,Z_Param_additionalDataToPassThrough);
		P_FINISH;
		P_NATIVE_BEGIN;
		UVertexPaintFunctionLibrary::PaintOnMeshAtLocation_Wrapper(Z_Param_runtimeVertexPaintAndDetectionComponent,Z_Param_meshComponent,Z_Param_paintAtLocationStruct,Z_Param_additionalDataToPassThrough);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UVertexPaintFunctionLibrary::execGetAllVertexColorsOnly_Wrapper)
	{
		P_GET_OBJECT(UVertexPaintDetectionComponent,Z_Param_runtimeVertexPaintAndDetectionComponent);
		P_GET_OBJECT(UPrimitiveComponent,Z_Param_meshComponent);
		P_GET_STRUCT(FVertexDetectGetColorsOnlyStruct,Z_Param_getAllVertexColorsStruct);
		P_GET_STRUCT(FVertexDetectAdditionalDataToPassThrough,Z_Param_additionalDataToPassThrough);
		P_FINISH;
		P_NATIVE_BEGIN;
		UVertexPaintFunctionLibrary::GetAllVertexColorsOnly_Wrapper(Z_Param_runtimeVertexPaintAndDetectionComponent,Z_Param_meshComponent,Z_Param_getAllVertexColorsStruct,Z_Param_additionalDataToPassThrough);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UVertexPaintFunctionLibrary::execGetClosestVertexDataOnMesh_Wrapper)
	{
		P_GET_OBJECT(UVertexPaintDetectionComponent,Z_Param_runtimeVertexPaintAndDetectionComponent);
		P_GET_OBJECT(UPrimitiveComponent,Z_Param_meshComponent);
		P_GET_STRUCT(FVertexDetectInfoStruct,Z_Param_getClosestVertexDataStruct);
		P_GET_STRUCT(FVertexDetectAdditionalDataToPassThrough,Z_Param_additionalDataToPassThrough);
		P_FINISH;
		P_NATIVE_BEGIN;
		UVertexPaintFunctionLibrary::GetClosestVertexDataOnMesh_Wrapper(Z_Param_runtimeVertexPaintAndDetectionComponent,Z_Param_meshComponent,Z_Param_getClosestVertexDataStruct,Z_Param_additionalDataToPassThrough);
		P_NATIVE_END;
	}
#if WITH_EDITOR
	DEFINE_FUNCTION(UVertexPaintFunctionLibrary::execVertexPaintDetectionPlugin_GetObjectsOfClassAsSoftPtrs)
	{
		P_GET_OBJECT(UClass,Z_Param_objectsToGet);
		P_GET_UBOOL(Z_Param_loadObjects);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(TArray<TSoftObjectPtr<UObject> >*)Z_Param__Result=UVertexPaintFunctionLibrary::VertexPaintDetectionPlugin_GetObjectsOfClassAsSoftPtrs(Z_Param_objectsToGet,Z_Param_loadObjects);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UVertexPaintFunctionLibrary::execVertexPaintDetectionPlugin_GetObjectNameFromSoftObjectPtr)
	{
		P_GET_SOFTOBJECT(TSoftObjectPtr<UObject>,Z_Param_object);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(FString*)Z_Param__Result=UVertexPaintFunctionLibrary::VertexPaintDetectionPlugin_GetObjectNameFromSoftObjectPtr(Z_Param_object);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UVertexPaintFunctionLibrary::execVertexPaintDetectionPlugin_GetSoftObjectPathFromSoftObjectPtr)
	{
		P_GET_SOFTOBJECT(TSoftObjectPtr<UObject>,Z_Param_object);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(FSoftObjectPath*)Z_Param__Result=UVertexPaintFunctionLibrary::VertexPaintDetectionPlugin_GetSoftObjectPathFromSoftObjectPtr(Z_Param_object);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UVertexPaintFunctionLibrary::execVertexPaintDetectionPlugin_GetObjectsOfClass)
	{
		P_GET_OBJECT(UClass,Z_Param_objectsToGet);
		P_GET_UBOOL(Z_Param_onlyGetObjectsFromContentFolder);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(TArray<UObject*>*)Z_Param__Result=UVertexPaintFunctionLibrary::VertexPaintDetectionPlugin_GetObjectsOfClass(Z_Param_objectsToGet,Z_Param_onlyGetObjectsFromContentFolder);
		P_NATIVE_END;
	}
#endif //WITH_EDITOR
	void UVertexPaintFunctionLibrary::StaticRegisterNativesUVertexPaintFunctionLibrary()
	{
		UClass* Class = UVertexPaintFunctionLibrary::StaticClass();
		static const FNameNativePtrPair Funcs[] = {
			{ "ClearMeshPaintedSinceSessionStarted_Wrapper", &UVertexPaintFunctionLibrary::execClearMeshPaintedSinceSessionStarted_Wrapper },
			{ "CollisionChannelToObjectType", &UVertexPaintFunctionLibrary::execCollisionChannelToObjectType },
			{ "DrawPrimitiveComponentBoundsBox", &UVertexPaintFunctionLibrary::execDrawPrimitiveComponentBoundsBox },
			{ "GetAllMeshColorSnippetsAsString_Wrapper", &UVertexPaintFunctionLibrary::execGetAllMeshColorSnippetsAsString_Wrapper },
			{ "GetAllMeshColorSnippetsAsTags_Wrapper", &UVertexPaintFunctionLibrary::execGetAllMeshColorSnippetsAsTags_Wrapper },
			{ "GetAllMeshColorSnippetsTagsUnderTagCategory_Wrapper", &UVertexPaintFunctionLibrary::execGetAllMeshColorSnippetsTagsUnderTagCategory_Wrapper },
			{ "GetAllPhysicsSurfaces", &UVertexPaintFunctionLibrary::execGetAllPhysicsSurfaces },
			{ "GetAllVertexColorChannelsPhysicsSurfaceIsRegisteredTo_Wrapper", &UVertexPaintFunctionLibrary::execGetAllVertexColorChannelsPhysicsSurfaceIsRegisteredTo_Wrapper },
			{ "GetAllVertexColorsOnly_Wrapper", &UVertexPaintFunctionLibrary::execGetAllVertexColorsOnly_Wrapper },
			{ "GetAmountOfLODsToPaintOn", &UVertexPaintFunctionLibrary::execGetAmountOfLODsToPaintOn },
			{ "GetAmountOfPaintedColorsForEachChannel", &UVertexPaintFunctionLibrary::execGetAmountOfPaintedColorsForEachChannel },
			{ "GetAmountOfTasksStartedByComponent", &UVertexPaintFunctionLibrary::execGetAmountOfTasksStartedByComponent },
			{ "GetCalculateColorsDetectionTasksAmount_Wrapper", &UVertexPaintFunctionLibrary::execGetCalculateColorsDetectionTasksAmount_Wrapper },
			{ "GetCalculateColorsPaintTasksAmount_Wrapper", &UVertexPaintFunctionLibrary::execGetCalculateColorsPaintTasksAmount_Wrapper },
			{ "GetClosestVertexDataOnMesh_Wrapper", &UVertexPaintFunctionLibrary::execGetClosestVertexDataOnMesh_Wrapper },
			{ "GetClothAssets", &UVertexPaintFunctionLibrary::execGetClothAssets },
			{ "GetColorSnippetReferenceDataAsset", &UVertexPaintFunctionLibrary::execGetColorSnippetReferenceDataAsset },
			{ "GetColorsToApplyFromPhysicsMaterial_Wrapper", &UVertexPaintFunctionLibrary::execGetColorsToApplyFromPhysicsMaterial_Wrapper },
			{ "GetMeshColorSnippetsTagsInTagCategory_Wrapper", &UVertexPaintFunctionLibrary::execGetMeshColorSnippetsTagsInTagCategory_Wrapper },
			{ "GetMeshComponentVertexColors_Wrapper", &UVertexPaintFunctionLibrary::execGetMeshComponentVertexColors_Wrapper },
			{ "GetMeshPaintedSinceSessionStarted_Wrapper", &UVertexPaintFunctionLibrary::execGetMeshPaintedSinceSessionStarted_Wrapper },
			{ "GetOptimizationDataAsset", &UVertexPaintFunctionLibrary::execGetOptimizationDataAsset },
			{ "GetPhysicalMaterialUsingPhysicsSurface_Wrapper", &UVertexPaintFunctionLibrary::execGetPhysicalMaterialUsingPhysicsSurface_Wrapper },
			{ "GetTheMostDominantPhysicsSurface_Wrapper", &UVertexPaintFunctionLibrary::execGetTheMostDominantPhysicsSurface_Wrapper },
			{ "GetVertexPaintMaterialDataAsset", &UVertexPaintFunctionLibrary::execGetVertexPaintMaterialDataAsset },
			{ "IsWorldValid", &UVertexPaintFunctionLibrary::execIsWorldValid },
			{ "MultisphereTraceForPaintAtLocation_Wrapper", &UVertexPaintFunctionLibrary::execMultisphereTraceForPaintAtLocation_Wrapper },
			{ "ObjectTypeToCollisionChannel", &UVertexPaintFunctionLibrary::execObjectTypeToCollisionChannel },
			{ "PaintColorSnippetOnMesh_Wrappers", &UVertexPaintFunctionLibrary::execPaintColorSnippetOnMesh_Wrappers },
			{ "PaintOnEntireMesh_Wrapper", &UVertexPaintFunctionLibrary::execPaintOnEntireMesh_Wrapper },
			{ "PaintOnMeshAtLocation_Wrapper", &UVertexPaintFunctionLibrary::execPaintOnMeshAtLocation_Wrapper },
			{ "PaintOnMeshWithinArea_Wrapper", &UVertexPaintFunctionLibrary::execPaintOnMeshWithinArea_Wrapper },
			{ "SetChaosClothPhysics", &UVertexPaintFunctionLibrary::execSetChaosClothPhysics },
			{ "SetChaosWheeledVehicleFrictionMultiplier_Wrapper", &UVertexPaintFunctionLibrary::execSetChaosWheeledVehicleFrictionMultiplier_Wrapper },
			{ "SetMeshComponentVertexColors_Wrapper", &UVertexPaintFunctionLibrary::execSetMeshComponentVertexColors_Wrapper },
			{ "SetMeshComponentVertexColorsUsingSerializedString_Wrapper", &UVertexPaintFunctionLibrary::execSetMeshComponentVertexColorsUsingSerializedString_Wrapper },
			{ "UpdateChaosClothPhysicsWithExistingColors", &UVertexPaintFunctionLibrary::execUpdateChaosClothPhysicsWithExistingColors },
#if WITH_EDITOR
			{ "VertexPaintDetectionPlugin_GetObjectNameFromSoftObjectPtr", &UVertexPaintFunctionLibrary::execVertexPaintDetectionPlugin_GetObjectNameFromSoftObjectPtr },
			{ "VertexPaintDetectionPlugin_GetObjectsOfClass", &UVertexPaintFunctionLibrary::execVertexPaintDetectionPlugin_GetObjectsOfClass },
			{ "VertexPaintDetectionPlugin_GetObjectsOfClassAsSoftPtrs", &UVertexPaintFunctionLibrary::execVertexPaintDetectionPlugin_GetObjectsOfClassAsSoftPtrs },
#endif // WITH_EDITOR
			{ "VertexPaintDetectionPlugin_GetSkeletalMesh", &UVertexPaintFunctionLibrary::execVertexPaintDetectionPlugin_GetSkeletalMesh },
			{ "VertexPaintDetectionPlugin_GetSkeletalMeshVertexColorsAtLOD", &UVertexPaintFunctionLibrary::execVertexPaintDetectionPlugin_GetSkeletalMeshVertexColorsAtLOD },
#if WITH_EDITOR
			{ "VertexPaintDetectionPlugin_GetSoftObjectPathFromSoftObjectPtr", &UVertexPaintFunctionLibrary::execVertexPaintDetectionPlugin_GetSoftObjectPathFromSoftObjectPtr },
#endif // WITH_EDITOR
			{ "VertexPaintDetectionPlugin_GetStaticMeshVertexColorsAtLOD", &UVertexPaintFunctionLibrary::execVertexPaintDetectionPlugin_GetStaticMeshVertexColorsAtLOD },
			{ "VertexPaintDetectionPlugin_SetSkeletalMeshAndReleaseResources", &UVertexPaintFunctionLibrary::execVertexPaintDetectionPlugin_SetSkeletalMeshAndReleaseResources },
			{ "VertexPaintDetectionPlugin_SetStaticMeshAndReleaseOverrideVertexColors", &UVertexPaintFunctionLibrary::execVertexPaintDetectionPlugin_SetStaticMeshAndReleaseOverrideVertexColors },
			{ "VertexPaintDetectionPlugin_SortAssetsNamesAlphabetically", &UVertexPaintFunctionLibrary::execVertexPaintDetectionPlugin_SortAssetsNamesAlphabetically },
			{ "VertexPaintDetectionPlugin_SortStringArrayAlphabetically", &UVertexPaintFunctionLibrary::execVertexPaintDetectionPlugin_SortStringArrayAlphabetically },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
	}
	struct Z_Construct_UFunction_UVertexPaintFunctionLibrary_ClearMeshPaintedSinceSessionStarted_Wrapper_Statics
	{
		struct VertexPaintFunctionLibrary_eventClearMeshPaintedSinceSessionStarted_Wrapper_Parms
		{
			const UObject* WorldContextObject;
		};
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_WorldContextObject_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPropertyParams NewProp_WorldContextObject;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UVertexPaintFunctionLibrary_ClearMeshPaintedSinceSessionStarted_Wrapper_Statics::NewProp_WorldContextObject_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UVertexPaintFunctionLibrary_ClearMeshPaintedSinceSessionStarted_Wrapper_Statics::NewProp_WorldContextObject = { "WorldContextObject", nullptr, (EPropertyFlags)0x0010000000000082, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(VertexPaintFunctionLibrary_eventClearMeshPaintedSinceSessionStarted_Wrapper_Parms, WorldContextObject), Z_Construct_UClass_UObject_NoRegister, METADATA_PARAMS(Z_Construct_UFunction_UVertexPaintFunctionLibrary_ClearMeshPaintedSinceSessionStarted_Wrapper_Statics::NewProp_WorldContextObject_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UVertexPaintFunctionLibrary_ClearMeshPaintedSinceSessionStarted_Wrapper_Statics::NewProp_WorldContextObject_MetaData)) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UVertexPaintFunctionLibrary_ClearMeshPaintedSinceSessionStarted_Wrapper_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UVertexPaintFunctionLibrary_ClearMeshPaintedSinceSessionStarted_Wrapper_Statics::NewProp_WorldContextObject,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UVertexPaintFunctionLibrary_ClearMeshPaintedSinceSessionStarted_Wrapper_Statics::Function_MetaDataParams[] = {
		{ "BlueprintInternalUseOnly", "true" },
		{ "Category", "Runtime Vertex Color Paint and Detection Plugin" },
		{ "ModuleRelativePath", "Public/VertexPaintFunctionLibrary.h" },
		{ "ToolTip", "Clears meshesPaintedOnSinceSessionStarted, useful if you go back to a Main Menu and unload all sublevels or something similar." },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UVertexPaintFunctionLibrary_ClearMeshPaintedSinceSessionStarted_Wrapper_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UVertexPaintFunctionLibrary, nullptr, "ClearMeshPaintedSinceSessionStarted_Wrapper", nullptr, nullptr, sizeof(Z_Construct_UFunction_UVertexPaintFunctionLibrary_ClearMeshPaintedSinceSessionStarted_Wrapper_Statics::VertexPaintFunctionLibrary_eventClearMeshPaintedSinceSessionStarted_Wrapper_Parms), Z_Construct_UFunction_UVertexPaintFunctionLibrary_ClearMeshPaintedSinceSessionStarted_Wrapper_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UVertexPaintFunctionLibrary_ClearMeshPaintedSinceSessionStarted_Wrapper_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04022401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UVertexPaintFunctionLibrary_ClearMeshPaintedSinceSessionStarted_Wrapper_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UVertexPaintFunctionLibrary_ClearMeshPaintedSinceSessionStarted_Wrapper_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UVertexPaintFunctionLibrary_ClearMeshPaintedSinceSessionStarted_Wrapper()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UVertexPaintFunctionLibrary_ClearMeshPaintedSinceSessionStarted_Wrapper_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UVertexPaintFunctionLibrary_CollisionChannelToObjectType_Statics
	{
		struct VertexPaintFunctionLibrary_eventCollisionChannelToObjectType_Parms
		{
			TEnumAsByte<ECollisionChannel> channel;
			TEnumAsByte<EObjectTypeQuery> ReturnValue;
		};
		static const UECodeGen_Private::FBytePropertyParams NewProp_channel;
		static const UECodeGen_Private::FBytePropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FBytePropertyParams Z_Construct_UFunction_UVertexPaintFunctionLibrary_CollisionChannelToObjectType_Statics::NewProp_channel = { "channel", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(VertexPaintFunctionLibrary_eventCollisionChannelToObjectType_Parms, channel), Z_Construct_UEnum_Engine_ECollisionChannel, METADATA_PARAMS(nullptr, 0) }; // 727872708
	const UECodeGen_Private::FBytePropertyParams Z_Construct_UFunction_UVertexPaintFunctionLibrary_CollisionChannelToObjectType_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(VertexPaintFunctionLibrary_eventCollisionChannelToObjectType_Parms, ReturnValue), Z_Construct_UEnum_Engine_EObjectTypeQuery, METADATA_PARAMS(nullptr, 0) }; // 3629342158
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UVertexPaintFunctionLibrary_CollisionChannelToObjectType_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UVertexPaintFunctionLibrary_CollisionChannelToObjectType_Statics::NewProp_channel,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UVertexPaintFunctionLibrary_CollisionChannelToObjectType_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UVertexPaintFunctionLibrary_CollisionChannelToObjectType_Statics::Function_MetaDataParams[] = {
		{ "Category", "Runtime Vertex Color Paint and Detection Plugin" },
		{ "ModuleRelativePath", "Public/VertexPaintFunctionLibrary.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UVertexPaintFunctionLibrary_CollisionChannelToObjectType_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UVertexPaintFunctionLibrary, nullptr, "CollisionChannelToObjectType", nullptr, nullptr, sizeof(Z_Construct_UFunction_UVertexPaintFunctionLibrary_CollisionChannelToObjectType_Statics::VertexPaintFunctionLibrary_eventCollisionChannelToObjectType_Parms), Z_Construct_UFunction_UVertexPaintFunctionLibrary_CollisionChannelToObjectType_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UVertexPaintFunctionLibrary_CollisionChannelToObjectType_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x14022401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UVertexPaintFunctionLibrary_CollisionChannelToObjectType_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UVertexPaintFunctionLibrary_CollisionChannelToObjectType_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UVertexPaintFunctionLibrary_CollisionChannelToObjectType()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UVertexPaintFunctionLibrary_CollisionChannelToObjectType_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UVertexPaintFunctionLibrary_DrawPrimitiveComponentBoundsBox_Statics
	{
		struct VertexPaintFunctionLibrary_eventDrawPrimitiveComponentBoundsBox_Parms
		{
			UPrimitiveComponent* component;
			float lifetime;
			float thickness;
			FLinearColor colorToDraw;
		};
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_component_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPropertyParams NewProp_component;
		static const UECodeGen_Private::FFloatPropertyParams NewProp_lifetime;
		static const UECodeGen_Private::FFloatPropertyParams NewProp_thickness;
		static const UECodeGen_Private::FStructPropertyParams NewProp_colorToDraw;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UVertexPaintFunctionLibrary_DrawPrimitiveComponentBoundsBox_Statics::NewProp_component_MetaData[] = {
		{ "EditInline", "true" },
	};
#endif
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UVertexPaintFunctionLibrary_DrawPrimitiveComponentBoundsBox_Statics::NewProp_component = { "component", nullptr, (EPropertyFlags)0x0010000000080080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(VertexPaintFunctionLibrary_eventDrawPrimitiveComponentBoundsBox_Parms, component), Z_Construct_UClass_UPrimitiveComponent_NoRegister, METADATA_PARAMS(Z_Construct_UFunction_UVertexPaintFunctionLibrary_DrawPrimitiveComponentBoundsBox_Statics::NewProp_component_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UVertexPaintFunctionLibrary_DrawPrimitiveComponentBoundsBox_Statics::NewProp_component_MetaData)) };
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_UVertexPaintFunctionLibrary_DrawPrimitiveComponentBoundsBox_Statics::NewProp_lifetime = { "lifetime", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(VertexPaintFunctionLibrary_eventDrawPrimitiveComponentBoundsBox_Parms, lifetime), METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_UVertexPaintFunctionLibrary_DrawPrimitiveComponentBoundsBox_Statics::NewProp_thickness = { "thickness", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(VertexPaintFunctionLibrary_eventDrawPrimitiveComponentBoundsBox_Parms, thickness), METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UVertexPaintFunctionLibrary_DrawPrimitiveComponentBoundsBox_Statics::NewProp_colorToDraw = { "colorToDraw", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(VertexPaintFunctionLibrary_eventDrawPrimitiveComponentBoundsBox_Parms, colorToDraw), Z_Construct_UScriptStruct_FLinearColor, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UVertexPaintFunctionLibrary_DrawPrimitiveComponentBoundsBox_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UVertexPaintFunctionLibrary_DrawPrimitiveComponentBoundsBox_Statics::NewProp_component,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UVertexPaintFunctionLibrary_DrawPrimitiveComponentBoundsBox_Statics::NewProp_lifetime,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UVertexPaintFunctionLibrary_DrawPrimitiveComponentBoundsBox_Statics::NewProp_thickness,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UVertexPaintFunctionLibrary_DrawPrimitiveComponentBoundsBox_Statics::NewProp_colorToDraw,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UVertexPaintFunctionLibrary_DrawPrimitiveComponentBoundsBox_Statics::Function_MetaDataParams[] = {
		{ "Category", "Runtime Vertex Color Paint and Detection Plugin" },
		{ "CPP_Default_colorToDraw", "(R=1.000000,G=0.000000,B=0.000000,A=1.000000)" },
		{ "CPP_Default_lifetime", "5.000000" },
		{ "CPP_Default_thickness", "3.000000" },
		{ "ModuleRelativePath", "Public/VertexPaintFunctionLibrary.h" },
		{ "ToolTip", "Draws Debug Box of the primitive components Bounds." },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UVertexPaintFunctionLibrary_DrawPrimitiveComponentBoundsBox_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UVertexPaintFunctionLibrary, nullptr, "DrawPrimitiveComponentBoundsBox", nullptr, nullptr, sizeof(Z_Construct_UFunction_UVertexPaintFunctionLibrary_DrawPrimitiveComponentBoundsBox_Statics::VertexPaintFunctionLibrary_eventDrawPrimitiveComponentBoundsBox_Parms), Z_Construct_UFunction_UVertexPaintFunctionLibrary_DrawPrimitiveComponentBoundsBox_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UVertexPaintFunctionLibrary_DrawPrimitiveComponentBoundsBox_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04822401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UVertexPaintFunctionLibrary_DrawPrimitiveComponentBoundsBox_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UVertexPaintFunctionLibrary_DrawPrimitiveComponentBoundsBox_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UVertexPaintFunctionLibrary_DrawPrimitiveComponentBoundsBox()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UVertexPaintFunctionLibrary_DrawPrimitiveComponentBoundsBox_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UVertexPaintFunctionLibrary_GetAllMeshColorSnippetsAsString_Wrapper_Statics
	{
		struct VertexPaintFunctionLibrary_eventGetAllMeshColorSnippetsAsString_Wrapper_Parms
		{
			UPrimitiveComponent* meshComponent;
			TMap<FString,TSoftObjectPtr<UVertexPaintColorSnippetDataAsset> > availableColorSnippetsAndDataAssets;
		};
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_meshComponent_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPropertyParams NewProp_meshComponent;
		static const UECodeGen_Private::FSoftObjectPropertyParams NewProp_availableColorSnippetsAndDataAssets_ValueProp;
		static const UECodeGen_Private::FStrPropertyParams NewProp_availableColorSnippetsAndDataAssets_Key_KeyProp;
		static const UECodeGen_Private::FMapPropertyParams NewProp_availableColorSnippetsAndDataAssets;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UVertexPaintFunctionLibrary_GetAllMeshColorSnippetsAsString_Wrapper_Statics::NewProp_meshComponent_MetaData[] = {
		{ "EditInline", "true" },
	};
#endif
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UVertexPaintFunctionLibrary_GetAllMeshColorSnippetsAsString_Wrapper_Statics::NewProp_meshComponent = { "meshComponent", nullptr, (EPropertyFlags)0x0010000000080080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(VertexPaintFunctionLibrary_eventGetAllMeshColorSnippetsAsString_Wrapper_Parms, meshComponent), Z_Construct_UClass_UPrimitiveComponent_NoRegister, METADATA_PARAMS(Z_Construct_UFunction_UVertexPaintFunctionLibrary_GetAllMeshColorSnippetsAsString_Wrapper_Statics::NewProp_meshComponent_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UVertexPaintFunctionLibrary_GetAllMeshColorSnippetsAsString_Wrapper_Statics::NewProp_meshComponent_MetaData)) };
	const UECodeGen_Private::FSoftObjectPropertyParams Z_Construct_UFunction_UVertexPaintFunctionLibrary_GetAllMeshColorSnippetsAsString_Wrapper_Statics::NewProp_availableColorSnippetsAndDataAssets_ValueProp = { "availableColorSnippetsAndDataAssets", nullptr, (EPropertyFlags)0x0004000000000000, UECodeGen_Private::EPropertyGenFlags::SoftObject, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, 1, Z_Construct_UClass_UVertexPaintColorSnippetDataAsset_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UVertexPaintFunctionLibrary_GetAllMeshColorSnippetsAsString_Wrapper_Statics::NewProp_availableColorSnippetsAndDataAssets_Key_KeyProp = { "availableColorSnippetsAndDataAssets_Key", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, 0, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FMapPropertyParams Z_Construct_UFunction_UVertexPaintFunctionLibrary_GetAllMeshColorSnippetsAsString_Wrapper_Statics::NewProp_availableColorSnippetsAndDataAssets = { "availableColorSnippetsAndDataAssets", nullptr, (EPropertyFlags)0x0014000000000180, UECodeGen_Private::EPropertyGenFlags::Map, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(VertexPaintFunctionLibrary_eventGetAllMeshColorSnippetsAsString_Wrapper_Parms, availableColorSnippetsAndDataAssets), EMapPropertyFlags::None, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UVertexPaintFunctionLibrary_GetAllMeshColorSnippetsAsString_Wrapper_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UVertexPaintFunctionLibrary_GetAllMeshColorSnippetsAsString_Wrapper_Statics::NewProp_meshComponent,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UVertexPaintFunctionLibrary_GetAllMeshColorSnippetsAsString_Wrapper_Statics::NewProp_availableColorSnippetsAndDataAssets_ValueProp,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UVertexPaintFunctionLibrary_GetAllMeshColorSnippetsAsString_Wrapper_Statics::NewProp_availableColorSnippetsAndDataAssets_Key_KeyProp,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UVertexPaintFunctionLibrary_GetAllMeshColorSnippetsAsString_Wrapper_Statics::NewProp_availableColorSnippetsAndDataAssets,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UVertexPaintFunctionLibrary_GetAllMeshColorSnippetsAsString_Wrapper_Statics::Function_MetaDataParams[] = {
		{ "BlueprintInternalUseOnly", "true" },
		{ "Category", "Runtime Vertex Color Paint and Detection Plugin" },
		{ "ModuleRelativePath", "Public/VertexPaintFunctionLibrary.h" },
		{ "ToolTip", "Gets all the color snippets on a stored mesh and the associated color snippet data asset they are stored on. Can be used if you for example want to get all available snippets of a zombie and randomize which to use when spawning or similar." },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UVertexPaintFunctionLibrary_GetAllMeshColorSnippetsAsString_Wrapper_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UVertexPaintFunctionLibrary, nullptr, "GetAllMeshColorSnippetsAsString_Wrapper", nullptr, nullptr, sizeof(Z_Construct_UFunction_UVertexPaintFunctionLibrary_GetAllMeshColorSnippetsAsString_Wrapper_Statics::VertexPaintFunctionLibrary_eventGetAllMeshColorSnippetsAsString_Wrapper_Parms), Z_Construct_UFunction_UVertexPaintFunctionLibrary_GetAllMeshColorSnippetsAsString_Wrapper_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UVertexPaintFunctionLibrary_GetAllMeshColorSnippetsAsString_Wrapper_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04422401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UVertexPaintFunctionLibrary_GetAllMeshColorSnippetsAsString_Wrapper_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UVertexPaintFunctionLibrary_GetAllMeshColorSnippetsAsString_Wrapper_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UVertexPaintFunctionLibrary_GetAllMeshColorSnippetsAsString_Wrapper()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UVertexPaintFunctionLibrary_GetAllMeshColorSnippetsAsString_Wrapper_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UVertexPaintFunctionLibrary_GetAllMeshColorSnippetsAsTags_Wrapper_Statics
	{
		struct VertexPaintFunctionLibrary_eventGetAllMeshColorSnippetsAsTags_Wrapper_Parms
		{
			UPrimitiveComponent* meshComponent;
			TMap<FGameplayTag,TSoftObjectPtr<UVertexPaintColorSnippetDataAsset> > availableColorSnippetTagsAndDataAssets;
		};
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_meshComponent_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPropertyParams NewProp_meshComponent;
		static const UECodeGen_Private::FSoftObjectPropertyParams NewProp_availableColorSnippetTagsAndDataAssets_ValueProp;
		static const UECodeGen_Private::FStructPropertyParams NewProp_availableColorSnippetTagsAndDataAssets_Key_KeyProp;
		static const UECodeGen_Private::FMapPropertyParams NewProp_availableColorSnippetTagsAndDataAssets;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UVertexPaintFunctionLibrary_GetAllMeshColorSnippetsAsTags_Wrapper_Statics::NewProp_meshComponent_MetaData[] = {
		{ "EditInline", "true" },
	};
#endif
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UVertexPaintFunctionLibrary_GetAllMeshColorSnippetsAsTags_Wrapper_Statics::NewProp_meshComponent = { "meshComponent", nullptr, (EPropertyFlags)0x0010000000080080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(VertexPaintFunctionLibrary_eventGetAllMeshColorSnippetsAsTags_Wrapper_Parms, meshComponent), Z_Construct_UClass_UPrimitiveComponent_NoRegister, METADATA_PARAMS(Z_Construct_UFunction_UVertexPaintFunctionLibrary_GetAllMeshColorSnippetsAsTags_Wrapper_Statics::NewProp_meshComponent_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UVertexPaintFunctionLibrary_GetAllMeshColorSnippetsAsTags_Wrapper_Statics::NewProp_meshComponent_MetaData)) };
	const UECodeGen_Private::FSoftObjectPropertyParams Z_Construct_UFunction_UVertexPaintFunctionLibrary_GetAllMeshColorSnippetsAsTags_Wrapper_Statics::NewProp_availableColorSnippetTagsAndDataAssets_ValueProp = { "availableColorSnippetTagsAndDataAssets", nullptr, (EPropertyFlags)0x0004000000000000, UECodeGen_Private::EPropertyGenFlags::SoftObject, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, 1, Z_Construct_UClass_UVertexPaintColorSnippetDataAsset_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UVertexPaintFunctionLibrary_GetAllMeshColorSnippetsAsTags_Wrapper_Statics::NewProp_availableColorSnippetTagsAndDataAssets_Key_KeyProp = { "availableColorSnippetTagsAndDataAssets_Key", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, 0, Z_Construct_UScriptStruct_FGameplayTag, METADATA_PARAMS(nullptr, 0) }; // 1225434376
	const UECodeGen_Private::FMapPropertyParams Z_Construct_UFunction_UVertexPaintFunctionLibrary_GetAllMeshColorSnippetsAsTags_Wrapper_Statics::NewProp_availableColorSnippetTagsAndDataAssets = { "availableColorSnippetTagsAndDataAssets", nullptr, (EPropertyFlags)0x0014000000000180, UECodeGen_Private::EPropertyGenFlags::Map, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(VertexPaintFunctionLibrary_eventGetAllMeshColorSnippetsAsTags_Wrapper_Parms, availableColorSnippetTagsAndDataAssets), EMapPropertyFlags::None, METADATA_PARAMS(nullptr, 0) }; // 1225434376
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UVertexPaintFunctionLibrary_GetAllMeshColorSnippetsAsTags_Wrapper_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UVertexPaintFunctionLibrary_GetAllMeshColorSnippetsAsTags_Wrapper_Statics::NewProp_meshComponent,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UVertexPaintFunctionLibrary_GetAllMeshColorSnippetsAsTags_Wrapper_Statics::NewProp_availableColorSnippetTagsAndDataAssets_ValueProp,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UVertexPaintFunctionLibrary_GetAllMeshColorSnippetsAsTags_Wrapper_Statics::NewProp_availableColorSnippetTagsAndDataAssets_Key_KeyProp,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UVertexPaintFunctionLibrary_GetAllMeshColorSnippetsAsTags_Wrapper_Statics::NewProp_availableColorSnippetTagsAndDataAssets,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UVertexPaintFunctionLibrary_GetAllMeshColorSnippetsAsTags_Wrapper_Statics::Function_MetaDataParams[] = {
		{ "BlueprintInternalUseOnly", "true" },
		{ "Category", "Runtime Vertex Color Paint and Detection Plugin" },
		{ "ModuleRelativePath", "Public/VertexPaintFunctionLibrary.h" },
		{ "ToolTip", "Gets all the color snippets tags on a stored mesh and the associated color snippet data asset they are stored on. Can be used if you for example want to get all available snippets of a zombie and randomize which to use when spawning so you can always spawn a unique one or similar." },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UVertexPaintFunctionLibrary_GetAllMeshColorSnippetsAsTags_Wrapper_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UVertexPaintFunctionLibrary, nullptr, "GetAllMeshColorSnippetsAsTags_Wrapper", nullptr, nullptr, sizeof(Z_Construct_UFunction_UVertexPaintFunctionLibrary_GetAllMeshColorSnippetsAsTags_Wrapper_Statics::VertexPaintFunctionLibrary_eventGetAllMeshColorSnippetsAsTags_Wrapper_Parms), Z_Construct_UFunction_UVertexPaintFunctionLibrary_GetAllMeshColorSnippetsAsTags_Wrapper_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UVertexPaintFunctionLibrary_GetAllMeshColorSnippetsAsTags_Wrapper_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04422401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UVertexPaintFunctionLibrary_GetAllMeshColorSnippetsAsTags_Wrapper_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UVertexPaintFunctionLibrary_GetAllMeshColorSnippetsAsTags_Wrapper_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UVertexPaintFunctionLibrary_GetAllMeshColorSnippetsAsTags_Wrapper()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UVertexPaintFunctionLibrary_GetAllMeshColorSnippetsAsTags_Wrapper_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UVertexPaintFunctionLibrary_GetAllMeshColorSnippetsTagsUnderTagCategory_Wrapper_Statics
	{
		struct VertexPaintFunctionLibrary_eventGetAllMeshColorSnippetsTagsUnderTagCategory_Wrapper_Parms
		{
			UPrimitiveComponent* meshComponent;
			FGameplayTag tagCategory;
			TMap<FGameplayTag,TSoftObjectPtr<UVertexPaintColorSnippetDataAsset> > availableColorSnippetTagsAndDataAssetsUnderTagCategory;
		};
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_meshComponent_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPropertyParams NewProp_meshComponent;
		static const UECodeGen_Private::FStructPropertyParams NewProp_tagCategory;
		static const UECodeGen_Private::FSoftObjectPropertyParams NewProp_availableColorSnippetTagsAndDataAssetsUnderTagCategory_ValueProp;
		static const UECodeGen_Private::FStructPropertyParams NewProp_availableColorSnippetTagsAndDataAssetsUnderTagCategory_Key_KeyProp;
		static const UECodeGen_Private::FMapPropertyParams NewProp_availableColorSnippetTagsAndDataAssetsUnderTagCategory;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UVertexPaintFunctionLibrary_GetAllMeshColorSnippetsTagsUnderTagCategory_Wrapper_Statics::NewProp_meshComponent_MetaData[] = {
		{ "EditInline", "true" },
	};
#endif
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UVertexPaintFunctionLibrary_GetAllMeshColorSnippetsTagsUnderTagCategory_Wrapper_Statics::NewProp_meshComponent = { "meshComponent", nullptr, (EPropertyFlags)0x0010000000080080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(VertexPaintFunctionLibrary_eventGetAllMeshColorSnippetsTagsUnderTagCategory_Wrapper_Parms, meshComponent), Z_Construct_UClass_UPrimitiveComponent_NoRegister, METADATA_PARAMS(Z_Construct_UFunction_UVertexPaintFunctionLibrary_GetAllMeshColorSnippetsTagsUnderTagCategory_Wrapper_Statics::NewProp_meshComponent_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UVertexPaintFunctionLibrary_GetAllMeshColorSnippetsTagsUnderTagCategory_Wrapper_Statics::NewProp_meshComponent_MetaData)) };
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UVertexPaintFunctionLibrary_GetAllMeshColorSnippetsTagsUnderTagCategory_Wrapper_Statics::NewProp_tagCategory = { "tagCategory", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(VertexPaintFunctionLibrary_eventGetAllMeshColorSnippetsTagsUnderTagCategory_Wrapper_Parms, tagCategory), Z_Construct_UScriptStruct_FGameplayTag, METADATA_PARAMS(nullptr, 0) }; // 1225434376
	const UECodeGen_Private::FSoftObjectPropertyParams Z_Construct_UFunction_UVertexPaintFunctionLibrary_GetAllMeshColorSnippetsTagsUnderTagCategory_Wrapper_Statics::NewProp_availableColorSnippetTagsAndDataAssetsUnderTagCategory_ValueProp = { "availableColorSnippetTagsAndDataAssetsUnderTagCategory", nullptr, (EPropertyFlags)0x0004000000000000, UECodeGen_Private::EPropertyGenFlags::SoftObject, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, 1, Z_Construct_UClass_UVertexPaintColorSnippetDataAsset_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UVertexPaintFunctionLibrary_GetAllMeshColorSnippetsTagsUnderTagCategory_Wrapper_Statics::NewProp_availableColorSnippetTagsAndDataAssetsUnderTagCategory_Key_KeyProp = { "availableColorSnippetTagsAndDataAssetsUnderTagCategory_Key", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, 0, Z_Construct_UScriptStruct_FGameplayTag, METADATA_PARAMS(nullptr, 0) }; // 1225434376
	const UECodeGen_Private::FMapPropertyParams Z_Construct_UFunction_UVertexPaintFunctionLibrary_GetAllMeshColorSnippetsTagsUnderTagCategory_Wrapper_Statics::NewProp_availableColorSnippetTagsAndDataAssetsUnderTagCategory = { "availableColorSnippetTagsAndDataAssetsUnderTagCategory", nullptr, (EPropertyFlags)0x0014000000000180, UECodeGen_Private::EPropertyGenFlags::Map, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(VertexPaintFunctionLibrary_eventGetAllMeshColorSnippetsTagsUnderTagCategory_Wrapper_Parms, availableColorSnippetTagsAndDataAssetsUnderTagCategory), EMapPropertyFlags::None, METADATA_PARAMS(nullptr, 0) }; // 1225434376
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UVertexPaintFunctionLibrary_GetAllMeshColorSnippetsTagsUnderTagCategory_Wrapper_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UVertexPaintFunctionLibrary_GetAllMeshColorSnippetsTagsUnderTagCategory_Wrapper_Statics::NewProp_meshComponent,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UVertexPaintFunctionLibrary_GetAllMeshColorSnippetsTagsUnderTagCategory_Wrapper_Statics::NewProp_tagCategory,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UVertexPaintFunctionLibrary_GetAllMeshColorSnippetsTagsUnderTagCategory_Wrapper_Statics::NewProp_availableColorSnippetTagsAndDataAssetsUnderTagCategory_ValueProp,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UVertexPaintFunctionLibrary_GetAllMeshColorSnippetsTagsUnderTagCategory_Wrapper_Statics::NewProp_availableColorSnippetTagsAndDataAssetsUnderTagCategory_Key_KeyProp,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UVertexPaintFunctionLibrary_GetAllMeshColorSnippetsTagsUnderTagCategory_Wrapper_Statics::NewProp_availableColorSnippetTagsAndDataAssetsUnderTagCategory,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UVertexPaintFunctionLibrary_GetAllMeshColorSnippetsTagsUnderTagCategory_Wrapper_Statics::Function_MetaDataParams[] = {
		{ "BlueprintInternalUseOnly", "true" },
		{ "Category", "Runtime Vertex Color Paint and Detection Plugin" },
		{ "ModuleRelativePath", "Public/VertexPaintFunctionLibrary.h" },
		{ "ToolTip", "Gets all the color snippets tags on a stored mesh Under a Tag Category, and the associated Color Snippet Data Asset they are stored on. Can be used if you for example want to get All Available Snippets of a Zombie for a Certain Area" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UVertexPaintFunctionLibrary_GetAllMeshColorSnippetsTagsUnderTagCategory_Wrapper_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UVertexPaintFunctionLibrary, nullptr, "GetAllMeshColorSnippetsTagsUnderTagCategory_Wrapper", nullptr, nullptr, sizeof(Z_Construct_UFunction_UVertexPaintFunctionLibrary_GetAllMeshColorSnippetsTagsUnderTagCategory_Wrapper_Statics::VertexPaintFunctionLibrary_eventGetAllMeshColorSnippetsTagsUnderTagCategory_Wrapper_Parms), Z_Construct_UFunction_UVertexPaintFunctionLibrary_GetAllMeshColorSnippetsTagsUnderTagCategory_Wrapper_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UVertexPaintFunctionLibrary_GetAllMeshColorSnippetsTagsUnderTagCategory_Wrapper_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04422401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UVertexPaintFunctionLibrary_GetAllMeshColorSnippetsTagsUnderTagCategory_Wrapper_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UVertexPaintFunctionLibrary_GetAllMeshColorSnippetsTagsUnderTagCategory_Wrapper_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UVertexPaintFunctionLibrary_GetAllMeshColorSnippetsTagsUnderTagCategory_Wrapper()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UVertexPaintFunctionLibrary_GetAllMeshColorSnippetsTagsUnderTagCategory_Wrapper_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UVertexPaintFunctionLibrary_GetAllPhysicsSurfaces_Statics
	{
		struct VertexPaintFunctionLibrary_eventGetAllPhysicsSurfaces_Parms
		{
			TArray<TEnumAsByte<EPhysicalSurface> > ReturnValue;
		};
		static const UECodeGen_Private::FBytePropertyParams NewProp_ReturnValue_Inner;
		static const UECodeGen_Private::FArrayPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FBytePropertyParams Z_Construct_UFunction_UVertexPaintFunctionLibrary_GetAllPhysicsSurfaces_Statics::NewProp_ReturnValue_Inner = { "ReturnValue", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, 0, Z_Construct_UEnum_PhysicsCore_EPhysicalSurface, METADATA_PARAMS(nullptr, 0) }; // 455643187
	const UECodeGen_Private::FArrayPropertyParams Z_Construct_UFunction_UVertexPaintFunctionLibrary_GetAllPhysicsSurfaces_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(VertexPaintFunctionLibrary_eventGetAllPhysicsSurfaces_Parms, ReturnValue), EArrayPropertyFlags::None, METADATA_PARAMS(nullptr, 0) }; // 455643187
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UVertexPaintFunctionLibrary_GetAllPhysicsSurfaces_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UVertexPaintFunctionLibrary_GetAllPhysicsSurfaces_Statics::NewProp_ReturnValue_Inner,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UVertexPaintFunctionLibrary_GetAllPhysicsSurfaces_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UVertexPaintFunctionLibrary_GetAllPhysicsSurfaces_Statics::Function_MetaDataParams[] = {
		{ "Category", "Runtime Vertex Color Paint and Detection Plugin" },
		{ "ModuleRelativePath", "Public/VertexPaintFunctionLibrary.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UVertexPaintFunctionLibrary_GetAllPhysicsSurfaces_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UVertexPaintFunctionLibrary, nullptr, "GetAllPhysicsSurfaces", nullptr, nullptr, sizeof(Z_Construct_UFunction_UVertexPaintFunctionLibrary_GetAllPhysicsSurfaces_Statics::VertexPaintFunctionLibrary_eventGetAllPhysicsSurfaces_Parms), Z_Construct_UFunction_UVertexPaintFunctionLibrary_GetAllPhysicsSurfaces_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UVertexPaintFunctionLibrary_GetAllPhysicsSurfaces_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x14022401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UVertexPaintFunctionLibrary_GetAllPhysicsSurfaces_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UVertexPaintFunctionLibrary_GetAllPhysicsSurfaces_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UVertexPaintFunctionLibrary_GetAllPhysicsSurfaces()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UVertexPaintFunctionLibrary_GetAllPhysicsSurfaces_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UVertexPaintFunctionLibrary_GetAllVertexColorChannelsPhysicsSurfaceIsRegisteredTo_Wrapper_Statics
	{
		struct VertexPaintFunctionLibrary_eventGetAllVertexColorChannelsPhysicsSurfaceIsRegisteredTo_Wrapper_Parms
		{
			UMaterialInterface* material;
			TEnumAsByte<EPhysicalSurface> physicsSurface;
			bool successfull;
			TArray<Enum_SurfaceAtChannel> ReturnValue;
		};
		static const UECodeGen_Private::FObjectPropertyParams NewProp_material;
		static const UECodeGen_Private::FBytePropertyParams NewProp_physicsSurface;
		static void NewProp_successfull_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_successfull;
		static const UECodeGen_Private::FBytePropertyParams NewProp_ReturnValue_Inner_Underlying;
		static const UECodeGen_Private::FEnumPropertyParams NewProp_ReturnValue_Inner;
		static const UECodeGen_Private::FArrayPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UVertexPaintFunctionLibrary_GetAllVertexColorChannelsPhysicsSurfaceIsRegisteredTo_Wrapper_Statics::NewProp_material = { "material", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(VertexPaintFunctionLibrary_eventGetAllVertexColorChannelsPhysicsSurfaceIsRegisteredTo_Wrapper_Parms, material), Z_Construct_UClass_UMaterialInterface_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FBytePropertyParams Z_Construct_UFunction_UVertexPaintFunctionLibrary_GetAllVertexColorChannelsPhysicsSurfaceIsRegisteredTo_Wrapper_Statics::NewProp_physicsSurface = { "physicsSurface", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(VertexPaintFunctionLibrary_eventGetAllVertexColorChannelsPhysicsSurfaceIsRegisteredTo_Wrapper_Parms, physicsSurface), Z_Construct_UEnum_PhysicsCore_EPhysicalSurface, METADATA_PARAMS(nullptr, 0) }; // 455643187
	void Z_Construct_UFunction_UVertexPaintFunctionLibrary_GetAllVertexColorChannelsPhysicsSurfaceIsRegisteredTo_Wrapper_Statics::NewProp_successfull_SetBit(void* Obj)
	{
		((VertexPaintFunctionLibrary_eventGetAllVertexColorChannelsPhysicsSurfaceIsRegisteredTo_Wrapper_Parms*)Obj)->successfull = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UVertexPaintFunctionLibrary_GetAllVertexColorChannelsPhysicsSurfaceIsRegisteredTo_Wrapper_Statics::NewProp_successfull = { "successfull", nullptr, (EPropertyFlags)0x0010000000000180, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(bool), sizeof(VertexPaintFunctionLibrary_eventGetAllVertexColorChannelsPhysicsSurfaceIsRegisteredTo_Wrapper_Parms), &Z_Construct_UFunction_UVertexPaintFunctionLibrary_GetAllVertexColorChannelsPhysicsSurfaceIsRegisteredTo_Wrapper_Statics::NewProp_successfull_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FBytePropertyParams Z_Construct_UFunction_UVertexPaintFunctionLibrary_GetAllVertexColorChannelsPhysicsSurfaceIsRegisteredTo_Wrapper_Statics::NewProp_ReturnValue_Inner_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, 0, nullptr, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FEnumPropertyParams Z_Construct_UFunction_UVertexPaintFunctionLibrary_GetAllVertexColorChannelsPhysicsSurfaceIsRegisteredTo_Wrapper_Statics::NewProp_ReturnValue_Inner = { "ReturnValue", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, 0, Z_Construct_UEnum_VertexPaintDetectionPlugin_Enum_SurfaceAtChannel, METADATA_PARAMS(nullptr, 0) }; // 670200329
	const UECodeGen_Private::FArrayPropertyParams Z_Construct_UFunction_UVertexPaintFunctionLibrary_GetAllVertexColorChannelsPhysicsSurfaceIsRegisteredTo_Wrapper_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(VertexPaintFunctionLibrary_eventGetAllVertexColorChannelsPhysicsSurfaceIsRegisteredTo_Wrapper_Parms, ReturnValue), EArrayPropertyFlags::None, METADATA_PARAMS(nullptr, 0) }; // 670200329
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UVertexPaintFunctionLibrary_GetAllVertexColorChannelsPhysicsSurfaceIsRegisteredTo_Wrapper_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UVertexPaintFunctionLibrary_GetAllVertexColorChannelsPhysicsSurfaceIsRegisteredTo_Wrapper_Statics::NewProp_material,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UVertexPaintFunctionLibrary_GetAllVertexColorChannelsPhysicsSurfaceIsRegisteredTo_Wrapper_Statics::NewProp_physicsSurface,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UVertexPaintFunctionLibrary_GetAllVertexColorChannelsPhysicsSurfaceIsRegisteredTo_Wrapper_Statics::NewProp_successfull,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UVertexPaintFunctionLibrary_GetAllVertexColorChannelsPhysicsSurfaceIsRegisteredTo_Wrapper_Statics::NewProp_ReturnValue_Inner_Underlying,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UVertexPaintFunctionLibrary_GetAllVertexColorChannelsPhysicsSurfaceIsRegisteredTo_Wrapper_Statics::NewProp_ReturnValue_Inner,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UVertexPaintFunctionLibrary_GetAllVertexColorChannelsPhysicsSurfaceIsRegisteredTo_Wrapper_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UVertexPaintFunctionLibrary_GetAllVertexColorChannelsPhysicsSurfaceIsRegisteredTo_Wrapper_Statics::Function_MetaDataParams[] = {
		{ "BlueprintInternalUseOnly", "true" },
		{ "Category", "Runtime Vertex Color Paint and Detection Plugin" },
		{ "ModuleRelativePath", "Public/VertexPaintFunctionLibrary.h" },
		{ "ToolTip", "Gets the Red, Green, Blue or Alpha Channel that the Physics Surface is registered to in the Editor Widget. Useful if you have a physics surface and you want to know what color channel that you should apply paint on just based on that. It can also return Default if it's set to that (i.e. what is on the material when nothing is on it), but if it can't get the info it will not be successfull." },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UVertexPaintFunctionLibrary_GetAllVertexColorChannelsPhysicsSurfaceIsRegisteredTo_Wrapper_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UVertexPaintFunctionLibrary, nullptr, "GetAllVertexColorChannelsPhysicsSurfaceIsRegisteredTo_Wrapper", nullptr, nullptr, sizeof(Z_Construct_UFunction_UVertexPaintFunctionLibrary_GetAllVertexColorChannelsPhysicsSurfaceIsRegisteredTo_Wrapper_Statics::VertexPaintFunctionLibrary_eventGetAllVertexColorChannelsPhysicsSurfaceIsRegisteredTo_Wrapper_Parms), Z_Construct_UFunction_UVertexPaintFunctionLibrary_GetAllVertexColorChannelsPhysicsSurfaceIsRegisteredTo_Wrapper_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UVertexPaintFunctionLibrary_GetAllVertexColorChannelsPhysicsSurfaceIsRegisteredTo_Wrapper_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04422401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UVertexPaintFunctionLibrary_GetAllVertexColorChannelsPhysicsSurfaceIsRegisteredTo_Wrapper_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UVertexPaintFunctionLibrary_GetAllVertexColorChannelsPhysicsSurfaceIsRegisteredTo_Wrapper_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UVertexPaintFunctionLibrary_GetAllVertexColorChannelsPhysicsSurfaceIsRegisteredTo_Wrapper()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UVertexPaintFunctionLibrary_GetAllVertexColorChannelsPhysicsSurfaceIsRegisteredTo_Wrapper_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UVertexPaintFunctionLibrary_GetAllVertexColorsOnly_Wrapper_Statics
	{
		struct VertexPaintFunctionLibrary_eventGetAllVertexColorsOnly_Wrapper_Parms
		{
			UVertexPaintDetectionComponent* runtimeVertexPaintAndDetectionComponent;
			UPrimitiveComponent* meshComponent;
			FVertexDetectGetColorsOnlyStruct getAllVertexColorsStruct;
			FVertexDetectAdditionalDataToPassThrough additionalDataToPassThrough;
		};
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_runtimeVertexPaintAndDetectionComponent_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPropertyParams NewProp_runtimeVertexPaintAndDetectionComponent;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_meshComponent_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPropertyParams NewProp_meshComponent;
		static const UECodeGen_Private::FStructPropertyParams NewProp_getAllVertexColorsStruct;
		static const UECodeGen_Private::FStructPropertyParams NewProp_additionalDataToPassThrough;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UVertexPaintFunctionLibrary_GetAllVertexColorsOnly_Wrapper_Statics::NewProp_runtimeVertexPaintAndDetectionComponent_MetaData[] = {
		{ "EditInline", "true" },
	};
#endif
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UVertexPaintFunctionLibrary_GetAllVertexColorsOnly_Wrapper_Statics::NewProp_runtimeVertexPaintAndDetectionComponent = { "runtimeVertexPaintAndDetectionComponent", nullptr, (EPropertyFlags)0x0010000000080080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(VertexPaintFunctionLibrary_eventGetAllVertexColorsOnly_Wrapper_Parms, runtimeVertexPaintAndDetectionComponent), Z_Construct_UClass_UVertexPaintDetectionComponent_NoRegister, METADATA_PARAMS(Z_Construct_UFunction_UVertexPaintFunctionLibrary_GetAllVertexColorsOnly_Wrapper_Statics::NewProp_runtimeVertexPaintAndDetectionComponent_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UVertexPaintFunctionLibrary_GetAllVertexColorsOnly_Wrapper_Statics::NewProp_runtimeVertexPaintAndDetectionComponent_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UVertexPaintFunctionLibrary_GetAllVertexColorsOnly_Wrapper_Statics::NewProp_meshComponent_MetaData[] = {
		{ "EditInline", "true" },
	};
#endif
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UVertexPaintFunctionLibrary_GetAllVertexColorsOnly_Wrapper_Statics::NewProp_meshComponent = { "meshComponent", nullptr, (EPropertyFlags)0x0010000000080080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(VertexPaintFunctionLibrary_eventGetAllVertexColorsOnly_Wrapper_Parms, meshComponent), Z_Construct_UClass_UPrimitiveComponent_NoRegister, METADATA_PARAMS(Z_Construct_UFunction_UVertexPaintFunctionLibrary_GetAllVertexColorsOnly_Wrapper_Statics::NewProp_meshComponent_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UVertexPaintFunctionLibrary_GetAllVertexColorsOnly_Wrapper_Statics::NewProp_meshComponent_MetaData)) };
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UVertexPaintFunctionLibrary_GetAllVertexColorsOnly_Wrapper_Statics::NewProp_getAllVertexColorsStruct = { "getAllVertexColorsStruct", nullptr, (EPropertyFlags)0x0010008000000080, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(VertexPaintFunctionLibrary_eventGetAllVertexColorsOnly_Wrapper_Parms, getAllVertexColorsStruct), Z_Construct_UScriptStruct_FVertexDetectGetColorsOnlyStruct, METADATA_PARAMS(nullptr, 0) }; // 2249728958
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UVertexPaintFunctionLibrary_GetAllVertexColorsOnly_Wrapper_Statics::NewProp_additionalDataToPassThrough = { "additionalDataToPassThrough", nullptr, (EPropertyFlags)0x0010008000000080, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(VertexPaintFunctionLibrary_eventGetAllVertexColorsOnly_Wrapper_Parms, additionalDataToPassThrough), Z_Construct_UScriptStruct_FVertexDetectAdditionalDataToPassThrough, METADATA_PARAMS(nullptr, 0) }; // 2814627034
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UVertexPaintFunctionLibrary_GetAllVertexColorsOnly_Wrapper_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UVertexPaintFunctionLibrary_GetAllVertexColorsOnly_Wrapper_Statics::NewProp_runtimeVertexPaintAndDetectionComponent,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UVertexPaintFunctionLibrary_GetAllVertexColorsOnly_Wrapper_Statics::NewProp_meshComponent,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UVertexPaintFunctionLibrary_GetAllVertexColorsOnly_Wrapper_Statics::NewProp_getAllVertexColorsStruct,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UVertexPaintFunctionLibrary_GetAllVertexColorsOnly_Wrapper_Statics::NewProp_additionalDataToPassThrough,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UVertexPaintFunctionLibrary_GetAllVertexColorsOnly_Wrapper_Statics::Function_MetaDataParams[] = {
		{ "BlueprintInternalUseOnly", "true" },
		{ "Category", "Runtime Vertex Color Paint and Detection Plugin|Detect" },
		{ "ModuleRelativePath", "Public/VertexPaintFunctionLibrary.h" },
		{ "ToolTip", "Get All Vertex Colors Only on Static, Skeletal or Spline Meshes. This is faster than GetClosestVertexDataOnMesh since it doesn't require the task to loop through the vertices, but only gets the total colors. If you change the callback settings to return the positions and/or normal, the bones and the colors (if skeletal mesh comp), or get amount of color for each channel, then it will also loop through the vertices in order to get those, but will make the task take just as long as GetClosestVertexDataOnMesh." },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UVertexPaintFunctionLibrary_GetAllVertexColorsOnly_Wrapper_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UVertexPaintFunctionLibrary, nullptr, "GetAllVertexColorsOnly_Wrapper", nullptr, nullptr, sizeof(Z_Construct_UFunction_UVertexPaintFunctionLibrary_GetAllVertexColorsOnly_Wrapper_Statics::VertexPaintFunctionLibrary_eventGetAllVertexColorsOnly_Wrapper_Parms), Z_Construct_UFunction_UVertexPaintFunctionLibrary_GetAllVertexColorsOnly_Wrapper_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UVertexPaintFunctionLibrary_GetAllVertexColorsOnly_Wrapper_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04022401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UVertexPaintFunctionLibrary_GetAllVertexColorsOnly_Wrapper_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UVertexPaintFunctionLibrary_GetAllVertexColorsOnly_Wrapper_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UVertexPaintFunctionLibrary_GetAllVertexColorsOnly_Wrapper()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UVertexPaintFunctionLibrary_GetAllVertexColorsOnly_Wrapper_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UVertexPaintFunctionLibrary_GetAmountOfLODsToPaintOn_Statics
	{
		struct VertexPaintFunctionLibrary_eventGetAmountOfLODsToPaintOn_Parms
		{
			UPrimitiveComponent* meshComp;
			bool overrideLODToPaintUpOn;
			int32 overrideUpToLOD;
			int32 ReturnValue;
		};
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_meshComp_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPropertyParams NewProp_meshComp;
		static void NewProp_overrideLODToPaintUpOn_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_overrideLODToPaintUpOn;
		static const UECodeGen_Private::FUnsizedIntPropertyParams NewProp_overrideUpToLOD;
		static const UECodeGen_Private::FUnsizedIntPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UVertexPaintFunctionLibrary_GetAmountOfLODsToPaintOn_Statics::NewProp_meshComp_MetaData[] = {
		{ "EditInline", "true" },
	};
#endif
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UVertexPaintFunctionLibrary_GetAmountOfLODsToPaintOn_Statics::NewProp_meshComp = { "meshComp", nullptr, (EPropertyFlags)0x0010000000080080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(VertexPaintFunctionLibrary_eventGetAmountOfLODsToPaintOn_Parms, meshComp), Z_Construct_UClass_UPrimitiveComponent_NoRegister, METADATA_PARAMS(Z_Construct_UFunction_UVertexPaintFunctionLibrary_GetAmountOfLODsToPaintOn_Statics::NewProp_meshComp_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UVertexPaintFunctionLibrary_GetAmountOfLODsToPaintOn_Statics::NewProp_meshComp_MetaData)) };
	void Z_Construct_UFunction_UVertexPaintFunctionLibrary_GetAmountOfLODsToPaintOn_Statics::NewProp_overrideLODToPaintUpOn_SetBit(void* Obj)
	{
		((VertexPaintFunctionLibrary_eventGetAmountOfLODsToPaintOn_Parms*)Obj)->overrideLODToPaintUpOn = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UVertexPaintFunctionLibrary_GetAmountOfLODsToPaintOn_Statics::NewProp_overrideLODToPaintUpOn = { "overrideLODToPaintUpOn", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(bool), sizeof(VertexPaintFunctionLibrary_eventGetAmountOfLODsToPaintOn_Parms), &Z_Construct_UFunction_UVertexPaintFunctionLibrary_GetAmountOfLODsToPaintOn_Statics::NewProp_overrideLODToPaintUpOn_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FUnsizedIntPropertyParams Z_Construct_UFunction_UVertexPaintFunctionLibrary_GetAmountOfLODsToPaintOn_Statics::NewProp_overrideUpToLOD = { "overrideUpToLOD", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(VertexPaintFunctionLibrary_eventGetAmountOfLODsToPaintOn_Parms, overrideUpToLOD), METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FUnsizedIntPropertyParams Z_Construct_UFunction_UVertexPaintFunctionLibrary_GetAmountOfLODsToPaintOn_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(VertexPaintFunctionLibrary_eventGetAmountOfLODsToPaintOn_Parms, ReturnValue), METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UVertexPaintFunctionLibrary_GetAmountOfLODsToPaintOn_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UVertexPaintFunctionLibrary_GetAmountOfLODsToPaintOn_Statics::NewProp_meshComp,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UVertexPaintFunctionLibrary_GetAmountOfLODsToPaintOn_Statics::NewProp_overrideLODToPaintUpOn,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UVertexPaintFunctionLibrary_GetAmountOfLODsToPaintOn_Statics::NewProp_overrideUpToLOD,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UVertexPaintFunctionLibrary_GetAmountOfLODsToPaintOn_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UVertexPaintFunctionLibrary_GetAmountOfLODsToPaintOn_Statics::Function_MetaDataParams[] = {
		{ "Category", "Runtime Vertex Color Paint and Detection Plugin" },
		{ "ModuleRelativePath", "Public/VertexPaintFunctionLibrary.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UVertexPaintFunctionLibrary_GetAmountOfLODsToPaintOn_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UVertexPaintFunctionLibrary, nullptr, "GetAmountOfLODsToPaintOn", nullptr, nullptr, sizeof(Z_Construct_UFunction_UVertexPaintFunctionLibrary_GetAmountOfLODsToPaintOn_Statics::VertexPaintFunctionLibrary_eventGetAmountOfLODsToPaintOn_Parms), Z_Construct_UFunction_UVertexPaintFunctionLibrary_GetAmountOfLODsToPaintOn_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UVertexPaintFunctionLibrary_GetAmountOfLODsToPaintOn_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04022401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UVertexPaintFunctionLibrary_GetAmountOfLODsToPaintOn_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UVertexPaintFunctionLibrary_GetAmountOfLODsToPaintOn_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UVertexPaintFunctionLibrary_GetAmountOfLODsToPaintOn()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UVertexPaintFunctionLibrary_GetAmountOfLODsToPaintOn_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UVertexPaintFunctionLibrary_GetAmountOfPaintedColorsForEachChannel_Statics
	{
		struct VertexPaintFunctionLibrary_eventGetAmountOfPaintedColorsForEachChannel_Parms
		{
			TArray<FColor> vertexColors;
			float minColorAmountToBeConsidered;
			FVertexDetectAmountOfPaintedColorsOfEachChannel ReturnValue;
		};
		static const UECodeGen_Private::FStructPropertyParams NewProp_vertexColors_Inner;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_vertexColors_MetaData[];
#endif
		static const UECodeGen_Private::FArrayPropertyParams NewProp_vertexColors;
		static const UECodeGen_Private::FFloatPropertyParams NewProp_minColorAmountToBeConsidered;
		static const UECodeGen_Private::FStructPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UVertexPaintFunctionLibrary_GetAmountOfPaintedColorsForEachChannel_Statics::NewProp_vertexColors_Inner = { "vertexColors", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, 0, Z_Construct_UScriptStruct_FColor, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UVertexPaintFunctionLibrary_GetAmountOfPaintedColorsForEachChannel_Statics::NewProp_vertexColors_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UECodeGen_Private::FArrayPropertyParams Z_Construct_UFunction_UVertexPaintFunctionLibrary_GetAmountOfPaintedColorsForEachChannel_Statics::NewProp_vertexColors = { "vertexColors", nullptr, (EPropertyFlags)0x0010000008000182, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(VertexPaintFunctionLibrary_eventGetAmountOfPaintedColorsForEachChannel_Parms, vertexColors), EArrayPropertyFlags::None, METADATA_PARAMS(Z_Construct_UFunction_UVertexPaintFunctionLibrary_GetAmountOfPaintedColorsForEachChannel_Statics::NewProp_vertexColors_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UVertexPaintFunctionLibrary_GetAmountOfPaintedColorsForEachChannel_Statics::NewProp_vertexColors_MetaData)) };
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_UVertexPaintFunctionLibrary_GetAmountOfPaintedColorsForEachChannel_Statics::NewProp_minColorAmountToBeConsidered = { "minColorAmountToBeConsidered", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(VertexPaintFunctionLibrary_eventGetAmountOfPaintedColorsForEachChannel_Parms, minColorAmountToBeConsidered), METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UVertexPaintFunctionLibrary_GetAmountOfPaintedColorsForEachChannel_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(VertexPaintFunctionLibrary_eventGetAmountOfPaintedColorsForEachChannel_Parms, ReturnValue), Z_Construct_UScriptStruct_FVertexDetectAmountOfPaintedColorsOfEachChannel, METADATA_PARAMS(nullptr, 0) }; // 1724626882
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UVertexPaintFunctionLibrary_GetAmountOfPaintedColorsForEachChannel_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UVertexPaintFunctionLibrary_GetAmountOfPaintedColorsForEachChannel_Statics::NewProp_vertexColors_Inner,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UVertexPaintFunctionLibrary_GetAmountOfPaintedColorsForEachChannel_Statics::NewProp_vertexColors,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UVertexPaintFunctionLibrary_GetAmountOfPaintedColorsForEachChannel_Statics::NewProp_minColorAmountToBeConsidered,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UVertexPaintFunctionLibrary_GetAmountOfPaintedColorsForEachChannel_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UVertexPaintFunctionLibrary_GetAmountOfPaintedColorsForEachChannel_Statics::Function_MetaDataParams[] = {
		{ "Category", "Runtime Vertex Color Paint and Detection Plugin" },
		{ "CPP_Default_minColorAmountToBeConsidered", "0.010000" },
		{ "DisplayName", "Get Amount of Painted Colors for Each Channel" },
		{ "ModuleRelativePath", "Public/VertexPaintFunctionLibrary.h" },
		{ "ToolTip", "Gets the Amount of vertices with colors above the min amount, gets them in Percent from 0-100, as well as the average color value of the ones above the minimum. Useful if you want to check that you've painted the majority of something. \nNOTE You can get this by running a Paint or Detect Job as well, which is more performant as well since they can run on async thread!" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UVertexPaintFunctionLibrary_GetAmountOfPaintedColorsForEachChannel_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UVertexPaintFunctionLibrary, nullptr, "GetAmountOfPaintedColorsForEachChannel", nullptr, nullptr, sizeof(Z_Construct_UFunction_UVertexPaintFunctionLibrary_GetAmountOfPaintedColorsForEachChannel_Statics::VertexPaintFunctionLibrary_eventGetAmountOfPaintedColorsForEachChannel_Parms), Z_Construct_UFunction_UVertexPaintFunctionLibrary_GetAmountOfPaintedColorsForEachChannel_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UVertexPaintFunctionLibrary_GetAmountOfPaintedColorsForEachChannel_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04422401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UVertexPaintFunctionLibrary_GetAmountOfPaintedColorsForEachChannel_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UVertexPaintFunctionLibrary_GetAmountOfPaintedColorsForEachChannel_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UVertexPaintFunctionLibrary_GetAmountOfPaintedColorsForEachChannel()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UVertexPaintFunctionLibrary_GetAmountOfPaintedColorsForEachChannel_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UVertexPaintFunctionLibrary_GetAmountOfTasksStartedByComponent_Statics
	{
		struct VertexPaintFunctionLibrary_eventGetAmountOfTasksStartedByComponent_Parms
		{
			UVertexPaintDetectionComponent* paintComponent;
			int32 ReturnValue;
		};
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_paintComponent_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPropertyParams NewProp_paintComponent;
		static const UECodeGen_Private::FUnsizedIntPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UVertexPaintFunctionLibrary_GetAmountOfTasksStartedByComponent_Statics::NewProp_paintComponent_MetaData[] = {
		{ "EditInline", "true" },
	};
#endif
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UVertexPaintFunctionLibrary_GetAmountOfTasksStartedByComponent_Statics::NewProp_paintComponent = { "paintComponent", nullptr, (EPropertyFlags)0x0010000000080080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(VertexPaintFunctionLibrary_eventGetAmountOfTasksStartedByComponent_Parms, paintComponent), Z_Construct_UClass_UVertexPaintDetectionComponent_NoRegister, METADATA_PARAMS(Z_Construct_UFunction_UVertexPaintFunctionLibrary_GetAmountOfTasksStartedByComponent_Statics::NewProp_paintComponent_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UVertexPaintFunctionLibrary_GetAmountOfTasksStartedByComponent_Statics::NewProp_paintComponent_MetaData)) };
	const UECodeGen_Private::FUnsizedIntPropertyParams Z_Construct_UFunction_UVertexPaintFunctionLibrary_GetAmountOfTasksStartedByComponent_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(VertexPaintFunctionLibrary_eventGetAmountOfTasksStartedByComponent_Parms, ReturnValue), METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UVertexPaintFunctionLibrary_GetAmountOfTasksStartedByComponent_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UVertexPaintFunctionLibrary_GetAmountOfTasksStartedByComponent_Statics::NewProp_paintComponent,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UVertexPaintFunctionLibrary_GetAmountOfTasksStartedByComponent_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UVertexPaintFunctionLibrary_GetAmountOfTasksStartedByComponent_Statics::Function_MetaDataParams[] = {
		{ "BlueprintInternalUseOnly", "true" },
		{ "Category", "Runtime Vertex Color Paint and Detection Plugin" },
		{ "ModuleRelativePath", "Public/VertexPaintFunctionLibrary.h" },
		{ "ToolTip", "Gets the Amount of tasks that this component started." },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UVertexPaintFunctionLibrary_GetAmountOfTasksStartedByComponent_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UVertexPaintFunctionLibrary, nullptr, "GetAmountOfTasksStartedByComponent", nullptr, nullptr, sizeof(Z_Construct_UFunction_UVertexPaintFunctionLibrary_GetAmountOfTasksStartedByComponent_Statics::VertexPaintFunctionLibrary_eventGetAmountOfTasksStartedByComponent_Parms), Z_Construct_UFunction_UVertexPaintFunctionLibrary_GetAmountOfTasksStartedByComponent_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UVertexPaintFunctionLibrary_GetAmountOfTasksStartedByComponent_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04022401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UVertexPaintFunctionLibrary_GetAmountOfTasksStartedByComponent_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UVertexPaintFunctionLibrary_GetAmountOfTasksStartedByComponent_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UVertexPaintFunctionLibrary_GetAmountOfTasksStartedByComponent()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UVertexPaintFunctionLibrary_GetAmountOfTasksStartedByComponent_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UVertexPaintFunctionLibrary_GetCalculateColorsDetectionTasksAmount_Wrapper_Statics
	{
		struct VertexPaintFunctionLibrary_eventGetCalculateColorsDetectionTasksAmount_Wrapper_Parms
		{
			const UObject* WorldContextObject;
			TMap<UPrimitiveComponent*,int32> ReturnValue;
		};
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_WorldContextObject_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPropertyParams NewProp_WorldContextObject;
		static const UECodeGen_Private::FUnsizedIntPropertyParams NewProp_ReturnValue_ValueProp;
		static const UECodeGen_Private::FObjectPropertyParams NewProp_ReturnValue_Key_KeyProp;
		static const UECodeGen_Private::FMapPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UVertexPaintFunctionLibrary_GetCalculateColorsDetectionTasksAmount_Wrapper_Statics::NewProp_WorldContextObject_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UVertexPaintFunctionLibrary_GetCalculateColorsDetectionTasksAmount_Wrapper_Statics::NewProp_WorldContextObject = { "WorldContextObject", nullptr, (EPropertyFlags)0x0010000000000082, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(VertexPaintFunctionLibrary_eventGetCalculateColorsDetectionTasksAmount_Wrapper_Parms, WorldContextObject), Z_Construct_UClass_UObject_NoRegister, METADATA_PARAMS(Z_Construct_UFunction_UVertexPaintFunctionLibrary_GetCalculateColorsDetectionTasksAmount_Wrapper_Statics::NewProp_WorldContextObject_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UVertexPaintFunctionLibrary_GetCalculateColorsDetectionTasksAmount_Wrapper_Statics::NewProp_WorldContextObject_MetaData)) };
	const UECodeGen_Private::FUnsizedIntPropertyParams Z_Construct_UFunction_UVertexPaintFunctionLibrary_GetCalculateColorsDetectionTasksAmount_Wrapper_Statics::NewProp_ReturnValue_ValueProp = { "ReturnValue", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, 1, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UVertexPaintFunctionLibrary_GetCalculateColorsDetectionTasksAmount_Wrapper_Statics::NewProp_ReturnValue_Key_KeyProp = { "ReturnValue_Key", nullptr, (EPropertyFlags)0x0000000000080000, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, 0, Z_Construct_UClass_UPrimitiveComponent_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FMapPropertyParams Z_Construct_UFunction_UVertexPaintFunctionLibrary_GetCalculateColorsDetectionTasksAmount_Wrapper_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010008000000580, UECodeGen_Private::EPropertyGenFlags::Map, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(VertexPaintFunctionLibrary_eventGetCalculateColorsDetectionTasksAmount_Wrapper_Parms, ReturnValue), EMapPropertyFlags::None, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UVertexPaintFunctionLibrary_GetCalculateColorsDetectionTasksAmount_Wrapper_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UVertexPaintFunctionLibrary_GetCalculateColorsDetectionTasksAmount_Wrapper_Statics::NewProp_WorldContextObject,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UVertexPaintFunctionLibrary_GetCalculateColorsDetectionTasksAmount_Wrapper_Statics::NewProp_ReturnValue_ValueProp,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UVertexPaintFunctionLibrary_GetCalculateColorsDetectionTasksAmount_Wrapper_Statics::NewProp_ReturnValue_Key_KeyProp,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UVertexPaintFunctionLibrary_GetCalculateColorsDetectionTasksAmount_Wrapper_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UVertexPaintFunctionLibrary_GetCalculateColorsDetectionTasksAmount_Wrapper_Statics::Function_MetaDataParams[] = {
		{ "BlueprintInternalUseOnly", "true" },
		{ "Category", "Runtime Vertex Color Paint and Detection Plugin" },
		{ "ModuleRelativePath", "Public/VertexPaintFunctionLibrary.h" },
		{ "ToolTip", "Gets the Amount of Calculate Colors Detection Tasks for Mesh Components in the Queue. Mainly useful to present it on widgets etc." },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UVertexPaintFunctionLibrary_GetCalculateColorsDetectionTasksAmount_Wrapper_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UVertexPaintFunctionLibrary, nullptr, "GetCalculateColorsDetectionTasksAmount_Wrapper", nullptr, nullptr, sizeof(Z_Construct_UFunction_UVertexPaintFunctionLibrary_GetCalculateColorsDetectionTasksAmount_Wrapper_Statics::VertexPaintFunctionLibrary_eventGetCalculateColorsDetectionTasksAmount_Wrapper_Parms), Z_Construct_UFunction_UVertexPaintFunctionLibrary_GetCalculateColorsDetectionTasksAmount_Wrapper_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UVertexPaintFunctionLibrary_GetCalculateColorsDetectionTasksAmount_Wrapper_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04022401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UVertexPaintFunctionLibrary_GetCalculateColorsDetectionTasksAmount_Wrapper_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UVertexPaintFunctionLibrary_GetCalculateColorsDetectionTasksAmount_Wrapper_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UVertexPaintFunctionLibrary_GetCalculateColorsDetectionTasksAmount_Wrapper()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UVertexPaintFunctionLibrary_GetCalculateColorsDetectionTasksAmount_Wrapper_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UVertexPaintFunctionLibrary_GetCalculateColorsPaintTasksAmount_Wrapper_Statics
	{
		struct VertexPaintFunctionLibrary_eventGetCalculateColorsPaintTasksAmount_Wrapper_Parms
		{
			const UObject* WorldContextObject;
			TMap<UPrimitiveComponent*,int32> ReturnValue;
		};
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_WorldContextObject_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPropertyParams NewProp_WorldContextObject;
		static const UECodeGen_Private::FUnsizedIntPropertyParams NewProp_ReturnValue_ValueProp;
		static const UECodeGen_Private::FObjectPropertyParams NewProp_ReturnValue_Key_KeyProp;
		static const UECodeGen_Private::FMapPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UVertexPaintFunctionLibrary_GetCalculateColorsPaintTasksAmount_Wrapper_Statics::NewProp_WorldContextObject_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UVertexPaintFunctionLibrary_GetCalculateColorsPaintTasksAmount_Wrapper_Statics::NewProp_WorldContextObject = { "WorldContextObject", nullptr, (EPropertyFlags)0x0010000000000082, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(VertexPaintFunctionLibrary_eventGetCalculateColorsPaintTasksAmount_Wrapper_Parms, WorldContextObject), Z_Construct_UClass_UObject_NoRegister, METADATA_PARAMS(Z_Construct_UFunction_UVertexPaintFunctionLibrary_GetCalculateColorsPaintTasksAmount_Wrapper_Statics::NewProp_WorldContextObject_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UVertexPaintFunctionLibrary_GetCalculateColorsPaintTasksAmount_Wrapper_Statics::NewProp_WorldContextObject_MetaData)) };
	const UECodeGen_Private::FUnsizedIntPropertyParams Z_Construct_UFunction_UVertexPaintFunctionLibrary_GetCalculateColorsPaintTasksAmount_Wrapper_Statics::NewProp_ReturnValue_ValueProp = { "ReturnValue", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, 1, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UVertexPaintFunctionLibrary_GetCalculateColorsPaintTasksAmount_Wrapper_Statics::NewProp_ReturnValue_Key_KeyProp = { "ReturnValue_Key", nullptr, (EPropertyFlags)0x0000000000080000, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, 0, Z_Construct_UClass_UPrimitiveComponent_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FMapPropertyParams Z_Construct_UFunction_UVertexPaintFunctionLibrary_GetCalculateColorsPaintTasksAmount_Wrapper_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010008000000580, UECodeGen_Private::EPropertyGenFlags::Map, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(VertexPaintFunctionLibrary_eventGetCalculateColorsPaintTasksAmount_Wrapper_Parms, ReturnValue), EMapPropertyFlags::None, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UVertexPaintFunctionLibrary_GetCalculateColorsPaintTasksAmount_Wrapper_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UVertexPaintFunctionLibrary_GetCalculateColorsPaintTasksAmount_Wrapper_Statics::NewProp_WorldContextObject,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UVertexPaintFunctionLibrary_GetCalculateColorsPaintTasksAmount_Wrapper_Statics::NewProp_ReturnValue_ValueProp,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UVertexPaintFunctionLibrary_GetCalculateColorsPaintTasksAmount_Wrapper_Statics::NewProp_ReturnValue_Key_KeyProp,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UVertexPaintFunctionLibrary_GetCalculateColorsPaintTasksAmount_Wrapper_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UVertexPaintFunctionLibrary_GetCalculateColorsPaintTasksAmount_Wrapper_Statics::Function_MetaDataParams[] = {
		{ "BlueprintInternalUseOnly", "true" },
		{ "Category", "Runtime Vertex Color Paint and Detection Plugin" },
		{ "ModuleRelativePath", "Public/VertexPaintFunctionLibrary.h" },
		{ "ToolTip", "Gets the Amount of Calculate Colors Paint Tasks for Mesh Components in the Queue. Mainly useful to present it on widgets etc." },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UVertexPaintFunctionLibrary_GetCalculateColorsPaintTasksAmount_Wrapper_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UVertexPaintFunctionLibrary, nullptr, "GetCalculateColorsPaintTasksAmount_Wrapper", nullptr, nullptr, sizeof(Z_Construct_UFunction_UVertexPaintFunctionLibrary_GetCalculateColorsPaintTasksAmount_Wrapper_Statics::VertexPaintFunctionLibrary_eventGetCalculateColorsPaintTasksAmount_Wrapper_Parms), Z_Construct_UFunction_UVertexPaintFunctionLibrary_GetCalculateColorsPaintTasksAmount_Wrapper_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UVertexPaintFunctionLibrary_GetCalculateColorsPaintTasksAmount_Wrapper_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04022401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UVertexPaintFunctionLibrary_GetCalculateColorsPaintTasksAmount_Wrapper_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UVertexPaintFunctionLibrary_GetCalculateColorsPaintTasksAmount_Wrapper_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UVertexPaintFunctionLibrary_GetCalculateColorsPaintTasksAmount_Wrapper()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UVertexPaintFunctionLibrary_GetCalculateColorsPaintTasksAmount_Wrapper_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UVertexPaintFunctionLibrary_GetClosestVertexDataOnMesh_Wrapper_Statics
	{
		struct VertexPaintFunctionLibrary_eventGetClosestVertexDataOnMesh_Wrapper_Parms
		{
			UVertexPaintDetectionComponent* runtimeVertexPaintAndDetectionComponent;
			UPrimitiveComponent* meshComponent;
			FVertexDetectInfoStruct getClosestVertexDataStruct;
			FVertexDetectAdditionalDataToPassThrough additionalDataToPassThrough;
		};
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_runtimeVertexPaintAndDetectionComponent_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPropertyParams NewProp_runtimeVertexPaintAndDetectionComponent;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_meshComponent_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPropertyParams NewProp_meshComponent;
		static const UECodeGen_Private::FStructPropertyParams NewProp_getClosestVertexDataStruct;
		static const UECodeGen_Private::FStructPropertyParams NewProp_additionalDataToPassThrough;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UVertexPaintFunctionLibrary_GetClosestVertexDataOnMesh_Wrapper_Statics::NewProp_runtimeVertexPaintAndDetectionComponent_MetaData[] = {
		{ "EditInline", "true" },
	};
#endif
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UVertexPaintFunctionLibrary_GetClosestVertexDataOnMesh_Wrapper_Statics::NewProp_runtimeVertexPaintAndDetectionComponent = { "runtimeVertexPaintAndDetectionComponent", nullptr, (EPropertyFlags)0x0010000000080080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(VertexPaintFunctionLibrary_eventGetClosestVertexDataOnMesh_Wrapper_Parms, runtimeVertexPaintAndDetectionComponent), Z_Construct_UClass_UVertexPaintDetectionComponent_NoRegister, METADATA_PARAMS(Z_Construct_UFunction_UVertexPaintFunctionLibrary_GetClosestVertexDataOnMesh_Wrapper_Statics::NewProp_runtimeVertexPaintAndDetectionComponent_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UVertexPaintFunctionLibrary_GetClosestVertexDataOnMesh_Wrapper_Statics::NewProp_runtimeVertexPaintAndDetectionComponent_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UVertexPaintFunctionLibrary_GetClosestVertexDataOnMesh_Wrapper_Statics::NewProp_meshComponent_MetaData[] = {
		{ "EditInline", "true" },
	};
#endif
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UVertexPaintFunctionLibrary_GetClosestVertexDataOnMesh_Wrapper_Statics::NewProp_meshComponent = { "meshComponent", nullptr, (EPropertyFlags)0x0010000000080080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(VertexPaintFunctionLibrary_eventGetClosestVertexDataOnMesh_Wrapper_Parms, meshComponent), Z_Construct_UClass_UPrimitiveComponent_NoRegister, METADATA_PARAMS(Z_Construct_UFunction_UVertexPaintFunctionLibrary_GetClosestVertexDataOnMesh_Wrapper_Statics::NewProp_meshComponent_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UVertexPaintFunctionLibrary_GetClosestVertexDataOnMesh_Wrapper_Statics::NewProp_meshComponent_MetaData)) };
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UVertexPaintFunctionLibrary_GetClosestVertexDataOnMesh_Wrapper_Statics::NewProp_getClosestVertexDataStruct = { "getClosestVertexDataStruct", nullptr, (EPropertyFlags)0x0010008000000080, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(VertexPaintFunctionLibrary_eventGetClosestVertexDataOnMesh_Wrapper_Parms, getClosestVertexDataStruct), Z_Construct_UScriptStruct_FVertexDetectInfoStruct, METADATA_PARAMS(nullptr, 0) }; // 3860109383
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UVertexPaintFunctionLibrary_GetClosestVertexDataOnMesh_Wrapper_Statics::NewProp_additionalDataToPassThrough = { "additionalDataToPassThrough", nullptr, (EPropertyFlags)0x0010008000000080, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(VertexPaintFunctionLibrary_eventGetClosestVertexDataOnMesh_Wrapper_Parms, additionalDataToPassThrough), Z_Construct_UScriptStruct_FVertexDetectAdditionalDataToPassThrough, METADATA_PARAMS(nullptr, 0) }; // 2814627034
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UVertexPaintFunctionLibrary_GetClosestVertexDataOnMesh_Wrapper_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UVertexPaintFunctionLibrary_GetClosestVertexDataOnMesh_Wrapper_Statics::NewProp_runtimeVertexPaintAndDetectionComponent,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UVertexPaintFunctionLibrary_GetClosestVertexDataOnMesh_Wrapper_Statics::NewProp_meshComponent,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UVertexPaintFunctionLibrary_GetClosestVertexDataOnMesh_Wrapper_Statics::NewProp_getClosestVertexDataStruct,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UVertexPaintFunctionLibrary_GetClosestVertexDataOnMesh_Wrapper_Statics::NewProp_additionalDataToPassThrough,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UVertexPaintFunctionLibrary_GetClosestVertexDataOnMesh_Wrapper_Statics::Function_MetaDataParams[] = {
		{ "BlueprintInternalUseOnly", "true" },
		{ "Category", "Runtime Vertex Color Paint and Detection Plugin|Detect" },
		{ "ModuleRelativePath", "Public/VertexPaintFunctionLibrary.h" },
		{ "ToolTip", "Gets the Closest Vertex Data on  Static, Skeletal, or Spline Meshes such as Colors, Position and Normal. It can also return All of the Colors, Positions and Normals if set to do so in the callback settings, as well as Get Average Color within an Area, and the Estimated Color at Actual Hit Location. \nTrace Complex has to be True if doing a trace onto the mesh so we can get the faceIndex for Static Meshes! \ndetectWith is the source of the hit, for example Shoe, Bullet etc. and will just be returned in the Detected Delegate. \nIf Area of Effect is higher than 0, then you can get the Average Color and Physics Surface of that Area! \nGetEstimatedColorAtHitLocationSettings will get the vertex colors as close to the hit location as possible, which is useful if meshes have few vertices. \n\nDetection Tasks will always get moved to be the first in a Task Queue, so they run as quickly as possible since they're often used for SFX and/or VFX." },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UVertexPaintFunctionLibrary_GetClosestVertexDataOnMesh_Wrapper_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UVertexPaintFunctionLibrary, nullptr, "GetClosestVertexDataOnMesh_Wrapper", nullptr, nullptr, sizeof(Z_Construct_UFunction_UVertexPaintFunctionLibrary_GetClosestVertexDataOnMesh_Wrapper_Statics::VertexPaintFunctionLibrary_eventGetClosestVertexDataOnMesh_Wrapper_Parms), Z_Construct_UFunction_UVertexPaintFunctionLibrary_GetClosestVertexDataOnMesh_Wrapper_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UVertexPaintFunctionLibrary_GetClosestVertexDataOnMesh_Wrapper_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04022401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UVertexPaintFunctionLibrary_GetClosestVertexDataOnMesh_Wrapper_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UVertexPaintFunctionLibrary_GetClosestVertexDataOnMesh_Wrapper_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UVertexPaintFunctionLibrary_GetClosestVertexDataOnMesh_Wrapper()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UVertexPaintFunctionLibrary_GetClosestVertexDataOnMesh_Wrapper_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UVertexPaintFunctionLibrary_GetClothAssets_Statics
	{
		struct VertexPaintFunctionLibrary_eventGetClothAssets_Parms
		{
			USkeletalMesh* skeletalMesh;
			TArray<UClothingAssetBase*> ReturnValue;
		};
		static const UECodeGen_Private::FObjectPropertyParams NewProp_skeletalMesh;
		static const UECodeGen_Private::FObjectPropertyParams NewProp_ReturnValue_Inner;
		static const UECodeGen_Private::FArrayPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UVertexPaintFunctionLibrary_GetClothAssets_Statics::NewProp_skeletalMesh = { "skeletalMesh", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(VertexPaintFunctionLibrary_eventGetClothAssets_Parms, skeletalMesh), Z_Construct_UClass_USkeletalMesh_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UVertexPaintFunctionLibrary_GetClothAssets_Statics::NewProp_ReturnValue_Inner = { "ReturnValue", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, 0, Z_Construct_UClass_UClothingAssetBase_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FArrayPropertyParams Z_Construct_UFunction_UVertexPaintFunctionLibrary_GetClothAssets_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(VertexPaintFunctionLibrary_eventGetClothAssets_Parms, ReturnValue), EArrayPropertyFlags::None, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UVertexPaintFunctionLibrary_GetClothAssets_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UVertexPaintFunctionLibrary_GetClothAssets_Statics::NewProp_skeletalMesh,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UVertexPaintFunctionLibrary_GetClothAssets_Statics::NewProp_ReturnValue_Inner,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UVertexPaintFunctionLibrary_GetClothAssets_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UVertexPaintFunctionLibrary_GetClothAssets_Statics::Function_MetaDataParams[] = {
		{ "Category", "Runtime Vertex Color Paint and Detection Plugin" },
		{ "ModuleRelativePath", "Public/VertexPaintFunctionLibrary.h" },
		{ "ToolTip", "Returns Skeletal Mesh Cloths if it ha any. Can be used in conjunction with UVertexPaintFunctionLibrary::SetChaosClothPhysics if you want to directly set physics on a cloth. Also useful when implementing interface GetSkeletalMeshClothPhysicsSettings on a BP and has to return physics setting for each Cloth the Mesh has. NOTE Affecting Cloth Physics is a UE5 exclusive feature, and Painting on Skeletal Meshes with Proxy Simulated Cloth is not supported, for example the Wind Walker Echo Character. Only Cloth created the regular way through the editor!" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UVertexPaintFunctionLibrary_GetClothAssets_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UVertexPaintFunctionLibrary, nullptr, "GetClothAssets", nullptr, nullptr, sizeof(Z_Construct_UFunction_UVertexPaintFunctionLibrary_GetClothAssets_Statics::VertexPaintFunctionLibrary_eventGetClothAssets_Parms), Z_Construct_UFunction_UVertexPaintFunctionLibrary_GetClothAssets_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UVertexPaintFunctionLibrary_GetClothAssets_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x14022401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UVertexPaintFunctionLibrary_GetClothAssets_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UVertexPaintFunctionLibrary_GetClothAssets_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UVertexPaintFunctionLibrary_GetClothAssets()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UVertexPaintFunctionLibrary_GetClothAssets_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UVertexPaintFunctionLibrary_GetColorSnippetReferenceDataAsset_Statics
	{
		struct VertexPaintFunctionLibrary_eventGetColorSnippetReferenceDataAsset_Parms
		{
			UVertexPaintColorSnippetRefs* ReturnValue;
		};
		static const UECodeGen_Private::FObjectPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UVertexPaintFunctionLibrary_GetColorSnippetReferenceDataAsset_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(VertexPaintFunctionLibrary_eventGetColorSnippetReferenceDataAsset_Parms, ReturnValue), Z_Construct_UClass_UVertexPaintColorSnippetRefs_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UVertexPaintFunctionLibrary_GetColorSnippetReferenceDataAsset_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UVertexPaintFunctionLibrary_GetColorSnippetReferenceDataAsset_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UVertexPaintFunctionLibrary_GetColorSnippetReferenceDataAsset_Statics::Function_MetaDataParams[] = {
		{ "Category", "Runtime Vertex Color Paint and Detection Plugin" },
		{ "ModuleRelativePath", "Public/VertexPaintFunctionLibrary.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UVertexPaintFunctionLibrary_GetColorSnippetReferenceDataAsset_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UVertexPaintFunctionLibrary, nullptr, "GetColorSnippetReferenceDataAsset", nullptr, nullptr, sizeof(Z_Construct_UFunction_UVertexPaintFunctionLibrary_GetColorSnippetReferenceDataAsset_Statics::VertexPaintFunctionLibrary_eventGetColorSnippetReferenceDataAsset_Parms), Z_Construct_UFunction_UVertexPaintFunctionLibrary_GetColorSnippetReferenceDataAsset_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UVertexPaintFunctionLibrary_GetColorSnippetReferenceDataAsset_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x14022401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UVertexPaintFunctionLibrary_GetColorSnippetReferenceDataAsset_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UVertexPaintFunctionLibrary_GetColorSnippetReferenceDataAsset_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UVertexPaintFunctionLibrary_GetColorSnippetReferenceDataAsset()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UVertexPaintFunctionLibrary_GetColorSnippetReferenceDataAsset_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UVertexPaintFunctionLibrary_GetColorsToApplyFromPhysicsMaterial_Wrapper_Statics
	{
		struct VertexPaintFunctionLibrary_eventGetColorsToApplyFromPhysicsMaterial_Wrapper_Parms
		{
			UMaterialInterface* materialToApplyColorsTo;
			TEnumAsByte<EPhysicalSurface> physicalSurface;
			float redAmountToApply;
			float greenAmountToApply;
			float blueAmountToApply;
			float alphaAmountToApply;
			float defaultAmountIfFailOrChannelIsNotRegistered;
			bool ReturnValue;
		};
		static const UECodeGen_Private::FObjectPropertyParams NewProp_materialToApplyColorsTo;
		static const UECodeGen_Private::FBytePropertyParams NewProp_physicalSurface;
		static const UECodeGen_Private::FFloatPropertyParams NewProp_redAmountToApply;
		static const UECodeGen_Private::FFloatPropertyParams NewProp_greenAmountToApply;
		static const UECodeGen_Private::FFloatPropertyParams NewProp_blueAmountToApply;
		static const UECodeGen_Private::FFloatPropertyParams NewProp_alphaAmountToApply;
		static const UECodeGen_Private::FFloatPropertyParams NewProp_defaultAmountIfFailOrChannelIsNotRegistered;
		static void NewProp_ReturnValue_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UVertexPaintFunctionLibrary_GetColorsToApplyFromPhysicsMaterial_Wrapper_Statics::NewProp_materialToApplyColorsTo = { "materialToApplyColorsTo", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(VertexPaintFunctionLibrary_eventGetColorsToApplyFromPhysicsMaterial_Wrapper_Parms, materialToApplyColorsTo), Z_Construct_UClass_UMaterialInterface_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FBytePropertyParams Z_Construct_UFunction_UVertexPaintFunctionLibrary_GetColorsToApplyFromPhysicsMaterial_Wrapper_Statics::NewProp_physicalSurface = { "physicalSurface", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(VertexPaintFunctionLibrary_eventGetColorsToApplyFromPhysicsMaterial_Wrapper_Parms, physicalSurface), Z_Construct_UEnum_PhysicsCore_EPhysicalSurface, METADATA_PARAMS(nullptr, 0) }; // 455643187
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_UVertexPaintFunctionLibrary_GetColorsToApplyFromPhysicsMaterial_Wrapper_Statics::NewProp_redAmountToApply = { "redAmountToApply", nullptr, (EPropertyFlags)0x0010000000000180, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(VertexPaintFunctionLibrary_eventGetColorsToApplyFromPhysicsMaterial_Wrapper_Parms, redAmountToApply), METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_UVertexPaintFunctionLibrary_GetColorsToApplyFromPhysicsMaterial_Wrapper_Statics::NewProp_greenAmountToApply = { "greenAmountToApply", nullptr, (EPropertyFlags)0x0010000000000180, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(VertexPaintFunctionLibrary_eventGetColorsToApplyFromPhysicsMaterial_Wrapper_Parms, greenAmountToApply), METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_UVertexPaintFunctionLibrary_GetColorsToApplyFromPhysicsMaterial_Wrapper_Statics::NewProp_blueAmountToApply = { "blueAmountToApply", nullptr, (EPropertyFlags)0x0010000000000180, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(VertexPaintFunctionLibrary_eventGetColorsToApplyFromPhysicsMaterial_Wrapper_Parms, blueAmountToApply), METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_UVertexPaintFunctionLibrary_GetColorsToApplyFromPhysicsMaterial_Wrapper_Statics::NewProp_alphaAmountToApply = { "alphaAmountToApply", nullptr, (EPropertyFlags)0x0010000000000180, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(VertexPaintFunctionLibrary_eventGetColorsToApplyFromPhysicsMaterial_Wrapper_Parms, alphaAmountToApply), METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_UVertexPaintFunctionLibrary_GetColorsToApplyFromPhysicsMaterial_Wrapper_Statics::NewProp_defaultAmountIfFailOrChannelIsNotRegistered = { "defaultAmountIfFailOrChannelIsNotRegistered", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(VertexPaintFunctionLibrary_eventGetColorsToApplyFromPhysicsMaterial_Wrapper_Parms, defaultAmountIfFailOrChannelIsNotRegistered), METADATA_PARAMS(nullptr, 0) };
	void Z_Construct_UFunction_UVertexPaintFunctionLibrary_GetColorsToApplyFromPhysicsMaterial_Wrapper_Statics::NewProp_ReturnValue_SetBit(void* Obj)
	{
		((VertexPaintFunctionLibrary_eventGetColorsToApplyFromPhysicsMaterial_Wrapper_Parms*)Obj)->ReturnValue = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UVertexPaintFunctionLibrary_GetColorsToApplyFromPhysicsMaterial_Wrapper_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(bool), sizeof(VertexPaintFunctionLibrary_eventGetColorsToApplyFromPhysicsMaterial_Wrapper_Parms), &Z_Construct_UFunction_UVertexPaintFunctionLibrary_GetColorsToApplyFromPhysicsMaterial_Wrapper_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UVertexPaintFunctionLibrary_GetColorsToApplyFromPhysicsMaterial_Wrapper_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UVertexPaintFunctionLibrary_GetColorsToApplyFromPhysicsMaterial_Wrapper_Statics::NewProp_materialToApplyColorsTo,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UVertexPaintFunctionLibrary_GetColorsToApplyFromPhysicsMaterial_Wrapper_Statics::NewProp_physicalSurface,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UVertexPaintFunctionLibrary_GetColorsToApplyFromPhysicsMaterial_Wrapper_Statics::NewProp_redAmountToApply,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UVertexPaintFunctionLibrary_GetColorsToApplyFromPhysicsMaterial_Wrapper_Statics::NewProp_greenAmountToApply,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UVertexPaintFunctionLibrary_GetColorsToApplyFromPhysicsMaterial_Wrapper_Statics::NewProp_blueAmountToApply,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UVertexPaintFunctionLibrary_GetColorsToApplyFromPhysicsMaterial_Wrapper_Statics::NewProp_alphaAmountToApply,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UVertexPaintFunctionLibrary_GetColorsToApplyFromPhysicsMaterial_Wrapper_Statics::NewProp_defaultAmountIfFailOrChannelIsNotRegistered,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UVertexPaintFunctionLibrary_GetColorsToApplyFromPhysicsMaterial_Wrapper_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UVertexPaintFunctionLibrary_GetColorsToApplyFromPhysicsMaterial_Wrapper_Statics::Function_MetaDataParams[] = {
		{ "BlueprintInternalUseOnly", "true" },
		{ "Category", "Runtime Vertex Color Paint and Detection Plugin" },
		{ "CPP_Default_defaultAmountIfFailOrChannelIsNotRegistered", "-0.100000" },
		{ "ModuleRelativePath", "Public/VertexPaintFunctionLibrary.h" },
		{ "ToolTip", "Get Vertex Color Amount to Apply on RGBA based off of what's registered in the Editor Widget for each Physical Surface and Channel. This is useful when you only know a Physical Surface and Material want to apply vertex color to a mesh, and want a centralized place where you get it from. For instance if you have a Vehicle driving over a Landscape, and you line trace and get the Physical Surface of the landscape where the Wheel is, and you want to Paint the Wheel with something based only on the Physical Surface and the Material. \nYou can set a defaultValue to return if the function fails or if a channel is not registered. This is useful if you for instance want the default behaviour to Remove Colors, with -0.1 or something similar. So if a vehicle is driving over a material that isn't registered, i.e. the wheels won't get painted by something, but you still want the wheels paint to come off." },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UVertexPaintFunctionLibrary_GetColorsToApplyFromPhysicsMaterial_Wrapper_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UVertexPaintFunctionLibrary, nullptr, "GetColorsToApplyFromPhysicsMaterial_Wrapper", nullptr, nullptr, sizeof(Z_Construct_UFunction_UVertexPaintFunctionLibrary_GetColorsToApplyFromPhysicsMaterial_Wrapper_Statics::VertexPaintFunctionLibrary_eventGetColorsToApplyFromPhysicsMaterial_Wrapper_Parms), Z_Construct_UFunction_UVertexPaintFunctionLibrary_GetColorsToApplyFromPhysicsMaterial_Wrapper_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UVertexPaintFunctionLibrary_GetColorsToApplyFromPhysicsMaterial_Wrapper_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04422401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UVertexPaintFunctionLibrary_GetColorsToApplyFromPhysicsMaterial_Wrapper_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UVertexPaintFunctionLibrary_GetColorsToApplyFromPhysicsMaterial_Wrapper_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UVertexPaintFunctionLibrary_GetColorsToApplyFromPhysicsMaterial_Wrapper()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UVertexPaintFunctionLibrary_GetColorsToApplyFromPhysicsMaterial_Wrapper_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UVertexPaintFunctionLibrary_GetMeshColorSnippetsTagsInTagCategory_Wrapper_Statics
	{
		struct VertexPaintFunctionLibrary_eventGetMeshColorSnippetsTagsInTagCategory_Wrapper_Parms
		{
			UPrimitiveComponent* meshComponent;
			FGameplayTag tagCategory;
			TMap<FGameplayTag,TSoftObjectPtr<UVertexPaintColorSnippetDataAsset> > availableColorSnippetTagsAndDataAssetsUnderTagCategory;
		};
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_meshComponent_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPropertyParams NewProp_meshComponent;
		static const UECodeGen_Private::FStructPropertyParams NewProp_tagCategory;
		static const UECodeGen_Private::FSoftObjectPropertyParams NewProp_availableColorSnippetTagsAndDataAssetsUnderTagCategory_ValueProp;
		static const UECodeGen_Private::FStructPropertyParams NewProp_availableColorSnippetTagsAndDataAssetsUnderTagCategory_Key_KeyProp;
		static const UECodeGen_Private::FMapPropertyParams NewProp_availableColorSnippetTagsAndDataAssetsUnderTagCategory;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UVertexPaintFunctionLibrary_GetMeshColorSnippetsTagsInTagCategory_Wrapper_Statics::NewProp_meshComponent_MetaData[] = {
		{ "EditInline", "true" },
	};
#endif
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UVertexPaintFunctionLibrary_GetMeshColorSnippetsTagsInTagCategory_Wrapper_Statics::NewProp_meshComponent = { "meshComponent", nullptr, (EPropertyFlags)0x0010000000080080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(VertexPaintFunctionLibrary_eventGetMeshColorSnippetsTagsInTagCategory_Wrapper_Parms, meshComponent), Z_Construct_UClass_UPrimitiveComponent_NoRegister, METADATA_PARAMS(Z_Construct_UFunction_UVertexPaintFunctionLibrary_GetMeshColorSnippetsTagsInTagCategory_Wrapper_Statics::NewProp_meshComponent_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UVertexPaintFunctionLibrary_GetMeshColorSnippetsTagsInTagCategory_Wrapper_Statics::NewProp_meshComponent_MetaData)) };
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UVertexPaintFunctionLibrary_GetMeshColorSnippetsTagsInTagCategory_Wrapper_Statics::NewProp_tagCategory = { "tagCategory", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(VertexPaintFunctionLibrary_eventGetMeshColorSnippetsTagsInTagCategory_Wrapper_Parms, tagCategory), Z_Construct_UScriptStruct_FGameplayTag, METADATA_PARAMS(nullptr, 0) }; // 1225434376
	const UECodeGen_Private::FSoftObjectPropertyParams Z_Construct_UFunction_UVertexPaintFunctionLibrary_GetMeshColorSnippetsTagsInTagCategory_Wrapper_Statics::NewProp_availableColorSnippetTagsAndDataAssetsUnderTagCategory_ValueProp = { "availableColorSnippetTagsAndDataAssetsUnderTagCategory", nullptr, (EPropertyFlags)0x0004000000000000, UECodeGen_Private::EPropertyGenFlags::SoftObject, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, 1, Z_Construct_UClass_UVertexPaintColorSnippetDataAsset_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UVertexPaintFunctionLibrary_GetMeshColorSnippetsTagsInTagCategory_Wrapper_Statics::NewProp_availableColorSnippetTagsAndDataAssetsUnderTagCategory_Key_KeyProp = { "availableColorSnippetTagsAndDataAssetsUnderTagCategory_Key", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, 0, Z_Construct_UScriptStruct_FGameplayTag, METADATA_PARAMS(nullptr, 0) }; // 1225434376
	const UECodeGen_Private::FMapPropertyParams Z_Construct_UFunction_UVertexPaintFunctionLibrary_GetMeshColorSnippetsTagsInTagCategory_Wrapper_Statics::NewProp_availableColorSnippetTagsAndDataAssetsUnderTagCategory = { "availableColorSnippetTagsAndDataAssetsUnderTagCategory", nullptr, (EPropertyFlags)0x0014000000000180, UECodeGen_Private::EPropertyGenFlags::Map, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(VertexPaintFunctionLibrary_eventGetMeshColorSnippetsTagsInTagCategory_Wrapper_Parms, availableColorSnippetTagsAndDataAssetsUnderTagCategory), EMapPropertyFlags::None, METADATA_PARAMS(nullptr, 0) }; // 1225434376
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UVertexPaintFunctionLibrary_GetMeshColorSnippetsTagsInTagCategory_Wrapper_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UVertexPaintFunctionLibrary_GetMeshColorSnippetsTagsInTagCategory_Wrapper_Statics::NewProp_meshComponent,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UVertexPaintFunctionLibrary_GetMeshColorSnippetsTagsInTagCategory_Wrapper_Statics::NewProp_tagCategory,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UVertexPaintFunctionLibrary_GetMeshColorSnippetsTagsInTagCategory_Wrapper_Statics::NewProp_availableColorSnippetTagsAndDataAssetsUnderTagCategory_ValueProp,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UVertexPaintFunctionLibrary_GetMeshColorSnippetsTagsInTagCategory_Wrapper_Statics::NewProp_availableColorSnippetTagsAndDataAssetsUnderTagCategory_Key_KeyProp,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UVertexPaintFunctionLibrary_GetMeshColorSnippetsTagsInTagCategory_Wrapper_Statics::NewProp_availableColorSnippetTagsAndDataAssetsUnderTagCategory,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UVertexPaintFunctionLibrary_GetMeshColorSnippetsTagsInTagCategory_Wrapper_Statics::Function_MetaDataParams[] = {
		{ "BlueprintInternalUseOnly", "true" },
		{ "Category", "Runtime Vertex Color Paint and Detection Plugin" },
		{ "ModuleRelativePath", "Public/VertexPaintFunctionLibrary.h" },
		{ "ToolTip", "Gets all the color snippets tags on a stored mesh In a Tag Category, i.e. the direct children of the category and not tags under those, and the associated Color Snippet Data Asset they are stored on. \nFor instance if you have Enemy tags like ColorSnippet.Zombie, ColorSnippet.Zombie.Bloody, ColorSnippet.Zombie.Sewers.Filthy. If you would then run this with ColorSnippet.Zombie, you would get ColorSnippet.Zombie.Bloody and others directly under ColorSnippet.Zombie., and not .Sewers.Filthy." },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UVertexPaintFunctionLibrary_GetMeshColorSnippetsTagsInTagCategory_Wrapper_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UVertexPaintFunctionLibrary, nullptr, "GetMeshColorSnippetsTagsInTagCategory_Wrapper", nullptr, nullptr, sizeof(Z_Construct_UFunction_UVertexPaintFunctionLibrary_GetMeshColorSnippetsTagsInTagCategory_Wrapper_Statics::VertexPaintFunctionLibrary_eventGetMeshColorSnippetsTagsInTagCategory_Wrapper_Parms), Z_Construct_UFunction_UVertexPaintFunctionLibrary_GetMeshColorSnippetsTagsInTagCategory_Wrapper_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UVertexPaintFunctionLibrary_GetMeshColorSnippetsTagsInTagCategory_Wrapper_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04422401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UVertexPaintFunctionLibrary_GetMeshColorSnippetsTagsInTagCategory_Wrapper_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UVertexPaintFunctionLibrary_GetMeshColorSnippetsTagsInTagCategory_Wrapper_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UVertexPaintFunctionLibrary_GetMeshColorSnippetsTagsInTagCategory_Wrapper()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UVertexPaintFunctionLibrary_GetMeshColorSnippetsTagsInTagCategory_Wrapper_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UVertexPaintFunctionLibrary_GetMeshComponentVertexColors_Wrapper_Statics
	{
		struct VertexPaintFunctionLibrary_eventGetMeshComponentVertexColors_Wrapper_Parms
		{
			UPrimitiveComponent* meshComponent;
			bool success;
			bool getColorsForAllLODs;
			int32 getColorsUpToLOD;
			FVertexDetectMeshDataStruct ReturnValue;
		};
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_meshComponent_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPropertyParams NewProp_meshComponent;
		static void NewProp_success_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_success;
		static void NewProp_getColorsForAllLODs_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_getColorsForAllLODs;
		static const UECodeGen_Private::FUnsizedIntPropertyParams NewProp_getColorsUpToLOD;
		static const UECodeGen_Private::FStructPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UVertexPaintFunctionLibrary_GetMeshComponentVertexColors_Wrapper_Statics::NewProp_meshComponent_MetaData[] = {
		{ "EditInline", "true" },
	};
#endif
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UVertexPaintFunctionLibrary_GetMeshComponentVertexColors_Wrapper_Statics::NewProp_meshComponent = { "meshComponent", nullptr, (EPropertyFlags)0x0010000000080080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(VertexPaintFunctionLibrary_eventGetMeshComponentVertexColors_Wrapper_Parms, meshComponent), Z_Construct_UClass_UPrimitiveComponent_NoRegister, METADATA_PARAMS(Z_Construct_UFunction_UVertexPaintFunctionLibrary_GetMeshComponentVertexColors_Wrapper_Statics::NewProp_meshComponent_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UVertexPaintFunctionLibrary_GetMeshComponentVertexColors_Wrapper_Statics::NewProp_meshComponent_MetaData)) };
	void Z_Construct_UFunction_UVertexPaintFunctionLibrary_GetMeshComponentVertexColors_Wrapper_Statics::NewProp_success_SetBit(void* Obj)
	{
		((VertexPaintFunctionLibrary_eventGetMeshComponentVertexColors_Wrapper_Parms*)Obj)->success = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UVertexPaintFunctionLibrary_GetMeshComponentVertexColors_Wrapper_Statics::NewProp_success = { "success", nullptr, (EPropertyFlags)0x0010000000000180, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(bool), sizeof(VertexPaintFunctionLibrary_eventGetMeshComponentVertexColors_Wrapper_Parms), &Z_Construct_UFunction_UVertexPaintFunctionLibrary_GetMeshComponentVertexColors_Wrapper_Statics::NewProp_success_SetBit, METADATA_PARAMS(nullptr, 0) };
	void Z_Construct_UFunction_UVertexPaintFunctionLibrary_GetMeshComponentVertexColors_Wrapper_Statics::NewProp_getColorsForAllLODs_SetBit(void* Obj)
	{
		((VertexPaintFunctionLibrary_eventGetMeshComponentVertexColors_Wrapper_Parms*)Obj)->getColorsForAllLODs = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UVertexPaintFunctionLibrary_GetMeshComponentVertexColors_Wrapper_Statics::NewProp_getColorsForAllLODs = { "getColorsForAllLODs", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(bool), sizeof(VertexPaintFunctionLibrary_eventGetMeshComponentVertexColors_Wrapper_Parms), &Z_Construct_UFunction_UVertexPaintFunctionLibrary_GetMeshComponentVertexColors_Wrapper_Statics::NewProp_getColorsForAllLODs_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FUnsizedIntPropertyParams Z_Construct_UFunction_UVertexPaintFunctionLibrary_GetMeshComponentVertexColors_Wrapper_Statics::NewProp_getColorsUpToLOD = { "getColorsUpToLOD", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(VertexPaintFunctionLibrary_eventGetMeshComponentVertexColors_Wrapper_Parms, getColorsUpToLOD), METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UVertexPaintFunctionLibrary_GetMeshComponentVertexColors_Wrapper_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010008000000580, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(VertexPaintFunctionLibrary_eventGetMeshComponentVertexColors_Wrapper_Parms, ReturnValue), Z_Construct_UScriptStruct_FVertexDetectMeshDataStruct, METADATA_PARAMS(nullptr, 0) }; // 4242319910
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UVertexPaintFunctionLibrary_GetMeshComponentVertexColors_Wrapper_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UVertexPaintFunctionLibrary_GetMeshComponentVertexColors_Wrapper_Statics::NewProp_meshComponent,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UVertexPaintFunctionLibrary_GetMeshComponentVertexColors_Wrapper_Statics::NewProp_success,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UVertexPaintFunctionLibrary_GetMeshComponentVertexColors_Wrapper_Statics::NewProp_getColorsForAllLODs,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UVertexPaintFunctionLibrary_GetMeshComponentVertexColors_Wrapper_Statics::NewProp_getColorsUpToLOD,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UVertexPaintFunctionLibrary_GetMeshComponentVertexColors_Wrapper_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UVertexPaintFunctionLibrary_GetMeshComponentVertexColors_Wrapper_Statics::Function_MetaDataParams[] = {
		{ "BlueprintInternalUseOnly", "true" },
		{ "Category", "Runtime Vertex Color Paint and Detection Plugin" },
		{ "CPP_Default_getColorsUpToLOD", "1" },
		{ "ModuleRelativePath", "Public/VertexPaintFunctionLibrary.h" },
		{ "ToolTip", "Gets the colors of the component either for All LODs if that is True, or up to a specified LOD. You can use GetAllVertexColorsOnly if you want to be more specific in what you get, for instance get the colors of each bones etc." },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UVertexPaintFunctionLibrary_GetMeshComponentVertexColors_Wrapper_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UVertexPaintFunctionLibrary, nullptr, "GetMeshComponentVertexColors_Wrapper", nullptr, nullptr, sizeof(Z_Construct_UFunction_UVertexPaintFunctionLibrary_GetMeshComponentVertexColors_Wrapper_Statics::VertexPaintFunctionLibrary_eventGetMeshComponentVertexColors_Wrapper_Parms), Z_Construct_UFunction_UVertexPaintFunctionLibrary_GetMeshComponentVertexColors_Wrapper_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UVertexPaintFunctionLibrary_GetMeshComponentVertexColors_Wrapper_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04422401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UVertexPaintFunctionLibrary_GetMeshComponentVertexColors_Wrapper_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UVertexPaintFunctionLibrary_GetMeshComponentVertexColors_Wrapper_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UVertexPaintFunctionLibrary_GetMeshComponentVertexColors_Wrapper()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UVertexPaintFunctionLibrary_GetMeshComponentVertexColors_Wrapper_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UVertexPaintFunctionLibrary_GetMeshPaintedSinceSessionStarted_Wrapper_Statics
	{
		struct VertexPaintFunctionLibrary_eventGetMeshPaintedSinceSessionStarted_Wrapper_Parms
		{
			const UObject* WorldContextObject;
			TMap<UPrimitiveComponent*,int32> ReturnValue;
		};
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_WorldContextObject_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPropertyParams NewProp_WorldContextObject;
		static const UECodeGen_Private::FUnsizedIntPropertyParams NewProp_ReturnValue_ValueProp;
		static const UECodeGen_Private::FObjectPropertyParams NewProp_ReturnValue_Key_KeyProp;
		static const UECodeGen_Private::FMapPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UVertexPaintFunctionLibrary_GetMeshPaintedSinceSessionStarted_Wrapper_Statics::NewProp_WorldContextObject_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UVertexPaintFunctionLibrary_GetMeshPaintedSinceSessionStarted_Wrapper_Statics::NewProp_WorldContextObject = { "WorldContextObject", nullptr, (EPropertyFlags)0x0010000000000082, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(VertexPaintFunctionLibrary_eventGetMeshPaintedSinceSessionStarted_Wrapper_Parms, WorldContextObject), Z_Construct_UClass_UObject_NoRegister, METADATA_PARAMS(Z_Construct_UFunction_UVertexPaintFunctionLibrary_GetMeshPaintedSinceSessionStarted_Wrapper_Statics::NewProp_WorldContextObject_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UVertexPaintFunctionLibrary_GetMeshPaintedSinceSessionStarted_Wrapper_Statics::NewProp_WorldContextObject_MetaData)) };
	const UECodeGen_Private::FUnsizedIntPropertyParams Z_Construct_UFunction_UVertexPaintFunctionLibrary_GetMeshPaintedSinceSessionStarted_Wrapper_Statics::NewProp_ReturnValue_ValueProp = { "ReturnValue", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, 1, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UVertexPaintFunctionLibrary_GetMeshPaintedSinceSessionStarted_Wrapper_Statics::NewProp_ReturnValue_Key_KeyProp = { "ReturnValue_Key", nullptr, (EPropertyFlags)0x0000000000080000, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, 0, Z_Construct_UClass_UPrimitiveComponent_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FMapPropertyParams Z_Construct_UFunction_UVertexPaintFunctionLibrary_GetMeshPaintedSinceSessionStarted_Wrapper_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010008000000580, UECodeGen_Private::EPropertyGenFlags::Map, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(VertexPaintFunctionLibrary_eventGetMeshPaintedSinceSessionStarted_Wrapper_Parms, ReturnValue), EMapPropertyFlags::None, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UVertexPaintFunctionLibrary_GetMeshPaintedSinceSessionStarted_Wrapper_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UVertexPaintFunctionLibrary_GetMeshPaintedSinceSessionStarted_Wrapper_Statics::NewProp_WorldContextObject,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UVertexPaintFunctionLibrary_GetMeshPaintedSinceSessionStarted_Wrapper_Statics::NewProp_ReturnValue_ValueProp,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UVertexPaintFunctionLibrary_GetMeshPaintedSinceSessionStarted_Wrapper_Statics::NewProp_ReturnValue_Key_KeyProp,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UVertexPaintFunctionLibrary_GetMeshPaintedSinceSessionStarted_Wrapper_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UVertexPaintFunctionLibrary_GetMeshPaintedSinceSessionStarted_Wrapper_Statics::Function_MetaDataParams[] = {
		{ "BlueprintInternalUseOnly", "true" },
		{ "Category", "Runtime Vertex Color Paint and Detection Plugin" },
		{ "ModuleRelativePath", "Public/VertexPaintFunctionLibrary.h" },
		{ "ToolTip", "Returns all of the Meshes that we've Painted on Since the Session Started. Useful for Save/Load systems if you want to save vertex data on the meshes that has been changed. \nYou can manually clear this by running ClearMeshPaintedSinceSessionStarted() which may be good if you for instance is going back to a Main Menu or something similar. \nNote that this may have null references in case components has been destroyed since we can't bind to a mesh components destroyed event and clear them up, and looping through all of them to check and remove any null refs would be an added cost since this can grow very big if your session has been going on for a while or you just have a big game with alot of meshes that can bet painted. So recommend using a valid check if you intend to loop through the components." },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UVertexPaintFunctionLibrary_GetMeshPaintedSinceSessionStarted_Wrapper_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UVertexPaintFunctionLibrary, nullptr, "GetMeshPaintedSinceSessionStarted_Wrapper", nullptr, nullptr, sizeof(Z_Construct_UFunction_UVertexPaintFunctionLibrary_GetMeshPaintedSinceSessionStarted_Wrapper_Statics::VertexPaintFunctionLibrary_eventGetMeshPaintedSinceSessionStarted_Wrapper_Parms), Z_Construct_UFunction_UVertexPaintFunctionLibrary_GetMeshPaintedSinceSessionStarted_Wrapper_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UVertexPaintFunctionLibrary_GetMeshPaintedSinceSessionStarted_Wrapper_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04022401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UVertexPaintFunctionLibrary_GetMeshPaintedSinceSessionStarted_Wrapper_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UVertexPaintFunctionLibrary_GetMeshPaintedSinceSessionStarted_Wrapper_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UVertexPaintFunctionLibrary_GetMeshPaintedSinceSessionStarted_Wrapper()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UVertexPaintFunctionLibrary_GetMeshPaintedSinceSessionStarted_Wrapper_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UVertexPaintFunctionLibrary_GetOptimizationDataAsset_Statics
	{
		struct VertexPaintFunctionLibrary_eventGetOptimizationDataAsset_Parms
		{
			UVertexPaintOptimizationDataAsset* ReturnValue;
		};
		static const UECodeGen_Private::FObjectPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UVertexPaintFunctionLibrary_GetOptimizationDataAsset_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(VertexPaintFunctionLibrary_eventGetOptimizationDataAsset_Parms, ReturnValue), Z_Construct_UClass_UVertexPaintOptimizationDataAsset_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UVertexPaintFunctionLibrary_GetOptimizationDataAsset_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UVertexPaintFunctionLibrary_GetOptimizationDataAsset_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UVertexPaintFunctionLibrary_GetOptimizationDataAsset_Statics::Function_MetaDataParams[] = {
		{ "Category", "Runtime Vertex Color Paint and Detection Plugin" },
		{ "ModuleRelativePath", "Public/VertexPaintFunctionLibrary.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UVertexPaintFunctionLibrary_GetOptimizationDataAsset_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UVertexPaintFunctionLibrary, nullptr, "GetOptimizationDataAsset", nullptr, nullptr, sizeof(Z_Construct_UFunction_UVertexPaintFunctionLibrary_GetOptimizationDataAsset_Statics::VertexPaintFunctionLibrary_eventGetOptimizationDataAsset_Parms), Z_Construct_UFunction_UVertexPaintFunctionLibrary_GetOptimizationDataAsset_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UVertexPaintFunctionLibrary_GetOptimizationDataAsset_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x14022401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UVertexPaintFunctionLibrary_GetOptimizationDataAsset_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UVertexPaintFunctionLibrary_GetOptimizationDataAsset_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UVertexPaintFunctionLibrary_GetOptimizationDataAsset()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UVertexPaintFunctionLibrary_GetOptimizationDataAsset_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UVertexPaintFunctionLibrary_GetPhysicalMaterialUsingPhysicsSurface_Wrapper_Statics
	{
		struct VertexPaintFunctionLibrary_eventGetPhysicalMaterialUsingPhysicsSurface_Wrapper_Parms
		{
			const UObject* WorldContextObject;
			TSubclassOf<UPhysicalMaterial>  physicalMaterialClass;
			TEnumAsByte<EPhysicalSurface> physicsSurface;
			UPhysicalMaterial* ReturnValue;
		};
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_WorldContextObject_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPropertyParams NewProp_WorldContextObject;
		static const UECodeGen_Private::FClassPropertyParams NewProp_physicalMaterialClass;
		static const UECodeGen_Private::FBytePropertyParams NewProp_physicsSurface;
		static const UECodeGen_Private::FObjectPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UVertexPaintFunctionLibrary_GetPhysicalMaterialUsingPhysicsSurface_Wrapper_Statics::NewProp_WorldContextObject_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UVertexPaintFunctionLibrary_GetPhysicalMaterialUsingPhysicsSurface_Wrapper_Statics::NewProp_WorldContextObject = { "WorldContextObject", nullptr, (EPropertyFlags)0x0010000000000082, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(VertexPaintFunctionLibrary_eventGetPhysicalMaterialUsingPhysicsSurface_Wrapper_Parms, WorldContextObject), Z_Construct_UClass_UObject_NoRegister, METADATA_PARAMS(Z_Construct_UFunction_UVertexPaintFunctionLibrary_GetPhysicalMaterialUsingPhysicsSurface_Wrapper_Statics::NewProp_WorldContextObject_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UVertexPaintFunctionLibrary_GetPhysicalMaterialUsingPhysicsSurface_Wrapper_Statics::NewProp_WorldContextObject_MetaData)) };
	const UECodeGen_Private::FClassPropertyParams Z_Construct_UFunction_UVertexPaintFunctionLibrary_GetPhysicalMaterialUsingPhysicsSurface_Wrapper_Statics::NewProp_physicalMaterialClass = { "physicalMaterialClass", nullptr, (EPropertyFlags)0x0014000000000080, UECodeGen_Private::EPropertyGenFlags::Class, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(VertexPaintFunctionLibrary_eventGetPhysicalMaterialUsingPhysicsSurface_Wrapper_Parms, physicalMaterialClass), Z_Construct_UClass_UClass, Z_Construct_UClass_UPhysicalMaterial_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FBytePropertyParams Z_Construct_UFunction_UVertexPaintFunctionLibrary_GetPhysicalMaterialUsingPhysicsSurface_Wrapper_Statics::NewProp_physicsSurface = { "physicsSurface", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(VertexPaintFunctionLibrary_eventGetPhysicalMaterialUsingPhysicsSurface_Wrapper_Parms, physicsSurface), Z_Construct_UEnum_PhysicsCore_EPhysicalSurface, METADATA_PARAMS(nullptr, 0) }; // 455643187
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UVertexPaintFunctionLibrary_GetPhysicalMaterialUsingPhysicsSurface_Wrapper_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(VertexPaintFunctionLibrary_eventGetPhysicalMaterialUsingPhysicsSurface_Wrapper_Parms, ReturnValue), Z_Construct_UClass_UPhysicalMaterial_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UVertexPaintFunctionLibrary_GetPhysicalMaterialUsingPhysicsSurface_Wrapper_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UVertexPaintFunctionLibrary_GetPhysicalMaterialUsingPhysicsSurface_Wrapper_Statics::NewProp_WorldContextObject,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UVertexPaintFunctionLibrary_GetPhysicalMaterialUsingPhysicsSurface_Wrapper_Statics::NewProp_physicalMaterialClass,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UVertexPaintFunctionLibrary_GetPhysicalMaterialUsingPhysicsSurface_Wrapper_Statics::NewProp_physicsSurface,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UVertexPaintFunctionLibrary_GetPhysicalMaterialUsingPhysicsSurface_Wrapper_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UVertexPaintFunctionLibrary_GetPhysicalMaterialUsingPhysicsSurface_Wrapper_Statics::Function_MetaDataParams[] = {
		{ "BlueprintInternalUseOnly", "true" },
		{ "Category", "Runtime Vertex Color Paint and Detection Plugin" },
		{ "DeterminesOutputType", "physicalMaterialClass" },
		{ "ModuleRelativePath", "Public/VertexPaintFunctionLibrary.h" },
		{ "ToolTip", "Checks if any of the Cached Physical Materials Assets in the Game Instance Subsystem uses the physics surface we pass through as paramater here, then returns the first one it finds. We cache all of them since it's very expensive to run GetAssetsOfClass. \nIf setting a specified physicsSurface class then we will only look through those classes. If it's set to be the base PhysicalMaterial then we will look through all of them. \nMake sure only one physics material uses a physics surface, otherwise you might get the wrong physics material. \nAlso make sure that you add the folder that has all the physics materials to Additional Directories to be Cooked in the Project Settings, in case there's a risk any of them isn't referenced by anything and won't get cooked, but has a physics surface that is registered in the editor widget." },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UVertexPaintFunctionLibrary_GetPhysicalMaterialUsingPhysicsSurface_Wrapper_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UVertexPaintFunctionLibrary, nullptr, "GetPhysicalMaterialUsingPhysicsSurface_Wrapper", nullptr, nullptr, sizeof(Z_Construct_UFunction_UVertexPaintFunctionLibrary_GetPhysicalMaterialUsingPhysicsSurface_Wrapper_Statics::VertexPaintFunctionLibrary_eventGetPhysicalMaterialUsingPhysicsSurface_Wrapper_Parms), Z_Construct_UFunction_UVertexPaintFunctionLibrary_GetPhysicalMaterialUsingPhysicsSurface_Wrapper_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UVertexPaintFunctionLibrary_GetPhysicalMaterialUsingPhysicsSurface_Wrapper_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04022401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UVertexPaintFunctionLibrary_GetPhysicalMaterialUsingPhysicsSurface_Wrapper_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UVertexPaintFunctionLibrary_GetPhysicalMaterialUsingPhysicsSurface_Wrapper_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UVertexPaintFunctionLibrary_GetPhysicalMaterialUsingPhysicsSurface_Wrapper()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UVertexPaintFunctionLibrary_GetPhysicalMaterialUsingPhysicsSurface_Wrapper_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UVertexPaintFunctionLibrary_GetTheMostDominantPhysicsSurface_Wrapper_Statics
	{
		struct VertexPaintFunctionLibrary_eventGetTheMostDominantPhysicsSurface_Wrapper_Parms
		{
			UMaterialInterface* optionalMaterialPhysicsSurfaceWasDetectedOn;
			TArray<TEnumAsByte<EPhysicalSurface> > physicsSurfaces;
			TArray<float> physicsSurfaceValues;
			TEnumAsByte<EPhysicalSurface> mostDominantPhysicsSurfaceFromArray;
			float mostDominantPhysicsSurfaceColorValue;
			bool ReturnValue;
		};
		static const UECodeGen_Private::FObjectPropertyParams NewProp_optionalMaterialPhysicsSurfaceWasDetectedOn;
		static const UECodeGen_Private::FBytePropertyParams NewProp_physicsSurfaces_Inner;
		static const UECodeGen_Private::FArrayPropertyParams NewProp_physicsSurfaces;
		static const UECodeGen_Private::FFloatPropertyParams NewProp_physicsSurfaceValues_Inner;
		static const UECodeGen_Private::FArrayPropertyParams NewProp_physicsSurfaceValues;
		static const UECodeGen_Private::FBytePropertyParams NewProp_mostDominantPhysicsSurfaceFromArray;
		static const UECodeGen_Private::FFloatPropertyParams NewProp_mostDominantPhysicsSurfaceColorValue;
		static void NewProp_ReturnValue_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UVertexPaintFunctionLibrary_GetTheMostDominantPhysicsSurface_Wrapper_Statics::NewProp_optionalMaterialPhysicsSurfaceWasDetectedOn = { "optionalMaterialPhysicsSurfaceWasDetectedOn", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(VertexPaintFunctionLibrary_eventGetTheMostDominantPhysicsSurface_Wrapper_Parms, optionalMaterialPhysicsSurfaceWasDetectedOn), Z_Construct_UClass_UMaterialInterface_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FBytePropertyParams Z_Construct_UFunction_UVertexPaintFunctionLibrary_GetTheMostDominantPhysicsSurface_Wrapper_Statics::NewProp_physicsSurfaces_Inner = { "physicsSurfaces", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, 0, Z_Construct_UEnum_PhysicsCore_EPhysicalSurface, METADATA_PARAMS(nullptr, 0) }; // 455643187
	const UECodeGen_Private::FArrayPropertyParams Z_Construct_UFunction_UVertexPaintFunctionLibrary_GetTheMostDominantPhysicsSurface_Wrapper_Statics::NewProp_physicsSurfaces = { "physicsSurfaces", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(VertexPaintFunctionLibrary_eventGetTheMostDominantPhysicsSurface_Wrapper_Parms, physicsSurfaces), EArrayPropertyFlags::None, METADATA_PARAMS(nullptr, 0) }; // 455643187
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_UVertexPaintFunctionLibrary_GetTheMostDominantPhysicsSurface_Wrapper_Statics::NewProp_physicsSurfaceValues_Inner = { "physicsSurfaceValues", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, 0, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FArrayPropertyParams Z_Construct_UFunction_UVertexPaintFunctionLibrary_GetTheMostDominantPhysicsSurface_Wrapper_Statics::NewProp_physicsSurfaceValues = { "physicsSurfaceValues", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(VertexPaintFunctionLibrary_eventGetTheMostDominantPhysicsSurface_Wrapper_Parms, physicsSurfaceValues), EArrayPropertyFlags::None, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FBytePropertyParams Z_Construct_UFunction_UVertexPaintFunctionLibrary_GetTheMostDominantPhysicsSurface_Wrapper_Statics::NewProp_mostDominantPhysicsSurfaceFromArray = { "mostDominantPhysicsSurfaceFromArray", nullptr, (EPropertyFlags)0x0010000000000180, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(VertexPaintFunctionLibrary_eventGetTheMostDominantPhysicsSurface_Wrapper_Parms, mostDominantPhysicsSurfaceFromArray), Z_Construct_UEnum_PhysicsCore_EPhysicalSurface, METADATA_PARAMS(nullptr, 0) }; // 455643187
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_UVertexPaintFunctionLibrary_GetTheMostDominantPhysicsSurface_Wrapper_Statics::NewProp_mostDominantPhysicsSurfaceColorValue = { "mostDominantPhysicsSurfaceColorValue", nullptr, (EPropertyFlags)0x0010000000000180, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(VertexPaintFunctionLibrary_eventGetTheMostDominantPhysicsSurface_Wrapper_Parms, mostDominantPhysicsSurfaceColorValue), METADATA_PARAMS(nullptr, 0) };
	void Z_Construct_UFunction_UVertexPaintFunctionLibrary_GetTheMostDominantPhysicsSurface_Wrapper_Statics::NewProp_ReturnValue_SetBit(void* Obj)
	{
		((VertexPaintFunctionLibrary_eventGetTheMostDominantPhysicsSurface_Wrapper_Parms*)Obj)->ReturnValue = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UVertexPaintFunctionLibrary_GetTheMostDominantPhysicsSurface_Wrapper_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(bool), sizeof(VertexPaintFunctionLibrary_eventGetTheMostDominantPhysicsSurface_Wrapper_Parms), &Z_Construct_UFunction_UVertexPaintFunctionLibrary_GetTheMostDominantPhysicsSurface_Wrapper_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UVertexPaintFunctionLibrary_GetTheMostDominantPhysicsSurface_Wrapper_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UVertexPaintFunctionLibrary_GetTheMostDominantPhysicsSurface_Wrapper_Statics::NewProp_optionalMaterialPhysicsSurfaceWasDetectedOn,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UVertexPaintFunctionLibrary_GetTheMostDominantPhysicsSurface_Wrapper_Statics::NewProp_physicsSurfaces_Inner,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UVertexPaintFunctionLibrary_GetTheMostDominantPhysicsSurface_Wrapper_Statics::NewProp_physicsSurfaces,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UVertexPaintFunctionLibrary_GetTheMostDominantPhysicsSurface_Wrapper_Statics::NewProp_physicsSurfaceValues_Inner,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UVertexPaintFunctionLibrary_GetTheMostDominantPhysicsSurface_Wrapper_Statics::NewProp_physicsSurfaceValues,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UVertexPaintFunctionLibrary_GetTheMostDominantPhysicsSurface_Wrapper_Statics::NewProp_mostDominantPhysicsSurfaceFromArray,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UVertexPaintFunctionLibrary_GetTheMostDominantPhysicsSurface_Wrapper_Statics::NewProp_mostDominantPhysicsSurfaceColorValue,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UVertexPaintFunctionLibrary_GetTheMostDominantPhysicsSurface_Wrapper_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UVertexPaintFunctionLibrary_GetTheMostDominantPhysicsSurface_Wrapper_Statics::Function_MetaDataParams[] = {
		{ "BlueprintInternalUseOnly", "true" },
		{ "Category", "Runtime Vertex Color Paint and Detection Plugin" },
		{ "ModuleRelativePath", "Public/VertexPaintFunctionLibrary.h" },
		{ "ToolTip", "optionalMaterialPhysicsSurfaceWasDetectedOn is used to check if the surfaces can blend  This will get loop through and get the Most Dominant Surface from the Physics Surface Array, so it and the physics Sruface Color Value array has to be in sync. This combines well with the Physics Result Structs you get from GetClosestVertexData or PaintAtLocation Callback Events. \nIf you provide the Material that the physics surfaces was on, it will also check the Blendable Surfaces that has been Registered in the Editor Widget, and check if any sent in here can Blend and become another Surface, if so, that surface could be the Most dominant one. For example if Red Channel is Sand, Blue Channel is Puddle, they can be set to blend into Mud in the Editor Widget. \n\nThis is very useful when you want to run SFX or VFX based on detected surfaces." },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UVertexPaintFunctionLibrary_GetTheMostDominantPhysicsSurface_Wrapper_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UVertexPaintFunctionLibrary, nullptr, "GetTheMostDominantPhysicsSurface_Wrapper", nullptr, nullptr, sizeof(Z_Construct_UFunction_UVertexPaintFunctionLibrary_GetTheMostDominantPhysicsSurface_Wrapper_Statics::VertexPaintFunctionLibrary_eventGetTheMostDominantPhysicsSurface_Wrapper_Parms), Z_Construct_UFunction_UVertexPaintFunctionLibrary_GetTheMostDominantPhysicsSurface_Wrapper_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UVertexPaintFunctionLibrary_GetTheMostDominantPhysicsSurface_Wrapper_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04422401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UVertexPaintFunctionLibrary_GetTheMostDominantPhysicsSurface_Wrapper_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UVertexPaintFunctionLibrary_GetTheMostDominantPhysicsSurface_Wrapper_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UVertexPaintFunctionLibrary_GetTheMostDominantPhysicsSurface_Wrapper()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UVertexPaintFunctionLibrary_GetTheMostDominantPhysicsSurface_Wrapper_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UVertexPaintFunctionLibrary_GetVertexPaintMaterialDataAsset_Statics
	{
		struct VertexPaintFunctionLibrary_eventGetVertexPaintMaterialDataAsset_Parms
		{
			UVertexPaintMaterialDataAsset* ReturnValue;
		};
		static const UECodeGen_Private::FObjectPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UVertexPaintFunctionLibrary_GetVertexPaintMaterialDataAsset_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(VertexPaintFunctionLibrary_eventGetVertexPaintMaterialDataAsset_Parms, ReturnValue), Z_Construct_UClass_UVertexPaintMaterialDataAsset_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UVertexPaintFunctionLibrary_GetVertexPaintMaterialDataAsset_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UVertexPaintFunctionLibrary_GetVertexPaintMaterialDataAsset_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UVertexPaintFunctionLibrary_GetVertexPaintMaterialDataAsset_Statics::Function_MetaDataParams[] = {
		{ "Category", "Runtime Vertex Color Paint and Detection Plugin" },
		{ "ModuleRelativePath", "Public/VertexPaintFunctionLibrary.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UVertexPaintFunctionLibrary_GetVertexPaintMaterialDataAsset_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UVertexPaintFunctionLibrary, nullptr, "GetVertexPaintMaterialDataAsset", nullptr, nullptr, sizeof(Z_Construct_UFunction_UVertexPaintFunctionLibrary_GetVertexPaintMaterialDataAsset_Statics::VertexPaintFunctionLibrary_eventGetVertexPaintMaterialDataAsset_Parms), Z_Construct_UFunction_UVertexPaintFunctionLibrary_GetVertexPaintMaterialDataAsset_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UVertexPaintFunctionLibrary_GetVertexPaintMaterialDataAsset_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x14022401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UVertexPaintFunctionLibrary_GetVertexPaintMaterialDataAsset_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UVertexPaintFunctionLibrary_GetVertexPaintMaterialDataAsset_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UVertexPaintFunctionLibrary_GetVertexPaintMaterialDataAsset()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UVertexPaintFunctionLibrary_GetVertexPaintMaterialDataAsset_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UVertexPaintFunctionLibrary_IsWorldValid_Statics
	{
		struct VertexPaintFunctionLibrary_eventIsWorldValid_Parms
		{
			UWorld* world;
			bool ReturnValue;
		};
		static const UECodeGen_Private::FObjectPropertyParams NewProp_world;
		static void NewProp_ReturnValue_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UVertexPaintFunctionLibrary_IsWorldValid_Statics::NewProp_world = { "world", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(VertexPaintFunctionLibrary_eventIsWorldValid_Parms, world), Z_Construct_UClass_UWorld_NoRegister, METADATA_PARAMS(nullptr, 0) };
	void Z_Construct_UFunction_UVertexPaintFunctionLibrary_IsWorldValid_Statics::NewProp_ReturnValue_SetBit(void* Obj)
	{
		((VertexPaintFunctionLibrary_eventIsWorldValid_Parms*)Obj)->ReturnValue = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UVertexPaintFunctionLibrary_IsWorldValid_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(bool), sizeof(VertexPaintFunctionLibrary_eventIsWorldValid_Parms), &Z_Construct_UFunction_UVertexPaintFunctionLibrary_IsWorldValid_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UVertexPaintFunctionLibrary_IsWorldValid_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UVertexPaintFunctionLibrary_IsWorldValid_Statics::NewProp_world,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UVertexPaintFunctionLibrary_IsWorldValid_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UVertexPaintFunctionLibrary_IsWorldValid_Statics::Function_MetaDataParams[] = {
		{ "Category", "Runtime Vertex Color Paint and Detection Plugin" },
		{ "ModuleRelativePath", "Public/VertexPaintFunctionLibrary.h" },
		{ "ToolTip", "Checks if the world is valid, that it is a game world and is not being teared down." },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UVertexPaintFunctionLibrary_IsWorldValid_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UVertexPaintFunctionLibrary, nullptr, "IsWorldValid", nullptr, nullptr, sizeof(Z_Construct_UFunction_UVertexPaintFunctionLibrary_IsWorldValid_Statics::VertexPaintFunctionLibrary_eventIsWorldValid_Parms), Z_Construct_UFunction_UVertexPaintFunctionLibrary_IsWorldValid_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UVertexPaintFunctionLibrary_IsWorldValid_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x14022401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UVertexPaintFunctionLibrary_IsWorldValid_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UVertexPaintFunctionLibrary_IsWorldValid_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UVertexPaintFunctionLibrary_IsWorldValid()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UVertexPaintFunctionLibrary_IsWorldValid_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UVertexPaintFunctionLibrary_MultisphereTraceForPaintAtLocation_Wrapper_Statics
	{
		struct VertexPaintFunctionLibrary_eventMultisphereTraceForPaintAtLocation_Wrapper_Parms
		{
			const UObject* WorldContextObject;
			FVector location;
			float areaOfEffect;
			TArray<TEnumAsByte<EObjectTypeQuery> > objectTypesToTraceFor;
			int32 expectedCallbacksFromPaintAtLocation;
			TArray<FHitResult> ReturnValue;
		};
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_WorldContextObject_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPropertyParams NewProp_WorldContextObject;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_location_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_location;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_areaOfEffect_MetaData[];
#endif
		static const UECodeGen_Private::FFloatPropertyParams NewProp_areaOfEffect;
		static const UECodeGen_Private::FBytePropertyParams NewProp_objectTypesToTraceFor_Inner;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_objectTypesToTraceFor_MetaData[];
#endif
		static const UECodeGen_Private::FArrayPropertyParams NewProp_objectTypesToTraceFor;
		static const UECodeGen_Private::FUnsizedIntPropertyParams NewProp_expectedCallbacksFromPaintAtLocation;
		static const UECodeGen_Private::FStructPropertyParams NewProp_ReturnValue_Inner;
		static const UECodeGen_Private::FArrayPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UVertexPaintFunctionLibrary_MultisphereTraceForPaintAtLocation_Wrapper_Statics::NewProp_WorldContextObject_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UVertexPaintFunctionLibrary_MultisphereTraceForPaintAtLocation_Wrapper_Statics::NewProp_WorldContextObject = { "WorldContextObject", nullptr, (EPropertyFlags)0x0010000000000082, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(VertexPaintFunctionLibrary_eventMultisphereTraceForPaintAtLocation_Wrapper_Parms, WorldContextObject), Z_Construct_UClass_UObject_NoRegister, METADATA_PARAMS(Z_Construct_UFunction_UVertexPaintFunctionLibrary_MultisphereTraceForPaintAtLocation_Wrapper_Statics::NewProp_WorldContextObject_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UVertexPaintFunctionLibrary_MultisphereTraceForPaintAtLocation_Wrapper_Statics::NewProp_WorldContextObject_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UVertexPaintFunctionLibrary_MultisphereTraceForPaintAtLocation_Wrapper_Statics::NewProp_location_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UVertexPaintFunctionLibrary_MultisphereTraceForPaintAtLocation_Wrapper_Statics::NewProp_location = { "location", nullptr, (EPropertyFlags)0x0010000008000182, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(VertexPaintFunctionLibrary_eventMultisphereTraceForPaintAtLocation_Wrapper_Parms, location), Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(Z_Construct_UFunction_UVertexPaintFunctionLibrary_MultisphereTraceForPaintAtLocation_Wrapper_Statics::NewProp_location_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UVertexPaintFunctionLibrary_MultisphereTraceForPaintAtLocation_Wrapper_Statics::NewProp_location_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UVertexPaintFunctionLibrary_MultisphereTraceForPaintAtLocation_Wrapper_Statics::NewProp_areaOfEffect_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_UVertexPaintFunctionLibrary_MultisphereTraceForPaintAtLocation_Wrapper_Statics::NewProp_areaOfEffect = { "areaOfEffect", nullptr, (EPropertyFlags)0x0010000008000182, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(VertexPaintFunctionLibrary_eventMultisphereTraceForPaintAtLocation_Wrapper_Parms, areaOfEffect), METADATA_PARAMS(Z_Construct_UFunction_UVertexPaintFunctionLibrary_MultisphereTraceForPaintAtLocation_Wrapper_Statics::NewProp_areaOfEffect_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UVertexPaintFunctionLibrary_MultisphereTraceForPaintAtLocation_Wrapper_Statics::NewProp_areaOfEffect_MetaData)) };
	const UECodeGen_Private::FBytePropertyParams Z_Construct_UFunction_UVertexPaintFunctionLibrary_MultisphereTraceForPaintAtLocation_Wrapper_Statics::NewProp_objectTypesToTraceFor_Inner = { "objectTypesToTraceFor", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, 0, Z_Construct_UEnum_Engine_EObjectTypeQuery, METADATA_PARAMS(nullptr, 0) }; // 3629342158
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UVertexPaintFunctionLibrary_MultisphereTraceForPaintAtLocation_Wrapper_Statics::NewProp_objectTypesToTraceFor_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UECodeGen_Private::FArrayPropertyParams Z_Construct_UFunction_UVertexPaintFunctionLibrary_MultisphereTraceForPaintAtLocation_Wrapper_Statics::NewProp_objectTypesToTraceFor = { "objectTypesToTraceFor", nullptr, (EPropertyFlags)0x0010000008000182, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(VertexPaintFunctionLibrary_eventMultisphereTraceForPaintAtLocation_Wrapper_Parms, objectTypesToTraceFor), EArrayPropertyFlags::None, METADATA_PARAMS(Z_Construct_UFunction_UVertexPaintFunctionLibrary_MultisphereTraceForPaintAtLocation_Wrapper_Statics::NewProp_objectTypesToTraceFor_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UVertexPaintFunctionLibrary_MultisphereTraceForPaintAtLocation_Wrapper_Statics::NewProp_objectTypesToTraceFor_MetaData)) }; // 3629342158
	const UECodeGen_Private::FUnsizedIntPropertyParams Z_Construct_UFunction_UVertexPaintFunctionLibrary_MultisphereTraceForPaintAtLocation_Wrapper_Statics::NewProp_expectedCallbacksFromPaintAtLocation = { "expectedCallbacksFromPaintAtLocation", nullptr, (EPropertyFlags)0x0010000000000180, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(VertexPaintFunctionLibrary_eventMultisphereTraceForPaintAtLocation_Wrapper_Parms, expectedCallbacksFromPaintAtLocation), METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UVertexPaintFunctionLibrary_MultisphereTraceForPaintAtLocation_Wrapper_Statics::NewProp_ReturnValue_Inner = { "ReturnValue", nullptr, (EPropertyFlags)0x0000008000000000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, 0, Z_Construct_UScriptStruct_FHitResult, METADATA_PARAMS(nullptr, 0) }; // 1287526515
	const UECodeGen_Private::FArrayPropertyParams Z_Construct_UFunction_UVertexPaintFunctionLibrary_MultisphereTraceForPaintAtLocation_Wrapper_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010008000000580, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(VertexPaintFunctionLibrary_eventMultisphereTraceForPaintAtLocation_Wrapper_Parms, ReturnValue), EArrayPropertyFlags::None, METADATA_PARAMS(nullptr, 0) }; // 1287526515
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UVertexPaintFunctionLibrary_MultisphereTraceForPaintAtLocation_Wrapper_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UVertexPaintFunctionLibrary_MultisphereTraceForPaintAtLocation_Wrapper_Statics::NewProp_WorldContextObject,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UVertexPaintFunctionLibrary_MultisphereTraceForPaintAtLocation_Wrapper_Statics::NewProp_location,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UVertexPaintFunctionLibrary_MultisphereTraceForPaintAtLocation_Wrapper_Statics::NewProp_areaOfEffect,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UVertexPaintFunctionLibrary_MultisphereTraceForPaintAtLocation_Wrapper_Statics::NewProp_objectTypesToTraceFor_Inner,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UVertexPaintFunctionLibrary_MultisphereTraceForPaintAtLocation_Wrapper_Statics::NewProp_objectTypesToTraceFor,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UVertexPaintFunctionLibrary_MultisphereTraceForPaintAtLocation_Wrapper_Statics::NewProp_expectedCallbacksFromPaintAtLocation,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UVertexPaintFunctionLibrary_MultisphereTraceForPaintAtLocation_Wrapper_Statics::NewProp_ReturnValue_Inner,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UVertexPaintFunctionLibrary_MultisphereTraceForPaintAtLocation_Wrapper_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UVertexPaintFunctionLibrary_MultisphereTraceForPaintAtLocation_Wrapper_Statics::Function_MetaDataParams[] = {
		{ "BlueprintInternalUseOnly", "true" },
		{ "Category", "Runtime Vertex Color Paint and Detection Plugin" },
		{ "ModuleRelativePath", "Public/VertexPaintFunctionLibrary.h" },
		{ "ToolTip", "This is a function that Multisphere Traces at an location for meshes within the area of effect, and adjust the hit result impact point so that it is from the location we sent in (i.e. we paint on other meshes, from like an offset location), then returns an Hit Result array of Unique Meshes that is ready to be used with a Paint at Location function. \nThis is very useful since we can paint on Multiple Meshes at once like floors, but where the we don't get any visible Seams between the floors, since if the other floors is within the area of effect, we will paint on that as well! \nNOTE However that since we're multi sphere tracing for and to the same location, we don't get any usable face index, which means that we can't get the physics surface information. So if you intend on running a Detectinon and is such data Before and/or After the Paint at Location, then this won't work." },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UVertexPaintFunctionLibrary_MultisphereTraceForPaintAtLocation_Wrapper_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UVertexPaintFunctionLibrary, nullptr, "MultisphereTraceForPaintAtLocation_Wrapper", nullptr, nullptr, sizeof(Z_Construct_UFunction_UVertexPaintFunctionLibrary_MultisphereTraceForPaintAtLocation_Wrapper_Statics::VertexPaintFunctionLibrary_eventMultisphereTraceForPaintAtLocation_Wrapper_Parms), Z_Construct_UFunction_UVertexPaintFunctionLibrary_MultisphereTraceForPaintAtLocation_Wrapper_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UVertexPaintFunctionLibrary_MultisphereTraceForPaintAtLocation_Wrapper_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04C22401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UVertexPaintFunctionLibrary_MultisphereTraceForPaintAtLocation_Wrapper_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UVertexPaintFunctionLibrary_MultisphereTraceForPaintAtLocation_Wrapper_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UVertexPaintFunctionLibrary_MultisphereTraceForPaintAtLocation_Wrapper()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UVertexPaintFunctionLibrary_MultisphereTraceForPaintAtLocation_Wrapper_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UVertexPaintFunctionLibrary_ObjectTypeToCollisionChannel_Statics
	{
		struct VertexPaintFunctionLibrary_eventObjectTypeToCollisionChannel_Parms
		{
			TEnumAsByte<EObjectTypeQuery> object;
			TEnumAsByte<ECollisionChannel> ReturnValue;
		};
		static const UECodeGen_Private::FBytePropertyParams NewProp_object;
		static const UECodeGen_Private::FBytePropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FBytePropertyParams Z_Construct_UFunction_UVertexPaintFunctionLibrary_ObjectTypeToCollisionChannel_Statics::NewProp_object = { "object", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(VertexPaintFunctionLibrary_eventObjectTypeToCollisionChannel_Parms, object), Z_Construct_UEnum_Engine_EObjectTypeQuery, METADATA_PARAMS(nullptr, 0) }; // 3629342158
	const UECodeGen_Private::FBytePropertyParams Z_Construct_UFunction_UVertexPaintFunctionLibrary_ObjectTypeToCollisionChannel_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(VertexPaintFunctionLibrary_eventObjectTypeToCollisionChannel_Parms, ReturnValue), Z_Construct_UEnum_Engine_ECollisionChannel, METADATA_PARAMS(nullptr, 0) }; // 727872708
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UVertexPaintFunctionLibrary_ObjectTypeToCollisionChannel_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UVertexPaintFunctionLibrary_ObjectTypeToCollisionChannel_Statics::NewProp_object,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UVertexPaintFunctionLibrary_ObjectTypeToCollisionChannel_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UVertexPaintFunctionLibrary_ObjectTypeToCollisionChannel_Statics::Function_MetaDataParams[] = {
		{ "Category", "Runtime Vertex Color Paint and Detection Plugin" },
		{ "ModuleRelativePath", "Public/VertexPaintFunctionLibrary.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UVertexPaintFunctionLibrary_ObjectTypeToCollisionChannel_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UVertexPaintFunctionLibrary, nullptr, "ObjectTypeToCollisionChannel", nullptr, nullptr, sizeof(Z_Construct_UFunction_UVertexPaintFunctionLibrary_ObjectTypeToCollisionChannel_Statics::VertexPaintFunctionLibrary_eventObjectTypeToCollisionChannel_Parms), Z_Construct_UFunction_UVertexPaintFunctionLibrary_ObjectTypeToCollisionChannel_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UVertexPaintFunctionLibrary_ObjectTypeToCollisionChannel_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x14022401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UVertexPaintFunctionLibrary_ObjectTypeToCollisionChannel_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UVertexPaintFunctionLibrary_ObjectTypeToCollisionChannel_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UVertexPaintFunctionLibrary_ObjectTypeToCollisionChannel()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UVertexPaintFunctionLibrary_ObjectTypeToCollisionChannel_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UVertexPaintFunctionLibrary_PaintColorSnippetOnMesh_Wrappers_Statics
	{
		struct VertexPaintFunctionLibrary_eventPaintColorSnippetOnMesh_Wrappers_Parms
		{
			UVertexPaintDetectionComponent* runtimeVertexPaintAndDetectionComponent;
			UPrimitiveComponent* meshComponent;
			FVertexPaintColorSnippetStruct paintColorSnippetStruct;
			FVertexDetectAdditionalDataToPassThrough additionalDataToPassThrough;
		};
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_runtimeVertexPaintAndDetectionComponent_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPropertyParams NewProp_runtimeVertexPaintAndDetectionComponent;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_meshComponent_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPropertyParams NewProp_meshComponent;
		static const UECodeGen_Private::FStructPropertyParams NewProp_paintColorSnippetStruct;
		static const UECodeGen_Private::FStructPropertyParams NewProp_additionalDataToPassThrough;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UVertexPaintFunctionLibrary_PaintColorSnippetOnMesh_Wrappers_Statics::NewProp_runtimeVertexPaintAndDetectionComponent_MetaData[] = {
		{ "EditInline", "true" },
	};
#endif
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UVertexPaintFunctionLibrary_PaintColorSnippetOnMesh_Wrappers_Statics::NewProp_runtimeVertexPaintAndDetectionComponent = { "runtimeVertexPaintAndDetectionComponent", nullptr, (EPropertyFlags)0x0010000000080080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(VertexPaintFunctionLibrary_eventPaintColorSnippetOnMesh_Wrappers_Parms, runtimeVertexPaintAndDetectionComponent), Z_Construct_UClass_UVertexPaintDetectionComponent_NoRegister, METADATA_PARAMS(Z_Construct_UFunction_UVertexPaintFunctionLibrary_PaintColorSnippetOnMesh_Wrappers_Statics::NewProp_runtimeVertexPaintAndDetectionComponent_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UVertexPaintFunctionLibrary_PaintColorSnippetOnMesh_Wrappers_Statics::NewProp_runtimeVertexPaintAndDetectionComponent_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UVertexPaintFunctionLibrary_PaintColorSnippetOnMesh_Wrappers_Statics::NewProp_meshComponent_MetaData[] = {
		{ "EditInline", "true" },
	};
#endif
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UVertexPaintFunctionLibrary_PaintColorSnippetOnMesh_Wrappers_Statics::NewProp_meshComponent = { "meshComponent", nullptr, (EPropertyFlags)0x0010000000080080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(VertexPaintFunctionLibrary_eventPaintColorSnippetOnMesh_Wrappers_Parms, meshComponent), Z_Construct_UClass_UPrimitiveComponent_NoRegister, METADATA_PARAMS(Z_Construct_UFunction_UVertexPaintFunctionLibrary_PaintColorSnippetOnMesh_Wrappers_Statics::NewProp_meshComponent_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UVertexPaintFunctionLibrary_PaintColorSnippetOnMesh_Wrappers_Statics::NewProp_meshComponent_MetaData)) };
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UVertexPaintFunctionLibrary_PaintColorSnippetOnMesh_Wrappers_Statics::NewProp_paintColorSnippetStruct = { "paintColorSnippetStruct", nullptr, (EPropertyFlags)0x0010008000000080, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(VertexPaintFunctionLibrary_eventPaintColorSnippetOnMesh_Wrappers_Parms, paintColorSnippetStruct), Z_Construct_UScriptStruct_FVertexPaintColorSnippetStruct, METADATA_PARAMS(nullptr, 0) }; // 3217547297
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UVertexPaintFunctionLibrary_PaintColorSnippetOnMesh_Wrappers_Statics::NewProp_additionalDataToPassThrough = { "additionalDataToPassThrough", nullptr, (EPropertyFlags)0x0010008000000080, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(VertexPaintFunctionLibrary_eventPaintColorSnippetOnMesh_Wrappers_Parms, additionalDataToPassThrough), Z_Construct_UScriptStruct_FVertexDetectAdditionalDataToPassThrough, METADATA_PARAMS(nullptr, 0) }; // 2814627034
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UVertexPaintFunctionLibrary_PaintColorSnippetOnMesh_Wrappers_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UVertexPaintFunctionLibrary_PaintColorSnippetOnMesh_Wrappers_Statics::NewProp_runtimeVertexPaintAndDetectionComponent,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UVertexPaintFunctionLibrary_PaintColorSnippetOnMesh_Wrappers_Statics::NewProp_meshComponent,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UVertexPaintFunctionLibrary_PaintColorSnippetOnMesh_Wrappers_Statics::NewProp_paintColorSnippetStruct,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UVertexPaintFunctionLibrary_PaintColorSnippetOnMesh_Wrappers_Statics::NewProp_additionalDataToPassThrough,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UVertexPaintFunctionLibrary_PaintColorSnippetOnMesh_Wrappers_Statics::Function_MetaDataParams[] = {
		{ "BlueprintInternalUseOnly", "true" },
		{ "Category", "Runtime Vertex Color Paint and Detection Plugin|Paint" },
		{ "ModuleRelativePath", "Public/VertexPaintFunctionLibrary.h" },
		{ "ToolTip", "Paints a Color Snippet on Mesh with the Color Snippet Tag Provided, if the Tag is registered for the Mesh. If it isn't registered for the mesh, or set to default, but we've set to Randomize a Tag under a category, then we will do that instead, if there any tags under that category that is registered to the Mesh. \n\nColor Snippets can be very useful if you want to be able to store snippets of exactly how a Mesh should look for later use, for example variations of Weapon Skins, or if you want your character to look exactly in a certain way for a level, cutscene, or just want to store different variations of zombies and randomly choose a snippet when spawning one. \n\nAffect Cloth Physics is a UE5 Exclusive Feature!" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UVertexPaintFunctionLibrary_PaintColorSnippetOnMesh_Wrappers_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UVertexPaintFunctionLibrary, nullptr, "PaintColorSnippetOnMesh_Wrappers", nullptr, nullptr, sizeof(Z_Construct_UFunction_UVertexPaintFunctionLibrary_PaintColorSnippetOnMesh_Wrappers_Statics::VertexPaintFunctionLibrary_eventPaintColorSnippetOnMesh_Wrappers_Parms), Z_Construct_UFunction_UVertexPaintFunctionLibrary_PaintColorSnippetOnMesh_Wrappers_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UVertexPaintFunctionLibrary_PaintColorSnippetOnMesh_Wrappers_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04022401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UVertexPaintFunctionLibrary_PaintColorSnippetOnMesh_Wrappers_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UVertexPaintFunctionLibrary_PaintColorSnippetOnMesh_Wrappers_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UVertexPaintFunctionLibrary_PaintColorSnippetOnMesh_Wrappers()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UVertexPaintFunctionLibrary_PaintColorSnippetOnMesh_Wrappers_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UVertexPaintFunctionLibrary_PaintOnEntireMesh_Wrapper_Statics
	{
		struct VertexPaintFunctionLibrary_eventPaintOnEntireMesh_Wrapper_Parms
		{
			UVertexPaintDetectionComponent* runtimeVertexPaintAndDetectionComponent;
			UPrimitiveComponent* meshComponent;
			FVertexPaintOnEntireMeshStruct paintOnEntireMeshStruct;
			FVertexDetectAdditionalDataToPassThrough additionalDataToPassThrough;
		};
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_runtimeVertexPaintAndDetectionComponent_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPropertyParams NewProp_runtimeVertexPaintAndDetectionComponent;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_meshComponent_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPropertyParams NewProp_meshComponent;
		static const UECodeGen_Private::FStructPropertyParams NewProp_paintOnEntireMeshStruct;
		static const UECodeGen_Private::FStructPropertyParams NewProp_additionalDataToPassThrough;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UVertexPaintFunctionLibrary_PaintOnEntireMesh_Wrapper_Statics::NewProp_runtimeVertexPaintAndDetectionComponent_MetaData[] = {
		{ "EditInline", "true" },
	};
#endif
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UVertexPaintFunctionLibrary_PaintOnEntireMesh_Wrapper_Statics::NewProp_runtimeVertexPaintAndDetectionComponent = { "runtimeVertexPaintAndDetectionComponent", nullptr, (EPropertyFlags)0x0010000000080080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(VertexPaintFunctionLibrary_eventPaintOnEntireMesh_Wrapper_Parms, runtimeVertexPaintAndDetectionComponent), Z_Construct_UClass_UVertexPaintDetectionComponent_NoRegister, METADATA_PARAMS(Z_Construct_UFunction_UVertexPaintFunctionLibrary_PaintOnEntireMesh_Wrapper_Statics::NewProp_runtimeVertexPaintAndDetectionComponent_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UVertexPaintFunctionLibrary_PaintOnEntireMesh_Wrapper_Statics::NewProp_runtimeVertexPaintAndDetectionComponent_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UVertexPaintFunctionLibrary_PaintOnEntireMesh_Wrapper_Statics::NewProp_meshComponent_MetaData[] = {
		{ "EditInline", "true" },
	};
#endif
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UVertexPaintFunctionLibrary_PaintOnEntireMesh_Wrapper_Statics::NewProp_meshComponent = { "meshComponent", nullptr, (EPropertyFlags)0x0010000000080080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(VertexPaintFunctionLibrary_eventPaintOnEntireMesh_Wrapper_Parms, meshComponent), Z_Construct_UClass_UPrimitiveComponent_NoRegister, METADATA_PARAMS(Z_Construct_UFunction_UVertexPaintFunctionLibrary_PaintOnEntireMesh_Wrapper_Statics::NewProp_meshComponent_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UVertexPaintFunctionLibrary_PaintOnEntireMesh_Wrapper_Statics::NewProp_meshComponent_MetaData)) };
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UVertexPaintFunctionLibrary_PaintOnEntireMesh_Wrapper_Statics::NewProp_paintOnEntireMeshStruct = { "paintOnEntireMeshStruct", nullptr, (EPropertyFlags)0x0010008000000080, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(VertexPaintFunctionLibrary_eventPaintOnEntireMesh_Wrapper_Parms, paintOnEntireMeshStruct), Z_Construct_UScriptStruct_FVertexPaintOnEntireMeshStruct, METADATA_PARAMS(nullptr, 0) }; // 1058477565
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UVertexPaintFunctionLibrary_PaintOnEntireMesh_Wrapper_Statics::NewProp_additionalDataToPassThrough = { "additionalDataToPassThrough", nullptr, (EPropertyFlags)0x0010008000000080, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(VertexPaintFunctionLibrary_eventPaintOnEntireMesh_Wrapper_Parms, additionalDataToPassThrough), Z_Construct_UScriptStruct_FVertexDetectAdditionalDataToPassThrough, METADATA_PARAMS(nullptr, 0) }; // 2814627034
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UVertexPaintFunctionLibrary_PaintOnEntireMesh_Wrapper_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UVertexPaintFunctionLibrary_PaintOnEntireMesh_Wrapper_Statics::NewProp_runtimeVertexPaintAndDetectionComponent,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UVertexPaintFunctionLibrary_PaintOnEntireMesh_Wrapper_Statics::NewProp_meshComponent,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UVertexPaintFunctionLibrary_PaintOnEntireMesh_Wrapper_Statics::NewProp_paintOnEntireMeshStruct,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UVertexPaintFunctionLibrary_PaintOnEntireMesh_Wrapper_Statics::NewProp_additionalDataToPassThrough,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UVertexPaintFunctionLibrary_PaintOnEntireMesh_Wrapper_Statics::Function_MetaDataParams[] = {
		{ "BlueprintInternalUseOnly", "true" },
		{ "Category", "Runtime Vertex Color Paint and Detection Plugin|Paint" },
		{ "ModuleRelativePath", "Public/VertexPaintFunctionLibrary.h" },
		{ "ToolTip", "Paint Vertex Colors on the Entire Mesh on Static, Skeletal or Spline Meshes. \n\n In the Apply Vertex Color Settings you can choose to Set the colors, which is useful if the Mesh's default colors is undesirable and you want to 'Clean' the Mesh by painting it with 0, 0, 0, 0. Remember that with UEs Mesh Painting Tool you can propogate colors to the source mesh permanently, so you can set the source to always be 0, 0, 0, 0. \nPaint Entire Mesh can be combined effectively with Paint Color Conditions under Apply Vertex Color Settings, where you can for instance Paint Entire Mesh, but only if a Channel is between certain values, so for instance under Rooftops won't get painted. \nYou can opt to Paint on Random Vertices over the Entire Mesh as well, which is great for Rain Effects or similar. \n\nAffect Cloth Physics is a UE5 Exclusive Feature!" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UVertexPaintFunctionLibrary_PaintOnEntireMesh_Wrapper_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UVertexPaintFunctionLibrary, nullptr, "PaintOnEntireMesh_Wrapper", nullptr, nullptr, sizeof(Z_Construct_UFunction_UVertexPaintFunctionLibrary_PaintOnEntireMesh_Wrapper_Statics::VertexPaintFunctionLibrary_eventPaintOnEntireMesh_Wrapper_Parms), Z_Construct_UFunction_UVertexPaintFunctionLibrary_PaintOnEntireMesh_Wrapper_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UVertexPaintFunctionLibrary_PaintOnEntireMesh_Wrapper_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04022401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UVertexPaintFunctionLibrary_PaintOnEntireMesh_Wrapper_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UVertexPaintFunctionLibrary_PaintOnEntireMesh_Wrapper_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UVertexPaintFunctionLibrary_PaintOnEntireMesh_Wrapper()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UVertexPaintFunctionLibrary_PaintOnEntireMesh_Wrapper_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UVertexPaintFunctionLibrary_PaintOnMeshAtLocation_Wrapper_Statics
	{
		struct VertexPaintFunctionLibrary_eventPaintOnMeshAtLocation_Wrapper_Parms
		{
			UVertexPaintDetectionComponent* runtimeVertexPaintAndDetectionComponent;
			UPrimitiveComponent* meshComponent;
			FVertexPaintAtLocationStruct paintAtLocationStruct;
			FVertexDetectAdditionalDataToPassThrough additionalDataToPassThrough;
		};
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_runtimeVertexPaintAndDetectionComponent_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPropertyParams NewProp_runtimeVertexPaintAndDetectionComponent;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_meshComponent_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPropertyParams NewProp_meshComponent;
		static const UECodeGen_Private::FStructPropertyParams NewProp_paintAtLocationStruct;
		static const UECodeGen_Private::FStructPropertyParams NewProp_additionalDataToPassThrough;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UVertexPaintFunctionLibrary_PaintOnMeshAtLocation_Wrapper_Statics::NewProp_runtimeVertexPaintAndDetectionComponent_MetaData[] = {
		{ "EditInline", "true" },
	};
#endif
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UVertexPaintFunctionLibrary_PaintOnMeshAtLocation_Wrapper_Statics::NewProp_runtimeVertexPaintAndDetectionComponent = { "runtimeVertexPaintAndDetectionComponent", nullptr, (EPropertyFlags)0x0010000000080080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(VertexPaintFunctionLibrary_eventPaintOnMeshAtLocation_Wrapper_Parms, runtimeVertexPaintAndDetectionComponent), Z_Construct_UClass_UVertexPaintDetectionComponent_NoRegister, METADATA_PARAMS(Z_Construct_UFunction_UVertexPaintFunctionLibrary_PaintOnMeshAtLocation_Wrapper_Statics::NewProp_runtimeVertexPaintAndDetectionComponent_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UVertexPaintFunctionLibrary_PaintOnMeshAtLocation_Wrapper_Statics::NewProp_runtimeVertexPaintAndDetectionComponent_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UVertexPaintFunctionLibrary_PaintOnMeshAtLocation_Wrapper_Statics::NewProp_meshComponent_MetaData[] = {
		{ "EditInline", "true" },
	};
#endif
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UVertexPaintFunctionLibrary_PaintOnMeshAtLocation_Wrapper_Statics::NewProp_meshComponent = { "meshComponent", nullptr, (EPropertyFlags)0x0010000000080080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(VertexPaintFunctionLibrary_eventPaintOnMeshAtLocation_Wrapper_Parms, meshComponent), Z_Construct_UClass_UPrimitiveComponent_NoRegister, METADATA_PARAMS(Z_Construct_UFunction_UVertexPaintFunctionLibrary_PaintOnMeshAtLocation_Wrapper_Statics::NewProp_meshComponent_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UVertexPaintFunctionLibrary_PaintOnMeshAtLocation_Wrapper_Statics::NewProp_meshComponent_MetaData)) };
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UVertexPaintFunctionLibrary_PaintOnMeshAtLocation_Wrapper_Statics::NewProp_paintAtLocationStruct = { "paintAtLocationStruct", nullptr, (EPropertyFlags)0x0010008000000080, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(VertexPaintFunctionLibrary_eventPaintOnMeshAtLocation_Wrapper_Parms, paintAtLocationStruct), Z_Construct_UScriptStruct_FVertexPaintAtLocationStruct, METADATA_PARAMS(nullptr, 0) }; // 2458551041
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UVertexPaintFunctionLibrary_PaintOnMeshAtLocation_Wrapper_Statics::NewProp_additionalDataToPassThrough = { "additionalDataToPassThrough", nullptr, (EPropertyFlags)0x0010008000000080, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(VertexPaintFunctionLibrary_eventPaintOnMeshAtLocation_Wrapper_Parms, additionalDataToPassThrough), Z_Construct_UScriptStruct_FVertexDetectAdditionalDataToPassThrough, METADATA_PARAMS(nullptr, 0) }; // 2814627034
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UVertexPaintFunctionLibrary_PaintOnMeshAtLocation_Wrapper_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UVertexPaintFunctionLibrary_PaintOnMeshAtLocation_Wrapper_Statics::NewProp_runtimeVertexPaintAndDetectionComponent,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UVertexPaintFunctionLibrary_PaintOnMeshAtLocation_Wrapper_Statics::NewProp_meshComponent,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UVertexPaintFunctionLibrary_PaintOnMeshAtLocation_Wrapper_Statics::NewProp_paintAtLocationStruct,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UVertexPaintFunctionLibrary_PaintOnMeshAtLocation_Wrapper_Statics::NewProp_additionalDataToPassThrough,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UVertexPaintFunctionLibrary_PaintOnMeshAtLocation_Wrapper_Statics::Function_MetaDataParams[] = {
		{ "BlueprintInternalUseOnly", "true" },
		{ "Category", "Runtime Vertex Color Paint and Detection Plugin|Paint" },
		{ "ModuleRelativePath", "Public/VertexPaintFunctionLibrary.h" },
		{ "ToolTip", "Paint Vertex Colors in Runtime on Static, Skeletal or Spline Meshes. \n\nStrength to Apply should be between -1 - 1, Fall Off Strength 0-1, Area of Effect > 0, Area of Effect with Full Color > 0 if you want to have an area around the paint location to be fully painted. \n\nPaint on Color Limit can be used if you don't want to paint over a certain amount on a channel, for instance if Rain should only be able to make you wet up to a certain amount. \n\nTrace Complex has to be True if Line Tracing as it is required to get the faceIndex! \n\nAffect Cloth Physics is a UE5 Exclusive Feature!" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UVertexPaintFunctionLibrary_PaintOnMeshAtLocation_Wrapper_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UVertexPaintFunctionLibrary, nullptr, "PaintOnMeshAtLocation_Wrapper", nullptr, nullptr, sizeof(Z_Construct_UFunction_UVertexPaintFunctionLibrary_PaintOnMeshAtLocation_Wrapper_Statics::VertexPaintFunctionLibrary_eventPaintOnMeshAtLocation_Wrapper_Parms), Z_Construct_UFunction_UVertexPaintFunctionLibrary_PaintOnMeshAtLocation_Wrapper_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UVertexPaintFunctionLibrary_PaintOnMeshAtLocation_Wrapper_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04022401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UVertexPaintFunctionLibrary_PaintOnMeshAtLocation_Wrapper_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UVertexPaintFunctionLibrary_PaintOnMeshAtLocation_Wrapper_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UVertexPaintFunctionLibrary_PaintOnMeshAtLocation_Wrapper()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UVertexPaintFunctionLibrary_PaintOnMeshAtLocation_Wrapper_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UVertexPaintFunctionLibrary_PaintOnMeshWithinArea_Wrapper_Statics
	{
		struct VertexPaintFunctionLibrary_eventPaintOnMeshWithinArea_Wrapper_Parms
		{
			UVertexPaintDetectionComponent* runtimeVertexPaintAndDetectionComponent;
			UPrimitiveComponent* meshComponent;
			TArray<FVertexPainthWithinArea_ComponentToCheckIfIsWithinInfo> componentsToCheckIfIsWithin;
			FVertexPainthWithinAreaStruct paintWithinAreaStruct;
			FVertexDetectAdditionalDataToPassThrough additionalDataToPassThrough;
		};
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_runtimeVertexPaintAndDetectionComponent_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPropertyParams NewProp_runtimeVertexPaintAndDetectionComponent;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_meshComponent_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPropertyParams NewProp_meshComponent;
		static const UECodeGen_Private::FStructPropertyParams NewProp_componentsToCheckIfIsWithin_Inner;
		static const UECodeGen_Private::FArrayPropertyParams NewProp_componentsToCheckIfIsWithin;
		static const UECodeGen_Private::FStructPropertyParams NewProp_paintWithinAreaStruct;
		static const UECodeGen_Private::FStructPropertyParams NewProp_additionalDataToPassThrough;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UVertexPaintFunctionLibrary_PaintOnMeshWithinArea_Wrapper_Statics::NewProp_runtimeVertexPaintAndDetectionComponent_MetaData[] = {
		{ "EditInline", "true" },
	};
#endif
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UVertexPaintFunctionLibrary_PaintOnMeshWithinArea_Wrapper_Statics::NewProp_runtimeVertexPaintAndDetectionComponent = { "runtimeVertexPaintAndDetectionComponent", nullptr, (EPropertyFlags)0x0010000000080080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(VertexPaintFunctionLibrary_eventPaintOnMeshWithinArea_Wrapper_Parms, runtimeVertexPaintAndDetectionComponent), Z_Construct_UClass_UVertexPaintDetectionComponent_NoRegister, METADATA_PARAMS(Z_Construct_UFunction_UVertexPaintFunctionLibrary_PaintOnMeshWithinArea_Wrapper_Statics::NewProp_runtimeVertexPaintAndDetectionComponent_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UVertexPaintFunctionLibrary_PaintOnMeshWithinArea_Wrapper_Statics::NewProp_runtimeVertexPaintAndDetectionComponent_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UVertexPaintFunctionLibrary_PaintOnMeshWithinArea_Wrapper_Statics::NewProp_meshComponent_MetaData[] = {
		{ "EditInline", "true" },
	};
#endif
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UVertexPaintFunctionLibrary_PaintOnMeshWithinArea_Wrapper_Statics::NewProp_meshComponent = { "meshComponent", nullptr, (EPropertyFlags)0x0010000000080080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(VertexPaintFunctionLibrary_eventPaintOnMeshWithinArea_Wrapper_Parms, meshComponent), Z_Construct_UClass_UPrimitiveComponent_NoRegister, METADATA_PARAMS(Z_Construct_UFunction_UVertexPaintFunctionLibrary_PaintOnMeshWithinArea_Wrapper_Statics::NewProp_meshComponent_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UVertexPaintFunctionLibrary_PaintOnMeshWithinArea_Wrapper_Statics::NewProp_meshComponent_MetaData)) };
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UVertexPaintFunctionLibrary_PaintOnMeshWithinArea_Wrapper_Statics::NewProp_componentsToCheckIfIsWithin_Inner = { "componentsToCheckIfIsWithin", nullptr, (EPropertyFlags)0x0000008000000000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, 0, Z_Construct_UScriptStruct_FVertexPainthWithinArea_ComponentToCheckIfIsWithinInfo, METADATA_PARAMS(nullptr, 0) }; // 2525130228
	const UECodeGen_Private::FArrayPropertyParams Z_Construct_UFunction_UVertexPaintFunctionLibrary_PaintOnMeshWithinArea_Wrapper_Statics::NewProp_componentsToCheckIfIsWithin = { "componentsToCheckIfIsWithin", nullptr, (EPropertyFlags)0x0010008000000080, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(VertexPaintFunctionLibrary_eventPaintOnMeshWithinArea_Wrapper_Parms, componentsToCheckIfIsWithin), EArrayPropertyFlags::None, METADATA_PARAMS(nullptr, 0) }; // 2525130228
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UVertexPaintFunctionLibrary_PaintOnMeshWithinArea_Wrapper_Statics::NewProp_paintWithinAreaStruct = { "paintWithinAreaStruct", nullptr, (EPropertyFlags)0x0010008000000080, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(VertexPaintFunctionLibrary_eventPaintOnMeshWithinArea_Wrapper_Parms, paintWithinAreaStruct), Z_Construct_UScriptStruct_FVertexPainthWithinAreaStruct, METADATA_PARAMS(nullptr, 0) }; // 2301722162
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UVertexPaintFunctionLibrary_PaintOnMeshWithinArea_Wrapper_Statics::NewProp_additionalDataToPassThrough = { "additionalDataToPassThrough", nullptr, (EPropertyFlags)0x0010008000000080, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(VertexPaintFunctionLibrary_eventPaintOnMeshWithinArea_Wrapper_Parms, additionalDataToPassThrough), Z_Construct_UScriptStruct_FVertexDetectAdditionalDataToPassThrough, METADATA_PARAMS(nullptr, 0) }; // 2814627034
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UVertexPaintFunctionLibrary_PaintOnMeshWithinArea_Wrapper_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UVertexPaintFunctionLibrary_PaintOnMeshWithinArea_Wrapper_Statics::NewProp_runtimeVertexPaintAndDetectionComponent,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UVertexPaintFunctionLibrary_PaintOnMeshWithinArea_Wrapper_Statics::NewProp_meshComponent,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UVertexPaintFunctionLibrary_PaintOnMeshWithinArea_Wrapper_Statics::NewProp_componentsToCheckIfIsWithin_Inner,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UVertexPaintFunctionLibrary_PaintOnMeshWithinArea_Wrapper_Statics::NewProp_componentsToCheckIfIsWithin,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UVertexPaintFunctionLibrary_PaintOnMeshWithinArea_Wrapper_Statics::NewProp_paintWithinAreaStruct,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UVertexPaintFunctionLibrary_PaintOnMeshWithinArea_Wrapper_Statics::NewProp_additionalDataToPassThrough,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UVertexPaintFunctionLibrary_PaintOnMeshWithinArea_Wrapper_Statics::Function_MetaDataParams[] = {
		{ "BlueprintInternalUseOnly", "true" },
		{ "Category", "Runtime Vertex Color Paint and Detection Plugin|Paint" },
		{ "ModuleRelativePath", "Public/VertexPaintFunctionLibrary.h" },
		{ "ToolTip", "Paint Vertex Colors on a Static, Skeletal or Spline Meshes on what is Within the componentToCheckIfIsWithins Area. \n\nStrength to Apply should be between -1 - 1, Fall Off Strength 0-1, Area of Effect with Full Color > 0 if you want an area in the component location to have full color. \n\nRecommended to use isSphereShape, or isSquareOrRectangleShape such as a big rectangle for example for a body of water, as they are the cheapest. \n\nisComplexShape is expensive since for every vertex on the component that is within the bounds of componentToCheckIfIsWithin, we line trace to see if it hits componentToCheckIfIsWithin collison. Should only be used if you really need a mesh with complex shapes, like if you paint a pattern once or something. \n\nNOTE Extra Extent to Apply Paint does Not work for isComplexShape. \n\nAffect Cloth Physics is a UE5 Exclusive Feature!" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UVertexPaintFunctionLibrary_PaintOnMeshWithinArea_Wrapper_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UVertexPaintFunctionLibrary, nullptr, "PaintOnMeshWithinArea_Wrapper", nullptr, nullptr, sizeof(Z_Construct_UFunction_UVertexPaintFunctionLibrary_PaintOnMeshWithinArea_Wrapper_Statics::VertexPaintFunctionLibrary_eventPaintOnMeshWithinArea_Wrapper_Parms), Z_Construct_UFunction_UVertexPaintFunctionLibrary_PaintOnMeshWithinArea_Wrapper_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UVertexPaintFunctionLibrary_PaintOnMeshWithinArea_Wrapper_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04022401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UVertexPaintFunctionLibrary_PaintOnMeshWithinArea_Wrapper_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UVertexPaintFunctionLibrary_PaintOnMeshWithinArea_Wrapper_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UVertexPaintFunctionLibrary_PaintOnMeshWithinArea_Wrapper()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UVertexPaintFunctionLibrary_PaintOnMeshWithinArea_Wrapper_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UVertexPaintFunctionLibrary_SetChaosClothPhysics_Statics
	{
		struct VertexPaintFunctionLibrary_eventSetChaosClothPhysics_Parms
		{
			USkeletalMeshComponent* skeletalMeshComponent;
			UClothingAssetBase* clothingAsset;
			FVertexDetectChaosClothPhysicsSettings clothPhysicsSettings;
		};
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_skeletalMeshComponent_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPropertyParams NewProp_skeletalMeshComponent;
		static const UECodeGen_Private::FObjectPropertyParams NewProp_clothingAsset;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_clothPhysicsSettings_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_clothPhysicsSettings;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UVertexPaintFunctionLibrary_SetChaosClothPhysics_Statics::NewProp_skeletalMeshComponent_MetaData[] = {
		{ "EditInline", "true" },
	};
#endif
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UVertexPaintFunctionLibrary_SetChaosClothPhysics_Statics::NewProp_skeletalMeshComponent = { "skeletalMeshComponent", nullptr, (EPropertyFlags)0x0010000000080080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(VertexPaintFunctionLibrary_eventSetChaosClothPhysics_Parms, skeletalMeshComponent), Z_Construct_UClass_USkeletalMeshComponent_NoRegister, METADATA_PARAMS(Z_Construct_UFunction_UVertexPaintFunctionLibrary_SetChaosClothPhysics_Statics::NewProp_skeletalMeshComponent_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UVertexPaintFunctionLibrary_SetChaosClothPhysics_Statics::NewProp_skeletalMeshComponent_MetaData)) };
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UVertexPaintFunctionLibrary_SetChaosClothPhysics_Statics::NewProp_clothingAsset = { "clothingAsset", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(VertexPaintFunctionLibrary_eventSetChaosClothPhysics_Parms, clothingAsset), Z_Construct_UClass_UClothingAssetBase_NoRegister, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UVertexPaintFunctionLibrary_SetChaosClothPhysics_Statics::NewProp_clothPhysicsSettings_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UVertexPaintFunctionLibrary_SetChaosClothPhysics_Statics::NewProp_clothPhysicsSettings = { "clothPhysicsSettings", nullptr, (EPropertyFlags)0x0010000008000182, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(VertexPaintFunctionLibrary_eventSetChaosClothPhysics_Parms, clothPhysicsSettings), Z_Construct_UScriptStruct_FVertexDetectChaosClothPhysicsSettings, METADATA_PARAMS(Z_Construct_UFunction_UVertexPaintFunctionLibrary_SetChaosClothPhysics_Statics::NewProp_clothPhysicsSettings_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UVertexPaintFunctionLibrary_SetChaosClothPhysics_Statics::NewProp_clothPhysicsSettings_MetaData)) }; // 2809065833
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UVertexPaintFunctionLibrary_SetChaosClothPhysics_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UVertexPaintFunctionLibrary_SetChaosClothPhysics_Statics::NewProp_skeletalMeshComponent,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UVertexPaintFunctionLibrary_SetChaosClothPhysics_Statics::NewProp_clothingAsset,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UVertexPaintFunctionLibrary_SetChaosClothPhysics_Statics::NewProp_clothPhysicsSettings,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UVertexPaintFunctionLibrary_SetChaosClothPhysics_Statics::Function_MetaDataParams[] = {
		{ "Category", "Runtime Vertex Color Paint and Detection Plugin|Cloth" },
		{ "ModuleRelativePath", "Public/VertexPaintFunctionLibrary.h" },
		{ "ToolTip", "Set Cloth Physics on the Cloth sent in for the Skeletal Mesh. Can use UVertexPaintFunctionLibrary::VertexPaintDetectionPlugin_GetClothingAssets() to get a Skeletal Meshes Clothing Assets in the order they're set in the Skeletal Mesh, so you have to be aware of which cloth is at which index. \nNOTE Affecting Cloth Physics is a UE5 exclusive feature, and Painting on Skeletal Meshes with Proxy Simulated Cloth is not supported, for example the Wind Walker Echo Character. Only Cloth created the regular way through the editor!" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UVertexPaintFunctionLibrary_SetChaosClothPhysics_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UVertexPaintFunctionLibrary, nullptr, "SetChaosClothPhysics", nullptr, nullptr, sizeof(Z_Construct_UFunction_UVertexPaintFunctionLibrary_SetChaosClothPhysics_Statics::VertexPaintFunctionLibrary_eventSetChaosClothPhysics_Parms), Z_Construct_UFunction_UVertexPaintFunctionLibrary_SetChaosClothPhysics_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UVertexPaintFunctionLibrary_SetChaosClothPhysics_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04422401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UVertexPaintFunctionLibrary_SetChaosClothPhysics_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UVertexPaintFunctionLibrary_SetChaosClothPhysics_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UVertexPaintFunctionLibrary_SetChaosClothPhysics()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UVertexPaintFunctionLibrary_SetChaosClothPhysics_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UVertexPaintFunctionLibrary_SetChaosWheeledVehicleFrictionMultiplier_Wrapper_Statics
	{
		struct VertexPaintFunctionLibrary_eventSetChaosWheeledVehicleFrictionMultiplier_Wrapper_Parms
		{
			UChaosWheeledVehicleMovementComponent* chaosWheeledVehicleMovementComponent;
			int32 wheelIndex;
			float friction;
		};
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_chaosWheeledVehicleMovementComponent_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPropertyParams NewProp_chaosWheeledVehicleMovementComponent;
		static const UECodeGen_Private::FUnsizedIntPropertyParams NewProp_wheelIndex;
		static const UECodeGen_Private::FFloatPropertyParams NewProp_friction;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UVertexPaintFunctionLibrary_SetChaosWheeledVehicleFrictionMultiplier_Wrapper_Statics::NewProp_chaosWheeledVehicleMovementComponent_MetaData[] = {
		{ "EditInline", "true" },
	};
#endif
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UVertexPaintFunctionLibrary_SetChaosWheeledVehicleFrictionMultiplier_Wrapper_Statics::NewProp_chaosWheeledVehicleMovementComponent = { "chaosWheeledVehicleMovementComponent", nullptr, (EPropertyFlags)0x0010000000080080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(VertexPaintFunctionLibrary_eventSetChaosWheeledVehicleFrictionMultiplier_Wrapper_Parms, chaosWheeledVehicleMovementComponent), Z_Construct_UClass_UChaosWheeledVehicleMovementComponent_NoRegister, METADATA_PARAMS(Z_Construct_UFunction_UVertexPaintFunctionLibrary_SetChaosWheeledVehicleFrictionMultiplier_Wrapper_Statics::NewProp_chaosWheeledVehicleMovementComponent_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UVertexPaintFunctionLibrary_SetChaosWheeledVehicleFrictionMultiplier_Wrapper_Statics::NewProp_chaosWheeledVehicleMovementComponent_MetaData)) };
	const UECodeGen_Private::FUnsizedIntPropertyParams Z_Construct_UFunction_UVertexPaintFunctionLibrary_SetChaosWheeledVehicleFrictionMultiplier_Wrapper_Statics::NewProp_wheelIndex = { "wheelIndex", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(VertexPaintFunctionLibrary_eventSetChaosWheeledVehicleFrictionMultiplier_Wrapper_Parms, wheelIndex), METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_UVertexPaintFunctionLibrary_SetChaosWheeledVehicleFrictionMultiplier_Wrapper_Statics::NewProp_friction = { "friction", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(VertexPaintFunctionLibrary_eventSetChaosWheeledVehicleFrictionMultiplier_Wrapper_Parms, friction), METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UVertexPaintFunctionLibrary_SetChaosWheeledVehicleFrictionMultiplier_Wrapper_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UVertexPaintFunctionLibrary_SetChaosWheeledVehicleFrictionMultiplier_Wrapper_Statics::NewProp_chaosWheeledVehicleMovementComponent,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UVertexPaintFunctionLibrary_SetChaosWheeledVehicleFrictionMultiplier_Wrapper_Statics::NewProp_wheelIndex,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UVertexPaintFunctionLibrary_SetChaosWheeledVehicleFrictionMultiplier_Wrapper_Statics::NewProp_friction,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UVertexPaintFunctionLibrary_SetChaosWheeledVehicleFrictionMultiplier_Wrapper_Statics::Function_MetaDataParams[] = {
		{ "BlueprintInternalUseOnly", "true" },
		{ "Category", "Runtime Vertex Color Paint and Detection Plugin" },
		{ "ModuleRelativePath", "Public/VertexPaintFunctionLibrary.h" },
		{ "ToolTip", "Useful function for affecting the friction of a Chaos Wheeled Vehicle Wheel, used by the BPC_RuntimeVertexPaintAndDetectionComponent_VehicleWheel when it is driving over Meshes to make sure the vehicle gets it's friction affected then as well, just like when it's driving over landscapes. \nSince UE4's Chaos Wheeled Vehicle Component doesn't have the set friction multiplier function, i made a wrapper that runs it if it's UE5." },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UVertexPaintFunctionLibrary_SetChaosWheeledVehicleFrictionMultiplier_Wrapper_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UVertexPaintFunctionLibrary, nullptr, "SetChaosWheeledVehicleFrictionMultiplier_Wrapper", nullptr, nullptr, sizeof(Z_Construct_UFunction_UVertexPaintFunctionLibrary_SetChaosWheeledVehicleFrictionMultiplier_Wrapper_Statics::VertexPaintFunctionLibrary_eventSetChaosWheeledVehicleFrictionMultiplier_Wrapper_Parms), Z_Construct_UFunction_UVertexPaintFunctionLibrary_SetChaosWheeledVehicleFrictionMultiplier_Wrapper_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UVertexPaintFunctionLibrary_SetChaosWheeledVehicleFrictionMultiplier_Wrapper_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04022401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UVertexPaintFunctionLibrary_SetChaosWheeledVehicleFrictionMultiplier_Wrapper_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UVertexPaintFunctionLibrary_SetChaosWheeledVehicleFrictionMultiplier_Wrapper_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UVertexPaintFunctionLibrary_SetChaosWheeledVehicleFrictionMultiplier_Wrapper()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UVertexPaintFunctionLibrary_SetChaosWheeledVehicleFrictionMultiplier_Wrapper_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UVertexPaintFunctionLibrary_SetMeshComponentVertexColors_Wrapper_Statics
	{
		struct VertexPaintFunctionLibrary_eventSetMeshComponentVertexColors_Wrapper_Parms
		{
			UPrimitiveComponent* meshComponent;
			FVertexPaintSetMeshComponentVertexColors setMeshComponentVertexColorsSettings;
			FVertexDetectAdditionalDataToPassThrough additionalDataToPassThrough;
		};
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_meshComponent_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPropertyParams NewProp_meshComponent;
		static const UECodeGen_Private::FStructPropertyParams NewProp_setMeshComponentVertexColorsSettings;
		static const UECodeGen_Private::FStructPropertyParams NewProp_additionalDataToPassThrough;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UVertexPaintFunctionLibrary_SetMeshComponentVertexColors_Wrapper_Statics::NewProp_meshComponent_MetaData[] = {
		{ "EditInline", "true" },
	};
#endif
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UVertexPaintFunctionLibrary_SetMeshComponentVertexColors_Wrapper_Statics::NewProp_meshComponent = { "meshComponent", nullptr, (EPropertyFlags)0x0010000000080080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(VertexPaintFunctionLibrary_eventSetMeshComponentVertexColors_Wrapper_Parms, meshComponent), Z_Construct_UClass_UPrimitiveComponent_NoRegister, METADATA_PARAMS(Z_Construct_UFunction_UVertexPaintFunctionLibrary_SetMeshComponentVertexColors_Wrapper_Statics::NewProp_meshComponent_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UVertexPaintFunctionLibrary_SetMeshComponentVertexColors_Wrapper_Statics::NewProp_meshComponent_MetaData)) };
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UVertexPaintFunctionLibrary_SetMeshComponentVertexColors_Wrapper_Statics::NewProp_setMeshComponentVertexColorsSettings = { "setMeshComponentVertexColorsSettings", nullptr, (EPropertyFlags)0x0010008000000080, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(VertexPaintFunctionLibrary_eventSetMeshComponentVertexColors_Wrapper_Parms, setMeshComponentVertexColorsSettings), Z_Construct_UScriptStruct_FVertexPaintSetMeshComponentVertexColors, METADATA_PARAMS(nullptr, 0) }; // 1754673819
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UVertexPaintFunctionLibrary_SetMeshComponentVertexColors_Wrapper_Statics::NewProp_additionalDataToPassThrough = { "additionalDataToPassThrough", nullptr, (EPropertyFlags)0x0010008000000080, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(VertexPaintFunctionLibrary_eventSetMeshComponentVertexColors_Wrapper_Parms, additionalDataToPassThrough), Z_Construct_UScriptStruct_FVertexDetectAdditionalDataToPassThrough, METADATA_PARAMS(nullptr, 0) }; // 2814627034
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UVertexPaintFunctionLibrary_SetMeshComponentVertexColors_Wrapper_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UVertexPaintFunctionLibrary_SetMeshComponentVertexColors_Wrapper_Statics::NewProp_meshComponent,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UVertexPaintFunctionLibrary_SetMeshComponentVertexColors_Wrapper_Statics::NewProp_setMeshComponentVertexColorsSettings,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UVertexPaintFunctionLibrary_SetMeshComponentVertexColors_Wrapper_Statics::NewProp_additionalDataToPassThrough,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UVertexPaintFunctionLibrary_SetMeshComponentVertexColors_Wrapper_Statics::Function_MetaDataParams[] = {
		{ "BlueprintInternalUseOnly", "true" },
		{ "Category", "Runtime Vertex Color Paint and Detection Plugin|Paint" },
		{ "ModuleRelativePath", "Public/VertexPaintFunctionLibrary.h" },
		{ "ToolTip", "Sets Color Data to a Component using FVertexDetectMeshDataStruct. You can opt to provide a Component as well, if you do then you will get a Callback on it's FSetMeshComponentVertexColors Delegate, which can be useful if you want to Load Data, but don't want to start 50 tasks at once but do them one at a time. Then for each callback to the delegate, you can start the next task.\n You can choose if you want to propogate LOD0 Colors to the rest, this is useful if you for instance have a Save/Load system, and only want to save LOD0 to save storage." },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UVertexPaintFunctionLibrary_SetMeshComponentVertexColors_Wrapper_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UVertexPaintFunctionLibrary, nullptr, "SetMeshComponentVertexColors_Wrapper", nullptr, nullptr, sizeof(Z_Construct_UFunction_UVertexPaintFunctionLibrary_SetMeshComponentVertexColors_Wrapper_Statics::VertexPaintFunctionLibrary_eventSetMeshComponentVertexColors_Wrapper_Parms), Z_Construct_UFunction_UVertexPaintFunctionLibrary_SetMeshComponentVertexColors_Wrapper_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UVertexPaintFunctionLibrary_SetMeshComponentVertexColors_Wrapper_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04022401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UVertexPaintFunctionLibrary_SetMeshComponentVertexColors_Wrapper_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UVertexPaintFunctionLibrary_SetMeshComponentVertexColors_Wrapper_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UVertexPaintFunctionLibrary_SetMeshComponentVertexColors_Wrapper()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UVertexPaintFunctionLibrary_SetMeshComponentVertexColors_Wrapper_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UVertexPaintFunctionLibrary_SetMeshComponentVertexColorsUsingSerializedString_Wrapper_Statics
	{
		struct VertexPaintFunctionLibrary_eventSetMeshComponentVertexColorsUsingSerializedString_Wrapper_Parms
		{
			UPrimitiveComponent* meshComponent;
			FVertexPaintSetMeshComponentVertexColorsUsingSerializedString setMeshComponentVertexColorsUsingSerializedStringSettings;
			FVertexDetectAdditionalDataToPassThrough additionalDataToPassThrough;
		};
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_meshComponent_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPropertyParams NewProp_meshComponent;
		static const UECodeGen_Private::FStructPropertyParams NewProp_setMeshComponentVertexColorsUsingSerializedStringSettings;
		static const UECodeGen_Private::FStructPropertyParams NewProp_additionalDataToPassThrough;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UVertexPaintFunctionLibrary_SetMeshComponentVertexColorsUsingSerializedString_Wrapper_Statics::NewProp_meshComponent_MetaData[] = {
		{ "EditInline", "true" },
	};
#endif
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UVertexPaintFunctionLibrary_SetMeshComponentVertexColorsUsingSerializedString_Wrapper_Statics::NewProp_meshComponent = { "meshComponent", nullptr, (EPropertyFlags)0x0010000000080080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(VertexPaintFunctionLibrary_eventSetMeshComponentVertexColorsUsingSerializedString_Wrapper_Parms, meshComponent), Z_Construct_UClass_UPrimitiveComponent_NoRegister, METADATA_PARAMS(Z_Construct_UFunction_UVertexPaintFunctionLibrary_SetMeshComponentVertexColorsUsingSerializedString_Wrapper_Statics::NewProp_meshComponent_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UVertexPaintFunctionLibrary_SetMeshComponentVertexColorsUsingSerializedString_Wrapper_Statics::NewProp_meshComponent_MetaData)) };
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UVertexPaintFunctionLibrary_SetMeshComponentVertexColorsUsingSerializedString_Wrapper_Statics::NewProp_setMeshComponentVertexColorsUsingSerializedStringSettings = { "setMeshComponentVertexColorsUsingSerializedStringSettings", nullptr, (EPropertyFlags)0x0010008000000080, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(VertexPaintFunctionLibrary_eventSetMeshComponentVertexColorsUsingSerializedString_Wrapper_Parms, setMeshComponentVertexColorsUsingSerializedStringSettings), Z_Construct_UScriptStruct_FVertexPaintSetMeshComponentVertexColorsUsingSerializedString, METADATA_PARAMS(nullptr, 0) }; // 3645531924
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UVertexPaintFunctionLibrary_SetMeshComponentVertexColorsUsingSerializedString_Wrapper_Statics::NewProp_additionalDataToPassThrough = { "additionalDataToPassThrough", nullptr, (EPropertyFlags)0x0010008000000080, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(VertexPaintFunctionLibrary_eventSetMeshComponentVertexColorsUsingSerializedString_Wrapper_Parms, additionalDataToPassThrough), Z_Construct_UScriptStruct_FVertexDetectAdditionalDataToPassThrough, METADATA_PARAMS(nullptr, 0) }; // 2814627034
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UVertexPaintFunctionLibrary_SetMeshComponentVertexColorsUsingSerializedString_Wrapper_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UVertexPaintFunctionLibrary_SetMeshComponentVertexColorsUsingSerializedString_Wrapper_Statics::NewProp_meshComponent,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UVertexPaintFunctionLibrary_SetMeshComponentVertexColorsUsingSerializedString_Wrapper_Statics::NewProp_setMeshComponentVertexColorsUsingSerializedStringSettings,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UVertexPaintFunctionLibrary_SetMeshComponentVertexColorsUsingSerializedString_Wrapper_Statics::NewProp_additionalDataToPassThrough,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UVertexPaintFunctionLibrary_SetMeshComponentVertexColorsUsingSerializedString_Wrapper_Statics::Function_MetaDataParams[] = {
		{ "BlueprintInternalUseOnly", "true" },
		{ "Category", "Runtime Vertex Color Paint and Detection Plugin|Paint" },
		{ "ModuleRelativePath", "Public/VertexPaintFunctionLibrary.h" },
		{ "ToolTip", "Sets Color Data to a Component using Serialized String, useful if Loading Data. You can opt to provide a Component as well, if you do then you will get a Callback on it's FSetMeshComponentVertexColors Delegate, which can be useful if you want to Load Data, but don't want to start 50 tasks at once but do them one at a time. Then for each callback to the delegate, you can start the next task.\n You can choose if you want to propogate LOD0 Colors to the rest, this is useful if you for instance have a Save/Load system, and only want to save LOD0 to save storage." },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UVertexPaintFunctionLibrary_SetMeshComponentVertexColorsUsingSerializedString_Wrapper_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UVertexPaintFunctionLibrary, nullptr, "SetMeshComponentVertexColorsUsingSerializedString_Wrapper", nullptr, nullptr, sizeof(Z_Construct_UFunction_UVertexPaintFunctionLibrary_SetMeshComponentVertexColorsUsingSerializedString_Wrapper_Statics::VertexPaintFunctionLibrary_eventSetMeshComponentVertexColorsUsingSerializedString_Wrapper_Parms), Z_Construct_UFunction_UVertexPaintFunctionLibrary_SetMeshComponentVertexColorsUsingSerializedString_Wrapper_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UVertexPaintFunctionLibrary_SetMeshComponentVertexColorsUsingSerializedString_Wrapper_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04022401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UVertexPaintFunctionLibrary_SetMeshComponentVertexColorsUsingSerializedString_Wrapper_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UVertexPaintFunctionLibrary_SetMeshComponentVertexColorsUsingSerializedString_Wrapper_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UVertexPaintFunctionLibrary_SetMeshComponentVertexColorsUsingSerializedString_Wrapper()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UVertexPaintFunctionLibrary_SetMeshComponentVertexColorsUsingSerializedString_Wrapper_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UVertexPaintFunctionLibrary_UpdateChaosClothPhysicsWithExistingColors_Statics
	{
		struct VertexPaintFunctionLibrary_eventUpdateChaosClothPhysicsWithExistingColors_Parms
		{
			USkeletalMeshComponent* skeletalMeshComponent;
		};
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_skeletalMeshComponent_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPropertyParams NewProp_skeletalMeshComponent;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UVertexPaintFunctionLibrary_UpdateChaosClothPhysicsWithExistingColors_Statics::NewProp_skeletalMeshComponent_MetaData[] = {
		{ "EditInline", "true" },
	};
#endif
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UVertexPaintFunctionLibrary_UpdateChaosClothPhysicsWithExistingColors_Statics::NewProp_skeletalMeshComponent = { "skeletalMeshComponent", nullptr, (EPropertyFlags)0x0010000000080080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(VertexPaintFunctionLibrary_eventUpdateChaosClothPhysicsWithExistingColors_Parms, skeletalMeshComponent), Z_Construct_UClass_USkeletalMeshComponent_NoRegister, METADATA_PARAMS(Z_Construct_UFunction_UVertexPaintFunctionLibrary_UpdateChaosClothPhysicsWithExistingColors_Statics::NewProp_skeletalMeshComponent_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UVertexPaintFunctionLibrary_UpdateChaosClothPhysicsWithExistingColors_Statics::NewProp_skeletalMeshComponent_MetaData)) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UVertexPaintFunctionLibrary_UpdateChaosClothPhysicsWithExistingColors_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UVertexPaintFunctionLibrary_UpdateChaosClothPhysicsWithExistingColors_Statics::NewProp_skeletalMeshComponent,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UVertexPaintFunctionLibrary_UpdateChaosClothPhysicsWithExistingColors_Statics::Function_MetaDataParams[] = {
		{ "Category", "Runtime Vertex Color Paint and Detection Plugin|Cloth" },
		{ "ModuleRelativePath", "Public/VertexPaintFunctionLibrary.h" },
		{ "ToolTip", "Updates Cloth Physics with the exisisting Vertex Colors \nThis function is useful if Vertex Colors has been changed by something else other than the component, or pre-painetd in the editor and you want them to behave correctly. \nNOTE Affecting Cloth Physics is a UE5 exclusive feature, and Painting on Skeletal Meshes with Proxy Simulated Cloth is not supported, for example the Wind Walker Echo Character. Only Cloth created the regular way through the editor!" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UVertexPaintFunctionLibrary_UpdateChaosClothPhysicsWithExistingColors_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UVertexPaintFunctionLibrary, nullptr, "UpdateChaosClothPhysicsWithExistingColors", nullptr, nullptr, sizeof(Z_Construct_UFunction_UVertexPaintFunctionLibrary_UpdateChaosClothPhysicsWithExistingColors_Statics::VertexPaintFunctionLibrary_eventUpdateChaosClothPhysicsWithExistingColors_Parms), Z_Construct_UFunction_UVertexPaintFunctionLibrary_UpdateChaosClothPhysicsWithExistingColors_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UVertexPaintFunctionLibrary_UpdateChaosClothPhysicsWithExistingColors_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04022401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UVertexPaintFunctionLibrary_UpdateChaosClothPhysicsWithExistingColors_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UVertexPaintFunctionLibrary_UpdateChaosClothPhysicsWithExistingColors_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UVertexPaintFunctionLibrary_UpdateChaosClothPhysicsWithExistingColors()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UVertexPaintFunctionLibrary_UpdateChaosClothPhysicsWithExistingColors_Statics::FuncParams);
		}
		return ReturnFunction;
	}
#if WITH_EDITOR
	struct Z_Construct_UFunction_UVertexPaintFunctionLibrary_VertexPaintDetectionPlugin_GetObjectNameFromSoftObjectPtr_Statics
	{
		struct VertexPaintFunctionLibrary_eventVertexPaintDetectionPlugin_GetObjectNameFromSoftObjectPtr_Parms
		{
			TSoftObjectPtr<UObject> object;
			FString ReturnValue;
		};
		static const UECodeGen_Private::FSoftObjectPropertyParams NewProp_object;
		static const UECodeGen_Private::FStrPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FSoftObjectPropertyParams Z_Construct_UFunction_UVertexPaintFunctionLibrary_VertexPaintDetectionPlugin_GetObjectNameFromSoftObjectPtr_Statics::NewProp_object = { "object", nullptr, (EPropertyFlags)0x0014000000000080, UECodeGen_Private::EPropertyGenFlags::SoftObject, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(VertexPaintFunctionLibrary_eventVertexPaintDetectionPlugin_GetObjectNameFromSoftObjectPtr_Parms, object), Z_Construct_UClass_UObject_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UVertexPaintFunctionLibrary_VertexPaintDetectionPlugin_GetObjectNameFromSoftObjectPtr_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(VertexPaintFunctionLibrary_eventVertexPaintDetectionPlugin_GetObjectNameFromSoftObjectPtr_Parms, ReturnValue), METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UVertexPaintFunctionLibrary_VertexPaintDetectionPlugin_GetObjectNameFromSoftObjectPtr_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UVertexPaintFunctionLibrary_VertexPaintDetectionPlugin_GetObjectNameFromSoftObjectPtr_Statics::NewProp_object,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UVertexPaintFunctionLibrary_VertexPaintDetectionPlugin_GetObjectNameFromSoftObjectPtr_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UVertexPaintFunctionLibrary_VertexPaintDetectionPlugin_GetObjectNameFromSoftObjectPtr_Statics::Function_MetaDataParams[] = {
		{ "Category", "Runtime Vertex Color Paint and Detection Plugin" },
		{ "ModuleRelativePath", "Public/VertexPaintFunctionLibrary.h" },
		{ "ToolTip", "Blueprint callable function to get the object name from soft ptr ref so we can avoid resolving them and bringing them into memory in order to display names etc. \nIf Editor Only!" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UVertexPaintFunctionLibrary_VertexPaintDetectionPlugin_GetObjectNameFromSoftObjectPtr_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UVertexPaintFunctionLibrary, nullptr, "VertexPaintDetectionPlugin_GetObjectNameFromSoftObjectPtr", nullptr, nullptr, sizeof(Z_Construct_UFunction_UVertexPaintFunctionLibrary_VertexPaintDetectionPlugin_GetObjectNameFromSoftObjectPtr_Statics::VertexPaintFunctionLibrary_eventVertexPaintDetectionPlugin_GetObjectNameFromSoftObjectPtr_Parms), Z_Construct_UFunction_UVertexPaintFunctionLibrary_VertexPaintDetectionPlugin_GetObjectNameFromSoftObjectPtr_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UVertexPaintFunctionLibrary_VertexPaintDetectionPlugin_GetObjectNameFromSoftObjectPtr_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x34022401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UVertexPaintFunctionLibrary_VertexPaintDetectionPlugin_GetObjectNameFromSoftObjectPtr_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UVertexPaintFunctionLibrary_VertexPaintDetectionPlugin_GetObjectNameFromSoftObjectPtr_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UVertexPaintFunctionLibrary_VertexPaintDetectionPlugin_GetObjectNameFromSoftObjectPtr()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UVertexPaintFunctionLibrary_VertexPaintDetectionPlugin_GetObjectNameFromSoftObjectPtr_Statics::FuncParams);
		}
		return ReturnFunction;
	}
#endif //WITH_EDITOR
#if WITH_EDITOR
	struct Z_Construct_UFunction_UVertexPaintFunctionLibrary_VertexPaintDetectionPlugin_GetObjectsOfClass_Statics
	{
		struct VertexPaintFunctionLibrary_eventVertexPaintDetectionPlugin_GetObjectsOfClass_Parms
		{
			TSubclassOf<UObject>  objectsToGet;
			bool onlyGetObjectsFromContentFolder;
			TArray<UObject*> ReturnValue;
		};
		static const UECodeGen_Private::FClassPropertyParams NewProp_objectsToGet;
		static void NewProp_onlyGetObjectsFromContentFolder_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_onlyGetObjectsFromContentFolder;
		static const UECodeGen_Private::FObjectPropertyParams NewProp_ReturnValue_Inner;
		static const UECodeGen_Private::FArrayPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FClassPropertyParams Z_Construct_UFunction_UVertexPaintFunctionLibrary_VertexPaintDetectionPlugin_GetObjectsOfClass_Statics::NewProp_objectsToGet = { "objectsToGet", nullptr, (EPropertyFlags)0x0014000000000080, UECodeGen_Private::EPropertyGenFlags::Class, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(VertexPaintFunctionLibrary_eventVertexPaintDetectionPlugin_GetObjectsOfClass_Parms, objectsToGet), Z_Construct_UClass_UClass, Z_Construct_UClass_UObject_NoRegister, METADATA_PARAMS(nullptr, 0) };
	void Z_Construct_UFunction_UVertexPaintFunctionLibrary_VertexPaintDetectionPlugin_GetObjectsOfClass_Statics::NewProp_onlyGetObjectsFromContentFolder_SetBit(void* Obj)
	{
		((VertexPaintFunctionLibrary_eventVertexPaintDetectionPlugin_GetObjectsOfClass_Parms*)Obj)->onlyGetObjectsFromContentFolder = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UVertexPaintFunctionLibrary_VertexPaintDetectionPlugin_GetObjectsOfClass_Statics::NewProp_onlyGetObjectsFromContentFolder = { "onlyGetObjectsFromContentFolder", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(bool), sizeof(VertexPaintFunctionLibrary_eventVertexPaintDetectionPlugin_GetObjectsOfClass_Parms), &Z_Construct_UFunction_UVertexPaintFunctionLibrary_VertexPaintDetectionPlugin_GetObjectsOfClass_Statics::NewProp_onlyGetObjectsFromContentFolder_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UVertexPaintFunctionLibrary_VertexPaintDetectionPlugin_GetObjectsOfClass_Statics::NewProp_ReturnValue_Inner = { "ReturnValue", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, 0, Z_Construct_UClass_UObject_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FArrayPropertyParams Z_Construct_UFunction_UVertexPaintFunctionLibrary_VertexPaintDetectionPlugin_GetObjectsOfClass_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(VertexPaintFunctionLibrary_eventVertexPaintDetectionPlugin_GetObjectsOfClass_Parms, ReturnValue), EArrayPropertyFlags::None, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UVertexPaintFunctionLibrary_VertexPaintDetectionPlugin_GetObjectsOfClass_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UVertexPaintFunctionLibrary_VertexPaintDetectionPlugin_GetObjectsOfClass_Statics::NewProp_objectsToGet,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UVertexPaintFunctionLibrary_VertexPaintDetectionPlugin_GetObjectsOfClass_Statics::NewProp_onlyGetObjectsFromContentFolder,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UVertexPaintFunctionLibrary_VertexPaintDetectionPlugin_GetObjectsOfClass_Statics::NewProp_ReturnValue_Inner,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UVertexPaintFunctionLibrary_VertexPaintDetectionPlugin_GetObjectsOfClass_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UVertexPaintFunctionLibrary_VertexPaintDetectionPlugin_GetObjectsOfClass_Statics::Function_MetaDataParams[] = {
		{ "Category", "Runtime Vertex Color Paint and Detection Plugin" },
		{ "ModuleRelativePath", "Public/VertexPaintFunctionLibrary.h" },
		{ "ToolTip", "Gets all the objects of a specific class from the project. Note that it doesn't work with BP assets. More performant if you only get objects from content folder and not Engine, Plugins folders etc. since otherwise we have to load the asset. \nIf Editor Only!" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UVertexPaintFunctionLibrary_VertexPaintDetectionPlugin_GetObjectsOfClass_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UVertexPaintFunctionLibrary, nullptr, "VertexPaintDetectionPlugin_GetObjectsOfClass", nullptr, nullptr, sizeof(Z_Construct_UFunction_UVertexPaintFunctionLibrary_VertexPaintDetectionPlugin_GetObjectsOfClass_Statics::VertexPaintFunctionLibrary_eventVertexPaintDetectionPlugin_GetObjectsOfClass_Parms), Z_Construct_UFunction_UVertexPaintFunctionLibrary_VertexPaintDetectionPlugin_GetObjectsOfClass_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UVertexPaintFunctionLibrary_VertexPaintDetectionPlugin_GetObjectsOfClass_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x24022401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UVertexPaintFunctionLibrary_VertexPaintDetectionPlugin_GetObjectsOfClass_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UVertexPaintFunctionLibrary_VertexPaintDetectionPlugin_GetObjectsOfClass_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UVertexPaintFunctionLibrary_VertexPaintDetectionPlugin_GetObjectsOfClass()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UVertexPaintFunctionLibrary_VertexPaintDetectionPlugin_GetObjectsOfClass_Statics::FuncParams);
		}
		return ReturnFunction;
	}
#endif //WITH_EDITOR
#if WITH_EDITOR
	struct Z_Construct_UFunction_UVertexPaintFunctionLibrary_VertexPaintDetectionPlugin_GetObjectsOfClassAsSoftPtrs_Statics
	{
		struct VertexPaintFunctionLibrary_eventVertexPaintDetectionPlugin_GetObjectsOfClassAsSoftPtrs_Parms
		{
			TSubclassOf<UObject>  objectsToGet;
			bool loadObjects;
			TArray<TSoftObjectPtr<UObject> > ReturnValue;
		};
		static const UECodeGen_Private::FClassPropertyParams NewProp_objectsToGet;
		static void NewProp_loadObjects_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_loadObjects;
		static const UECodeGen_Private::FSoftObjectPropertyParams NewProp_ReturnValue_Inner;
		static const UECodeGen_Private::FArrayPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FClassPropertyParams Z_Construct_UFunction_UVertexPaintFunctionLibrary_VertexPaintDetectionPlugin_GetObjectsOfClassAsSoftPtrs_Statics::NewProp_objectsToGet = { "objectsToGet", nullptr, (EPropertyFlags)0x0014000000000080, UECodeGen_Private::EPropertyGenFlags::Class, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(VertexPaintFunctionLibrary_eventVertexPaintDetectionPlugin_GetObjectsOfClassAsSoftPtrs_Parms, objectsToGet), Z_Construct_UClass_UClass, Z_Construct_UClass_UObject_NoRegister, METADATA_PARAMS(nullptr, 0) };
	void Z_Construct_UFunction_UVertexPaintFunctionLibrary_VertexPaintDetectionPlugin_GetObjectsOfClassAsSoftPtrs_Statics::NewProp_loadObjects_SetBit(void* Obj)
	{
		((VertexPaintFunctionLibrary_eventVertexPaintDetectionPlugin_GetObjectsOfClassAsSoftPtrs_Parms*)Obj)->loadObjects = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UVertexPaintFunctionLibrary_VertexPaintDetectionPlugin_GetObjectsOfClassAsSoftPtrs_Statics::NewProp_loadObjects = { "loadObjects", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(bool), sizeof(VertexPaintFunctionLibrary_eventVertexPaintDetectionPlugin_GetObjectsOfClassAsSoftPtrs_Parms), &Z_Construct_UFunction_UVertexPaintFunctionLibrary_VertexPaintDetectionPlugin_GetObjectsOfClassAsSoftPtrs_Statics::NewProp_loadObjects_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FSoftObjectPropertyParams Z_Construct_UFunction_UVertexPaintFunctionLibrary_VertexPaintDetectionPlugin_GetObjectsOfClassAsSoftPtrs_Statics::NewProp_ReturnValue_Inner = { "ReturnValue", nullptr, (EPropertyFlags)0x0004000000000000, UECodeGen_Private::EPropertyGenFlags::SoftObject, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, 0, Z_Construct_UClass_UObject_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FArrayPropertyParams Z_Construct_UFunction_UVertexPaintFunctionLibrary_VertexPaintDetectionPlugin_GetObjectsOfClassAsSoftPtrs_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0014000000000580, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(VertexPaintFunctionLibrary_eventVertexPaintDetectionPlugin_GetObjectsOfClassAsSoftPtrs_Parms, ReturnValue), EArrayPropertyFlags::None, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UVertexPaintFunctionLibrary_VertexPaintDetectionPlugin_GetObjectsOfClassAsSoftPtrs_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UVertexPaintFunctionLibrary_VertexPaintDetectionPlugin_GetObjectsOfClassAsSoftPtrs_Statics::NewProp_objectsToGet,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UVertexPaintFunctionLibrary_VertexPaintDetectionPlugin_GetObjectsOfClassAsSoftPtrs_Statics::NewProp_loadObjects,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UVertexPaintFunctionLibrary_VertexPaintDetectionPlugin_GetObjectsOfClassAsSoftPtrs_Statics::NewProp_ReturnValue_Inner,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UVertexPaintFunctionLibrary_VertexPaintDetectionPlugin_GetObjectsOfClassAsSoftPtrs_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UVertexPaintFunctionLibrary_VertexPaintDetectionPlugin_GetObjectsOfClassAsSoftPtrs_Statics::Function_MetaDataParams[] = {
		{ "Category", "Runtime Vertex Color Paint and Detection Plugin" },
		{ "DeterminesOutputType", "objectsToGet" },
		{ "ModuleRelativePath", "Public/VertexPaintFunctionLibrary.h" },
		{ "ToolTip", "Gets all the objects of a specific class from the project but in soft pointer form. Note that it doesn't work with BP assets. More performant if you only get objects from content folder and not Engine, Plugins folders etc. since otherwise we have to load the asset. \nNOTE Loading all things may be very heavy (and not necessary) if getting things like Materials or Static Meshes! \nIf Editor Only!" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UVertexPaintFunctionLibrary_VertexPaintDetectionPlugin_GetObjectsOfClassAsSoftPtrs_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UVertexPaintFunctionLibrary, nullptr, "VertexPaintDetectionPlugin_GetObjectsOfClassAsSoftPtrs", nullptr, nullptr, sizeof(Z_Construct_UFunction_UVertexPaintFunctionLibrary_VertexPaintDetectionPlugin_GetObjectsOfClassAsSoftPtrs_Statics::VertexPaintFunctionLibrary_eventVertexPaintDetectionPlugin_GetObjectsOfClassAsSoftPtrs_Parms), Z_Construct_UFunction_UVertexPaintFunctionLibrary_VertexPaintDetectionPlugin_GetObjectsOfClassAsSoftPtrs_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UVertexPaintFunctionLibrary_VertexPaintDetectionPlugin_GetObjectsOfClassAsSoftPtrs_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x24022401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UVertexPaintFunctionLibrary_VertexPaintDetectionPlugin_GetObjectsOfClassAsSoftPtrs_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UVertexPaintFunctionLibrary_VertexPaintDetectionPlugin_GetObjectsOfClassAsSoftPtrs_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UVertexPaintFunctionLibrary_VertexPaintDetectionPlugin_GetObjectsOfClassAsSoftPtrs()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UVertexPaintFunctionLibrary_VertexPaintDetectionPlugin_GetObjectsOfClassAsSoftPtrs_Statics::FuncParams);
		}
		return ReturnFunction;
	}
#endif //WITH_EDITOR
	struct Z_Construct_UFunction_UVertexPaintFunctionLibrary_VertexPaintDetectionPlugin_GetSkeletalMesh_Statics
	{
		struct VertexPaintFunctionLibrary_eventVertexPaintDetectionPlugin_GetSkeletalMesh_Parms
		{
			USkeletalMeshComponent* skeletalMeshComp;
			USkeletalMesh* ReturnValue;
		};
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_skeletalMeshComp_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPropertyParams NewProp_skeletalMeshComp;
		static const UECodeGen_Private::FObjectPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UVertexPaintFunctionLibrary_VertexPaintDetectionPlugin_GetSkeletalMesh_Statics::NewProp_skeletalMeshComp_MetaData[] = {
		{ "EditInline", "true" },
	};
#endif
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UVertexPaintFunctionLibrary_VertexPaintDetectionPlugin_GetSkeletalMesh_Statics::NewProp_skeletalMeshComp = { "skeletalMeshComp", nullptr, (EPropertyFlags)0x0010000000080080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(VertexPaintFunctionLibrary_eventVertexPaintDetectionPlugin_GetSkeletalMesh_Parms, skeletalMeshComp), Z_Construct_UClass_USkeletalMeshComponent_NoRegister, METADATA_PARAMS(Z_Construct_UFunction_UVertexPaintFunctionLibrary_VertexPaintDetectionPlugin_GetSkeletalMesh_Statics::NewProp_skeletalMeshComp_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UVertexPaintFunctionLibrary_VertexPaintDetectionPlugin_GetSkeletalMesh_Statics::NewProp_skeletalMeshComp_MetaData)) };
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UVertexPaintFunctionLibrary_VertexPaintDetectionPlugin_GetSkeletalMesh_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(VertexPaintFunctionLibrary_eventVertexPaintDetectionPlugin_GetSkeletalMesh_Parms, ReturnValue), Z_Construct_UClass_USkeletalMesh_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UVertexPaintFunctionLibrary_VertexPaintDetectionPlugin_GetSkeletalMesh_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UVertexPaintFunctionLibrary_VertexPaintDetectionPlugin_GetSkeletalMesh_Statics::NewProp_skeletalMeshComp,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UVertexPaintFunctionLibrary_VertexPaintDetectionPlugin_GetSkeletalMesh_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UVertexPaintFunctionLibrary_VertexPaintDetectionPlugin_GetSkeletalMesh_Statics::Function_MetaDataParams[] = {
		{ "Category", "Runtime Vertex Color Paint and Detection Plugin" },
		{ "ModuleRelativePath", "Public/VertexPaintFunctionLibrary.h" },
		{ "ToolTip", "Utility function since 5.1 don't use the same get skeletal mesh in BP as 4.27 and 5.0. By using this we don't have to update the examples or Widget BP" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UVertexPaintFunctionLibrary_VertexPaintDetectionPlugin_GetSkeletalMesh_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UVertexPaintFunctionLibrary, nullptr, "VertexPaintDetectionPlugin_GetSkeletalMesh", nullptr, nullptr, sizeof(Z_Construct_UFunction_UVertexPaintFunctionLibrary_VertexPaintDetectionPlugin_GetSkeletalMesh_Statics::VertexPaintFunctionLibrary_eventVertexPaintDetectionPlugin_GetSkeletalMesh_Parms), Z_Construct_UFunction_UVertexPaintFunctionLibrary_VertexPaintDetectionPlugin_GetSkeletalMesh_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UVertexPaintFunctionLibrary_VertexPaintDetectionPlugin_GetSkeletalMesh_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x14022401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UVertexPaintFunctionLibrary_VertexPaintDetectionPlugin_GetSkeletalMesh_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UVertexPaintFunctionLibrary_VertexPaintDetectionPlugin_GetSkeletalMesh_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UVertexPaintFunctionLibrary_VertexPaintDetectionPlugin_GetSkeletalMesh()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UVertexPaintFunctionLibrary_VertexPaintDetectionPlugin_GetSkeletalMesh_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UVertexPaintFunctionLibrary_VertexPaintDetectionPlugin_GetSkeletalMeshVertexColorsAtLOD_Statics
	{
		struct VertexPaintFunctionLibrary_eventVertexPaintDetectionPlugin_GetSkeletalMeshVertexColorsAtLOD_Parms
		{
			USkeletalMeshComponent* skeletalMeshComponent;
			int32 lod;
			TArray<FColor> ReturnValue;
		};
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_skeletalMeshComponent_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPropertyParams NewProp_skeletalMeshComponent;
		static const UECodeGen_Private::FUnsizedIntPropertyParams NewProp_lod;
		static const UECodeGen_Private::FStructPropertyParams NewProp_ReturnValue_Inner;
		static const UECodeGen_Private::FArrayPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UVertexPaintFunctionLibrary_VertexPaintDetectionPlugin_GetSkeletalMeshVertexColorsAtLOD_Statics::NewProp_skeletalMeshComponent_MetaData[] = {
		{ "EditInline", "true" },
	};
#endif
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UVertexPaintFunctionLibrary_VertexPaintDetectionPlugin_GetSkeletalMeshVertexColorsAtLOD_Statics::NewProp_skeletalMeshComponent = { "skeletalMeshComponent", nullptr, (EPropertyFlags)0x0010000000080080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(VertexPaintFunctionLibrary_eventVertexPaintDetectionPlugin_GetSkeletalMeshVertexColorsAtLOD_Parms, skeletalMeshComponent), Z_Construct_UClass_USkeletalMeshComponent_NoRegister, METADATA_PARAMS(Z_Construct_UFunction_UVertexPaintFunctionLibrary_VertexPaintDetectionPlugin_GetSkeletalMeshVertexColorsAtLOD_Statics::NewProp_skeletalMeshComponent_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UVertexPaintFunctionLibrary_VertexPaintDetectionPlugin_GetSkeletalMeshVertexColorsAtLOD_Statics::NewProp_skeletalMeshComponent_MetaData)) };
	const UECodeGen_Private::FUnsizedIntPropertyParams Z_Construct_UFunction_UVertexPaintFunctionLibrary_VertexPaintDetectionPlugin_GetSkeletalMeshVertexColorsAtLOD_Statics::NewProp_lod = { "lod", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(VertexPaintFunctionLibrary_eventVertexPaintDetectionPlugin_GetSkeletalMeshVertexColorsAtLOD_Parms, lod), METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UVertexPaintFunctionLibrary_VertexPaintDetectionPlugin_GetSkeletalMeshVertexColorsAtLOD_Statics::NewProp_ReturnValue_Inner = { "ReturnValue", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, 0, Z_Construct_UScriptStruct_FColor, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FArrayPropertyParams Z_Construct_UFunction_UVertexPaintFunctionLibrary_VertexPaintDetectionPlugin_GetSkeletalMeshVertexColorsAtLOD_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(VertexPaintFunctionLibrary_eventVertexPaintDetectionPlugin_GetSkeletalMeshVertexColorsAtLOD_Parms, ReturnValue), EArrayPropertyFlags::None, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UVertexPaintFunctionLibrary_VertexPaintDetectionPlugin_GetSkeletalMeshVertexColorsAtLOD_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UVertexPaintFunctionLibrary_VertexPaintDetectionPlugin_GetSkeletalMeshVertexColorsAtLOD_Statics::NewProp_skeletalMeshComponent,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UVertexPaintFunctionLibrary_VertexPaintDetectionPlugin_GetSkeletalMeshVertexColorsAtLOD_Statics::NewProp_lod,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UVertexPaintFunctionLibrary_VertexPaintDetectionPlugin_GetSkeletalMeshVertexColorsAtLOD_Statics::NewProp_ReturnValue_Inner,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UVertexPaintFunctionLibrary_VertexPaintDetectionPlugin_GetSkeletalMeshVertexColorsAtLOD_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UVertexPaintFunctionLibrary_VertexPaintDetectionPlugin_GetSkeletalMeshVertexColorsAtLOD_Statics::Function_MetaDataParams[] = {
		{ "Category", "Runtime Vertex Color Paint and Detection Plugin" },
		{ "ModuleRelativePath", "Public/VertexPaintFunctionLibrary.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UVertexPaintFunctionLibrary_VertexPaintDetectionPlugin_GetSkeletalMeshVertexColorsAtLOD_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UVertexPaintFunctionLibrary, nullptr, "VertexPaintDetectionPlugin_GetSkeletalMeshVertexColorsAtLOD", nullptr, nullptr, sizeof(Z_Construct_UFunction_UVertexPaintFunctionLibrary_VertexPaintDetectionPlugin_GetSkeletalMeshVertexColorsAtLOD_Statics::VertexPaintFunctionLibrary_eventVertexPaintDetectionPlugin_GetSkeletalMeshVertexColorsAtLOD_Parms), Z_Construct_UFunction_UVertexPaintFunctionLibrary_VertexPaintDetectionPlugin_GetSkeletalMeshVertexColorsAtLOD_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UVertexPaintFunctionLibrary_VertexPaintDetectionPlugin_GetSkeletalMeshVertexColorsAtLOD_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04022401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UVertexPaintFunctionLibrary_VertexPaintDetectionPlugin_GetSkeletalMeshVertexColorsAtLOD_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UVertexPaintFunctionLibrary_VertexPaintDetectionPlugin_GetSkeletalMeshVertexColorsAtLOD_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UVertexPaintFunctionLibrary_VertexPaintDetectionPlugin_GetSkeletalMeshVertexColorsAtLOD()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UVertexPaintFunctionLibrary_VertexPaintDetectionPlugin_GetSkeletalMeshVertexColorsAtLOD_Statics::FuncParams);
		}
		return ReturnFunction;
	}
#if WITH_EDITOR
	struct Z_Construct_UFunction_UVertexPaintFunctionLibrary_VertexPaintDetectionPlugin_GetSoftObjectPathFromSoftObjectPtr_Statics
	{
		struct FTopLevelAssetPath
		{
			FName PackageName;
			FName AssetName;
		};

		struct VertexPaintFunctionLibrary_eventVertexPaintDetectionPlugin_GetSoftObjectPathFromSoftObjectPtr_Parms
		{
			TSoftObjectPtr<UObject> object;
			FSoftObjectPath ReturnValue;
		};
		static const UECodeGen_Private::FSoftObjectPropertyParams NewProp_object;
		static const UECodeGen_Private::FStructPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FSoftObjectPropertyParams Z_Construct_UFunction_UVertexPaintFunctionLibrary_VertexPaintDetectionPlugin_GetSoftObjectPathFromSoftObjectPtr_Statics::NewProp_object = { "object", nullptr, (EPropertyFlags)0x0014000000000080, UECodeGen_Private::EPropertyGenFlags::SoftObject, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(VertexPaintFunctionLibrary_eventVertexPaintDetectionPlugin_GetSoftObjectPathFromSoftObjectPtr_Parms, object), Z_Construct_UClass_UObject_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UVertexPaintFunctionLibrary_VertexPaintDetectionPlugin_GetSoftObjectPathFromSoftObjectPtr_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(VertexPaintFunctionLibrary_eventVertexPaintDetectionPlugin_GetSoftObjectPathFromSoftObjectPtr_Parms, ReturnValue), Z_Construct_UScriptStruct_FSoftObjectPath, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UVertexPaintFunctionLibrary_VertexPaintDetectionPlugin_GetSoftObjectPathFromSoftObjectPtr_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UVertexPaintFunctionLibrary_VertexPaintDetectionPlugin_GetSoftObjectPathFromSoftObjectPtr_Statics::NewProp_object,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UVertexPaintFunctionLibrary_VertexPaintDetectionPlugin_GetSoftObjectPathFromSoftObjectPtr_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UVertexPaintFunctionLibrary_VertexPaintDetectionPlugin_GetSoftObjectPathFromSoftObjectPtr_Statics::Function_MetaDataParams[] = {
		{ "Category", "Runtime Vertex Color Paint and Detection Plugin" },
		{ "ModuleRelativePath", "Public/VertexPaintFunctionLibrary.h" },
		{ "ToolTip", "Blueprint callable function to get the object path from soft ptr ref so we can avoid resolving them and bringing them into memory in order to display path names etc. \nIf Editor Only!" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UVertexPaintFunctionLibrary_VertexPaintDetectionPlugin_GetSoftObjectPathFromSoftObjectPtr_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UVertexPaintFunctionLibrary, nullptr, "VertexPaintDetectionPlugin_GetSoftObjectPathFromSoftObjectPtr", nullptr, nullptr, sizeof(Z_Construct_UFunction_UVertexPaintFunctionLibrary_VertexPaintDetectionPlugin_GetSoftObjectPathFromSoftObjectPtr_Statics::VertexPaintFunctionLibrary_eventVertexPaintDetectionPlugin_GetSoftObjectPathFromSoftObjectPtr_Parms), Z_Construct_UFunction_UVertexPaintFunctionLibrary_VertexPaintDetectionPlugin_GetSoftObjectPathFromSoftObjectPtr_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UVertexPaintFunctionLibrary_VertexPaintDetectionPlugin_GetSoftObjectPathFromSoftObjectPtr_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x34822401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UVertexPaintFunctionLibrary_VertexPaintDetectionPlugin_GetSoftObjectPathFromSoftObjectPtr_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UVertexPaintFunctionLibrary_VertexPaintDetectionPlugin_GetSoftObjectPathFromSoftObjectPtr_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UVertexPaintFunctionLibrary_VertexPaintDetectionPlugin_GetSoftObjectPathFromSoftObjectPtr()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UVertexPaintFunctionLibrary_VertexPaintDetectionPlugin_GetSoftObjectPathFromSoftObjectPtr_Statics::FuncParams);
		}
		return ReturnFunction;
	}
#endif //WITH_EDITOR
	struct Z_Construct_UFunction_UVertexPaintFunctionLibrary_VertexPaintDetectionPlugin_GetStaticMeshVertexColorsAtLOD_Statics
	{
		struct VertexPaintFunctionLibrary_eventVertexPaintDetectionPlugin_GetStaticMeshVertexColorsAtLOD_Parms
		{
			UStaticMeshComponent* staticMeshComponent;
			int32 lod;
			TArray<FColor> ReturnValue;
		};
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_staticMeshComponent_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPropertyParams NewProp_staticMeshComponent;
		static const UECodeGen_Private::FUnsizedIntPropertyParams NewProp_lod;
		static const UECodeGen_Private::FStructPropertyParams NewProp_ReturnValue_Inner;
		static const UECodeGen_Private::FArrayPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UVertexPaintFunctionLibrary_VertexPaintDetectionPlugin_GetStaticMeshVertexColorsAtLOD_Statics::NewProp_staticMeshComponent_MetaData[] = {
		{ "EditInline", "true" },
	};
#endif
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UVertexPaintFunctionLibrary_VertexPaintDetectionPlugin_GetStaticMeshVertexColorsAtLOD_Statics::NewProp_staticMeshComponent = { "staticMeshComponent", nullptr, (EPropertyFlags)0x0010000000080080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(VertexPaintFunctionLibrary_eventVertexPaintDetectionPlugin_GetStaticMeshVertexColorsAtLOD_Parms, staticMeshComponent), Z_Construct_UClass_UStaticMeshComponent_NoRegister, METADATA_PARAMS(Z_Construct_UFunction_UVertexPaintFunctionLibrary_VertexPaintDetectionPlugin_GetStaticMeshVertexColorsAtLOD_Statics::NewProp_staticMeshComponent_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UVertexPaintFunctionLibrary_VertexPaintDetectionPlugin_GetStaticMeshVertexColorsAtLOD_Statics::NewProp_staticMeshComponent_MetaData)) };
	const UECodeGen_Private::FUnsizedIntPropertyParams Z_Construct_UFunction_UVertexPaintFunctionLibrary_VertexPaintDetectionPlugin_GetStaticMeshVertexColorsAtLOD_Statics::NewProp_lod = { "lod", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(VertexPaintFunctionLibrary_eventVertexPaintDetectionPlugin_GetStaticMeshVertexColorsAtLOD_Parms, lod), METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UVertexPaintFunctionLibrary_VertexPaintDetectionPlugin_GetStaticMeshVertexColorsAtLOD_Statics::NewProp_ReturnValue_Inner = { "ReturnValue", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, 0, Z_Construct_UScriptStruct_FColor, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FArrayPropertyParams Z_Construct_UFunction_UVertexPaintFunctionLibrary_VertexPaintDetectionPlugin_GetStaticMeshVertexColorsAtLOD_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(VertexPaintFunctionLibrary_eventVertexPaintDetectionPlugin_GetStaticMeshVertexColorsAtLOD_Parms, ReturnValue), EArrayPropertyFlags::None, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UVertexPaintFunctionLibrary_VertexPaintDetectionPlugin_GetStaticMeshVertexColorsAtLOD_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UVertexPaintFunctionLibrary_VertexPaintDetectionPlugin_GetStaticMeshVertexColorsAtLOD_Statics::NewProp_staticMeshComponent,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UVertexPaintFunctionLibrary_VertexPaintDetectionPlugin_GetStaticMeshVertexColorsAtLOD_Statics::NewProp_lod,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UVertexPaintFunctionLibrary_VertexPaintDetectionPlugin_GetStaticMeshVertexColorsAtLOD_Statics::NewProp_ReturnValue_Inner,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UVertexPaintFunctionLibrary_VertexPaintDetectionPlugin_GetStaticMeshVertexColorsAtLOD_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UVertexPaintFunctionLibrary_VertexPaintDetectionPlugin_GetStaticMeshVertexColorsAtLOD_Statics::Function_MetaDataParams[] = {
		{ "Category", "Runtime Vertex Color Paint and Detection Plugin" },
		{ "ModuleRelativePath", "Public/VertexPaintFunctionLibrary.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UVertexPaintFunctionLibrary_VertexPaintDetectionPlugin_GetStaticMeshVertexColorsAtLOD_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UVertexPaintFunctionLibrary, nullptr, "VertexPaintDetectionPlugin_GetStaticMeshVertexColorsAtLOD", nullptr, nullptr, sizeof(Z_Construct_UFunction_UVertexPaintFunctionLibrary_VertexPaintDetectionPlugin_GetStaticMeshVertexColorsAtLOD_Statics::VertexPaintFunctionLibrary_eventVertexPaintDetectionPlugin_GetStaticMeshVertexColorsAtLOD_Parms), Z_Construct_UFunction_UVertexPaintFunctionLibrary_VertexPaintDetectionPlugin_GetStaticMeshVertexColorsAtLOD_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UVertexPaintFunctionLibrary_VertexPaintDetectionPlugin_GetStaticMeshVertexColorsAtLOD_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04022401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UVertexPaintFunctionLibrary_VertexPaintDetectionPlugin_GetStaticMeshVertexColorsAtLOD_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UVertexPaintFunctionLibrary_VertexPaintDetectionPlugin_GetStaticMeshVertexColorsAtLOD_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UVertexPaintFunctionLibrary_VertexPaintDetectionPlugin_GetStaticMeshVertexColorsAtLOD()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UVertexPaintFunctionLibrary_VertexPaintDetectionPlugin_GetStaticMeshVertexColorsAtLOD_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UVertexPaintFunctionLibrary_VertexPaintDetectionPlugin_SetSkeletalMeshAndReleaseResources_Statics
	{
		struct VertexPaintFunctionLibrary_eventVertexPaintDetectionPlugin_SetSkeletalMeshAndReleaseResources_Parms
		{
			USkeletalMeshComponent* skeletalMeshComponent;
			USkeletalMesh* newMesh;
		};
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_skeletalMeshComponent_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPropertyParams NewProp_skeletalMeshComponent;
		static const UECodeGen_Private::FObjectPropertyParams NewProp_newMesh;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UVertexPaintFunctionLibrary_VertexPaintDetectionPlugin_SetSkeletalMeshAndReleaseResources_Statics::NewProp_skeletalMeshComponent_MetaData[] = {
		{ "EditInline", "true" },
	};
#endif
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UVertexPaintFunctionLibrary_VertexPaintDetectionPlugin_SetSkeletalMeshAndReleaseResources_Statics::NewProp_skeletalMeshComponent = { "skeletalMeshComponent", nullptr, (EPropertyFlags)0x0010000000080080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(VertexPaintFunctionLibrary_eventVertexPaintDetectionPlugin_SetSkeletalMeshAndReleaseResources_Parms, skeletalMeshComponent), Z_Construct_UClass_USkeletalMeshComponent_NoRegister, METADATA_PARAMS(Z_Construct_UFunction_UVertexPaintFunctionLibrary_VertexPaintDetectionPlugin_SetSkeletalMeshAndReleaseResources_Statics::NewProp_skeletalMeshComponent_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UVertexPaintFunctionLibrary_VertexPaintDetectionPlugin_SetSkeletalMeshAndReleaseResources_Statics::NewProp_skeletalMeshComponent_MetaData)) };
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UVertexPaintFunctionLibrary_VertexPaintDetectionPlugin_SetSkeletalMeshAndReleaseResources_Statics::NewProp_newMesh = { "newMesh", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(VertexPaintFunctionLibrary_eventVertexPaintDetectionPlugin_SetSkeletalMeshAndReleaseResources_Parms, newMesh), Z_Construct_UClass_USkeletalMesh_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UVertexPaintFunctionLibrary_VertexPaintDetectionPlugin_SetSkeletalMeshAndReleaseResources_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UVertexPaintFunctionLibrary_VertexPaintDetectionPlugin_SetSkeletalMeshAndReleaseResources_Statics::NewProp_skeletalMeshComponent,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UVertexPaintFunctionLibrary_VertexPaintDetectionPlugin_SetSkeletalMeshAndReleaseResources_Statics::NewProp_newMesh,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UVertexPaintFunctionLibrary_VertexPaintDetectionPlugin_SetSkeletalMeshAndReleaseResources_Statics::Function_MetaDataParams[] = {
		{ "Category", "Runtime Vertex Color Paint and Detection Plugin" },
		{ "DisplayName", "Set Skeletal Mesh And Release Resources" },
		{ "ModuleRelativePath", "Public/VertexPaintFunctionLibrary.h" },
		{ "ToolTip", "Unlike just running SetSkeletalMesh(), this doesn't cause a crash when switching meshes if applying vertex colors on them since it runs ReleasesResurces first and BeginOverrideVertexColors etc., then calls the SetSkeletalMesh()." },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UVertexPaintFunctionLibrary_VertexPaintDetectionPlugin_SetSkeletalMeshAndReleaseResources_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UVertexPaintFunctionLibrary, nullptr, "VertexPaintDetectionPlugin_SetSkeletalMeshAndReleaseResources", nullptr, nullptr, sizeof(Z_Construct_UFunction_UVertexPaintFunctionLibrary_VertexPaintDetectionPlugin_SetSkeletalMeshAndReleaseResources_Statics::VertexPaintFunctionLibrary_eventVertexPaintDetectionPlugin_SetSkeletalMeshAndReleaseResources_Parms), Z_Construct_UFunction_UVertexPaintFunctionLibrary_VertexPaintDetectionPlugin_SetSkeletalMeshAndReleaseResources_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UVertexPaintFunctionLibrary_VertexPaintDetectionPlugin_SetSkeletalMeshAndReleaseResources_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04022401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UVertexPaintFunctionLibrary_VertexPaintDetectionPlugin_SetSkeletalMeshAndReleaseResources_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UVertexPaintFunctionLibrary_VertexPaintDetectionPlugin_SetSkeletalMeshAndReleaseResources_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UVertexPaintFunctionLibrary_VertexPaintDetectionPlugin_SetSkeletalMeshAndReleaseResources()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UVertexPaintFunctionLibrary_VertexPaintDetectionPlugin_SetSkeletalMeshAndReleaseResources_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UVertexPaintFunctionLibrary_VertexPaintDetectionPlugin_SetStaticMeshAndReleaseOverrideVertexColors_Statics
	{
		struct VertexPaintFunctionLibrary_eventVertexPaintDetectionPlugin_SetStaticMeshAndReleaseOverrideVertexColors_Parms
		{
			UStaticMeshComponent* staticMeshComponent;
			UStaticMesh* newMesh;
		};
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_staticMeshComponent_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPropertyParams NewProp_staticMeshComponent;
		static const UECodeGen_Private::FObjectPropertyParams NewProp_newMesh;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UVertexPaintFunctionLibrary_VertexPaintDetectionPlugin_SetStaticMeshAndReleaseOverrideVertexColors_Statics::NewProp_staticMeshComponent_MetaData[] = {
		{ "EditInline", "true" },
	};
#endif
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UVertexPaintFunctionLibrary_VertexPaintDetectionPlugin_SetStaticMeshAndReleaseOverrideVertexColors_Statics::NewProp_staticMeshComponent = { "staticMeshComponent", nullptr, (EPropertyFlags)0x0010000000080080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(VertexPaintFunctionLibrary_eventVertexPaintDetectionPlugin_SetStaticMeshAndReleaseOverrideVertexColors_Parms, staticMeshComponent), Z_Construct_UClass_UStaticMeshComponent_NoRegister, METADATA_PARAMS(Z_Construct_UFunction_UVertexPaintFunctionLibrary_VertexPaintDetectionPlugin_SetStaticMeshAndReleaseOverrideVertexColors_Statics::NewProp_staticMeshComponent_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UVertexPaintFunctionLibrary_VertexPaintDetectionPlugin_SetStaticMeshAndReleaseOverrideVertexColors_Statics::NewProp_staticMeshComponent_MetaData)) };
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UVertexPaintFunctionLibrary_VertexPaintDetectionPlugin_SetStaticMeshAndReleaseOverrideVertexColors_Statics::NewProp_newMesh = { "newMesh", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(VertexPaintFunctionLibrary_eventVertexPaintDetectionPlugin_SetStaticMeshAndReleaseOverrideVertexColors_Parms, newMesh), Z_Construct_UClass_UStaticMesh_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UVertexPaintFunctionLibrary_VertexPaintDetectionPlugin_SetStaticMeshAndReleaseOverrideVertexColors_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UVertexPaintFunctionLibrary_VertexPaintDetectionPlugin_SetStaticMeshAndReleaseOverrideVertexColors_Statics::NewProp_staticMeshComponent,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UVertexPaintFunctionLibrary_VertexPaintDetectionPlugin_SetStaticMeshAndReleaseOverrideVertexColors_Statics::NewProp_newMesh,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UVertexPaintFunctionLibrary_VertexPaintDetectionPlugin_SetStaticMeshAndReleaseOverrideVertexColors_Statics::Function_MetaDataParams[] = {
		{ "Category", "Runtime Vertex Color Paint and Detection Plugin" },
		{ "DisplayName", "Set Static Mesh And Release Override Vertex Colors" },
		{ "ModuleRelativePath", "Public/VertexPaintFunctionLibrary.h" },
		{ "ToolTip", "Sets the LOD Count so it doesn't have the same LOD as the mesh we're switching from, as well as overriding the vertex color buffer with a new one and initalizing fresh color array. Then we run SetStaticMesh(). This was necessary otherwise it didn't work since just SetStaticMesh doesn't refresh lod count or clean up vertex colors." },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UVertexPaintFunctionLibrary_VertexPaintDetectionPlugin_SetStaticMeshAndReleaseOverrideVertexColors_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UVertexPaintFunctionLibrary, nullptr, "VertexPaintDetectionPlugin_SetStaticMeshAndReleaseOverrideVertexColors", nullptr, nullptr, sizeof(Z_Construct_UFunction_UVertexPaintFunctionLibrary_VertexPaintDetectionPlugin_SetStaticMeshAndReleaseOverrideVertexColors_Statics::VertexPaintFunctionLibrary_eventVertexPaintDetectionPlugin_SetStaticMeshAndReleaseOverrideVertexColors_Parms), Z_Construct_UFunction_UVertexPaintFunctionLibrary_VertexPaintDetectionPlugin_SetStaticMeshAndReleaseOverrideVertexColors_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UVertexPaintFunctionLibrary_VertexPaintDetectionPlugin_SetStaticMeshAndReleaseOverrideVertexColors_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04022401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UVertexPaintFunctionLibrary_VertexPaintDetectionPlugin_SetStaticMeshAndReleaseOverrideVertexColors_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UVertexPaintFunctionLibrary_VertexPaintDetectionPlugin_SetStaticMeshAndReleaseOverrideVertexColors_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UVertexPaintFunctionLibrary_VertexPaintDetectionPlugin_SetStaticMeshAndReleaseOverrideVertexColors()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UVertexPaintFunctionLibrary_VertexPaintDetectionPlugin_SetStaticMeshAndReleaseOverrideVertexColors_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UVertexPaintFunctionLibrary_VertexPaintDetectionPlugin_SortAssetsNamesAlphabetically_Statics
	{
		struct VertexPaintFunctionLibrary_eventVertexPaintDetectionPlugin_SortAssetsNamesAlphabetically_Parms
		{
			TMap<int32,FString> assetIndexAndName;
			TMap<int32,FString> ReturnValue;
		};
		static const UECodeGen_Private::FStrPropertyParams NewProp_assetIndexAndName_ValueProp;
		static const UECodeGen_Private::FUnsizedIntPropertyParams NewProp_assetIndexAndName_Key_KeyProp;
		static const UECodeGen_Private::FMapPropertyParams NewProp_assetIndexAndName;
		static const UECodeGen_Private::FStrPropertyParams NewProp_ReturnValue_ValueProp;
		static const UECodeGen_Private::FUnsizedIntPropertyParams NewProp_ReturnValue_Key_KeyProp;
		static const UECodeGen_Private::FMapPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UVertexPaintFunctionLibrary_VertexPaintDetectionPlugin_SortAssetsNamesAlphabetically_Statics::NewProp_assetIndexAndName_ValueProp = { "assetIndexAndName", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, 1, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FUnsizedIntPropertyParams Z_Construct_UFunction_UVertexPaintFunctionLibrary_VertexPaintDetectionPlugin_SortAssetsNamesAlphabetically_Statics::NewProp_assetIndexAndName_Key_KeyProp = { "assetIndexAndName_Key", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, 0, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FMapPropertyParams Z_Construct_UFunction_UVertexPaintFunctionLibrary_VertexPaintDetectionPlugin_SortAssetsNamesAlphabetically_Statics::NewProp_assetIndexAndName = { "assetIndexAndName", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Map, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(VertexPaintFunctionLibrary_eventVertexPaintDetectionPlugin_SortAssetsNamesAlphabetically_Parms, assetIndexAndName), EMapPropertyFlags::None, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UVertexPaintFunctionLibrary_VertexPaintDetectionPlugin_SortAssetsNamesAlphabetically_Statics::NewProp_ReturnValue_ValueProp = { "ReturnValue", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, 1, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FUnsizedIntPropertyParams Z_Construct_UFunction_UVertexPaintFunctionLibrary_VertexPaintDetectionPlugin_SortAssetsNamesAlphabetically_Statics::NewProp_ReturnValue_Key_KeyProp = { "ReturnValue_Key", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, 0, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FMapPropertyParams Z_Construct_UFunction_UVertexPaintFunctionLibrary_VertexPaintDetectionPlugin_SortAssetsNamesAlphabetically_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Map, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(VertexPaintFunctionLibrary_eventVertexPaintDetectionPlugin_SortAssetsNamesAlphabetically_Parms, ReturnValue), EMapPropertyFlags::None, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UVertexPaintFunctionLibrary_VertexPaintDetectionPlugin_SortAssetsNamesAlphabetically_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UVertexPaintFunctionLibrary_VertexPaintDetectionPlugin_SortAssetsNamesAlphabetically_Statics::NewProp_assetIndexAndName_ValueProp,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UVertexPaintFunctionLibrary_VertexPaintDetectionPlugin_SortAssetsNamesAlphabetically_Statics::NewProp_assetIndexAndName_Key_KeyProp,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UVertexPaintFunctionLibrary_VertexPaintDetectionPlugin_SortAssetsNamesAlphabetically_Statics::NewProp_assetIndexAndName,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UVertexPaintFunctionLibrary_VertexPaintDetectionPlugin_SortAssetsNamesAlphabetically_Statics::NewProp_ReturnValue_ValueProp,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UVertexPaintFunctionLibrary_VertexPaintDetectionPlugin_SortAssetsNamesAlphabetically_Statics::NewProp_ReturnValue_Key_KeyProp,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UVertexPaintFunctionLibrary_VertexPaintDetectionPlugin_SortAssetsNamesAlphabetically_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UVertexPaintFunctionLibrary_VertexPaintDetectionPlugin_SortAssetsNamesAlphabetically_Statics::Function_MetaDataParams[] = {
		{ "Category", "Runtime Vertex Color Paint and Detection Plugin" },
		{ "DisplayName", "Sort Names Alphabetically" },
		{ "ModuleRelativePath", "Public/VertexPaintFunctionLibrary.h" },
		{ "ToolTip", "Sorts the TMap Alphabetically while matching the index. So you can send in a TMap of AssetNames and Indexes, and get a TMap back but with them in alphabetical order. Intended to be used with the Asset Registry->GetAssets...() functions, see example in the Vertex Paint Editor Utility Widget" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UVertexPaintFunctionLibrary_VertexPaintDetectionPlugin_SortAssetsNamesAlphabetically_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UVertexPaintFunctionLibrary, nullptr, "VertexPaintDetectionPlugin_SortAssetsNamesAlphabetically", nullptr, nullptr, sizeof(Z_Construct_UFunction_UVertexPaintFunctionLibrary_VertexPaintDetectionPlugin_SortAssetsNamesAlphabetically_Statics::VertexPaintFunctionLibrary_eventVertexPaintDetectionPlugin_SortAssetsNamesAlphabetically_Parms), Z_Construct_UFunction_UVertexPaintFunctionLibrary_VertexPaintDetectionPlugin_SortAssetsNamesAlphabetically_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UVertexPaintFunctionLibrary_VertexPaintDetectionPlugin_SortAssetsNamesAlphabetically_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04022401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UVertexPaintFunctionLibrary_VertexPaintDetectionPlugin_SortAssetsNamesAlphabetically_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UVertexPaintFunctionLibrary_VertexPaintDetectionPlugin_SortAssetsNamesAlphabetically_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UVertexPaintFunctionLibrary_VertexPaintDetectionPlugin_SortAssetsNamesAlphabetically()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UVertexPaintFunctionLibrary_VertexPaintDetectionPlugin_SortAssetsNamesAlphabetically_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UVertexPaintFunctionLibrary_VertexPaintDetectionPlugin_SortStringArrayAlphabetically_Statics
	{
		struct VertexPaintFunctionLibrary_eventVertexPaintDetectionPlugin_SortStringArrayAlphabetically_Parms
		{
			TArray<FString> strings;
			TArray<FString> ReturnValue;
		};
		static const UECodeGen_Private::FStrPropertyParams NewProp_strings_Inner;
		static const UECodeGen_Private::FArrayPropertyParams NewProp_strings;
		static const UECodeGen_Private::FStrPropertyParams NewProp_ReturnValue_Inner;
		static const UECodeGen_Private::FArrayPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UVertexPaintFunctionLibrary_VertexPaintDetectionPlugin_SortStringArrayAlphabetically_Statics::NewProp_strings_Inner = { "strings", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, 0, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FArrayPropertyParams Z_Construct_UFunction_UVertexPaintFunctionLibrary_VertexPaintDetectionPlugin_SortStringArrayAlphabetically_Statics::NewProp_strings = { "strings", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(VertexPaintFunctionLibrary_eventVertexPaintDetectionPlugin_SortStringArrayAlphabetically_Parms, strings), EArrayPropertyFlags::None, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UVertexPaintFunctionLibrary_VertexPaintDetectionPlugin_SortStringArrayAlphabetically_Statics::NewProp_ReturnValue_Inner = { "ReturnValue", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, 0, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FArrayPropertyParams Z_Construct_UFunction_UVertexPaintFunctionLibrary_VertexPaintDetectionPlugin_SortStringArrayAlphabetically_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(VertexPaintFunctionLibrary_eventVertexPaintDetectionPlugin_SortStringArrayAlphabetically_Parms, ReturnValue), EArrayPropertyFlags::None, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UVertexPaintFunctionLibrary_VertexPaintDetectionPlugin_SortStringArrayAlphabetically_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UVertexPaintFunctionLibrary_VertexPaintDetectionPlugin_SortStringArrayAlphabetically_Statics::NewProp_strings_Inner,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UVertexPaintFunctionLibrary_VertexPaintDetectionPlugin_SortStringArrayAlphabetically_Statics::NewProp_strings,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UVertexPaintFunctionLibrary_VertexPaintDetectionPlugin_SortStringArrayAlphabetically_Statics::NewProp_ReturnValue_Inner,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UVertexPaintFunctionLibrary_VertexPaintDetectionPlugin_SortStringArrayAlphabetically_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UVertexPaintFunctionLibrary_VertexPaintDetectionPlugin_SortStringArrayAlphabetically_Statics::Function_MetaDataParams[] = {
		{ "Category", "Runtime Vertex Color Paint and Detection Plugin" },
		{ "DisplayName", "Sort String Array Alphabetically" },
		{ "ModuleRelativePath", "Public/VertexPaintFunctionLibrary.h" },
		{ "ToolTip", "Sorts an array of strings alphabetically" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UVertexPaintFunctionLibrary_VertexPaintDetectionPlugin_SortStringArrayAlphabetically_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UVertexPaintFunctionLibrary, nullptr, "VertexPaintDetectionPlugin_SortStringArrayAlphabetically", nullptr, nullptr, sizeof(Z_Construct_UFunction_UVertexPaintFunctionLibrary_VertexPaintDetectionPlugin_SortStringArrayAlphabetically_Statics::VertexPaintFunctionLibrary_eventVertexPaintDetectionPlugin_SortStringArrayAlphabetically_Parms), Z_Construct_UFunction_UVertexPaintFunctionLibrary_VertexPaintDetectionPlugin_SortStringArrayAlphabetically_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UVertexPaintFunctionLibrary_VertexPaintDetectionPlugin_SortStringArrayAlphabetically_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04022401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UVertexPaintFunctionLibrary_VertexPaintDetectionPlugin_SortStringArrayAlphabetically_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UVertexPaintFunctionLibrary_VertexPaintDetectionPlugin_SortStringArrayAlphabetically_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UVertexPaintFunctionLibrary_VertexPaintDetectionPlugin_SortStringArrayAlphabetically()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UVertexPaintFunctionLibrary_VertexPaintDetectionPlugin_SortStringArrayAlphabetically_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UVertexPaintFunctionLibrary);
	UClass* Z_Construct_UClass_UVertexPaintFunctionLibrary_NoRegister()
	{
		return UVertexPaintFunctionLibrary::StaticClass();
	}
	struct Z_Construct_UClass_UVertexPaintFunctionLibrary_Statics
	{
		static UObject* (*const DependentSingletons[])();
		static const FClassFunctionLinkInfo FuncInfo[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UVertexPaintFunctionLibrary_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UBlueprintFunctionLibrary,
		(UObject* (*)())Z_Construct_UPackage__Script_VertexPaintDetectionPlugin,
	};
	const FClassFunctionLinkInfo Z_Construct_UClass_UVertexPaintFunctionLibrary_Statics::FuncInfo[] = {
		{ &Z_Construct_UFunction_UVertexPaintFunctionLibrary_ClearMeshPaintedSinceSessionStarted_Wrapper, "ClearMeshPaintedSinceSessionStarted_Wrapper" }, // 1007610202
		{ &Z_Construct_UFunction_UVertexPaintFunctionLibrary_CollisionChannelToObjectType, "CollisionChannelToObjectType" }, // 3059076174
		{ &Z_Construct_UFunction_UVertexPaintFunctionLibrary_DrawPrimitiveComponentBoundsBox, "DrawPrimitiveComponentBoundsBox" }, // 4038062929
		{ &Z_Construct_UFunction_UVertexPaintFunctionLibrary_GetAllMeshColorSnippetsAsString_Wrapper, "GetAllMeshColorSnippetsAsString_Wrapper" }, // 2309819299
		{ &Z_Construct_UFunction_UVertexPaintFunctionLibrary_GetAllMeshColorSnippetsAsTags_Wrapper, "GetAllMeshColorSnippetsAsTags_Wrapper" }, // 2695871505
		{ &Z_Construct_UFunction_UVertexPaintFunctionLibrary_GetAllMeshColorSnippetsTagsUnderTagCategory_Wrapper, "GetAllMeshColorSnippetsTagsUnderTagCategory_Wrapper" }, // 2634516602
		{ &Z_Construct_UFunction_UVertexPaintFunctionLibrary_GetAllPhysicsSurfaces, "GetAllPhysicsSurfaces" }, // 1025294110
		{ &Z_Construct_UFunction_UVertexPaintFunctionLibrary_GetAllVertexColorChannelsPhysicsSurfaceIsRegisteredTo_Wrapper, "GetAllVertexColorChannelsPhysicsSurfaceIsRegisteredTo_Wrapper" }, // 961912219
		{ &Z_Construct_UFunction_UVertexPaintFunctionLibrary_GetAllVertexColorsOnly_Wrapper, "GetAllVertexColorsOnly_Wrapper" }, // 2077254314
		{ &Z_Construct_UFunction_UVertexPaintFunctionLibrary_GetAmountOfLODsToPaintOn, "GetAmountOfLODsToPaintOn" }, // 4184483717
		{ &Z_Construct_UFunction_UVertexPaintFunctionLibrary_GetAmountOfPaintedColorsForEachChannel, "GetAmountOfPaintedColorsForEachChannel" }, // 2533344034
		{ &Z_Construct_UFunction_UVertexPaintFunctionLibrary_GetAmountOfTasksStartedByComponent, "GetAmountOfTasksStartedByComponent" }, // 1027269822
		{ &Z_Construct_UFunction_UVertexPaintFunctionLibrary_GetCalculateColorsDetectionTasksAmount_Wrapper, "GetCalculateColorsDetectionTasksAmount_Wrapper" }, // 260025674
		{ &Z_Construct_UFunction_UVertexPaintFunctionLibrary_GetCalculateColorsPaintTasksAmount_Wrapper, "GetCalculateColorsPaintTasksAmount_Wrapper" }, // 1655599290
		{ &Z_Construct_UFunction_UVertexPaintFunctionLibrary_GetClosestVertexDataOnMesh_Wrapper, "GetClosestVertexDataOnMesh_Wrapper" }, // 159668038
		{ &Z_Construct_UFunction_UVertexPaintFunctionLibrary_GetClothAssets, "GetClothAssets" }, // 4042919301
		{ &Z_Construct_UFunction_UVertexPaintFunctionLibrary_GetColorSnippetReferenceDataAsset, "GetColorSnippetReferenceDataAsset" }, // 3057217385
		{ &Z_Construct_UFunction_UVertexPaintFunctionLibrary_GetColorsToApplyFromPhysicsMaterial_Wrapper, "GetColorsToApplyFromPhysicsMaterial_Wrapper" }, // 4158765945
		{ &Z_Construct_UFunction_UVertexPaintFunctionLibrary_GetMeshColorSnippetsTagsInTagCategory_Wrapper, "GetMeshColorSnippetsTagsInTagCategory_Wrapper" }, // 2580840026
		{ &Z_Construct_UFunction_UVertexPaintFunctionLibrary_GetMeshComponentVertexColors_Wrapper, "GetMeshComponentVertexColors_Wrapper" }, // 3773351284
		{ &Z_Construct_UFunction_UVertexPaintFunctionLibrary_GetMeshPaintedSinceSessionStarted_Wrapper, "GetMeshPaintedSinceSessionStarted_Wrapper" }, // 58969705
		{ &Z_Construct_UFunction_UVertexPaintFunctionLibrary_GetOptimizationDataAsset, "GetOptimizationDataAsset" }, // 675272643
		{ &Z_Construct_UFunction_UVertexPaintFunctionLibrary_GetPhysicalMaterialUsingPhysicsSurface_Wrapper, "GetPhysicalMaterialUsingPhysicsSurface_Wrapper" }, // 954837344
		{ &Z_Construct_UFunction_UVertexPaintFunctionLibrary_GetTheMostDominantPhysicsSurface_Wrapper, "GetTheMostDominantPhysicsSurface_Wrapper" }, // 420442905
		{ &Z_Construct_UFunction_UVertexPaintFunctionLibrary_GetVertexPaintMaterialDataAsset, "GetVertexPaintMaterialDataAsset" }, // 1664496811
		{ &Z_Construct_UFunction_UVertexPaintFunctionLibrary_IsWorldValid, "IsWorldValid" }, // 3152927658
		{ &Z_Construct_UFunction_UVertexPaintFunctionLibrary_MultisphereTraceForPaintAtLocation_Wrapper, "MultisphereTraceForPaintAtLocation_Wrapper" }, // 2555045372
		{ &Z_Construct_UFunction_UVertexPaintFunctionLibrary_ObjectTypeToCollisionChannel, "ObjectTypeToCollisionChannel" }, // 1354256861
		{ &Z_Construct_UFunction_UVertexPaintFunctionLibrary_PaintColorSnippetOnMesh_Wrappers, "PaintColorSnippetOnMesh_Wrappers" }, // 3035922867
		{ &Z_Construct_UFunction_UVertexPaintFunctionLibrary_PaintOnEntireMesh_Wrapper, "PaintOnEntireMesh_Wrapper" }, // 3298551637
		{ &Z_Construct_UFunction_UVertexPaintFunctionLibrary_PaintOnMeshAtLocation_Wrapper, "PaintOnMeshAtLocation_Wrapper" }, // 4130140724
		{ &Z_Construct_UFunction_UVertexPaintFunctionLibrary_PaintOnMeshWithinArea_Wrapper, "PaintOnMeshWithinArea_Wrapper" }, // 964153184
		{ &Z_Construct_UFunction_UVertexPaintFunctionLibrary_SetChaosClothPhysics, "SetChaosClothPhysics" }, // 2480235337
		{ &Z_Construct_UFunction_UVertexPaintFunctionLibrary_SetChaosWheeledVehicleFrictionMultiplier_Wrapper, "SetChaosWheeledVehicleFrictionMultiplier_Wrapper" }, // 2731853225
		{ &Z_Construct_UFunction_UVertexPaintFunctionLibrary_SetMeshComponentVertexColors_Wrapper, "SetMeshComponentVertexColors_Wrapper" }, // 1242427943
		{ &Z_Construct_UFunction_UVertexPaintFunctionLibrary_SetMeshComponentVertexColorsUsingSerializedString_Wrapper, "SetMeshComponentVertexColorsUsingSerializedString_Wrapper" }, // 1662071146
		{ &Z_Construct_UFunction_UVertexPaintFunctionLibrary_UpdateChaosClothPhysicsWithExistingColors, "UpdateChaosClothPhysicsWithExistingColors" }, // 983051467
#if WITH_EDITOR
		{ &Z_Construct_UFunction_UVertexPaintFunctionLibrary_VertexPaintDetectionPlugin_GetObjectNameFromSoftObjectPtr, "VertexPaintDetectionPlugin_GetObjectNameFromSoftObjectPtr" }, // 2669873275
#endif //WITH_EDITOR
#if WITH_EDITOR
		{ &Z_Construct_UFunction_UVertexPaintFunctionLibrary_VertexPaintDetectionPlugin_GetObjectsOfClass, "VertexPaintDetectionPlugin_GetObjectsOfClass" }, // 184352999
#endif //WITH_EDITOR
#if WITH_EDITOR
		{ &Z_Construct_UFunction_UVertexPaintFunctionLibrary_VertexPaintDetectionPlugin_GetObjectsOfClassAsSoftPtrs, "VertexPaintDetectionPlugin_GetObjectsOfClassAsSoftPtrs" }, // 240800450
#endif //WITH_EDITOR
		{ &Z_Construct_UFunction_UVertexPaintFunctionLibrary_VertexPaintDetectionPlugin_GetSkeletalMesh, "VertexPaintDetectionPlugin_GetSkeletalMesh" }, // 2639907431
		{ &Z_Construct_UFunction_UVertexPaintFunctionLibrary_VertexPaintDetectionPlugin_GetSkeletalMeshVertexColorsAtLOD, "VertexPaintDetectionPlugin_GetSkeletalMeshVertexColorsAtLOD" }, // 4137575007
#if WITH_EDITOR
		{ &Z_Construct_UFunction_UVertexPaintFunctionLibrary_VertexPaintDetectionPlugin_GetSoftObjectPathFromSoftObjectPtr, "VertexPaintDetectionPlugin_GetSoftObjectPathFromSoftObjectPtr" }, // 582665638
#endif //WITH_EDITOR
		{ &Z_Construct_UFunction_UVertexPaintFunctionLibrary_VertexPaintDetectionPlugin_GetStaticMeshVertexColorsAtLOD, "VertexPaintDetectionPlugin_GetStaticMeshVertexColorsAtLOD" }, // 397862966
		{ &Z_Construct_UFunction_UVertexPaintFunctionLibrary_VertexPaintDetectionPlugin_SetSkeletalMeshAndReleaseResources, "VertexPaintDetectionPlugin_SetSkeletalMeshAndReleaseResources" }, // 545377217
		{ &Z_Construct_UFunction_UVertexPaintFunctionLibrary_VertexPaintDetectionPlugin_SetStaticMeshAndReleaseOverrideVertexColors, "VertexPaintDetectionPlugin_SetStaticMeshAndReleaseOverrideVertexColors" }, // 3759494551
		{ &Z_Construct_UFunction_UVertexPaintFunctionLibrary_VertexPaintDetectionPlugin_SortAssetsNamesAlphabetically, "VertexPaintDetectionPlugin_SortAssetsNamesAlphabetically" }, // 4125624677
		{ &Z_Construct_UFunction_UVertexPaintFunctionLibrary_VertexPaintDetectionPlugin_SortStringArrayAlphabetically, "VertexPaintDetectionPlugin_SortStringArrayAlphabetically" }, // 2100778277
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UVertexPaintFunctionLibrary_Statics::Class_MetaDataParams[] = {
		{ "Comment", "/**\n *\n */" },
		{ "IncludePath", "VertexPaintFunctionLibrary.h" },
		{ "ModuleRelativePath", "Public/VertexPaintFunctionLibrary.h" },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_UVertexPaintFunctionLibrary_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UVertexPaintFunctionLibrary>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_UVertexPaintFunctionLibrary_Statics::ClassParams = {
		&UVertexPaintFunctionLibrary::StaticClass,
		nullptr,
		&StaticCppClassTypeInfo,
		DependentSingletons,
		FuncInfo,
		nullptr,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		UE_ARRAY_COUNT(FuncInfo),
		0,
		0,
		0x001000A0u,
		METADATA_PARAMS(Z_Construct_UClass_UVertexPaintFunctionLibrary_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UVertexPaintFunctionLibrary_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UVertexPaintFunctionLibrary()
	{
		if (!Z_Registration_Info_UClass_UVertexPaintFunctionLibrary.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UVertexPaintFunctionLibrary.OuterSingleton, Z_Construct_UClass_UVertexPaintFunctionLibrary_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_UVertexPaintFunctionLibrary.OuterSingleton;
	}
	template<> VERTEXPAINTDETECTIONPLUGIN_API UClass* StaticClass<UVertexPaintFunctionLibrary>()
	{
		return UVertexPaintFunctionLibrary::StaticClass();
	}
	DEFINE_VTABLE_PTR_HELPER_CTOR(UVertexPaintFunctionLibrary);
	UVertexPaintFunctionLibrary::~UVertexPaintFunctionLibrary() {}
	struct Z_CompiledInDeferFile_FID_build_U5M_Marketplace_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_VertexPaintDetectionPlugin_Source_VertexPaintDetectionPlugin_Public_VertexPaintFunctionLibrary_h_Statics
	{
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_build_U5M_Marketplace_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_VertexPaintDetectionPlugin_Source_VertexPaintDetectionPlugin_Public_VertexPaintFunctionLibrary_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_UVertexPaintFunctionLibrary, UVertexPaintFunctionLibrary::StaticClass, TEXT("UVertexPaintFunctionLibrary"), &Z_Registration_Info_UClass_UVertexPaintFunctionLibrary, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UVertexPaintFunctionLibrary), 2281085958U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_build_U5M_Marketplace_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_VertexPaintDetectionPlugin_Source_VertexPaintDetectionPlugin_Public_VertexPaintFunctionLibrary_h_3057195717(TEXT("/Script/VertexPaintDetectionPlugin"),
		Z_CompiledInDeferFile_FID_build_U5M_Marketplace_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_VertexPaintDetectionPlugin_Source_VertexPaintDetectionPlugin_Public_VertexPaintFunctionLibrary_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_build_U5M_Marketplace_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_VertexPaintDetectionPlugin_Source_VertexPaintDetectionPlugin_Public_VertexPaintFunctionLibrary_h_Statics::ClassInfo),
		nullptr, 0,
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
