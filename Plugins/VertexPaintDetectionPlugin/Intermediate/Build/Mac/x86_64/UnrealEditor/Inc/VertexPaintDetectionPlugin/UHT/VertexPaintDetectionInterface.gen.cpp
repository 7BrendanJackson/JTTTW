// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "VertexPaintDetectionPlugin/Public/VertexPaintDetectionInterface.h"
#include "VertexPaintDetectionPlugin/Public/VertexPaintDetectionStructs.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeVertexPaintDetectionInterface() {}
// Cross Module References
	CLOTHINGSYSTEMRUNTIMEINTERFACE_API UClass* Z_Construct_UClass_UClothingAssetBase_NoRegister();
	COREUOBJECT_API UClass* Z_Construct_UClass_UInterface();
	ENGINE_API UClass* Z_Construct_UClass_AActor_NoRegister();
	ENGINE_API UClass* Z_Construct_UClass_UPrimitiveComponent_NoRegister();
	ENGINE_API UClass* Z_Construct_UClass_USkeletalMeshComponent_NoRegister();
	UPackage* Z_Construct_UPackage__Script_VertexPaintDetectionPlugin();
	VERTEXPAINTDETECTIONPLUGIN_API UClass* Z_Construct_UClass_UVertexPaintDetectionInterface();
	VERTEXPAINTDETECTIONPLUGIN_API UClass* Z_Construct_UClass_UVertexPaintDetectionInterface_NoRegister();
	VERTEXPAINTDETECTIONPLUGIN_API UScriptStruct* Z_Construct_UScriptStruct_FVertexDetectAdditionalDataToPassThrough();
	VERTEXPAINTDETECTIONPLUGIN_API UScriptStruct* Z_Construct_UScriptStruct_FVertexDetectAmountOfPaintedColorsOfEachChannel();
	VERTEXPAINTDETECTIONPLUGIN_API UScriptStruct* Z_Construct_UScriptStruct_FVertexDetectAvarageColorInAreaInfo();
	VERTEXPAINTDETECTIONPLUGIN_API UScriptStruct* Z_Construct_UScriptStruct_FVertexDetectClosestVertexDataResultStruct();
	VERTEXPAINTDETECTIONPLUGIN_API UScriptStruct* Z_Construct_UScriptStruct_FVertexDetectClothSettingsStruct();
	VERTEXPAINTDETECTIONPLUGIN_API UScriptStruct* Z_Construct_UScriptStruct_FVertexDetectEstimatedColorAtHitLocationResultStruct();
	VERTEXPAINTDETECTIONPLUGIN_API UScriptStruct* Z_Construct_UScriptStruct_FVertexDetectGetColorsOnlyStruct();
	VERTEXPAINTDETECTIONPLUGIN_API UScriptStruct* Z_Construct_UScriptStruct_FVertexDetectInfoStruct();
	VERTEXPAINTDETECTIONPLUGIN_API UScriptStruct* Z_Construct_UScriptStruct_FVertexDetectMeshDataStruct();
	VERTEXPAINTDETECTIONPLUGIN_API UScriptStruct* Z_Construct_UScriptStruct_FVertexDetectTaskResultInfo();
	VERTEXPAINTDETECTIONPLUGIN_API UScriptStruct* Z_Construct_UScriptStruct_FVertexDetectVertexColorsOnEachBone();
	VERTEXPAINTDETECTIONPLUGIN_API UScriptStruct* Z_Construct_UScriptStruct_FVertexPaintAtLocationStruct();
	VERTEXPAINTDETECTIONPLUGIN_API UScriptStruct* Z_Construct_UScriptStruct_FVertexPaintColorSnippetStruct();
	VERTEXPAINTDETECTIONPLUGIN_API UScriptStruct* Z_Construct_UScriptStruct_FVertexPainthWithinAreaStruct();
	VERTEXPAINTDETECTIONPLUGIN_API UScriptStruct* Z_Construct_UScriptStruct_FVertexPaintOnEntireMeshStruct();
	VERTEXPAINTDETECTIONPLUGIN_API UScriptStruct* Z_Construct_UScriptStruct_FVertexPaintStruct();
// End Cross Module References
	DEFINE_FUNCTION(IVertexPaintDetectionInterface::execClothEndOverlappingMesh)
	{
		P_GET_OBJECT(UPrimitiveComponent,Z_Param_OverlappedComponent);
		P_GET_OBJECT(AActor,Z_Param_OtherActor);
		P_GET_OBJECT(UPrimitiveComponent,Z_Param_OtherComp);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->ClothEndOverlappingMesh_Implementation(Z_Param_OverlappedComponent,Z_Param_OtherActor,Z_Param_OtherComp);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(IVertexPaintDetectionInterface::execClothBeginOverlappingMesh)
	{
		P_GET_OBJECT(UPrimitiveComponent,Z_Param_OverlappedComponent);
		P_GET_OBJECT(AActor,Z_Param_OtherActor);
		P_GET_OBJECT(UPrimitiveComponent,Z_Param_OtherComp);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->ClothBeginOverlappingMesh_Implementation(Z_Param_OverlappedComponent,Z_Param_OtherActor,Z_Param_OtherComp);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(IVertexPaintDetectionInterface::execGetSkeletalMeshClothPhysicsSettings)
	{
		P_GET_OBJECT(USkeletalMeshComponent,Z_Param_skeletalMeshComponentTryingToGetClothSettingsFor);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(TMap<UClothingAssetBase*,FVertexDetectClothSettingsStruct>*)Z_Param__Result=P_THIS->GetSkeletalMeshClothPhysicsSettings_Implementation(Z_Param_skeletalMeshComponentTryingToGetClothSettingsFor);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(IVertexPaintDetectionInterface::execColorsAppliedOnActor)
	{
		P_GET_STRUCT(FVertexDetectTaskResultInfo,Z_Param_taskResultInfo);
		P_GET_STRUCT_REF(FVertexDetectMeshDataStruct,Z_Param_Out_meshData);
		P_GET_STRUCT(FVertexPaintStruct,Z_Param_paintedOnActorSettings);
		P_GET_STRUCT(FVertexDetectAmountOfPaintedColorsOfEachChannel,Z_Param_amountOfPaintedColorsOfEachChannel);
		P_GET_STRUCT(FVertexDetectVertexColorsOnEachBone,Z_Param_vertexColorsOnEachBone);
		P_GET_STRUCT(FVertexDetectAdditionalDataToPassThrough,Z_Param_additionalData);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->ColorsAppliedOnActor_Implementation(Z_Param_taskResultInfo,Z_Param_Out_meshData,Z_Param_paintedOnActorSettings,Z_Param_amountOfPaintedColorsOfEachChannel,Z_Param_vertexColorsOnEachBone,Z_Param_additionalData);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(IVertexPaintDetectionInterface::execPaintedOnActor_PaintColorSnippet)
	{
		P_GET_STRUCT(FVertexDetectTaskResultInfo,Z_Param_taskResultInfo);
		P_GET_STRUCT_REF(FVertexDetectMeshDataStruct,Z_Param_Out_meshData);
		P_GET_STRUCT(FVertexPaintColorSnippetStruct,Z_Param_paintedColorSnippetSettings);
		P_GET_STRUCT(FVertexDetectAmountOfPaintedColorsOfEachChannel,Z_Param_amountOfPaintedColorsOfEachChannel);
		P_GET_STRUCT(FVertexDetectVertexColorsOnEachBone,Z_Param_vertexColorsOnEachBone);
		P_GET_STRUCT(FVertexDetectAdditionalDataToPassThrough,Z_Param_additionalData);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->PaintedOnActor_PaintColorSnippet_Implementation(Z_Param_taskResultInfo,Z_Param_Out_meshData,Z_Param_paintedColorSnippetSettings,Z_Param_amountOfPaintedColorsOfEachChannel,Z_Param_vertexColorsOnEachBone,Z_Param_additionalData);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(IVertexPaintDetectionInterface::execPaintedOnActor_EntireMesh)
	{
		P_GET_STRUCT(FVertexDetectTaskResultInfo,Z_Param_taskResultInfo);
		P_GET_STRUCT_REF(FVertexDetectMeshDataStruct,Z_Param_Out_meshData);
		P_GET_STRUCT(FVertexPaintOnEntireMeshStruct,Z_Param_paintedEntireMeshSettings);
		P_GET_STRUCT(FVertexDetectAmountOfPaintedColorsOfEachChannel,Z_Param_amountOfPaintedColorsOfEachChannel);
		P_GET_STRUCT(FVertexDetectVertexColorsOnEachBone,Z_Param_vertexColorsOnEachBone);
		P_GET_STRUCT(FVertexDetectAdditionalDataToPassThrough,Z_Param_additionalData);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->PaintedOnActor_EntireMesh_Implementation(Z_Param_taskResultInfo,Z_Param_Out_meshData,Z_Param_paintedEntireMeshSettings,Z_Param_amountOfPaintedColorsOfEachChannel,Z_Param_vertexColorsOnEachBone,Z_Param_additionalData);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(IVertexPaintDetectionInterface::execPaintedOnActor_WithinArea)
	{
		P_GET_STRUCT(FVertexDetectTaskResultInfo,Z_Param_taskResultInfo);
		P_GET_STRUCT_REF(FVertexDetectMeshDataStruct,Z_Param_Out_meshData);
		P_GET_STRUCT(FVertexPainthWithinAreaStruct,Z_Param_paintedWithinAreaSettings);
		P_GET_STRUCT(FVertexDetectAmountOfPaintedColorsOfEachChannel,Z_Param_amountOfPaintedColorsOfEachChannel);
		P_GET_STRUCT(FVertexDetectVertexColorsOnEachBone,Z_Param_vertexColorsOnEachBone);
		P_GET_STRUCT(FVertexDetectAdditionalDataToPassThrough,Z_Param_additionalData);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->PaintedOnActor_WithinArea_Implementation(Z_Param_taskResultInfo,Z_Param_Out_meshData,Z_Param_paintedWithinAreaSettings,Z_Param_amountOfPaintedColorsOfEachChannel,Z_Param_vertexColorsOnEachBone,Z_Param_additionalData);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(IVertexPaintDetectionInterface::execPaintedOnActor_AtLocation)
	{
		P_GET_STRUCT(FVertexDetectTaskResultInfo,Z_Param_taskResultInfo);
		P_GET_STRUCT_REF(FVertexDetectMeshDataStruct,Z_Param_Out_meshData);
		P_GET_STRUCT(FVertexPaintAtLocationStruct,Z_Param_paintedAtLocationSettings);
		P_GET_STRUCT(FVertexDetectClosestVertexDataResultStruct,Z_Param_closestVertexColorResult);
		P_GET_STRUCT(FVertexDetectEstimatedColorAtHitLocationResultStruct,Z_Param_estimatedColorAtHitLocationResult);
		P_GET_STRUCT(FVertexDetectAvarageColorInAreaInfo,Z_Param_avarageColorInAreaInfo);
		P_GET_STRUCT(FVertexDetectAmountOfPaintedColorsOfEachChannel,Z_Param_amountOfPaintedColorsOfEachChannel);
		P_GET_STRUCT(FVertexDetectVertexColorsOnEachBone,Z_Param_vertexColorsOnEachBone);
		P_GET_STRUCT(FVertexDetectAdditionalDataToPassThrough,Z_Param_additionalData);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->PaintedOnActor_AtLocation_Implementation(Z_Param_taskResultInfo,Z_Param_Out_meshData,Z_Param_paintedAtLocationSettings,Z_Param_closestVertexColorResult,Z_Param_estimatedColorAtHitLocationResult,Z_Param_avarageColorInAreaInfo,Z_Param_amountOfPaintedColorsOfEachChannel,Z_Param_vertexColorsOnEachBone,Z_Param_additionalData);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(IVertexPaintDetectionInterface::execGetAllVertexColorsOnlyOnActor)
	{
		P_GET_STRUCT(FVertexDetectTaskResultInfo,Z_Param_taskResultInfo);
		P_GET_STRUCT_REF(FVertexDetectMeshDataStruct,Z_Param_Out_meshData);
		P_GET_STRUCT(FVertexDetectGetColorsOnlyStruct,Z_Param_gotAllVertexColorsWithSettings);
		P_GET_STRUCT(FVertexDetectAmountOfPaintedColorsOfEachChannel,Z_Param_amountOfPaintedColorsOfEachChannel);
		P_GET_STRUCT(FVertexDetectVertexColorsOnEachBone,Z_Param_vertexColorsOnEachBone);
		P_GET_STRUCT(FVertexDetectAdditionalDataToPassThrough,Z_Param_additionalData);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->GetAllVertexColorsOnlyOnActor_Implementation(Z_Param_taskResultInfo,Z_Param_Out_meshData,Z_Param_gotAllVertexColorsWithSettings,Z_Param_amountOfPaintedColorsOfEachChannel,Z_Param_vertexColorsOnEachBone,Z_Param_additionalData);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(IVertexPaintDetectionInterface::execGetClosestVertexDataOnActor)
	{
		P_GET_STRUCT(FVertexDetectTaskResultInfo,Z_Param_taskResultInfo);
		P_GET_STRUCT_REF(FVertexDetectMeshDataStruct,Z_Param_Out_meshData);
		P_GET_STRUCT(FVertexDetectInfoStruct,Z_Param_detectedMeshWithSettings);
		P_GET_STRUCT(FVertexDetectClosestVertexDataResultStruct,Z_Param_closestVertexColorResult);
		P_GET_STRUCT(FVertexDetectEstimatedColorAtHitLocationResultStruct,Z_Param_estimatedColorAtHitLocationResult);
		P_GET_STRUCT(FVertexDetectAvarageColorInAreaInfo,Z_Param_avarageColorInAreaInfo);
		P_GET_STRUCT(FVertexDetectAmountOfPaintedColorsOfEachChannel,Z_Param_amountOfPaintedColorsOfEachChannel);
		P_GET_STRUCT(FVertexDetectVertexColorsOnEachBone,Z_Param_vertexColorsOnEachBone);
		P_GET_STRUCT(FVertexDetectAdditionalDataToPassThrough,Z_Param_additionalData);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->GetClosestVertexDataOnActor_Implementation(Z_Param_taskResultInfo,Z_Param_Out_meshData,Z_Param_detectedMeshWithSettings,Z_Param_closestVertexColorResult,Z_Param_estimatedColorAtHitLocationResult,Z_Param_avarageColorInAreaInfo,Z_Param_amountOfPaintedColorsOfEachChannel,Z_Param_vertexColorsOnEachBone,Z_Param_additionalData);
		P_NATIVE_END;
	}
	struct VertexPaintDetectionInterface_eventClothBeginOverlappingMesh_Parms
	{
		UPrimitiveComponent* OverlappedComponent;
		AActor* OtherActor;
		UPrimitiveComponent* OtherComp;
	};
	struct VertexPaintDetectionInterface_eventClothEndOverlappingMesh_Parms
	{
		UPrimitiveComponent* OverlappedComponent;
		AActor* OtherActor;
		UPrimitiveComponent* OtherComp;
	};
	struct VertexPaintDetectionInterface_eventColorsAppliedOnActor_Parms
	{
		FVertexDetectTaskResultInfo taskResultInfo;
		FVertexDetectMeshDataStruct meshData;
		FVertexPaintStruct paintedOnActorSettings;
		FVertexDetectAmountOfPaintedColorsOfEachChannel amountOfPaintedColorsOfEachChannel;
		FVertexDetectVertexColorsOnEachBone vertexColorsOnEachBone;
		FVertexDetectAdditionalDataToPassThrough additionalData;
	};
	struct VertexPaintDetectionInterface_eventGetAllVertexColorsOnlyOnActor_Parms
	{
		FVertexDetectTaskResultInfo taskResultInfo;
		FVertexDetectMeshDataStruct meshData;
		FVertexDetectGetColorsOnlyStruct gotAllVertexColorsWithSettings;
		FVertexDetectAmountOfPaintedColorsOfEachChannel amountOfPaintedColorsOfEachChannel;
		FVertexDetectVertexColorsOnEachBone vertexColorsOnEachBone;
		FVertexDetectAdditionalDataToPassThrough additionalData;
	};
	struct VertexPaintDetectionInterface_eventGetClosestVertexDataOnActor_Parms
	{
		FVertexDetectTaskResultInfo taskResultInfo;
		FVertexDetectMeshDataStruct meshData;
		FVertexDetectInfoStruct detectedMeshWithSettings;
		FVertexDetectClosestVertexDataResultStruct closestVertexColorResult;
		FVertexDetectEstimatedColorAtHitLocationResultStruct estimatedColorAtHitLocationResult;
		FVertexDetectAvarageColorInAreaInfo avarageColorInAreaInfo;
		FVertexDetectAmountOfPaintedColorsOfEachChannel amountOfPaintedColorsOfEachChannel;
		FVertexDetectVertexColorsOnEachBone vertexColorsOnEachBone;
		FVertexDetectAdditionalDataToPassThrough additionalData;
	};
	struct VertexPaintDetectionInterface_eventGetSkeletalMeshClothPhysicsSettings_Parms
	{
		USkeletalMeshComponent* skeletalMeshComponentTryingToGetClothSettingsFor;
		TMap<UClothingAssetBase*,FVertexDetectClothSettingsStruct> ReturnValue;
	};
	struct VertexPaintDetectionInterface_eventPaintedOnActor_AtLocation_Parms
	{
		FVertexDetectTaskResultInfo taskResultInfo;
		FVertexDetectMeshDataStruct meshData;
		FVertexPaintAtLocationStruct paintedAtLocationSettings;
		FVertexDetectClosestVertexDataResultStruct closestVertexColorResult;
		FVertexDetectEstimatedColorAtHitLocationResultStruct estimatedColorAtHitLocationResult;
		FVertexDetectAvarageColorInAreaInfo avarageColorInAreaInfo;
		FVertexDetectAmountOfPaintedColorsOfEachChannel amountOfPaintedColorsOfEachChannel;
		FVertexDetectVertexColorsOnEachBone vertexColorsOnEachBone;
		FVertexDetectAdditionalDataToPassThrough additionalData;
	};
	struct VertexPaintDetectionInterface_eventPaintedOnActor_EntireMesh_Parms
	{
		FVertexDetectTaskResultInfo taskResultInfo;
		FVertexDetectMeshDataStruct meshData;
		FVertexPaintOnEntireMeshStruct paintedEntireMeshSettings;
		FVertexDetectAmountOfPaintedColorsOfEachChannel amountOfPaintedColorsOfEachChannel;
		FVertexDetectVertexColorsOnEachBone vertexColorsOnEachBone;
		FVertexDetectAdditionalDataToPassThrough additionalData;
	};
	struct VertexPaintDetectionInterface_eventPaintedOnActor_PaintColorSnippet_Parms
	{
		FVertexDetectTaskResultInfo taskResultInfo;
		FVertexDetectMeshDataStruct meshData;
		FVertexPaintColorSnippetStruct paintedColorSnippetSettings;
		FVertexDetectAmountOfPaintedColorsOfEachChannel amountOfPaintedColorsOfEachChannel;
		FVertexDetectVertexColorsOnEachBone vertexColorsOnEachBone;
		FVertexDetectAdditionalDataToPassThrough additionalData;
	};
	struct VertexPaintDetectionInterface_eventPaintedOnActor_WithinArea_Parms
	{
		FVertexDetectTaskResultInfo taskResultInfo;
		FVertexDetectMeshDataStruct meshData;
		FVertexPainthWithinAreaStruct paintedWithinAreaSettings;
		FVertexDetectAmountOfPaintedColorsOfEachChannel amountOfPaintedColorsOfEachChannel;
		FVertexDetectVertexColorsOnEachBone vertexColorsOnEachBone;
		FVertexDetectAdditionalDataToPassThrough additionalData;
	};
	void IVertexPaintDetectionInterface::ClothBeginOverlappingMesh(UPrimitiveComponent* OverlappedComponent, AActor* OtherActor, UPrimitiveComponent* OtherComp)
	{
		check(0 && "Do not directly call Event functions in Interfaces. Call Execute_ClothBeginOverlappingMesh instead.");
	}
	void IVertexPaintDetectionInterface::ClothEndOverlappingMesh(UPrimitiveComponent* OverlappedComponent, AActor* OtherActor, UPrimitiveComponent* OtherComp)
	{
		check(0 && "Do not directly call Event functions in Interfaces. Call Execute_ClothEndOverlappingMesh instead.");
	}
	void IVertexPaintDetectionInterface::ColorsAppliedOnActor(FVertexDetectTaskResultInfo taskResultInfo, FVertexDetectMeshDataStruct const& meshData, FVertexPaintStruct paintedOnActorSettings, FVertexDetectAmountOfPaintedColorsOfEachChannel amountOfPaintedColorsOfEachChannel, FVertexDetectVertexColorsOnEachBone vertexColorsOnEachBone, FVertexDetectAdditionalDataToPassThrough additionalData)
	{
		check(0 && "Do not directly call Event functions in Interfaces. Call Execute_ColorsAppliedOnActor instead.");
	}
	void IVertexPaintDetectionInterface::GetAllVertexColorsOnlyOnActor(FVertexDetectTaskResultInfo taskResultInfo, FVertexDetectMeshDataStruct const& meshData, FVertexDetectGetColorsOnlyStruct gotAllVertexColorsWithSettings, FVertexDetectAmountOfPaintedColorsOfEachChannel amountOfPaintedColorsOfEachChannel, FVertexDetectVertexColorsOnEachBone vertexColorsOnEachBone, FVertexDetectAdditionalDataToPassThrough additionalData)
	{
		check(0 && "Do not directly call Event functions in Interfaces. Call Execute_GetAllVertexColorsOnlyOnActor instead.");
	}
	void IVertexPaintDetectionInterface::GetClosestVertexDataOnActor(FVertexDetectTaskResultInfo taskResultInfo, FVertexDetectMeshDataStruct const& meshData, FVertexDetectInfoStruct detectedMeshWithSettings, FVertexDetectClosestVertexDataResultStruct closestVertexColorResult, FVertexDetectEstimatedColorAtHitLocationResultStruct estimatedColorAtHitLocationResult, FVertexDetectAvarageColorInAreaInfo avarageColorInAreaInfo, FVertexDetectAmountOfPaintedColorsOfEachChannel amountOfPaintedColorsOfEachChannel, FVertexDetectVertexColorsOnEachBone vertexColorsOnEachBone, FVertexDetectAdditionalDataToPassThrough additionalData)
	{
		check(0 && "Do not directly call Event functions in Interfaces. Call Execute_GetClosestVertexDataOnActor instead.");
	}
	TMap<UClothingAssetBase*,FVertexDetectClothSettingsStruct> IVertexPaintDetectionInterface::GetSkeletalMeshClothPhysicsSettings(USkeletalMeshComponent* skeletalMeshComponentTryingToGetClothSettingsFor)
	{
		check(0 && "Do not directly call Event functions in Interfaces. Call Execute_GetSkeletalMeshClothPhysicsSettings instead.");
		VertexPaintDetectionInterface_eventGetSkeletalMeshClothPhysicsSettings_Parms Parms;
		return Parms.ReturnValue;
	}
	void IVertexPaintDetectionInterface::PaintedOnActor_AtLocation(FVertexDetectTaskResultInfo taskResultInfo, FVertexDetectMeshDataStruct const& meshData, FVertexPaintAtLocationStruct paintedAtLocationSettings, FVertexDetectClosestVertexDataResultStruct closestVertexColorResult, FVertexDetectEstimatedColorAtHitLocationResultStruct estimatedColorAtHitLocationResult, FVertexDetectAvarageColorInAreaInfo avarageColorInAreaInfo, FVertexDetectAmountOfPaintedColorsOfEachChannel amountOfPaintedColorsOfEachChannel, FVertexDetectVertexColorsOnEachBone vertexColorsOnEachBone, FVertexDetectAdditionalDataToPassThrough additionalData)
	{
		check(0 && "Do not directly call Event functions in Interfaces. Call Execute_PaintedOnActor_AtLocation instead.");
	}
	void IVertexPaintDetectionInterface::PaintedOnActor_EntireMesh(FVertexDetectTaskResultInfo taskResultInfo, FVertexDetectMeshDataStruct const& meshData, FVertexPaintOnEntireMeshStruct paintedEntireMeshSettings, FVertexDetectAmountOfPaintedColorsOfEachChannel amountOfPaintedColorsOfEachChannel, FVertexDetectVertexColorsOnEachBone vertexColorsOnEachBone, FVertexDetectAdditionalDataToPassThrough additionalData)
	{
		check(0 && "Do not directly call Event functions in Interfaces. Call Execute_PaintedOnActor_EntireMesh instead.");
	}
	void IVertexPaintDetectionInterface::PaintedOnActor_PaintColorSnippet(FVertexDetectTaskResultInfo taskResultInfo, FVertexDetectMeshDataStruct const& meshData, FVertexPaintColorSnippetStruct paintedColorSnippetSettings, FVertexDetectAmountOfPaintedColorsOfEachChannel amountOfPaintedColorsOfEachChannel, FVertexDetectVertexColorsOnEachBone vertexColorsOnEachBone, FVertexDetectAdditionalDataToPassThrough additionalData)
	{
		check(0 && "Do not directly call Event functions in Interfaces. Call Execute_PaintedOnActor_PaintColorSnippet instead.");
	}
	void IVertexPaintDetectionInterface::PaintedOnActor_WithinArea(FVertexDetectTaskResultInfo taskResultInfo, FVertexDetectMeshDataStruct const& meshData, FVertexPainthWithinAreaStruct paintedWithinAreaSettings, FVertexDetectAmountOfPaintedColorsOfEachChannel amountOfPaintedColorsOfEachChannel, FVertexDetectVertexColorsOnEachBone vertexColorsOnEachBone, FVertexDetectAdditionalDataToPassThrough additionalData)
	{
		check(0 && "Do not directly call Event functions in Interfaces. Call Execute_PaintedOnActor_WithinArea instead.");
	}
	void UVertexPaintDetectionInterface::StaticRegisterNativesUVertexPaintDetectionInterface()
	{
		UClass* Class = UVertexPaintDetectionInterface::StaticClass();
		static const FNameNativePtrPair Funcs[] = {
			{ "ClothBeginOverlappingMesh", &IVertexPaintDetectionInterface::execClothBeginOverlappingMesh },
			{ "ClothEndOverlappingMesh", &IVertexPaintDetectionInterface::execClothEndOverlappingMesh },
			{ "ColorsAppliedOnActor", &IVertexPaintDetectionInterface::execColorsAppliedOnActor },
			{ "GetAllVertexColorsOnlyOnActor", &IVertexPaintDetectionInterface::execGetAllVertexColorsOnlyOnActor },
			{ "GetClosestVertexDataOnActor", &IVertexPaintDetectionInterface::execGetClosestVertexDataOnActor },
			{ "GetSkeletalMeshClothPhysicsSettings", &IVertexPaintDetectionInterface::execGetSkeletalMeshClothPhysicsSettings },
			{ "PaintedOnActor_AtLocation", &IVertexPaintDetectionInterface::execPaintedOnActor_AtLocation },
			{ "PaintedOnActor_EntireMesh", &IVertexPaintDetectionInterface::execPaintedOnActor_EntireMesh },
			{ "PaintedOnActor_PaintColorSnippet", &IVertexPaintDetectionInterface::execPaintedOnActor_PaintColorSnippet },
			{ "PaintedOnActor_WithinArea", &IVertexPaintDetectionInterface::execPaintedOnActor_WithinArea },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
	}
	struct Z_Construct_UFunction_UVertexPaintDetectionInterface_ClothBeginOverlappingMesh_Statics
	{
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_OverlappedComponent_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPropertyParams NewProp_OverlappedComponent;
		static const UECodeGen_Private::FObjectPropertyParams NewProp_OtherActor;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_OtherComp_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPropertyParams NewProp_OtherComp;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UVertexPaintDetectionInterface_ClothBeginOverlappingMesh_Statics::NewProp_OverlappedComponent_MetaData[] = {
		{ "EditInline", "true" },
	};
#endif
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UVertexPaintDetectionInterface_ClothBeginOverlappingMesh_Statics::NewProp_OverlappedComponent = { "OverlappedComponent", nullptr, (EPropertyFlags)0x0010000000080080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(VertexPaintDetectionInterface_eventClothBeginOverlappingMesh_Parms, OverlappedComponent), Z_Construct_UClass_UPrimitiveComponent_NoRegister, METADATA_PARAMS(Z_Construct_UFunction_UVertexPaintDetectionInterface_ClothBeginOverlappingMesh_Statics::NewProp_OverlappedComponent_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UVertexPaintDetectionInterface_ClothBeginOverlappingMesh_Statics::NewProp_OverlappedComponent_MetaData)) };
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UVertexPaintDetectionInterface_ClothBeginOverlappingMesh_Statics::NewProp_OtherActor = { "OtherActor", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(VertexPaintDetectionInterface_eventClothBeginOverlappingMesh_Parms, OtherActor), Z_Construct_UClass_AActor_NoRegister, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UVertexPaintDetectionInterface_ClothBeginOverlappingMesh_Statics::NewProp_OtherComp_MetaData[] = {
		{ "EditInline", "true" },
	};
#endif
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UVertexPaintDetectionInterface_ClothBeginOverlappingMesh_Statics::NewProp_OtherComp = { "OtherComp", nullptr, (EPropertyFlags)0x0010000000080080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(VertexPaintDetectionInterface_eventClothBeginOverlappingMesh_Parms, OtherComp), Z_Construct_UClass_UPrimitiveComponent_NoRegister, METADATA_PARAMS(Z_Construct_UFunction_UVertexPaintDetectionInterface_ClothBeginOverlappingMesh_Statics::NewProp_OtherComp_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UVertexPaintDetectionInterface_ClothBeginOverlappingMesh_Statics::NewProp_OtherComp_MetaData)) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UVertexPaintDetectionInterface_ClothBeginOverlappingMesh_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UVertexPaintDetectionInterface_ClothBeginOverlappingMesh_Statics::NewProp_OverlappedComponent,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UVertexPaintDetectionInterface_ClothBeginOverlappingMesh_Statics::NewProp_OtherActor,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UVertexPaintDetectionInterface_ClothBeginOverlappingMesh_Statics::NewProp_OtherComp,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UVertexPaintDetectionInterface_ClothBeginOverlappingMesh_Statics::Function_MetaDataParams[] = {
		{ "Category", "Runtime Vertex Color Paint and Detection Plugin|Cloth" },
		{ "ModuleRelativePath", "Public/VertexPaintDetectionInterface.h" },
		{ "ToolTip", "Runs on the Actor that Begin Overlapped Cloth." },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UVertexPaintDetectionInterface_ClothBeginOverlappingMesh_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UVertexPaintDetectionInterface, nullptr, "ClothBeginOverlappingMesh", nullptr, nullptr, sizeof(VertexPaintDetectionInterface_eventClothBeginOverlappingMesh_Parms), Z_Construct_UFunction_UVertexPaintDetectionInterface_ClothBeginOverlappingMesh_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UVertexPaintDetectionInterface_ClothBeginOverlappingMesh_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x0C020C00, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UVertexPaintDetectionInterface_ClothBeginOverlappingMesh_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UVertexPaintDetectionInterface_ClothBeginOverlappingMesh_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UVertexPaintDetectionInterface_ClothBeginOverlappingMesh()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UVertexPaintDetectionInterface_ClothBeginOverlappingMesh_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UVertexPaintDetectionInterface_ClothEndOverlappingMesh_Statics
	{
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_OverlappedComponent_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPropertyParams NewProp_OverlappedComponent;
		static const UECodeGen_Private::FObjectPropertyParams NewProp_OtherActor;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_OtherComp_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPropertyParams NewProp_OtherComp;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UVertexPaintDetectionInterface_ClothEndOverlappingMesh_Statics::NewProp_OverlappedComponent_MetaData[] = {
		{ "EditInline", "true" },
	};
#endif
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UVertexPaintDetectionInterface_ClothEndOverlappingMesh_Statics::NewProp_OverlappedComponent = { "OverlappedComponent", nullptr, (EPropertyFlags)0x0010000000080080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(VertexPaintDetectionInterface_eventClothEndOverlappingMesh_Parms, OverlappedComponent), Z_Construct_UClass_UPrimitiveComponent_NoRegister, METADATA_PARAMS(Z_Construct_UFunction_UVertexPaintDetectionInterface_ClothEndOverlappingMesh_Statics::NewProp_OverlappedComponent_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UVertexPaintDetectionInterface_ClothEndOverlappingMesh_Statics::NewProp_OverlappedComponent_MetaData)) };
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UVertexPaintDetectionInterface_ClothEndOverlappingMesh_Statics::NewProp_OtherActor = { "OtherActor", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(VertexPaintDetectionInterface_eventClothEndOverlappingMesh_Parms, OtherActor), Z_Construct_UClass_AActor_NoRegister, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UVertexPaintDetectionInterface_ClothEndOverlappingMesh_Statics::NewProp_OtherComp_MetaData[] = {
		{ "EditInline", "true" },
	};
#endif
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UVertexPaintDetectionInterface_ClothEndOverlappingMesh_Statics::NewProp_OtherComp = { "OtherComp", nullptr, (EPropertyFlags)0x0010000000080080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(VertexPaintDetectionInterface_eventClothEndOverlappingMesh_Parms, OtherComp), Z_Construct_UClass_UPrimitiveComponent_NoRegister, METADATA_PARAMS(Z_Construct_UFunction_UVertexPaintDetectionInterface_ClothEndOverlappingMesh_Statics::NewProp_OtherComp_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UVertexPaintDetectionInterface_ClothEndOverlappingMesh_Statics::NewProp_OtherComp_MetaData)) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UVertexPaintDetectionInterface_ClothEndOverlappingMesh_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UVertexPaintDetectionInterface_ClothEndOverlappingMesh_Statics::NewProp_OverlappedComponent,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UVertexPaintDetectionInterface_ClothEndOverlappingMesh_Statics::NewProp_OtherActor,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UVertexPaintDetectionInterface_ClothEndOverlappingMesh_Statics::NewProp_OtherComp,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UVertexPaintDetectionInterface_ClothEndOverlappingMesh_Statics::Function_MetaDataParams[] = {
		{ "Category", "Runtime Vertex Color Paint and Detection Plugin|Cloth" },
		{ "ModuleRelativePath", "Public/VertexPaintDetectionInterface.h" },
		{ "ToolTip", "Runs on the Actor that End Overlapped Cloth." },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UVertexPaintDetectionInterface_ClothEndOverlappingMesh_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UVertexPaintDetectionInterface, nullptr, "ClothEndOverlappingMesh", nullptr, nullptr, sizeof(VertexPaintDetectionInterface_eventClothEndOverlappingMesh_Parms), Z_Construct_UFunction_UVertexPaintDetectionInterface_ClothEndOverlappingMesh_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UVertexPaintDetectionInterface_ClothEndOverlappingMesh_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x0C020C00, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UVertexPaintDetectionInterface_ClothEndOverlappingMesh_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UVertexPaintDetectionInterface_ClothEndOverlappingMesh_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UVertexPaintDetectionInterface_ClothEndOverlappingMesh()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UVertexPaintDetectionInterface_ClothEndOverlappingMesh_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UVertexPaintDetectionInterface_ColorsAppliedOnActor_Statics
	{
		static const UECodeGen_Private::FStructPropertyParams NewProp_taskResultInfo;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_meshData_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_meshData;
		static const UECodeGen_Private::FStructPropertyParams NewProp_paintedOnActorSettings;
		static const UECodeGen_Private::FStructPropertyParams NewProp_amountOfPaintedColorsOfEachChannel;
		static const UECodeGen_Private::FStructPropertyParams NewProp_vertexColorsOnEachBone;
		static const UECodeGen_Private::FStructPropertyParams NewProp_additionalData;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UVertexPaintDetectionInterface_ColorsAppliedOnActor_Statics::NewProp_taskResultInfo = { "taskResultInfo", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(VertexPaintDetectionInterface_eventColorsAppliedOnActor_Parms, taskResultInfo), Z_Construct_UScriptStruct_FVertexDetectTaskResultInfo, METADATA_PARAMS(nullptr, 0) }; // 1041766329
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UVertexPaintDetectionInterface_ColorsAppliedOnActor_Statics::NewProp_meshData_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UVertexPaintDetectionInterface_ColorsAppliedOnActor_Statics::NewProp_meshData = { "meshData", nullptr, (EPropertyFlags)0x0010008008000182, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(VertexPaintDetectionInterface_eventColorsAppliedOnActor_Parms, meshData), Z_Construct_UScriptStruct_FVertexDetectMeshDataStruct, METADATA_PARAMS(Z_Construct_UFunction_UVertexPaintDetectionInterface_ColorsAppliedOnActor_Statics::NewProp_meshData_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UVertexPaintDetectionInterface_ColorsAppliedOnActor_Statics::NewProp_meshData_MetaData)) }; // 4242319910
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UVertexPaintDetectionInterface_ColorsAppliedOnActor_Statics::NewProp_paintedOnActorSettings = { "paintedOnActorSettings", nullptr, (EPropertyFlags)0x0010008000000080, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(VertexPaintDetectionInterface_eventColorsAppliedOnActor_Parms, paintedOnActorSettings), Z_Construct_UScriptStruct_FVertexPaintStruct, METADATA_PARAMS(nullptr, 0) }; // 2970346567
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UVertexPaintDetectionInterface_ColorsAppliedOnActor_Statics::NewProp_amountOfPaintedColorsOfEachChannel = { "amountOfPaintedColorsOfEachChannel", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(VertexPaintDetectionInterface_eventColorsAppliedOnActor_Parms, amountOfPaintedColorsOfEachChannel), Z_Construct_UScriptStruct_FVertexDetectAmountOfPaintedColorsOfEachChannel, METADATA_PARAMS(nullptr, 0) }; // 1724626882
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UVertexPaintDetectionInterface_ColorsAppliedOnActor_Statics::NewProp_vertexColorsOnEachBone = { "vertexColorsOnEachBone", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(VertexPaintDetectionInterface_eventColorsAppliedOnActor_Parms, vertexColorsOnEachBone), Z_Construct_UScriptStruct_FVertexDetectVertexColorsOnEachBone, METADATA_PARAMS(nullptr, 0) }; // 1945807607
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UVertexPaintDetectionInterface_ColorsAppliedOnActor_Statics::NewProp_additionalData = { "additionalData", nullptr, (EPropertyFlags)0x0010008000000080, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(VertexPaintDetectionInterface_eventColorsAppliedOnActor_Parms, additionalData), Z_Construct_UScriptStruct_FVertexDetectAdditionalDataToPassThrough, METADATA_PARAMS(nullptr, 0) }; // 2814627034
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UVertexPaintDetectionInterface_ColorsAppliedOnActor_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UVertexPaintDetectionInterface_ColorsAppliedOnActor_Statics::NewProp_taskResultInfo,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UVertexPaintDetectionInterface_ColorsAppliedOnActor_Statics::NewProp_meshData,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UVertexPaintDetectionInterface_ColorsAppliedOnActor_Statics::NewProp_paintedOnActorSettings,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UVertexPaintDetectionInterface_ColorsAppliedOnActor_Statics::NewProp_amountOfPaintedColorsOfEachChannel,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UVertexPaintDetectionInterface_ColorsAppliedOnActor_Statics::NewProp_vertexColorsOnEachBone,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UVertexPaintDetectionInterface_ColorsAppliedOnActor_Statics::NewProp_additionalData,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UVertexPaintDetectionInterface_ColorsAppliedOnActor_Statics::Function_MetaDataParams[] = {
		{ "Category", "Runtime Vertex Color Paint and Detection Plugin|Painting" },
		{ "ModuleRelativePath", "Public/VertexPaintDetectionInterface.h" },
		{ "ToolTip", "Runs on the Actor that got Colors Applied on it" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UVertexPaintDetectionInterface_ColorsAppliedOnActor_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UVertexPaintDetectionInterface, nullptr, "ColorsAppliedOnActor", nullptr, nullptr, sizeof(VertexPaintDetectionInterface_eventColorsAppliedOnActor_Parms), Z_Construct_UFunction_UVertexPaintDetectionInterface_ColorsAppliedOnActor_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UVertexPaintDetectionInterface_ColorsAppliedOnActor_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x08420C00, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UVertexPaintDetectionInterface_ColorsAppliedOnActor_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UVertexPaintDetectionInterface_ColorsAppliedOnActor_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UVertexPaintDetectionInterface_ColorsAppliedOnActor()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UVertexPaintDetectionInterface_ColorsAppliedOnActor_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UVertexPaintDetectionInterface_GetAllVertexColorsOnlyOnActor_Statics
	{
		static const UECodeGen_Private::FStructPropertyParams NewProp_taskResultInfo;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_meshData_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_meshData;
		static const UECodeGen_Private::FStructPropertyParams NewProp_gotAllVertexColorsWithSettings;
		static const UECodeGen_Private::FStructPropertyParams NewProp_amountOfPaintedColorsOfEachChannel;
		static const UECodeGen_Private::FStructPropertyParams NewProp_vertexColorsOnEachBone;
		static const UECodeGen_Private::FStructPropertyParams NewProp_additionalData;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UVertexPaintDetectionInterface_GetAllVertexColorsOnlyOnActor_Statics::NewProp_taskResultInfo = { "taskResultInfo", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(VertexPaintDetectionInterface_eventGetAllVertexColorsOnlyOnActor_Parms, taskResultInfo), Z_Construct_UScriptStruct_FVertexDetectTaskResultInfo, METADATA_PARAMS(nullptr, 0) }; // 1041766329
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UVertexPaintDetectionInterface_GetAllVertexColorsOnlyOnActor_Statics::NewProp_meshData_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UVertexPaintDetectionInterface_GetAllVertexColorsOnlyOnActor_Statics::NewProp_meshData = { "meshData", nullptr, (EPropertyFlags)0x0010008008000182, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(VertexPaintDetectionInterface_eventGetAllVertexColorsOnlyOnActor_Parms, meshData), Z_Construct_UScriptStruct_FVertexDetectMeshDataStruct, METADATA_PARAMS(Z_Construct_UFunction_UVertexPaintDetectionInterface_GetAllVertexColorsOnlyOnActor_Statics::NewProp_meshData_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UVertexPaintDetectionInterface_GetAllVertexColorsOnlyOnActor_Statics::NewProp_meshData_MetaData)) }; // 4242319910
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UVertexPaintDetectionInterface_GetAllVertexColorsOnlyOnActor_Statics::NewProp_gotAllVertexColorsWithSettings = { "gotAllVertexColorsWithSettings", nullptr, (EPropertyFlags)0x0010008000000080, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(VertexPaintDetectionInterface_eventGetAllVertexColorsOnlyOnActor_Parms, gotAllVertexColorsWithSettings), Z_Construct_UScriptStruct_FVertexDetectGetColorsOnlyStruct, METADATA_PARAMS(nullptr, 0) }; // 2249728958
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UVertexPaintDetectionInterface_GetAllVertexColorsOnlyOnActor_Statics::NewProp_amountOfPaintedColorsOfEachChannel = { "amountOfPaintedColorsOfEachChannel", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(VertexPaintDetectionInterface_eventGetAllVertexColorsOnlyOnActor_Parms, amountOfPaintedColorsOfEachChannel), Z_Construct_UScriptStruct_FVertexDetectAmountOfPaintedColorsOfEachChannel, METADATA_PARAMS(nullptr, 0) }; // 1724626882
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UVertexPaintDetectionInterface_GetAllVertexColorsOnlyOnActor_Statics::NewProp_vertexColorsOnEachBone = { "vertexColorsOnEachBone", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(VertexPaintDetectionInterface_eventGetAllVertexColorsOnlyOnActor_Parms, vertexColorsOnEachBone), Z_Construct_UScriptStruct_FVertexDetectVertexColorsOnEachBone, METADATA_PARAMS(nullptr, 0) }; // 1945807607
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UVertexPaintDetectionInterface_GetAllVertexColorsOnlyOnActor_Statics::NewProp_additionalData = { "additionalData", nullptr, (EPropertyFlags)0x0010008000000080, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(VertexPaintDetectionInterface_eventGetAllVertexColorsOnlyOnActor_Parms, additionalData), Z_Construct_UScriptStruct_FVertexDetectAdditionalDataToPassThrough, METADATA_PARAMS(nullptr, 0) }; // 2814627034
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UVertexPaintDetectionInterface_GetAllVertexColorsOnlyOnActor_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UVertexPaintDetectionInterface_GetAllVertexColorsOnlyOnActor_Statics::NewProp_taskResultInfo,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UVertexPaintDetectionInterface_GetAllVertexColorsOnlyOnActor_Statics::NewProp_meshData,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UVertexPaintDetectionInterface_GetAllVertexColorsOnlyOnActor_Statics::NewProp_gotAllVertexColorsWithSettings,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UVertexPaintDetectionInterface_GetAllVertexColorsOnlyOnActor_Statics::NewProp_amountOfPaintedColorsOfEachChannel,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UVertexPaintDetectionInterface_GetAllVertexColorsOnlyOnActor_Statics::NewProp_vertexColorsOnEachBone,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UVertexPaintDetectionInterface_GetAllVertexColorsOnlyOnActor_Statics::NewProp_additionalData,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UVertexPaintDetectionInterface_GetAllVertexColorsOnlyOnActor_Statics::Function_MetaDataParams[] = {
		{ "Category", "Runtime Vertex Color Paint and Detection Plugin|Detection" },
		{ "ModuleRelativePath", "Public/VertexPaintDetectionInterface.h" },
		{ "ToolTip", "Runs on the Actor that got Detected on." },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UVertexPaintDetectionInterface_GetAllVertexColorsOnlyOnActor_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UVertexPaintDetectionInterface, nullptr, "GetAllVertexColorsOnlyOnActor", nullptr, nullptr, sizeof(VertexPaintDetectionInterface_eventGetAllVertexColorsOnlyOnActor_Parms), Z_Construct_UFunction_UVertexPaintDetectionInterface_GetAllVertexColorsOnlyOnActor_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UVertexPaintDetectionInterface_GetAllVertexColorsOnlyOnActor_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x08420C00, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UVertexPaintDetectionInterface_GetAllVertexColorsOnlyOnActor_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UVertexPaintDetectionInterface_GetAllVertexColorsOnlyOnActor_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UVertexPaintDetectionInterface_GetAllVertexColorsOnlyOnActor()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UVertexPaintDetectionInterface_GetAllVertexColorsOnlyOnActor_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UVertexPaintDetectionInterface_GetClosestVertexDataOnActor_Statics
	{
		static const UECodeGen_Private::FStructPropertyParams NewProp_taskResultInfo;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_meshData_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_meshData;
		static const UECodeGen_Private::FStructPropertyParams NewProp_detectedMeshWithSettings;
		static const UECodeGen_Private::FStructPropertyParams NewProp_closestVertexColorResult;
		static const UECodeGen_Private::FStructPropertyParams NewProp_estimatedColorAtHitLocationResult;
		static const UECodeGen_Private::FStructPropertyParams NewProp_avarageColorInAreaInfo;
		static const UECodeGen_Private::FStructPropertyParams NewProp_amountOfPaintedColorsOfEachChannel;
		static const UECodeGen_Private::FStructPropertyParams NewProp_vertexColorsOnEachBone;
		static const UECodeGen_Private::FStructPropertyParams NewProp_additionalData;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UVertexPaintDetectionInterface_GetClosestVertexDataOnActor_Statics::NewProp_taskResultInfo = { "taskResultInfo", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(VertexPaintDetectionInterface_eventGetClosestVertexDataOnActor_Parms, taskResultInfo), Z_Construct_UScriptStruct_FVertexDetectTaskResultInfo, METADATA_PARAMS(nullptr, 0) }; // 1041766329
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UVertexPaintDetectionInterface_GetClosestVertexDataOnActor_Statics::NewProp_meshData_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UVertexPaintDetectionInterface_GetClosestVertexDataOnActor_Statics::NewProp_meshData = { "meshData", nullptr, (EPropertyFlags)0x0010008008000182, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(VertexPaintDetectionInterface_eventGetClosestVertexDataOnActor_Parms, meshData), Z_Construct_UScriptStruct_FVertexDetectMeshDataStruct, METADATA_PARAMS(Z_Construct_UFunction_UVertexPaintDetectionInterface_GetClosestVertexDataOnActor_Statics::NewProp_meshData_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UVertexPaintDetectionInterface_GetClosestVertexDataOnActor_Statics::NewProp_meshData_MetaData)) }; // 4242319910
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UVertexPaintDetectionInterface_GetClosestVertexDataOnActor_Statics::NewProp_detectedMeshWithSettings = { "detectedMeshWithSettings", nullptr, (EPropertyFlags)0x0010008000000080, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(VertexPaintDetectionInterface_eventGetClosestVertexDataOnActor_Parms, detectedMeshWithSettings), Z_Construct_UScriptStruct_FVertexDetectInfoStruct, METADATA_PARAMS(nullptr, 0) }; // 3860109383
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UVertexPaintDetectionInterface_GetClosestVertexDataOnActor_Statics::NewProp_closestVertexColorResult = { "closestVertexColorResult", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(VertexPaintDetectionInterface_eventGetClosestVertexDataOnActor_Parms, closestVertexColorResult), Z_Construct_UScriptStruct_FVertexDetectClosestVertexDataResultStruct, METADATA_PARAMS(nullptr, 0) }; // 2848308437
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UVertexPaintDetectionInterface_GetClosestVertexDataOnActor_Statics::NewProp_estimatedColorAtHitLocationResult = { "estimatedColorAtHitLocationResult", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(VertexPaintDetectionInterface_eventGetClosestVertexDataOnActor_Parms, estimatedColorAtHitLocationResult), Z_Construct_UScriptStruct_FVertexDetectEstimatedColorAtHitLocationResultStruct, METADATA_PARAMS(nullptr, 0) }; // 389960202
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UVertexPaintDetectionInterface_GetClosestVertexDataOnActor_Statics::NewProp_avarageColorInAreaInfo = { "avarageColorInAreaInfo", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(VertexPaintDetectionInterface_eventGetClosestVertexDataOnActor_Parms, avarageColorInAreaInfo), Z_Construct_UScriptStruct_FVertexDetectAvarageColorInAreaInfo, METADATA_PARAMS(nullptr, 0) }; // 1609628195
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UVertexPaintDetectionInterface_GetClosestVertexDataOnActor_Statics::NewProp_amountOfPaintedColorsOfEachChannel = { "amountOfPaintedColorsOfEachChannel", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(VertexPaintDetectionInterface_eventGetClosestVertexDataOnActor_Parms, amountOfPaintedColorsOfEachChannel), Z_Construct_UScriptStruct_FVertexDetectAmountOfPaintedColorsOfEachChannel, METADATA_PARAMS(nullptr, 0) }; // 1724626882
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UVertexPaintDetectionInterface_GetClosestVertexDataOnActor_Statics::NewProp_vertexColorsOnEachBone = { "vertexColorsOnEachBone", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(VertexPaintDetectionInterface_eventGetClosestVertexDataOnActor_Parms, vertexColorsOnEachBone), Z_Construct_UScriptStruct_FVertexDetectVertexColorsOnEachBone, METADATA_PARAMS(nullptr, 0) }; // 1945807607
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UVertexPaintDetectionInterface_GetClosestVertexDataOnActor_Statics::NewProp_additionalData = { "additionalData", nullptr, (EPropertyFlags)0x0010008000000080, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(VertexPaintDetectionInterface_eventGetClosestVertexDataOnActor_Parms, additionalData), Z_Construct_UScriptStruct_FVertexDetectAdditionalDataToPassThrough, METADATA_PARAMS(nullptr, 0) }; // 2814627034
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UVertexPaintDetectionInterface_GetClosestVertexDataOnActor_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UVertexPaintDetectionInterface_GetClosestVertexDataOnActor_Statics::NewProp_taskResultInfo,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UVertexPaintDetectionInterface_GetClosestVertexDataOnActor_Statics::NewProp_meshData,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UVertexPaintDetectionInterface_GetClosestVertexDataOnActor_Statics::NewProp_detectedMeshWithSettings,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UVertexPaintDetectionInterface_GetClosestVertexDataOnActor_Statics::NewProp_closestVertexColorResult,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UVertexPaintDetectionInterface_GetClosestVertexDataOnActor_Statics::NewProp_estimatedColorAtHitLocationResult,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UVertexPaintDetectionInterface_GetClosestVertexDataOnActor_Statics::NewProp_avarageColorInAreaInfo,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UVertexPaintDetectionInterface_GetClosestVertexDataOnActor_Statics::NewProp_amountOfPaintedColorsOfEachChannel,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UVertexPaintDetectionInterface_GetClosestVertexDataOnActor_Statics::NewProp_vertexColorsOnEachBone,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UVertexPaintDetectionInterface_GetClosestVertexDataOnActor_Statics::NewProp_additionalData,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UVertexPaintDetectionInterface_GetClosestVertexDataOnActor_Statics::Function_MetaDataParams[] = {
		{ "Category", "Runtime Vertex Color Paint and Detection Plugin|Detection" },
		{ "ModuleRelativePath", "Public/VertexPaintDetectionInterface.h" },
		{ "ToolTip", "Runs on the Actor that got Detected on." },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UVertexPaintDetectionInterface_GetClosestVertexDataOnActor_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UVertexPaintDetectionInterface, nullptr, "GetClosestVertexDataOnActor", nullptr, nullptr, sizeof(VertexPaintDetectionInterface_eventGetClosestVertexDataOnActor_Parms), Z_Construct_UFunction_UVertexPaintDetectionInterface_GetClosestVertexDataOnActor_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UVertexPaintDetectionInterface_GetClosestVertexDataOnActor_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x08420C00, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UVertexPaintDetectionInterface_GetClosestVertexDataOnActor_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UVertexPaintDetectionInterface_GetClosestVertexDataOnActor_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UVertexPaintDetectionInterface_GetClosestVertexDataOnActor()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UVertexPaintDetectionInterface_GetClosestVertexDataOnActor_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UVertexPaintDetectionInterface_GetSkeletalMeshClothPhysicsSettings_Statics
	{
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_skeletalMeshComponentTryingToGetClothSettingsFor_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPropertyParams NewProp_skeletalMeshComponentTryingToGetClothSettingsFor;
		static const UECodeGen_Private::FStructPropertyParams NewProp_ReturnValue_ValueProp;
		static const UECodeGen_Private::FObjectPropertyParams NewProp_ReturnValue_Key_KeyProp;
		static const UECodeGen_Private::FMapPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UVertexPaintDetectionInterface_GetSkeletalMeshClothPhysicsSettings_Statics::NewProp_skeletalMeshComponentTryingToGetClothSettingsFor_MetaData[] = {
		{ "EditInline", "true" },
	};
#endif
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UVertexPaintDetectionInterface_GetSkeletalMeshClothPhysicsSettings_Statics::NewProp_skeletalMeshComponentTryingToGetClothSettingsFor = { "skeletalMeshComponentTryingToGetClothSettingsFor", nullptr, (EPropertyFlags)0x0010000000080080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(VertexPaintDetectionInterface_eventGetSkeletalMeshClothPhysicsSettings_Parms, skeletalMeshComponentTryingToGetClothSettingsFor), Z_Construct_UClass_USkeletalMeshComponent_NoRegister, METADATA_PARAMS(Z_Construct_UFunction_UVertexPaintDetectionInterface_GetSkeletalMeshClothPhysicsSettings_Statics::NewProp_skeletalMeshComponentTryingToGetClothSettingsFor_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UVertexPaintDetectionInterface_GetSkeletalMeshClothPhysicsSettings_Statics::NewProp_skeletalMeshComponentTryingToGetClothSettingsFor_MetaData)) };
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UVertexPaintDetectionInterface_GetSkeletalMeshClothPhysicsSettings_Statics::NewProp_ReturnValue_ValueProp = { "ReturnValue", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, 1, Z_Construct_UScriptStruct_FVertexDetectClothSettingsStruct, METADATA_PARAMS(nullptr, 0) }; // 248418956
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UVertexPaintDetectionInterface_GetSkeletalMeshClothPhysicsSettings_Statics::NewProp_ReturnValue_Key_KeyProp = { "ReturnValue_Key", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, 0, Z_Construct_UClass_UClothingAssetBase_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FMapPropertyParams Z_Construct_UFunction_UVertexPaintDetectionInterface_GetSkeletalMeshClothPhysicsSettings_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Map, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(VertexPaintDetectionInterface_eventGetSkeletalMeshClothPhysicsSettings_Parms, ReturnValue), EMapPropertyFlags::None, METADATA_PARAMS(nullptr, 0) }; // 248418956
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UVertexPaintDetectionInterface_GetSkeletalMeshClothPhysicsSettings_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UVertexPaintDetectionInterface_GetSkeletalMeshClothPhysicsSettings_Statics::NewProp_skeletalMeshComponentTryingToGetClothSettingsFor,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UVertexPaintDetectionInterface_GetSkeletalMeshClothPhysicsSettings_Statics::NewProp_ReturnValue_ValueProp,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UVertexPaintDetectionInterface_GetSkeletalMeshClothPhysicsSettings_Statics::NewProp_ReturnValue_Key_KeyProp,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UVertexPaintDetectionInterface_GetSkeletalMeshClothPhysicsSettings_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UVertexPaintDetectionInterface_GetSkeletalMeshClothPhysicsSettings_Statics::Function_MetaDataParams[] = {
		{ "Category", "Runtime Vertex Color Paint and Detection Plugin|Cloth" },
		{ "ModuleRelativePath", "Public/VertexPaintDetectionInterface.h" },
		{ "ToolTip", "Returns Cloths and whatever Physics settings they should have depending on RGBA Vertex Colors. For instance if Blue is painted 1, what the physics settings should be for the cloth then." },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UVertexPaintDetectionInterface_GetSkeletalMeshClothPhysicsSettings_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UVertexPaintDetectionInterface, nullptr, "GetSkeletalMeshClothPhysicsSettings", nullptr, nullptr, sizeof(VertexPaintDetectionInterface_eventGetSkeletalMeshClothPhysicsSettings_Parms), Z_Construct_UFunction_UVertexPaintDetectionInterface_GetSkeletalMeshClothPhysicsSettings_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UVertexPaintDetectionInterface_GetSkeletalMeshClothPhysicsSettings_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x0C020C00, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UVertexPaintDetectionInterface_GetSkeletalMeshClothPhysicsSettings_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UVertexPaintDetectionInterface_GetSkeletalMeshClothPhysicsSettings_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UVertexPaintDetectionInterface_GetSkeletalMeshClothPhysicsSettings()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UVertexPaintDetectionInterface_GetSkeletalMeshClothPhysicsSettings_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UVertexPaintDetectionInterface_PaintedOnActor_AtLocation_Statics
	{
		static const UECodeGen_Private::FStructPropertyParams NewProp_taskResultInfo;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_meshData_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_meshData;
		static const UECodeGen_Private::FStructPropertyParams NewProp_paintedAtLocationSettings;
		static const UECodeGen_Private::FStructPropertyParams NewProp_closestVertexColorResult;
		static const UECodeGen_Private::FStructPropertyParams NewProp_estimatedColorAtHitLocationResult;
		static const UECodeGen_Private::FStructPropertyParams NewProp_avarageColorInAreaInfo;
		static const UECodeGen_Private::FStructPropertyParams NewProp_amountOfPaintedColorsOfEachChannel;
		static const UECodeGen_Private::FStructPropertyParams NewProp_vertexColorsOnEachBone;
		static const UECodeGen_Private::FStructPropertyParams NewProp_additionalData;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UVertexPaintDetectionInterface_PaintedOnActor_AtLocation_Statics::NewProp_taskResultInfo = { "taskResultInfo", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(VertexPaintDetectionInterface_eventPaintedOnActor_AtLocation_Parms, taskResultInfo), Z_Construct_UScriptStruct_FVertexDetectTaskResultInfo, METADATA_PARAMS(nullptr, 0) }; // 1041766329
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UVertexPaintDetectionInterface_PaintedOnActor_AtLocation_Statics::NewProp_meshData_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UVertexPaintDetectionInterface_PaintedOnActor_AtLocation_Statics::NewProp_meshData = { "meshData", nullptr, (EPropertyFlags)0x0010008008000182, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(VertexPaintDetectionInterface_eventPaintedOnActor_AtLocation_Parms, meshData), Z_Construct_UScriptStruct_FVertexDetectMeshDataStruct, METADATA_PARAMS(Z_Construct_UFunction_UVertexPaintDetectionInterface_PaintedOnActor_AtLocation_Statics::NewProp_meshData_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UVertexPaintDetectionInterface_PaintedOnActor_AtLocation_Statics::NewProp_meshData_MetaData)) }; // 4242319910
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UVertexPaintDetectionInterface_PaintedOnActor_AtLocation_Statics::NewProp_paintedAtLocationSettings = { "paintedAtLocationSettings", nullptr, (EPropertyFlags)0x0010008000000080, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(VertexPaintDetectionInterface_eventPaintedOnActor_AtLocation_Parms, paintedAtLocationSettings), Z_Construct_UScriptStruct_FVertexPaintAtLocationStruct, METADATA_PARAMS(nullptr, 0) }; // 2458551041
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UVertexPaintDetectionInterface_PaintedOnActor_AtLocation_Statics::NewProp_closestVertexColorResult = { "closestVertexColorResult", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(VertexPaintDetectionInterface_eventPaintedOnActor_AtLocation_Parms, closestVertexColorResult), Z_Construct_UScriptStruct_FVertexDetectClosestVertexDataResultStruct, METADATA_PARAMS(nullptr, 0) }; // 2848308437
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UVertexPaintDetectionInterface_PaintedOnActor_AtLocation_Statics::NewProp_estimatedColorAtHitLocationResult = { "estimatedColorAtHitLocationResult", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(VertexPaintDetectionInterface_eventPaintedOnActor_AtLocation_Parms, estimatedColorAtHitLocationResult), Z_Construct_UScriptStruct_FVertexDetectEstimatedColorAtHitLocationResultStruct, METADATA_PARAMS(nullptr, 0) }; // 389960202
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UVertexPaintDetectionInterface_PaintedOnActor_AtLocation_Statics::NewProp_avarageColorInAreaInfo = { "avarageColorInAreaInfo", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(VertexPaintDetectionInterface_eventPaintedOnActor_AtLocation_Parms, avarageColorInAreaInfo), Z_Construct_UScriptStruct_FVertexDetectAvarageColorInAreaInfo, METADATA_PARAMS(nullptr, 0) }; // 1609628195
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UVertexPaintDetectionInterface_PaintedOnActor_AtLocation_Statics::NewProp_amountOfPaintedColorsOfEachChannel = { "amountOfPaintedColorsOfEachChannel", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(VertexPaintDetectionInterface_eventPaintedOnActor_AtLocation_Parms, amountOfPaintedColorsOfEachChannel), Z_Construct_UScriptStruct_FVertexDetectAmountOfPaintedColorsOfEachChannel, METADATA_PARAMS(nullptr, 0) }; // 1724626882
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UVertexPaintDetectionInterface_PaintedOnActor_AtLocation_Statics::NewProp_vertexColorsOnEachBone = { "vertexColorsOnEachBone", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(VertexPaintDetectionInterface_eventPaintedOnActor_AtLocation_Parms, vertexColorsOnEachBone), Z_Construct_UScriptStruct_FVertexDetectVertexColorsOnEachBone, METADATA_PARAMS(nullptr, 0) }; // 1945807607
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UVertexPaintDetectionInterface_PaintedOnActor_AtLocation_Statics::NewProp_additionalData = { "additionalData", nullptr, (EPropertyFlags)0x0010008000000080, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(VertexPaintDetectionInterface_eventPaintedOnActor_AtLocation_Parms, additionalData), Z_Construct_UScriptStruct_FVertexDetectAdditionalDataToPassThrough, METADATA_PARAMS(nullptr, 0) }; // 2814627034
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UVertexPaintDetectionInterface_PaintedOnActor_AtLocation_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UVertexPaintDetectionInterface_PaintedOnActor_AtLocation_Statics::NewProp_taskResultInfo,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UVertexPaintDetectionInterface_PaintedOnActor_AtLocation_Statics::NewProp_meshData,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UVertexPaintDetectionInterface_PaintedOnActor_AtLocation_Statics::NewProp_paintedAtLocationSettings,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UVertexPaintDetectionInterface_PaintedOnActor_AtLocation_Statics::NewProp_closestVertexColorResult,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UVertexPaintDetectionInterface_PaintedOnActor_AtLocation_Statics::NewProp_estimatedColorAtHitLocationResult,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UVertexPaintDetectionInterface_PaintedOnActor_AtLocation_Statics::NewProp_avarageColorInAreaInfo,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UVertexPaintDetectionInterface_PaintedOnActor_AtLocation_Statics::NewProp_amountOfPaintedColorsOfEachChannel,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UVertexPaintDetectionInterface_PaintedOnActor_AtLocation_Statics::NewProp_vertexColorsOnEachBone,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UVertexPaintDetectionInterface_PaintedOnActor_AtLocation_Statics::NewProp_additionalData,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UVertexPaintDetectionInterface_PaintedOnActor_AtLocation_Statics::Function_MetaDataParams[] = {
		{ "Category", "Runtime Vertex Color Paint and Detection Plugin|Painting" },
		{ "ModuleRelativePath", "Public/VertexPaintDetectionInterface.h" },
		{ "ToolTip", "Runs on the Actor that got Painted At Location on it" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UVertexPaintDetectionInterface_PaintedOnActor_AtLocation_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UVertexPaintDetectionInterface, nullptr, "PaintedOnActor_AtLocation", nullptr, nullptr, sizeof(VertexPaintDetectionInterface_eventPaintedOnActor_AtLocation_Parms), Z_Construct_UFunction_UVertexPaintDetectionInterface_PaintedOnActor_AtLocation_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UVertexPaintDetectionInterface_PaintedOnActor_AtLocation_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x08420C00, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UVertexPaintDetectionInterface_PaintedOnActor_AtLocation_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UVertexPaintDetectionInterface_PaintedOnActor_AtLocation_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UVertexPaintDetectionInterface_PaintedOnActor_AtLocation()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UVertexPaintDetectionInterface_PaintedOnActor_AtLocation_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UVertexPaintDetectionInterface_PaintedOnActor_EntireMesh_Statics
	{
		static const UECodeGen_Private::FStructPropertyParams NewProp_taskResultInfo;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_meshData_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_meshData;
		static const UECodeGen_Private::FStructPropertyParams NewProp_paintedEntireMeshSettings;
		static const UECodeGen_Private::FStructPropertyParams NewProp_amountOfPaintedColorsOfEachChannel;
		static const UECodeGen_Private::FStructPropertyParams NewProp_vertexColorsOnEachBone;
		static const UECodeGen_Private::FStructPropertyParams NewProp_additionalData;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UVertexPaintDetectionInterface_PaintedOnActor_EntireMesh_Statics::NewProp_taskResultInfo = { "taskResultInfo", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(VertexPaintDetectionInterface_eventPaintedOnActor_EntireMesh_Parms, taskResultInfo), Z_Construct_UScriptStruct_FVertexDetectTaskResultInfo, METADATA_PARAMS(nullptr, 0) }; // 1041766329
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UVertexPaintDetectionInterface_PaintedOnActor_EntireMesh_Statics::NewProp_meshData_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UVertexPaintDetectionInterface_PaintedOnActor_EntireMesh_Statics::NewProp_meshData = { "meshData", nullptr, (EPropertyFlags)0x0010008008000182, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(VertexPaintDetectionInterface_eventPaintedOnActor_EntireMesh_Parms, meshData), Z_Construct_UScriptStruct_FVertexDetectMeshDataStruct, METADATA_PARAMS(Z_Construct_UFunction_UVertexPaintDetectionInterface_PaintedOnActor_EntireMesh_Statics::NewProp_meshData_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UVertexPaintDetectionInterface_PaintedOnActor_EntireMesh_Statics::NewProp_meshData_MetaData)) }; // 4242319910
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UVertexPaintDetectionInterface_PaintedOnActor_EntireMesh_Statics::NewProp_paintedEntireMeshSettings = { "paintedEntireMeshSettings", nullptr, (EPropertyFlags)0x0010008000000080, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(VertexPaintDetectionInterface_eventPaintedOnActor_EntireMesh_Parms, paintedEntireMeshSettings), Z_Construct_UScriptStruct_FVertexPaintOnEntireMeshStruct, METADATA_PARAMS(nullptr, 0) }; // 1058477565
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UVertexPaintDetectionInterface_PaintedOnActor_EntireMesh_Statics::NewProp_amountOfPaintedColorsOfEachChannel = { "amountOfPaintedColorsOfEachChannel", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(VertexPaintDetectionInterface_eventPaintedOnActor_EntireMesh_Parms, amountOfPaintedColorsOfEachChannel), Z_Construct_UScriptStruct_FVertexDetectAmountOfPaintedColorsOfEachChannel, METADATA_PARAMS(nullptr, 0) }; // 1724626882
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UVertexPaintDetectionInterface_PaintedOnActor_EntireMesh_Statics::NewProp_vertexColorsOnEachBone = { "vertexColorsOnEachBone", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(VertexPaintDetectionInterface_eventPaintedOnActor_EntireMesh_Parms, vertexColorsOnEachBone), Z_Construct_UScriptStruct_FVertexDetectVertexColorsOnEachBone, METADATA_PARAMS(nullptr, 0) }; // 1945807607
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UVertexPaintDetectionInterface_PaintedOnActor_EntireMesh_Statics::NewProp_additionalData = { "additionalData", nullptr, (EPropertyFlags)0x0010008000000080, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(VertexPaintDetectionInterface_eventPaintedOnActor_EntireMesh_Parms, additionalData), Z_Construct_UScriptStruct_FVertexDetectAdditionalDataToPassThrough, METADATA_PARAMS(nullptr, 0) }; // 2814627034
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UVertexPaintDetectionInterface_PaintedOnActor_EntireMesh_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UVertexPaintDetectionInterface_PaintedOnActor_EntireMesh_Statics::NewProp_taskResultInfo,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UVertexPaintDetectionInterface_PaintedOnActor_EntireMesh_Statics::NewProp_meshData,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UVertexPaintDetectionInterface_PaintedOnActor_EntireMesh_Statics::NewProp_paintedEntireMeshSettings,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UVertexPaintDetectionInterface_PaintedOnActor_EntireMesh_Statics::NewProp_amountOfPaintedColorsOfEachChannel,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UVertexPaintDetectionInterface_PaintedOnActor_EntireMesh_Statics::NewProp_vertexColorsOnEachBone,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UVertexPaintDetectionInterface_PaintedOnActor_EntireMesh_Statics::NewProp_additionalData,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UVertexPaintDetectionInterface_PaintedOnActor_EntireMesh_Statics::Function_MetaDataParams[] = {
		{ "Category", "Runtime Vertex Color Paint and Detection Plugin|Painting" },
		{ "ModuleRelativePath", "Public/VertexPaintDetectionInterface.h" },
		{ "ToolTip", "Runs on the Actor that got Painted Entire Mesh on it." },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UVertexPaintDetectionInterface_PaintedOnActor_EntireMesh_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UVertexPaintDetectionInterface, nullptr, "PaintedOnActor_EntireMesh", nullptr, nullptr, sizeof(VertexPaintDetectionInterface_eventPaintedOnActor_EntireMesh_Parms), Z_Construct_UFunction_UVertexPaintDetectionInterface_PaintedOnActor_EntireMesh_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UVertexPaintDetectionInterface_PaintedOnActor_EntireMesh_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x08420C00, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UVertexPaintDetectionInterface_PaintedOnActor_EntireMesh_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UVertexPaintDetectionInterface_PaintedOnActor_EntireMesh_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UVertexPaintDetectionInterface_PaintedOnActor_EntireMesh()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UVertexPaintDetectionInterface_PaintedOnActor_EntireMesh_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UVertexPaintDetectionInterface_PaintedOnActor_PaintColorSnippet_Statics
	{
		static const UECodeGen_Private::FStructPropertyParams NewProp_taskResultInfo;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_meshData_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_meshData;
		static const UECodeGen_Private::FStructPropertyParams NewProp_paintedColorSnippetSettings;
		static const UECodeGen_Private::FStructPropertyParams NewProp_amountOfPaintedColorsOfEachChannel;
		static const UECodeGen_Private::FStructPropertyParams NewProp_vertexColorsOnEachBone;
		static const UECodeGen_Private::FStructPropertyParams NewProp_additionalData;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UVertexPaintDetectionInterface_PaintedOnActor_PaintColorSnippet_Statics::NewProp_taskResultInfo = { "taskResultInfo", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(VertexPaintDetectionInterface_eventPaintedOnActor_PaintColorSnippet_Parms, taskResultInfo), Z_Construct_UScriptStruct_FVertexDetectTaskResultInfo, METADATA_PARAMS(nullptr, 0) }; // 1041766329
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UVertexPaintDetectionInterface_PaintedOnActor_PaintColorSnippet_Statics::NewProp_meshData_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UVertexPaintDetectionInterface_PaintedOnActor_PaintColorSnippet_Statics::NewProp_meshData = { "meshData", nullptr, (EPropertyFlags)0x0010008008000182, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(VertexPaintDetectionInterface_eventPaintedOnActor_PaintColorSnippet_Parms, meshData), Z_Construct_UScriptStruct_FVertexDetectMeshDataStruct, METADATA_PARAMS(Z_Construct_UFunction_UVertexPaintDetectionInterface_PaintedOnActor_PaintColorSnippet_Statics::NewProp_meshData_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UVertexPaintDetectionInterface_PaintedOnActor_PaintColorSnippet_Statics::NewProp_meshData_MetaData)) }; // 4242319910
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UVertexPaintDetectionInterface_PaintedOnActor_PaintColorSnippet_Statics::NewProp_paintedColorSnippetSettings = { "paintedColorSnippetSettings", nullptr, (EPropertyFlags)0x0010008000000080, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(VertexPaintDetectionInterface_eventPaintedOnActor_PaintColorSnippet_Parms, paintedColorSnippetSettings), Z_Construct_UScriptStruct_FVertexPaintColorSnippetStruct, METADATA_PARAMS(nullptr, 0) }; // 3217547297
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UVertexPaintDetectionInterface_PaintedOnActor_PaintColorSnippet_Statics::NewProp_amountOfPaintedColorsOfEachChannel = { "amountOfPaintedColorsOfEachChannel", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(VertexPaintDetectionInterface_eventPaintedOnActor_PaintColorSnippet_Parms, amountOfPaintedColorsOfEachChannel), Z_Construct_UScriptStruct_FVertexDetectAmountOfPaintedColorsOfEachChannel, METADATA_PARAMS(nullptr, 0) }; // 1724626882
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UVertexPaintDetectionInterface_PaintedOnActor_PaintColorSnippet_Statics::NewProp_vertexColorsOnEachBone = { "vertexColorsOnEachBone", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(VertexPaintDetectionInterface_eventPaintedOnActor_PaintColorSnippet_Parms, vertexColorsOnEachBone), Z_Construct_UScriptStruct_FVertexDetectVertexColorsOnEachBone, METADATA_PARAMS(nullptr, 0) }; // 1945807607
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UVertexPaintDetectionInterface_PaintedOnActor_PaintColorSnippet_Statics::NewProp_additionalData = { "additionalData", nullptr, (EPropertyFlags)0x0010008000000080, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(VertexPaintDetectionInterface_eventPaintedOnActor_PaintColorSnippet_Parms, additionalData), Z_Construct_UScriptStruct_FVertexDetectAdditionalDataToPassThrough, METADATA_PARAMS(nullptr, 0) }; // 2814627034
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UVertexPaintDetectionInterface_PaintedOnActor_PaintColorSnippet_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UVertexPaintDetectionInterface_PaintedOnActor_PaintColorSnippet_Statics::NewProp_taskResultInfo,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UVertexPaintDetectionInterface_PaintedOnActor_PaintColorSnippet_Statics::NewProp_meshData,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UVertexPaintDetectionInterface_PaintedOnActor_PaintColorSnippet_Statics::NewProp_paintedColorSnippetSettings,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UVertexPaintDetectionInterface_PaintedOnActor_PaintColorSnippet_Statics::NewProp_amountOfPaintedColorsOfEachChannel,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UVertexPaintDetectionInterface_PaintedOnActor_PaintColorSnippet_Statics::NewProp_vertexColorsOnEachBone,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UVertexPaintDetectionInterface_PaintedOnActor_PaintColorSnippet_Statics::NewProp_additionalData,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UVertexPaintDetectionInterface_PaintedOnActor_PaintColorSnippet_Statics::Function_MetaDataParams[] = {
		{ "Category", "Runtime Vertex Color Paint and Detection Plugin|Painting" },
		{ "ModuleRelativePath", "Public/VertexPaintDetectionInterface.h" },
		{ "ToolTip", "Runs on the Actor that got Painted Color Snippet on it." },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UVertexPaintDetectionInterface_PaintedOnActor_PaintColorSnippet_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UVertexPaintDetectionInterface, nullptr, "PaintedOnActor_PaintColorSnippet", nullptr, nullptr, sizeof(VertexPaintDetectionInterface_eventPaintedOnActor_PaintColorSnippet_Parms), Z_Construct_UFunction_UVertexPaintDetectionInterface_PaintedOnActor_PaintColorSnippet_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UVertexPaintDetectionInterface_PaintedOnActor_PaintColorSnippet_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x08420C00, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UVertexPaintDetectionInterface_PaintedOnActor_PaintColorSnippet_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UVertexPaintDetectionInterface_PaintedOnActor_PaintColorSnippet_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UVertexPaintDetectionInterface_PaintedOnActor_PaintColorSnippet()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UVertexPaintDetectionInterface_PaintedOnActor_PaintColorSnippet_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UVertexPaintDetectionInterface_PaintedOnActor_WithinArea_Statics
	{
		static const UECodeGen_Private::FStructPropertyParams NewProp_taskResultInfo;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_meshData_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_meshData;
		static const UECodeGen_Private::FStructPropertyParams NewProp_paintedWithinAreaSettings;
		static const UECodeGen_Private::FStructPropertyParams NewProp_amountOfPaintedColorsOfEachChannel;
		static const UECodeGen_Private::FStructPropertyParams NewProp_vertexColorsOnEachBone;
		static const UECodeGen_Private::FStructPropertyParams NewProp_additionalData;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UVertexPaintDetectionInterface_PaintedOnActor_WithinArea_Statics::NewProp_taskResultInfo = { "taskResultInfo", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(VertexPaintDetectionInterface_eventPaintedOnActor_WithinArea_Parms, taskResultInfo), Z_Construct_UScriptStruct_FVertexDetectTaskResultInfo, METADATA_PARAMS(nullptr, 0) }; // 1041766329
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UVertexPaintDetectionInterface_PaintedOnActor_WithinArea_Statics::NewProp_meshData_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UVertexPaintDetectionInterface_PaintedOnActor_WithinArea_Statics::NewProp_meshData = { "meshData", nullptr, (EPropertyFlags)0x0010008008000182, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(VertexPaintDetectionInterface_eventPaintedOnActor_WithinArea_Parms, meshData), Z_Construct_UScriptStruct_FVertexDetectMeshDataStruct, METADATA_PARAMS(Z_Construct_UFunction_UVertexPaintDetectionInterface_PaintedOnActor_WithinArea_Statics::NewProp_meshData_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UVertexPaintDetectionInterface_PaintedOnActor_WithinArea_Statics::NewProp_meshData_MetaData)) }; // 4242319910
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UVertexPaintDetectionInterface_PaintedOnActor_WithinArea_Statics::NewProp_paintedWithinAreaSettings = { "paintedWithinAreaSettings", nullptr, (EPropertyFlags)0x0010008000000080, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(VertexPaintDetectionInterface_eventPaintedOnActor_WithinArea_Parms, paintedWithinAreaSettings), Z_Construct_UScriptStruct_FVertexPainthWithinAreaStruct, METADATA_PARAMS(nullptr, 0) }; // 2301722162
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UVertexPaintDetectionInterface_PaintedOnActor_WithinArea_Statics::NewProp_amountOfPaintedColorsOfEachChannel = { "amountOfPaintedColorsOfEachChannel", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(VertexPaintDetectionInterface_eventPaintedOnActor_WithinArea_Parms, amountOfPaintedColorsOfEachChannel), Z_Construct_UScriptStruct_FVertexDetectAmountOfPaintedColorsOfEachChannel, METADATA_PARAMS(nullptr, 0) }; // 1724626882
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UVertexPaintDetectionInterface_PaintedOnActor_WithinArea_Statics::NewProp_vertexColorsOnEachBone = { "vertexColorsOnEachBone", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(VertexPaintDetectionInterface_eventPaintedOnActor_WithinArea_Parms, vertexColorsOnEachBone), Z_Construct_UScriptStruct_FVertexDetectVertexColorsOnEachBone, METADATA_PARAMS(nullptr, 0) }; // 1945807607
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UVertexPaintDetectionInterface_PaintedOnActor_WithinArea_Statics::NewProp_additionalData = { "additionalData", nullptr, (EPropertyFlags)0x0010008000000080, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(VertexPaintDetectionInterface_eventPaintedOnActor_WithinArea_Parms, additionalData), Z_Construct_UScriptStruct_FVertexDetectAdditionalDataToPassThrough, METADATA_PARAMS(nullptr, 0) }; // 2814627034
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UVertexPaintDetectionInterface_PaintedOnActor_WithinArea_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UVertexPaintDetectionInterface_PaintedOnActor_WithinArea_Statics::NewProp_taskResultInfo,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UVertexPaintDetectionInterface_PaintedOnActor_WithinArea_Statics::NewProp_meshData,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UVertexPaintDetectionInterface_PaintedOnActor_WithinArea_Statics::NewProp_paintedWithinAreaSettings,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UVertexPaintDetectionInterface_PaintedOnActor_WithinArea_Statics::NewProp_amountOfPaintedColorsOfEachChannel,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UVertexPaintDetectionInterface_PaintedOnActor_WithinArea_Statics::NewProp_vertexColorsOnEachBone,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UVertexPaintDetectionInterface_PaintedOnActor_WithinArea_Statics::NewProp_additionalData,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UVertexPaintDetectionInterface_PaintedOnActor_WithinArea_Statics::Function_MetaDataParams[] = {
		{ "Category", "Runtime Vertex Color Paint and Detection Plugin|Painting" },
		{ "ModuleRelativePath", "Public/VertexPaintDetectionInterface.h" },
		{ "ToolTip", "Runs on the Actor that got Painted Within Area on it." },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UVertexPaintDetectionInterface_PaintedOnActor_WithinArea_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UVertexPaintDetectionInterface, nullptr, "PaintedOnActor_WithinArea", nullptr, nullptr, sizeof(VertexPaintDetectionInterface_eventPaintedOnActor_WithinArea_Parms), Z_Construct_UFunction_UVertexPaintDetectionInterface_PaintedOnActor_WithinArea_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UVertexPaintDetectionInterface_PaintedOnActor_WithinArea_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x08420C00, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UVertexPaintDetectionInterface_PaintedOnActor_WithinArea_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UVertexPaintDetectionInterface_PaintedOnActor_WithinArea_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UVertexPaintDetectionInterface_PaintedOnActor_WithinArea()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UVertexPaintDetectionInterface_PaintedOnActor_WithinArea_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UVertexPaintDetectionInterface);
	UClass* Z_Construct_UClass_UVertexPaintDetectionInterface_NoRegister()
	{
		return UVertexPaintDetectionInterface::StaticClass();
	}
	struct Z_Construct_UClass_UVertexPaintDetectionInterface_Statics
	{
		static UObject* (*const DependentSingletons[])();
		static const FClassFunctionLinkInfo FuncInfo[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UVertexPaintDetectionInterface_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UInterface,
		(UObject* (*)())Z_Construct_UPackage__Script_VertexPaintDetectionPlugin,
	};
	const FClassFunctionLinkInfo Z_Construct_UClass_UVertexPaintDetectionInterface_Statics::FuncInfo[] = {
		{ &Z_Construct_UFunction_UVertexPaintDetectionInterface_ClothBeginOverlappingMesh, "ClothBeginOverlappingMesh" }, // 1667395948
		{ &Z_Construct_UFunction_UVertexPaintDetectionInterface_ClothEndOverlappingMesh, "ClothEndOverlappingMesh" }, // 670535079
		{ &Z_Construct_UFunction_UVertexPaintDetectionInterface_ColorsAppliedOnActor, "ColorsAppliedOnActor" }, // 828965494
		{ &Z_Construct_UFunction_UVertexPaintDetectionInterface_GetAllVertexColorsOnlyOnActor, "GetAllVertexColorsOnlyOnActor" }, // 230809099
		{ &Z_Construct_UFunction_UVertexPaintDetectionInterface_GetClosestVertexDataOnActor, "GetClosestVertexDataOnActor" }, // 3649964475
		{ &Z_Construct_UFunction_UVertexPaintDetectionInterface_GetSkeletalMeshClothPhysicsSettings, "GetSkeletalMeshClothPhysicsSettings" }, // 3655416438
		{ &Z_Construct_UFunction_UVertexPaintDetectionInterface_PaintedOnActor_AtLocation, "PaintedOnActor_AtLocation" }, // 3797495791
		{ &Z_Construct_UFunction_UVertexPaintDetectionInterface_PaintedOnActor_EntireMesh, "PaintedOnActor_EntireMesh" }, // 1644636417
		{ &Z_Construct_UFunction_UVertexPaintDetectionInterface_PaintedOnActor_PaintColorSnippet, "PaintedOnActor_PaintColorSnippet" }, // 2878034978
		{ &Z_Construct_UFunction_UVertexPaintDetectionInterface_PaintedOnActor_WithinArea, "PaintedOnActor_WithinArea" }, // 1842873850
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UVertexPaintDetectionInterface_Statics::Class_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "IsBlueprintBase", "true" },
		{ "ModuleRelativePath", "Public/VertexPaintDetectionInterface.h" },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_UVertexPaintDetectionInterface_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<IVertexPaintDetectionInterface>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_UVertexPaintDetectionInterface_Statics::ClassParams = {
		&UVertexPaintDetectionInterface::StaticClass,
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
		0x000040A1u,
		METADATA_PARAMS(Z_Construct_UClass_UVertexPaintDetectionInterface_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UVertexPaintDetectionInterface_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UVertexPaintDetectionInterface()
	{
		if (!Z_Registration_Info_UClass_UVertexPaintDetectionInterface.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UVertexPaintDetectionInterface.OuterSingleton, Z_Construct_UClass_UVertexPaintDetectionInterface_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_UVertexPaintDetectionInterface.OuterSingleton;
	}
	template<> VERTEXPAINTDETECTIONPLUGIN_API UClass* StaticClass<UVertexPaintDetectionInterface>()
	{
		return UVertexPaintDetectionInterface::StaticClass();
	}
	DEFINE_VTABLE_PTR_HELPER_CTOR(UVertexPaintDetectionInterface);
	UVertexPaintDetectionInterface::~UVertexPaintDetectionInterface() {}
	static FName NAME_UVertexPaintDetectionInterface_ClothBeginOverlappingMesh = FName(TEXT("ClothBeginOverlappingMesh"));
	void IVertexPaintDetectionInterface::Execute_ClothBeginOverlappingMesh(UObject* O, UPrimitiveComponent* OverlappedComponent, AActor* OtherActor, UPrimitiveComponent* OtherComp)
	{
		check(O != NULL);
		check(O->GetClass()->ImplementsInterface(UVertexPaintDetectionInterface::StaticClass()));
		VertexPaintDetectionInterface_eventClothBeginOverlappingMesh_Parms Parms;
		UFunction* const Func = O->FindFunction(NAME_UVertexPaintDetectionInterface_ClothBeginOverlappingMesh);
		if (Func)
		{
			Parms.OverlappedComponent=OverlappedComponent;
			Parms.OtherActor=OtherActor;
			Parms.OtherComp=OtherComp;
			O->ProcessEvent(Func, &Parms);
		}
		else if (auto I = (IVertexPaintDetectionInterface*)(O->GetNativeInterfaceAddress(UVertexPaintDetectionInterface::StaticClass())))
		{
			I->ClothBeginOverlappingMesh_Implementation(OverlappedComponent,OtherActor,OtherComp);
		}
	}
	static FName NAME_UVertexPaintDetectionInterface_ClothEndOverlappingMesh = FName(TEXT("ClothEndOverlappingMesh"));
	void IVertexPaintDetectionInterface::Execute_ClothEndOverlappingMesh(UObject* O, UPrimitiveComponent* OverlappedComponent, AActor* OtherActor, UPrimitiveComponent* OtherComp)
	{
		check(O != NULL);
		check(O->GetClass()->ImplementsInterface(UVertexPaintDetectionInterface::StaticClass()));
		VertexPaintDetectionInterface_eventClothEndOverlappingMesh_Parms Parms;
		UFunction* const Func = O->FindFunction(NAME_UVertexPaintDetectionInterface_ClothEndOverlappingMesh);
		if (Func)
		{
			Parms.OverlappedComponent=OverlappedComponent;
			Parms.OtherActor=OtherActor;
			Parms.OtherComp=OtherComp;
			O->ProcessEvent(Func, &Parms);
		}
		else if (auto I = (IVertexPaintDetectionInterface*)(O->GetNativeInterfaceAddress(UVertexPaintDetectionInterface::StaticClass())))
		{
			I->ClothEndOverlappingMesh_Implementation(OverlappedComponent,OtherActor,OtherComp);
		}
	}
	static FName NAME_UVertexPaintDetectionInterface_ColorsAppliedOnActor = FName(TEXT("ColorsAppliedOnActor"));
	void IVertexPaintDetectionInterface::Execute_ColorsAppliedOnActor(UObject* O, FVertexDetectTaskResultInfo taskResultInfo, FVertexDetectMeshDataStruct const& meshData, FVertexPaintStruct paintedOnActorSettings, FVertexDetectAmountOfPaintedColorsOfEachChannel amountOfPaintedColorsOfEachChannel, FVertexDetectVertexColorsOnEachBone vertexColorsOnEachBone, FVertexDetectAdditionalDataToPassThrough additionalData)
	{
		check(O != NULL);
		check(O->GetClass()->ImplementsInterface(UVertexPaintDetectionInterface::StaticClass()));
		VertexPaintDetectionInterface_eventColorsAppliedOnActor_Parms Parms;
		UFunction* const Func = O->FindFunction(NAME_UVertexPaintDetectionInterface_ColorsAppliedOnActor);
		if (Func)
		{
			Parms.taskResultInfo=taskResultInfo;
			Parms.meshData=meshData;
			Parms.paintedOnActorSettings=paintedOnActorSettings;
			Parms.amountOfPaintedColorsOfEachChannel=amountOfPaintedColorsOfEachChannel;
			Parms.vertexColorsOnEachBone=vertexColorsOnEachBone;
			Parms.additionalData=additionalData;
			O->ProcessEvent(Func, &Parms);
		}
		else if (auto I = (IVertexPaintDetectionInterface*)(O->GetNativeInterfaceAddress(UVertexPaintDetectionInterface::StaticClass())))
		{
			I->ColorsAppliedOnActor_Implementation(taskResultInfo,meshData,paintedOnActorSettings,amountOfPaintedColorsOfEachChannel,vertexColorsOnEachBone,additionalData);
		}
	}
	static FName NAME_UVertexPaintDetectionInterface_GetAllVertexColorsOnlyOnActor = FName(TEXT("GetAllVertexColorsOnlyOnActor"));
	void IVertexPaintDetectionInterface::Execute_GetAllVertexColorsOnlyOnActor(UObject* O, FVertexDetectTaskResultInfo taskResultInfo, FVertexDetectMeshDataStruct const& meshData, FVertexDetectGetColorsOnlyStruct gotAllVertexColorsWithSettings, FVertexDetectAmountOfPaintedColorsOfEachChannel amountOfPaintedColorsOfEachChannel, FVertexDetectVertexColorsOnEachBone vertexColorsOnEachBone, FVertexDetectAdditionalDataToPassThrough additionalData)
	{
		check(O != NULL);
		check(O->GetClass()->ImplementsInterface(UVertexPaintDetectionInterface::StaticClass()));
		VertexPaintDetectionInterface_eventGetAllVertexColorsOnlyOnActor_Parms Parms;
		UFunction* const Func = O->FindFunction(NAME_UVertexPaintDetectionInterface_GetAllVertexColorsOnlyOnActor);
		if (Func)
		{
			Parms.taskResultInfo=taskResultInfo;
			Parms.meshData=meshData;
			Parms.gotAllVertexColorsWithSettings=gotAllVertexColorsWithSettings;
			Parms.amountOfPaintedColorsOfEachChannel=amountOfPaintedColorsOfEachChannel;
			Parms.vertexColorsOnEachBone=vertexColorsOnEachBone;
			Parms.additionalData=additionalData;
			O->ProcessEvent(Func, &Parms);
		}
		else if (auto I = (IVertexPaintDetectionInterface*)(O->GetNativeInterfaceAddress(UVertexPaintDetectionInterface::StaticClass())))
		{
			I->GetAllVertexColorsOnlyOnActor_Implementation(taskResultInfo,meshData,gotAllVertexColorsWithSettings,amountOfPaintedColorsOfEachChannel,vertexColorsOnEachBone,additionalData);
		}
	}
	static FName NAME_UVertexPaintDetectionInterface_GetClosestVertexDataOnActor = FName(TEXT("GetClosestVertexDataOnActor"));
	void IVertexPaintDetectionInterface::Execute_GetClosestVertexDataOnActor(UObject* O, FVertexDetectTaskResultInfo taskResultInfo, FVertexDetectMeshDataStruct const& meshData, FVertexDetectInfoStruct detectedMeshWithSettings, FVertexDetectClosestVertexDataResultStruct closestVertexColorResult, FVertexDetectEstimatedColorAtHitLocationResultStruct estimatedColorAtHitLocationResult, FVertexDetectAvarageColorInAreaInfo avarageColorInAreaInfo, FVertexDetectAmountOfPaintedColorsOfEachChannel amountOfPaintedColorsOfEachChannel, FVertexDetectVertexColorsOnEachBone vertexColorsOnEachBone, FVertexDetectAdditionalDataToPassThrough additionalData)
	{
		check(O != NULL);
		check(O->GetClass()->ImplementsInterface(UVertexPaintDetectionInterface::StaticClass()));
		VertexPaintDetectionInterface_eventGetClosestVertexDataOnActor_Parms Parms;
		UFunction* const Func = O->FindFunction(NAME_UVertexPaintDetectionInterface_GetClosestVertexDataOnActor);
		if (Func)
		{
			Parms.taskResultInfo=taskResultInfo;
			Parms.meshData=meshData;
			Parms.detectedMeshWithSettings=detectedMeshWithSettings;
			Parms.closestVertexColorResult=closestVertexColorResult;
			Parms.estimatedColorAtHitLocationResult=estimatedColorAtHitLocationResult;
			Parms.avarageColorInAreaInfo=avarageColorInAreaInfo;
			Parms.amountOfPaintedColorsOfEachChannel=amountOfPaintedColorsOfEachChannel;
			Parms.vertexColorsOnEachBone=vertexColorsOnEachBone;
			Parms.additionalData=additionalData;
			O->ProcessEvent(Func, &Parms);
		}
		else if (auto I = (IVertexPaintDetectionInterface*)(O->GetNativeInterfaceAddress(UVertexPaintDetectionInterface::StaticClass())))
		{
			I->GetClosestVertexDataOnActor_Implementation(taskResultInfo,meshData,detectedMeshWithSettings,closestVertexColorResult,estimatedColorAtHitLocationResult,avarageColorInAreaInfo,amountOfPaintedColorsOfEachChannel,vertexColorsOnEachBone,additionalData);
		}
	}
	static FName NAME_UVertexPaintDetectionInterface_GetSkeletalMeshClothPhysicsSettings = FName(TEXT("GetSkeletalMeshClothPhysicsSettings"));
	TMap<UClothingAssetBase*,FVertexDetectClothSettingsStruct> IVertexPaintDetectionInterface::Execute_GetSkeletalMeshClothPhysicsSettings(UObject* O, USkeletalMeshComponent* skeletalMeshComponentTryingToGetClothSettingsFor)
	{
		check(O != NULL);
		check(O->GetClass()->ImplementsInterface(UVertexPaintDetectionInterface::StaticClass()));
		VertexPaintDetectionInterface_eventGetSkeletalMeshClothPhysicsSettings_Parms Parms;
		UFunction* const Func = O->FindFunction(NAME_UVertexPaintDetectionInterface_GetSkeletalMeshClothPhysicsSettings);
		if (Func)
		{
			Parms.skeletalMeshComponentTryingToGetClothSettingsFor=skeletalMeshComponentTryingToGetClothSettingsFor;
			O->ProcessEvent(Func, &Parms);
		}
		else if (auto I = (IVertexPaintDetectionInterface*)(O->GetNativeInterfaceAddress(UVertexPaintDetectionInterface::StaticClass())))
		{
			Parms.ReturnValue = I->GetSkeletalMeshClothPhysicsSettings_Implementation(skeletalMeshComponentTryingToGetClothSettingsFor);
		}
		return Parms.ReturnValue;
	}
	static FName NAME_UVertexPaintDetectionInterface_PaintedOnActor_AtLocation = FName(TEXT("PaintedOnActor_AtLocation"));
	void IVertexPaintDetectionInterface::Execute_PaintedOnActor_AtLocation(UObject* O, FVertexDetectTaskResultInfo taskResultInfo, FVertexDetectMeshDataStruct const& meshData, FVertexPaintAtLocationStruct paintedAtLocationSettings, FVertexDetectClosestVertexDataResultStruct closestVertexColorResult, FVertexDetectEstimatedColorAtHitLocationResultStruct estimatedColorAtHitLocationResult, FVertexDetectAvarageColorInAreaInfo avarageColorInAreaInfo, FVertexDetectAmountOfPaintedColorsOfEachChannel amountOfPaintedColorsOfEachChannel, FVertexDetectVertexColorsOnEachBone vertexColorsOnEachBone, FVertexDetectAdditionalDataToPassThrough additionalData)
	{
		check(O != NULL);
		check(O->GetClass()->ImplementsInterface(UVertexPaintDetectionInterface::StaticClass()));
		VertexPaintDetectionInterface_eventPaintedOnActor_AtLocation_Parms Parms;
		UFunction* const Func = O->FindFunction(NAME_UVertexPaintDetectionInterface_PaintedOnActor_AtLocation);
		if (Func)
		{
			Parms.taskResultInfo=taskResultInfo;
			Parms.meshData=meshData;
			Parms.paintedAtLocationSettings=paintedAtLocationSettings;
			Parms.closestVertexColorResult=closestVertexColorResult;
			Parms.estimatedColorAtHitLocationResult=estimatedColorAtHitLocationResult;
			Parms.avarageColorInAreaInfo=avarageColorInAreaInfo;
			Parms.amountOfPaintedColorsOfEachChannel=amountOfPaintedColorsOfEachChannel;
			Parms.vertexColorsOnEachBone=vertexColorsOnEachBone;
			Parms.additionalData=additionalData;
			O->ProcessEvent(Func, &Parms);
		}
		else if (auto I = (IVertexPaintDetectionInterface*)(O->GetNativeInterfaceAddress(UVertexPaintDetectionInterface::StaticClass())))
		{
			I->PaintedOnActor_AtLocation_Implementation(taskResultInfo,meshData,paintedAtLocationSettings,closestVertexColorResult,estimatedColorAtHitLocationResult,avarageColorInAreaInfo,amountOfPaintedColorsOfEachChannel,vertexColorsOnEachBone,additionalData);
		}
	}
	static FName NAME_UVertexPaintDetectionInterface_PaintedOnActor_EntireMesh = FName(TEXT("PaintedOnActor_EntireMesh"));
	void IVertexPaintDetectionInterface::Execute_PaintedOnActor_EntireMesh(UObject* O, FVertexDetectTaskResultInfo taskResultInfo, FVertexDetectMeshDataStruct const& meshData, FVertexPaintOnEntireMeshStruct paintedEntireMeshSettings, FVertexDetectAmountOfPaintedColorsOfEachChannel amountOfPaintedColorsOfEachChannel, FVertexDetectVertexColorsOnEachBone vertexColorsOnEachBone, FVertexDetectAdditionalDataToPassThrough additionalData)
	{
		check(O != NULL);
		check(O->GetClass()->ImplementsInterface(UVertexPaintDetectionInterface::StaticClass()));
		VertexPaintDetectionInterface_eventPaintedOnActor_EntireMesh_Parms Parms;
		UFunction* const Func = O->FindFunction(NAME_UVertexPaintDetectionInterface_PaintedOnActor_EntireMesh);
		if (Func)
		{
			Parms.taskResultInfo=taskResultInfo;
			Parms.meshData=meshData;
			Parms.paintedEntireMeshSettings=paintedEntireMeshSettings;
			Parms.amountOfPaintedColorsOfEachChannel=amountOfPaintedColorsOfEachChannel;
			Parms.vertexColorsOnEachBone=vertexColorsOnEachBone;
			Parms.additionalData=additionalData;
			O->ProcessEvent(Func, &Parms);
		}
		else if (auto I = (IVertexPaintDetectionInterface*)(O->GetNativeInterfaceAddress(UVertexPaintDetectionInterface::StaticClass())))
		{
			I->PaintedOnActor_EntireMesh_Implementation(taskResultInfo,meshData,paintedEntireMeshSettings,amountOfPaintedColorsOfEachChannel,vertexColorsOnEachBone,additionalData);
		}
	}
	static FName NAME_UVertexPaintDetectionInterface_PaintedOnActor_PaintColorSnippet = FName(TEXT("PaintedOnActor_PaintColorSnippet"));
	void IVertexPaintDetectionInterface::Execute_PaintedOnActor_PaintColorSnippet(UObject* O, FVertexDetectTaskResultInfo taskResultInfo, FVertexDetectMeshDataStruct const& meshData, FVertexPaintColorSnippetStruct paintedColorSnippetSettings, FVertexDetectAmountOfPaintedColorsOfEachChannel amountOfPaintedColorsOfEachChannel, FVertexDetectVertexColorsOnEachBone vertexColorsOnEachBone, FVertexDetectAdditionalDataToPassThrough additionalData)
	{
		check(O != NULL);
		check(O->GetClass()->ImplementsInterface(UVertexPaintDetectionInterface::StaticClass()));
		VertexPaintDetectionInterface_eventPaintedOnActor_PaintColorSnippet_Parms Parms;
		UFunction* const Func = O->FindFunction(NAME_UVertexPaintDetectionInterface_PaintedOnActor_PaintColorSnippet);
		if (Func)
		{
			Parms.taskResultInfo=taskResultInfo;
			Parms.meshData=meshData;
			Parms.paintedColorSnippetSettings=paintedColorSnippetSettings;
			Parms.amountOfPaintedColorsOfEachChannel=amountOfPaintedColorsOfEachChannel;
			Parms.vertexColorsOnEachBone=vertexColorsOnEachBone;
			Parms.additionalData=additionalData;
			O->ProcessEvent(Func, &Parms);
		}
		else if (auto I = (IVertexPaintDetectionInterface*)(O->GetNativeInterfaceAddress(UVertexPaintDetectionInterface::StaticClass())))
		{
			I->PaintedOnActor_PaintColorSnippet_Implementation(taskResultInfo,meshData,paintedColorSnippetSettings,amountOfPaintedColorsOfEachChannel,vertexColorsOnEachBone,additionalData);
		}
	}
	static FName NAME_UVertexPaintDetectionInterface_PaintedOnActor_WithinArea = FName(TEXT("PaintedOnActor_WithinArea"));
	void IVertexPaintDetectionInterface::Execute_PaintedOnActor_WithinArea(UObject* O, FVertexDetectTaskResultInfo taskResultInfo, FVertexDetectMeshDataStruct const& meshData, FVertexPainthWithinAreaStruct paintedWithinAreaSettings, FVertexDetectAmountOfPaintedColorsOfEachChannel amountOfPaintedColorsOfEachChannel, FVertexDetectVertexColorsOnEachBone vertexColorsOnEachBone, FVertexDetectAdditionalDataToPassThrough additionalData)
	{
		check(O != NULL);
		check(O->GetClass()->ImplementsInterface(UVertexPaintDetectionInterface::StaticClass()));
		VertexPaintDetectionInterface_eventPaintedOnActor_WithinArea_Parms Parms;
		UFunction* const Func = O->FindFunction(NAME_UVertexPaintDetectionInterface_PaintedOnActor_WithinArea);
		if (Func)
		{
			Parms.taskResultInfo=taskResultInfo;
			Parms.meshData=meshData;
			Parms.paintedWithinAreaSettings=paintedWithinAreaSettings;
			Parms.amountOfPaintedColorsOfEachChannel=amountOfPaintedColorsOfEachChannel;
			Parms.vertexColorsOnEachBone=vertexColorsOnEachBone;
			Parms.additionalData=additionalData;
			O->ProcessEvent(Func, &Parms);
		}
		else if (auto I = (IVertexPaintDetectionInterface*)(O->GetNativeInterfaceAddress(UVertexPaintDetectionInterface::StaticClass())))
		{
			I->PaintedOnActor_WithinArea_Implementation(taskResultInfo,meshData,paintedWithinAreaSettings,amountOfPaintedColorsOfEachChannel,vertexColorsOnEachBone,additionalData);
		}
	}
	struct Z_CompiledInDeferFile_FID_Build_U5M_Marketplace_Mac_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_VertexPaintDetectionPlugin_Source_VertexPaintDetectionPlugin_Public_VertexPaintDetectionInterface_h_Statics
	{
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Build_U5M_Marketplace_Mac_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_VertexPaintDetectionPlugin_Source_VertexPaintDetectionPlugin_Public_VertexPaintDetectionInterface_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_UVertexPaintDetectionInterface, UVertexPaintDetectionInterface::StaticClass, TEXT("UVertexPaintDetectionInterface"), &Z_Registration_Info_UClass_UVertexPaintDetectionInterface, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UVertexPaintDetectionInterface), 2343531029U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Build_U5M_Marketplace_Mac_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_VertexPaintDetectionPlugin_Source_VertexPaintDetectionPlugin_Public_VertexPaintDetectionInterface_h_622455054(TEXT("/Script/VertexPaintDetectionPlugin"),
		Z_CompiledInDeferFile_FID_Build_U5M_Marketplace_Mac_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_VertexPaintDetectionPlugin_Source_VertexPaintDetectionPlugin_Public_VertexPaintDetectionInterface_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Build_U5M_Marketplace_Mac_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_VertexPaintDetectionPlugin_Source_VertexPaintDetectionPlugin_Public_VertexPaintDetectionInterface_h_Statics::ClassInfo),
		nullptr, 0,
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
