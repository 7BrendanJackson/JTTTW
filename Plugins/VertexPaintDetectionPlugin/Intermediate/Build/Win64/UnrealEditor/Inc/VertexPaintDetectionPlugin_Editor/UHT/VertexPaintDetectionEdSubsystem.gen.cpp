// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "VertexPaintDetectionPlugin_Editor/Public/VertexPaintDetectionEdSubsystem.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeVertexPaintDetectionEdSubsystem() {}
// Cross Module References
	COREUOBJECT_API UClass* Z_Construct_UClass_UObject_NoRegister();
	COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FColor();
	EDITORSUBSYSTEM_API UClass* Z_Construct_UClass_UEditorSubsystem();
	ENGINE_API UClass* Z_Construct_UClass_UMeshComponent_NoRegister();
	ENGINE_API UClass* Z_Construct_UClass_USkeletalMesh_NoRegister();
	ENGINE_API UClass* Z_Construct_UClass_USkeletalMeshComponent_NoRegister();
	ENGINE_API UClass* Z_Construct_UClass_UStaticMesh_NoRegister();
	ENGINE_API UClass* Z_Construct_UClass_UStaticMeshComponent_NoRegister();
	ENGINE_API UClass* Z_Construct_UClass_UWorld_NoRegister();
	UMG_API UClass* Z_Construct_UClass_UButton_NoRegister();
	UMG_API UClass* Z_Construct_UClass_UComboBoxString_NoRegister();
	UPackage* Z_Construct_UPackage__Script_VertexPaintDetectionPlugin_Editor();
	VERTEXPAINTDETECTIONPLUGIN_API UClass* Z_Construct_UClass_UVertexPaintColorSnippetDataAsset_NoRegister();
	VERTEXPAINTDETECTIONPLUGIN_EDITOR_API UClass* Z_Construct_UClass_UVertexPaintDetectionEdSubsystem();
	VERTEXPAINTDETECTIONPLUGIN_EDITOR_API UClass* Z_Construct_UClass_UVertexPaintDetectionEdSubsystem_NoRegister();
// End Cross Module References
	DEFINE_FUNCTION(UVertexPaintDetectionEdSubsystem::execRefreshAllAvailableCachedColorSnippetTagContainer)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->RefreshAllAvailableCachedColorSnippetTagContainer();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UVertexPaintDetectionEdSubsystem::execRenameColorSnippetTag)
	{
		P_GET_PROPERTY(FStrProperty,Z_Param_oldTag);
		P_GET_PROPERTY(FStrProperty,Z_Param_newTag);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->RenameColorSnippetTag(Z_Param_oldTag,Z_Param_newTag);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UVertexPaintDetectionEdSubsystem::execClearAllAvailableColorSnippetCacheTagContainer)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->ClearAllAvailableColorSnippetCacheTagContainer();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UVertexPaintDetectionEdSubsystem::execRemoveColorSnippetTag)
	{
		P_GET_PROPERTY(FStrProperty,Z_Param_tag);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(bool*)Z_Param__Result=P_THIS->RemoveColorSnippetTag(Z_Param_tag);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UVertexPaintDetectionEdSubsystem::execGetAllColorSnippetTagsDirectlyFromIni)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		*(TArray<FString>*)Z_Param__Result=P_THIS->GetAllColorSnippetTagsDirectlyFromIni();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UVertexPaintDetectionEdSubsystem::execDoesColorSnippetTagExist)
	{
		P_GET_PROPERTY(FStrProperty,Z_Param_tag);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(bool*)Z_Param__Result=P_THIS->DoesColorSnippetTagExist(Z_Param_tag);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UVertexPaintDetectionEdSubsystem::execAddColorSnippetTag)
	{
		P_GET_PROPERTY(FStrProperty,Z_Param_tag);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(bool*)Z_Param__Result=P_THIS->AddColorSnippetTag(Z_Param_tag);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UVertexPaintDetectionEdSubsystem::execLoadEssentialDataAssets)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->LoadEssentialDataAssets();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UVertexPaintDetectionEdSubsystem::execSetCustomSettingsVertexPaintColorSnippetReferenceDataAssetToUse)
	{
		P_GET_OBJECT(UObject,Z_Param_dataAsset);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->SetCustomSettingsVertexPaintColorSnippetReferenceDataAssetToUse(Z_Param_dataAsset);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UVertexPaintDetectionEdSubsystem::execSetCustomSettingsVertexPaintMaterialToUse)
	{
		P_GET_OBJECT(UObject,Z_Param_dataAsset);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->SetCustomSettingsVertexPaintMaterialToUse(Z_Param_dataAsset);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UVertexPaintDetectionEdSubsystem::execSetCustomSettingsOptimizationsDataAssetToUse)
	{
		P_GET_OBJECT(UObject,Z_Param_dataAsset);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->SetCustomSettingsOptimizationsDataAssetToUse(Z_Param_dataAsset);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UVertexPaintDetectionEdSubsystem::execGetPersistentLevelsWorld_Wrapper)
	{
		P_GET_OBJECT(UObject,Z_Param_worldContext);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(UWorld**)Z_Param__Result=P_THIS->GetPersistentLevelsWorld_Wrapper(Z_Param_worldContext);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UVertexPaintDetectionEdSubsystem::execGetStaticMeshComponentVertexCount_Wrapper)
	{
		P_GET_OBJECT(UStaticMeshComponent,Z_Param_staticMeshComponent);
		P_GET_PROPERTY(FIntProperty,Z_Param_lod);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(int32*)Z_Param__Result=P_THIS->GetStaticMeshComponentVertexCount_Wrapper(Z_Param_staticMeshComponent,Z_Param_lod);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UVertexPaintDetectionEdSubsystem::execGetSkeletalMeshComponentVertexCount_Wrapper)
	{
		P_GET_OBJECT(USkeletalMeshComponent,Z_Param_skeletalMeshComponent);
		P_GET_PROPERTY(FIntProperty,Z_Param_lod);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(int32*)Z_Param__Result=P_THIS->GetSkeletalMeshComponentVertexCount_Wrapper(Z_Param_skeletalMeshComponent,Z_Param_lod);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UVertexPaintDetectionEdSubsystem::execGetSkeletalMeshLODCount_Wrapper)
	{
		P_GET_OBJECT(USkeletalMesh,Z_Param_skeletalMesh);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(int32*)Z_Param__Result=P_THIS->GetSkeletalMeshLODCount_Wrapper(Z_Param_skeletalMesh);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UVertexPaintDetectionEdSubsystem::execGetStaticMeshLODCount_Wrapper)
	{
		P_GET_OBJECT(UStaticMesh,Z_Param_mesh);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(int32*)Z_Param__Result=P_THIS->GetStaticMeshLODCount_Wrapper(Z_Param_mesh);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UVertexPaintDetectionEdSubsystem::execGetSkeletalMeshVerticesAmount_Wrapper)
	{
		P_GET_OBJECT(USkeletalMesh,Z_Param_mesh);
		P_GET_PROPERTY(FIntProperty,Z_Param_lod);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(int32*)Z_Param__Result=P_THIS->GetSkeletalMeshVerticesAmount_Wrapper(Z_Param_mesh,Z_Param_lod);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UVertexPaintDetectionEdSubsystem::execGetStaticMeshVerticesAmount_Wrapper)
	{
		P_GET_OBJECT(UStaticMesh,Z_Param_mesh);
		P_GET_PROPERTY(FIntProperty,Z_Param_lod);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(int32*)Z_Param__Result=P_THIS->GetStaticMeshVerticesAmount_Wrapper(Z_Param_mesh,Z_Param_lod);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UVertexPaintDetectionEdSubsystem::execRefreshColorSnippetAsRapidJsonString)
	{
		P_GET_OBJECT(UVertexPaintColorSnippetDataAsset,Z_Param_colorSnippetDataAsset);
		P_GET_PROPERTY(FStrProperty,Z_Param_colorSnippet);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->RefreshColorSnippetAsRapidJsonString(Z_Param_colorSnippetDataAsset,Z_Param_colorSnippet);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UVertexPaintDetectionEdSubsystem::execApplyVertexColorToMeshAtLOD0)
	{
		P_GET_OBJECT(UMeshComponent,Z_Param_mesh);
		P_GET_TARRAY(FColor,Z_Param_vertexColorsAtLOD0);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(bool*)Z_Param__Result=P_THIS->ApplyVertexColorToMeshAtLOD0(Z_Param_mesh,Z_Param_vertexColorsAtLOD0);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UVertexPaintDetectionEdSubsystem::execRemoveMeshColorSnippet)
	{
		P_GET_PROPERTY(FStrProperty,Z_Param_colorSnippetID);
		P_GET_OBJECT(UVertexPaintColorSnippetDataAsset,Z_Param_colorSnippetDataAsset);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->RemoveMeshColorSnippet(Z_Param_colorSnippetID,Z_Param_colorSnippetDataAsset);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UVertexPaintDetectionEdSubsystem::execUpdateMeshColorSnippetID)
	{
		P_GET_PROPERTY(FStrProperty,Z_Param_prevColorSnippetID);
		P_GET_PROPERTY(FStrProperty,Z_Param_newColorSnippetID);
		P_GET_OBJECT(UVertexPaintColorSnippetDataAsset,Z_Param_colorSnippetDataAsset);
		P_GET_UBOOL_REF(Z_Param_Out_success);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->UpdateMeshColorSnippetID(Z_Param_prevColorSnippetID,Z_Param_newColorSnippetID,Z_Param_colorSnippetDataAsset,Z_Param_Out_success);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UVertexPaintDetectionEdSubsystem::execMoveMeshColorSnippet)
	{
		P_GET_PROPERTY(FStrProperty,Z_Param_colorSnippetID);
		P_GET_OBJECT(UVertexPaintColorSnippetDataAsset,Z_Param_colorSnippetDataAssetToMoveFrom);
		P_GET_OBJECT(UVertexPaintColorSnippetDataAsset,Z_Param_colorSnippetDataAssetToMoveTo);
		P_GET_UBOOL_REF(Z_Param_Out_success);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->MoveMeshColorSnippet(Z_Param_colorSnippetID,Z_Param_colorSnippetDataAssetToMoveFrom,Z_Param_colorSnippetDataAssetToMoveTo,Z_Param_Out_success);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UVertexPaintDetectionEdSubsystem::execAddMeshColorSnippet)
	{
		P_GET_OBJECT(UMeshComponent,Z_Param_meshComponent);
		P_GET_PROPERTY(FStrProperty,Z_Param_colorSnippetID);
		P_GET_OBJECT(UVertexPaintColorSnippetDataAsset,Z_Param_colorSnippetDataAsset);
		P_GET_UBOOL_REF(Z_Param_Out_success);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->AddMeshColorSnippet(Z_Param_meshComponent,Z_Param_colorSnippetID,Z_Param_colorSnippetDataAsset,Z_Param_Out_success);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UVertexPaintDetectionEdSubsystem::execRemoveStaticMeshAndAmountOfLODsToPaintByDefault)
	{
		P_GET_OBJECT(UStaticMesh,Z_Param_staticMesh);
		P_GET_UBOOL_REF(Z_Param_Out_success);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->RemoveStaticMeshAndAmountOfLODsToPaintByDefault(Z_Param_staticMesh,Z_Param_Out_success);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UVertexPaintDetectionEdSubsystem::execAddStaticMeshAndAmountOfLODsToPaintByDefault)
	{
		P_GET_OBJECT(UStaticMesh,Z_Param_staticMesh);
		P_GET_PROPERTY(FIntProperty,Z_Param_maxAmountOfLODsToPaint);
		P_GET_UBOOL_REF(Z_Param_Out_success);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->AddStaticMeshAndAmountOfLODsToPaintByDefault(Z_Param_staticMesh,Z_Param_maxAmountOfLODsToPaint,Z_Param_Out_success);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UVertexPaintDetectionEdSubsystem::execRemoveSkeletalMeshAmountOfLODsToPaintByDefault)
	{
		P_GET_OBJECT(USkeletalMesh,Z_Param_skeletalMesh);
		P_GET_UBOOL_REF(Z_Param_Out_success);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->RemoveSkeletalMeshAmountOfLODsToPaintByDefault(Z_Param_skeletalMesh,Z_Param_Out_success);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UVertexPaintDetectionEdSubsystem::execAddSkeletalMeshAmountOfLODsToPaintByDefault)
	{
		P_GET_OBJECT(USkeletalMesh,Z_Param_skeletalMesh);
		P_GET_PROPERTY(FIntProperty,Z_Param_maxAmountOfLODsToPaint);
		P_GET_UBOOL_REF(Z_Param_Out_success);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->AddSkeletalMeshAmountOfLODsToPaintByDefault(Z_Param_skeletalMesh,Z_Param_maxAmountOfLODsToPaint,Z_Param_Out_success);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UVertexPaintDetectionEdSubsystem::execSavePackageWrapper)
	{
		P_GET_OBJECT(UObject,Z_Param_packageToSave);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(bool*)Z_Param__Result=P_THIS->SavePackageWrapper(Z_Param_packageToSave);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UVertexPaintDetectionEdSubsystem::execSetEngineSpecificButtonSettings)
	{
		P_GET_TARRAY(UButton*,Z_Param_buttons);
		P_GET_TARRAY(UComboBoxString*,Z_Param_comboBoxes);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->SetEngineSpecificButtonSettings(Z_Param_buttons,Z_Param_comboBoxes);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UVertexPaintDetectionEdSubsystem::execAddEditorNotification)
	{
		P_GET_PROPERTY(FStrProperty,Z_Param_notification);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->AddEditorNotification(Z_Param_notification);
		P_NATIVE_END;
	}
	void UVertexPaintDetectionEdSubsystem::StaticRegisterNativesUVertexPaintDetectionEdSubsystem()
	{
		UClass* Class = UVertexPaintDetectionEdSubsystem::StaticClass();
		static const FNameNativePtrPair Funcs[] = {
			{ "AddColorSnippetTag", &UVertexPaintDetectionEdSubsystem::execAddColorSnippetTag },
			{ "AddEditorNotification", &UVertexPaintDetectionEdSubsystem::execAddEditorNotification },
			{ "AddMeshColorSnippet", &UVertexPaintDetectionEdSubsystem::execAddMeshColorSnippet },
			{ "AddSkeletalMeshAmountOfLODsToPaintByDefault", &UVertexPaintDetectionEdSubsystem::execAddSkeletalMeshAmountOfLODsToPaintByDefault },
			{ "AddStaticMeshAndAmountOfLODsToPaintByDefault", &UVertexPaintDetectionEdSubsystem::execAddStaticMeshAndAmountOfLODsToPaintByDefault },
			{ "ApplyVertexColorToMeshAtLOD0", &UVertexPaintDetectionEdSubsystem::execApplyVertexColorToMeshAtLOD0 },
			{ "ClearAllAvailableColorSnippetCacheTagContainer", &UVertexPaintDetectionEdSubsystem::execClearAllAvailableColorSnippetCacheTagContainer },
			{ "DoesColorSnippetTagExist", &UVertexPaintDetectionEdSubsystem::execDoesColorSnippetTagExist },
			{ "GetAllColorSnippetTagsDirectlyFromIni", &UVertexPaintDetectionEdSubsystem::execGetAllColorSnippetTagsDirectlyFromIni },
			{ "GetPersistentLevelsWorld_Wrapper", &UVertexPaintDetectionEdSubsystem::execGetPersistentLevelsWorld_Wrapper },
			{ "GetSkeletalMeshComponentVertexCount_Wrapper", &UVertexPaintDetectionEdSubsystem::execGetSkeletalMeshComponentVertexCount_Wrapper },
			{ "GetSkeletalMeshLODCount_Wrapper", &UVertexPaintDetectionEdSubsystem::execGetSkeletalMeshLODCount_Wrapper },
			{ "GetSkeletalMeshVerticesAmount_Wrapper", &UVertexPaintDetectionEdSubsystem::execGetSkeletalMeshVerticesAmount_Wrapper },
			{ "GetStaticMeshComponentVertexCount_Wrapper", &UVertexPaintDetectionEdSubsystem::execGetStaticMeshComponentVertexCount_Wrapper },
			{ "GetStaticMeshLODCount_Wrapper", &UVertexPaintDetectionEdSubsystem::execGetStaticMeshLODCount_Wrapper },
			{ "GetStaticMeshVerticesAmount_Wrapper", &UVertexPaintDetectionEdSubsystem::execGetStaticMeshVerticesAmount_Wrapper },
			{ "LoadEssentialDataAssets", &UVertexPaintDetectionEdSubsystem::execLoadEssentialDataAssets },
			{ "MoveMeshColorSnippet", &UVertexPaintDetectionEdSubsystem::execMoveMeshColorSnippet },
			{ "RefreshAllAvailableCachedColorSnippetTagContainer", &UVertexPaintDetectionEdSubsystem::execRefreshAllAvailableCachedColorSnippetTagContainer },
			{ "RefreshColorSnippetAsRapidJsonString", &UVertexPaintDetectionEdSubsystem::execRefreshColorSnippetAsRapidJsonString },
			{ "RemoveColorSnippetTag", &UVertexPaintDetectionEdSubsystem::execRemoveColorSnippetTag },
			{ "RemoveMeshColorSnippet", &UVertexPaintDetectionEdSubsystem::execRemoveMeshColorSnippet },
			{ "RemoveSkeletalMeshAmountOfLODsToPaintByDefault", &UVertexPaintDetectionEdSubsystem::execRemoveSkeletalMeshAmountOfLODsToPaintByDefault },
			{ "RemoveStaticMeshAndAmountOfLODsToPaintByDefault", &UVertexPaintDetectionEdSubsystem::execRemoveStaticMeshAndAmountOfLODsToPaintByDefault },
			{ "RenameColorSnippetTag", &UVertexPaintDetectionEdSubsystem::execRenameColorSnippetTag },
			{ "SavePackageWrapper", &UVertexPaintDetectionEdSubsystem::execSavePackageWrapper },
			{ "SetCustomSettingsOptimizationsDataAssetToUse", &UVertexPaintDetectionEdSubsystem::execSetCustomSettingsOptimizationsDataAssetToUse },
			{ "SetCustomSettingsVertexPaintColorSnippetReferenceDataAssetToUse", &UVertexPaintDetectionEdSubsystem::execSetCustomSettingsVertexPaintColorSnippetReferenceDataAssetToUse },
			{ "SetCustomSettingsVertexPaintMaterialToUse", &UVertexPaintDetectionEdSubsystem::execSetCustomSettingsVertexPaintMaterialToUse },
			{ "SetEngineSpecificButtonSettings", &UVertexPaintDetectionEdSubsystem::execSetEngineSpecificButtonSettings },
			{ "UpdateMeshColorSnippetID", &UVertexPaintDetectionEdSubsystem::execUpdateMeshColorSnippetID },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
	}
	struct Z_Construct_UFunction_UVertexPaintDetectionEdSubsystem_AddColorSnippetTag_Statics
	{
		struct VertexPaintDetectionEdSubsystem_eventAddColorSnippetTag_Parms
		{
			FString tag;
			bool ReturnValue;
		};
		static const UECodeGen_Private::FStrPropertyParams NewProp_tag;
		static void NewProp_ReturnValue_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UVertexPaintDetectionEdSubsystem_AddColorSnippetTag_Statics::NewProp_tag = { "tag", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(VertexPaintDetectionEdSubsystem_eventAddColorSnippetTag_Parms, tag), METADATA_PARAMS(nullptr, 0) };
	void Z_Construct_UFunction_UVertexPaintDetectionEdSubsystem_AddColorSnippetTag_Statics::NewProp_ReturnValue_SetBit(void* Obj)
	{
		((VertexPaintDetectionEdSubsystem_eventAddColorSnippetTag_Parms*)Obj)->ReturnValue = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UVertexPaintDetectionEdSubsystem_AddColorSnippetTag_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(bool), sizeof(VertexPaintDetectionEdSubsystem_eventAddColorSnippetTag_Parms), &Z_Construct_UFunction_UVertexPaintDetectionEdSubsystem_AddColorSnippetTag_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UVertexPaintDetectionEdSubsystem_AddColorSnippetTag_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UVertexPaintDetectionEdSubsystem_AddColorSnippetTag_Statics::NewProp_tag,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UVertexPaintDetectionEdSubsystem_AddColorSnippetTag_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UVertexPaintDetectionEdSubsystem_AddColorSnippetTag_Statics::Function_MetaDataParams[] = {
		{ "Category", "Runtime Vertex Color Paint and Detection Plugin" },
		{ "ModuleRelativePath", "Public/VertexPaintDetectionEdSubsystem.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UVertexPaintDetectionEdSubsystem_AddColorSnippetTag_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UVertexPaintDetectionEdSubsystem, nullptr, "AddColorSnippetTag", nullptr, nullptr, sizeof(Z_Construct_UFunction_UVertexPaintDetectionEdSubsystem_AddColorSnippetTag_Statics::VertexPaintDetectionEdSubsystem_eventAddColorSnippetTag_Parms), Z_Construct_UFunction_UVertexPaintDetectionEdSubsystem_AddColorSnippetTag_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UVertexPaintDetectionEdSubsystem_AddColorSnippetTag_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UVertexPaintDetectionEdSubsystem_AddColorSnippetTag_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UVertexPaintDetectionEdSubsystem_AddColorSnippetTag_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UVertexPaintDetectionEdSubsystem_AddColorSnippetTag()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UVertexPaintDetectionEdSubsystem_AddColorSnippetTag_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UVertexPaintDetectionEdSubsystem_AddEditorNotification_Statics
	{
		struct VertexPaintDetectionEdSubsystem_eventAddEditorNotification_Parms
		{
			FString notification;
		};
		static const UECodeGen_Private::FStrPropertyParams NewProp_notification;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UVertexPaintDetectionEdSubsystem_AddEditorNotification_Statics::NewProp_notification = { "notification", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(VertexPaintDetectionEdSubsystem_eventAddEditorNotification_Parms, notification), METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UVertexPaintDetectionEdSubsystem_AddEditorNotification_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UVertexPaintDetectionEdSubsystem_AddEditorNotification_Statics::NewProp_notification,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UVertexPaintDetectionEdSubsystem_AddEditorNotification_Statics::Function_MetaDataParams[] = {
		{ "Category", "Runtime Vertex Color Paint and Detection Plugin" },
		{ "ModuleRelativePath", "Public/VertexPaintDetectionEdSubsystem.h" },
		{ "ToolTip", "Adds a Editor Notification in the Bottom Right Corner" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UVertexPaintDetectionEdSubsystem_AddEditorNotification_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UVertexPaintDetectionEdSubsystem, nullptr, "AddEditorNotification", nullptr, nullptr, sizeof(Z_Construct_UFunction_UVertexPaintDetectionEdSubsystem_AddEditorNotification_Statics::VertexPaintDetectionEdSubsystem_eventAddEditorNotification_Parms), Z_Construct_UFunction_UVertexPaintDetectionEdSubsystem_AddEditorNotification_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UVertexPaintDetectionEdSubsystem_AddEditorNotification_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UVertexPaintDetectionEdSubsystem_AddEditorNotification_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UVertexPaintDetectionEdSubsystem_AddEditorNotification_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UVertexPaintDetectionEdSubsystem_AddEditorNotification()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UVertexPaintDetectionEdSubsystem_AddEditorNotification_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UVertexPaintDetectionEdSubsystem_AddMeshColorSnippet_Statics
	{
		struct VertexPaintDetectionEdSubsystem_eventAddMeshColorSnippet_Parms
		{
			UMeshComponent* meshComponent;
			FString colorSnippetID;
			UVertexPaintColorSnippetDataAsset* colorSnippetDataAsset;
			bool success;
		};
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_meshComponent_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPropertyParams NewProp_meshComponent;
		static const UECodeGen_Private::FStrPropertyParams NewProp_colorSnippetID;
		static const UECodeGen_Private::FObjectPropertyParams NewProp_colorSnippetDataAsset;
		static void NewProp_success_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_success;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UVertexPaintDetectionEdSubsystem_AddMeshColorSnippet_Statics::NewProp_meshComponent_MetaData[] = {
		{ "EditInline", "true" },
	};
#endif
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UVertexPaintDetectionEdSubsystem_AddMeshColorSnippet_Statics::NewProp_meshComponent = { "meshComponent", nullptr, (EPropertyFlags)0x0010000000080080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(VertexPaintDetectionEdSubsystem_eventAddMeshColorSnippet_Parms, meshComponent), Z_Construct_UClass_UMeshComponent_NoRegister, METADATA_PARAMS(Z_Construct_UFunction_UVertexPaintDetectionEdSubsystem_AddMeshColorSnippet_Statics::NewProp_meshComponent_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UVertexPaintDetectionEdSubsystem_AddMeshColorSnippet_Statics::NewProp_meshComponent_MetaData)) };
	const UECodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UVertexPaintDetectionEdSubsystem_AddMeshColorSnippet_Statics::NewProp_colorSnippetID = { "colorSnippetID", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(VertexPaintDetectionEdSubsystem_eventAddMeshColorSnippet_Parms, colorSnippetID), METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UVertexPaintDetectionEdSubsystem_AddMeshColorSnippet_Statics::NewProp_colorSnippetDataAsset = { "colorSnippetDataAsset", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(VertexPaintDetectionEdSubsystem_eventAddMeshColorSnippet_Parms, colorSnippetDataAsset), Z_Construct_UClass_UVertexPaintColorSnippetDataAsset_NoRegister, METADATA_PARAMS(nullptr, 0) };
	void Z_Construct_UFunction_UVertexPaintDetectionEdSubsystem_AddMeshColorSnippet_Statics::NewProp_success_SetBit(void* Obj)
	{
		((VertexPaintDetectionEdSubsystem_eventAddMeshColorSnippet_Parms*)Obj)->success = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UVertexPaintDetectionEdSubsystem_AddMeshColorSnippet_Statics::NewProp_success = { "success", nullptr, (EPropertyFlags)0x0010000000000180, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(bool), sizeof(VertexPaintDetectionEdSubsystem_eventAddMeshColorSnippet_Parms), &Z_Construct_UFunction_UVertexPaintDetectionEdSubsystem_AddMeshColorSnippet_Statics::NewProp_success_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UVertexPaintDetectionEdSubsystem_AddMeshColorSnippet_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UVertexPaintDetectionEdSubsystem_AddMeshColorSnippet_Statics::NewProp_meshComponent,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UVertexPaintDetectionEdSubsystem_AddMeshColorSnippet_Statics::NewProp_colorSnippetID,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UVertexPaintDetectionEdSubsystem_AddMeshColorSnippet_Statics::NewProp_colorSnippetDataAsset,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UVertexPaintDetectionEdSubsystem_AddMeshColorSnippet_Statics::NewProp_success,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UVertexPaintDetectionEdSubsystem_AddMeshColorSnippet_Statics::Function_MetaDataParams[] = {
		{ "Category", "Runtime Vertex Color Paint and Detection Plugin" },
		{ "ModuleRelativePath", "Public/VertexPaintDetectionEdSubsystem.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UVertexPaintDetectionEdSubsystem_AddMeshColorSnippet_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UVertexPaintDetectionEdSubsystem, nullptr, "AddMeshColorSnippet", nullptr, nullptr, sizeof(Z_Construct_UFunction_UVertexPaintDetectionEdSubsystem_AddMeshColorSnippet_Statics::VertexPaintDetectionEdSubsystem_eventAddMeshColorSnippet_Parms), Z_Construct_UFunction_UVertexPaintDetectionEdSubsystem_AddMeshColorSnippet_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UVertexPaintDetectionEdSubsystem_AddMeshColorSnippet_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04420401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UVertexPaintDetectionEdSubsystem_AddMeshColorSnippet_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UVertexPaintDetectionEdSubsystem_AddMeshColorSnippet_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UVertexPaintDetectionEdSubsystem_AddMeshColorSnippet()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UVertexPaintDetectionEdSubsystem_AddMeshColorSnippet_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UVertexPaintDetectionEdSubsystem_AddSkeletalMeshAmountOfLODsToPaintByDefault_Statics
	{
		struct VertexPaintDetectionEdSubsystem_eventAddSkeletalMeshAmountOfLODsToPaintByDefault_Parms
		{
			USkeletalMesh* skeletalMesh;
			int32 maxAmountOfLODsToPaint;
			bool success;
		};
		static const UECodeGen_Private::FObjectPropertyParams NewProp_skeletalMesh;
		static const UECodeGen_Private::FUnsizedIntPropertyParams NewProp_maxAmountOfLODsToPaint;
		static void NewProp_success_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_success;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UVertexPaintDetectionEdSubsystem_AddSkeletalMeshAmountOfLODsToPaintByDefault_Statics::NewProp_skeletalMesh = { "skeletalMesh", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(VertexPaintDetectionEdSubsystem_eventAddSkeletalMeshAmountOfLODsToPaintByDefault_Parms, skeletalMesh), Z_Construct_UClass_USkeletalMesh_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FUnsizedIntPropertyParams Z_Construct_UFunction_UVertexPaintDetectionEdSubsystem_AddSkeletalMeshAmountOfLODsToPaintByDefault_Statics::NewProp_maxAmountOfLODsToPaint = { "maxAmountOfLODsToPaint", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(VertexPaintDetectionEdSubsystem_eventAddSkeletalMeshAmountOfLODsToPaintByDefault_Parms, maxAmountOfLODsToPaint), METADATA_PARAMS(nullptr, 0) };
	void Z_Construct_UFunction_UVertexPaintDetectionEdSubsystem_AddSkeletalMeshAmountOfLODsToPaintByDefault_Statics::NewProp_success_SetBit(void* Obj)
	{
		((VertexPaintDetectionEdSubsystem_eventAddSkeletalMeshAmountOfLODsToPaintByDefault_Parms*)Obj)->success = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UVertexPaintDetectionEdSubsystem_AddSkeletalMeshAmountOfLODsToPaintByDefault_Statics::NewProp_success = { "success", nullptr, (EPropertyFlags)0x0010000000000180, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(bool), sizeof(VertexPaintDetectionEdSubsystem_eventAddSkeletalMeshAmountOfLODsToPaintByDefault_Parms), &Z_Construct_UFunction_UVertexPaintDetectionEdSubsystem_AddSkeletalMeshAmountOfLODsToPaintByDefault_Statics::NewProp_success_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UVertexPaintDetectionEdSubsystem_AddSkeletalMeshAmountOfLODsToPaintByDefault_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UVertexPaintDetectionEdSubsystem_AddSkeletalMeshAmountOfLODsToPaintByDefault_Statics::NewProp_skeletalMesh,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UVertexPaintDetectionEdSubsystem_AddSkeletalMeshAmountOfLODsToPaintByDefault_Statics::NewProp_maxAmountOfLODsToPaint,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UVertexPaintDetectionEdSubsystem_AddSkeletalMeshAmountOfLODsToPaintByDefault_Statics::NewProp_success,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UVertexPaintDetectionEdSubsystem_AddSkeletalMeshAmountOfLODsToPaintByDefault_Statics::Function_MetaDataParams[] = {
		{ "Category", "Runtime Vertex Color Paint and Detection Plugin" },
		{ "ModuleRelativePath", "Public/VertexPaintDetectionEdSubsystem.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UVertexPaintDetectionEdSubsystem_AddSkeletalMeshAmountOfLODsToPaintByDefault_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UVertexPaintDetectionEdSubsystem, nullptr, "AddSkeletalMeshAmountOfLODsToPaintByDefault", nullptr, nullptr, sizeof(Z_Construct_UFunction_UVertexPaintDetectionEdSubsystem_AddSkeletalMeshAmountOfLODsToPaintByDefault_Statics::VertexPaintDetectionEdSubsystem_eventAddSkeletalMeshAmountOfLODsToPaintByDefault_Parms), Z_Construct_UFunction_UVertexPaintDetectionEdSubsystem_AddSkeletalMeshAmountOfLODsToPaintByDefault_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UVertexPaintDetectionEdSubsystem_AddSkeletalMeshAmountOfLODsToPaintByDefault_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04420401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UVertexPaintDetectionEdSubsystem_AddSkeletalMeshAmountOfLODsToPaintByDefault_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UVertexPaintDetectionEdSubsystem_AddSkeletalMeshAmountOfLODsToPaintByDefault_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UVertexPaintDetectionEdSubsystem_AddSkeletalMeshAmountOfLODsToPaintByDefault()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UVertexPaintDetectionEdSubsystem_AddSkeletalMeshAmountOfLODsToPaintByDefault_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UVertexPaintDetectionEdSubsystem_AddStaticMeshAndAmountOfLODsToPaintByDefault_Statics
	{
		struct VertexPaintDetectionEdSubsystem_eventAddStaticMeshAndAmountOfLODsToPaintByDefault_Parms
		{
			UStaticMesh* staticMesh;
			int32 maxAmountOfLODsToPaint;
			bool success;
		};
		static const UECodeGen_Private::FObjectPropertyParams NewProp_staticMesh;
		static const UECodeGen_Private::FUnsizedIntPropertyParams NewProp_maxAmountOfLODsToPaint;
		static void NewProp_success_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_success;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UVertexPaintDetectionEdSubsystem_AddStaticMeshAndAmountOfLODsToPaintByDefault_Statics::NewProp_staticMesh = { "staticMesh", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(VertexPaintDetectionEdSubsystem_eventAddStaticMeshAndAmountOfLODsToPaintByDefault_Parms, staticMesh), Z_Construct_UClass_UStaticMesh_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FUnsizedIntPropertyParams Z_Construct_UFunction_UVertexPaintDetectionEdSubsystem_AddStaticMeshAndAmountOfLODsToPaintByDefault_Statics::NewProp_maxAmountOfLODsToPaint = { "maxAmountOfLODsToPaint", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(VertexPaintDetectionEdSubsystem_eventAddStaticMeshAndAmountOfLODsToPaintByDefault_Parms, maxAmountOfLODsToPaint), METADATA_PARAMS(nullptr, 0) };
	void Z_Construct_UFunction_UVertexPaintDetectionEdSubsystem_AddStaticMeshAndAmountOfLODsToPaintByDefault_Statics::NewProp_success_SetBit(void* Obj)
	{
		((VertexPaintDetectionEdSubsystem_eventAddStaticMeshAndAmountOfLODsToPaintByDefault_Parms*)Obj)->success = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UVertexPaintDetectionEdSubsystem_AddStaticMeshAndAmountOfLODsToPaintByDefault_Statics::NewProp_success = { "success", nullptr, (EPropertyFlags)0x0010000000000180, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(bool), sizeof(VertexPaintDetectionEdSubsystem_eventAddStaticMeshAndAmountOfLODsToPaintByDefault_Parms), &Z_Construct_UFunction_UVertexPaintDetectionEdSubsystem_AddStaticMeshAndAmountOfLODsToPaintByDefault_Statics::NewProp_success_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UVertexPaintDetectionEdSubsystem_AddStaticMeshAndAmountOfLODsToPaintByDefault_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UVertexPaintDetectionEdSubsystem_AddStaticMeshAndAmountOfLODsToPaintByDefault_Statics::NewProp_staticMesh,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UVertexPaintDetectionEdSubsystem_AddStaticMeshAndAmountOfLODsToPaintByDefault_Statics::NewProp_maxAmountOfLODsToPaint,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UVertexPaintDetectionEdSubsystem_AddStaticMeshAndAmountOfLODsToPaintByDefault_Statics::NewProp_success,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UVertexPaintDetectionEdSubsystem_AddStaticMeshAndAmountOfLODsToPaintByDefault_Statics::Function_MetaDataParams[] = {
		{ "Category", "Runtime Vertex Color Paint and Detection Plugin" },
		{ "ModuleRelativePath", "Public/VertexPaintDetectionEdSubsystem.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UVertexPaintDetectionEdSubsystem_AddStaticMeshAndAmountOfLODsToPaintByDefault_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UVertexPaintDetectionEdSubsystem, nullptr, "AddStaticMeshAndAmountOfLODsToPaintByDefault", nullptr, nullptr, sizeof(Z_Construct_UFunction_UVertexPaintDetectionEdSubsystem_AddStaticMeshAndAmountOfLODsToPaintByDefault_Statics::VertexPaintDetectionEdSubsystem_eventAddStaticMeshAndAmountOfLODsToPaintByDefault_Parms), Z_Construct_UFunction_UVertexPaintDetectionEdSubsystem_AddStaticMeshAndAmountOfLODsToPaintByDefault_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UVertexPaintDetectionEdSubsystem_AddStaticMeshAndAmountOfLODsToPaintByDefault_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04420401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UVertexPaintDetectionEdSubsystem_AddStaticMeshAndAmountOfLODsToPaintByDefault_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UVertexPaintDetectionEdSubsystem_AddStaticMeshAndAmountOfLODsToPaintByDefault_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UVertexPaintDetectionEdSubsystem_AddStaticMeshAndAmountOfLODsToPaintByDefault()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UVertexPaintDetectionEdSubsystem_AddStaticMeshAndAmountOfLODsToPaintByDefault_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UVertexPaintDetectionEdSubsystem_ApplyVertexColorToMeshAtLOD0_Statics
	{
		struct VertexPaintDetectionEdSubsystem_eventApplyVertexColorToMeshAtLOD0_Parms
		{
			UMeshComponent* mesh;
			TArray<FColor> vertexColorsAtLOD0;
			bool ReturnValue;
		};
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_mesh_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPropertyParams NewProp_mesh;
		static const UECodeGen_Private::FStructPropertyParams NewProp_vertexColorsAtLOD0_Inner;
		static const UECodeGen_Private::FArrayPropertyParams NewProp_vertexColorsAtLOD0;
		static void NewProp_ReturnValue_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UVertexPaintDetectionEdSubsystem_ApplyVertexColorToMeshAtLOD0_Statics::NewProp_mesh_MetaData[] = {
		{ "EditInline", "true" },
	};
#endif
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UVertexPaintDetectionEdSubsystem_ApplyVertexColorToMeshAtLOD0_Statics::NewProp_mesh = { "mesh", nullptr, (EPropertyFlags)0x0010000000080080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(VertexPaintDetectionEdSubsystem_eventApplyVertexColorToMeshAtLOD0_Parms, mesh), Z_Construct_UClass_UMeshComponent_NoRegister, METADATA_PARAMS(Z_Construct_UFunction_UVertexPaintDetectionEdSubsystem_ApplyVertexColorToMeshAtLOD0_Statics::NewProp_mesh_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UVertexPaintDetectionEdSubsystem_ApplyVertexColorToMeshAtLOD0_Statics::NewProp_mesh_MetaData)) };
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UVertexPaintDetectionEdSubsystem_ApplyVertexColorToMeshAtLOD0_Statics::NewProp_vertexColorsAtLOD0_Inner = { "vertexColorsAtLOD0", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, 0, Z_Construct_UScriptStruct_FColor, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FArrayPropertyParams Z_Construct_UFunction_UVertexPaintDetectionEdSubsystem_ApplyVertexColorToMeshAtLOD0_Statics::NewProp_vertexColorsAtLOD0 = { "vertexColorsAtLOD0", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(VertexPaintDetectionEdSubsystem_eventApplyVertexColorToMeshAtLOD0_Parms, vertexColorsAtLOD0), EArrayPropertyFlags::None, METADATA_PARAMS(nullptr, 0) };
	void Z_Construct_UFunction_UVertexPaintDetectionEdSubsystem_ApplyVertexColorToMeshAtLOD0_Statics::NewProp_ReturnValue_SetBit(void* Obj)
	{
		((VertexPaintDetectionEdSubsystem_eventApplyVertexColorToMeshAtLOD0_Parms*)Obj)->ReturnValue = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UVertexPaintDetectionEdSubsystem_ApplyVertexColorToMeshAtLOD0_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(bool), sizeof(VertexPaintDetectionEdSubsystem_eventApplyVertexColorToMeshAtLOD0_Parms), &Z_Construct_UFunction_UVertexPaintDetectionEdSubsystem_ApplyVertexColorToMeshAtLOD0_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UVertexPaintDetectionEdSubsystem_ApplyVertexColorToMeshAtLOD0_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UVertexPaintDetectionEdSubsystem_ApplyVertexColorToMeshAtLOD0_Statics::NewProp_mesh,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UVertexPaintDetectionEdSubsystem_ApplyVertexColorToMeshAtLOD0_Statics::NewProp_vertexColorsAtLOD0_Inner,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UVertexPaintDetectionEdSubsystem_ApplyVertexColorToMeshAtLOD0_Statics::NewProp_vertexColorsAtLOD0,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UVertexPaintDetectionEdSubsystem_ApplyVertexColorToMeshAtLOD0_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UVertexPaintDetectionEdSubsystem_ApplyVertexColorToMeshAtLOD0_Statics::Function_MetaDataParams[] = {
		{ "Category", "Runtime Vertex Color Paint and Detection Plugin" },
		{ "ModuleRelativePath", "Public/VertexPaintDetectionEdSubsystem.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UVertexPaintDetectionEdSubsystem_ApplyVertexColorToMeshAtLOD0_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UVertexPaintDetectionEdSubsystem, nullptr, "ApplyVertexColorToMeshAtLOD0", nullptr, nullptr, sizeof(Z_Construct_UFunction_UVertexPaintDetectionEdSubsystem_ApplyVertexColorToMeshAtLOD0_Statics::VertexPaintDetectionEdSubsystem_eventApplyVertexColorToMeshAtLOD0_Parms), Z_Construct_UFunction_UVertexPaintDetectionEdSubsystem_ApplyVertexColorToMeshAtLOD0_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UVertexPaintDetectionEdSubsystem_ApplyVertexColorToMeshAtLOD0_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UVertexPaintDetectionEdSubsystem_ApplyVertexColorToMeshAtLOD0_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UVertexPaintDetectionEdSubsystem_ApplyVertexColorToMeshAtLOD0_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UVertexPaintDetectionEdSubsystem_ApplyVertexColorToMeshAtLOD0()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UVertexPaintDetectionEdSubsystem_ApplyVertexColorToMeshAtLOD0_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UVertexPaintDetectionEdSubsystem_ClearAllAvailableColorSnippetCacheTagContainer_Statics
	{
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UVertexPaintDetectionEdSubsystem_ClearAllAvailableColorSnippetCacheTagContainer_Statics::Function_MetaDataParams[] = {
		{ "Category", "Runtime Vertex Color Paint and Detection Plugin" },
		{ "ModuleRelativePath", "Public/VertexPaintDetectionEdSubsystem.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UVertexPaintDetectionEdSubsystem_ClearAllAvailableColorSnippetCacheTagContainer_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UVertexPaintDetectionEdSubsystem, nullptr, "ClearAllAvailableColorSnippetCacheTagContainer", nullptr, nullptr, 0, nullptr, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UVertexPaintDetectionEdSubsystem_ClearAllAvailableColorSnippetCacheTagContainer_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UVertexPaintDetectionEdSubsystem_ClearAllAvailableColorSnippetCacheTagContainer_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UVertexPaintDetectionEdSubsystem_ClearAllAvailableColorSnippetCacheTagContainer()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UVertexPaintDetectionEdSubsystem_ClearAllAvailableColorSnippetCacheTagContainer_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UVertexPaintDetectionEdSubsystem_DoesColorSnippetTagExist_Statics
	{
		struct VertexPaintDetectionEdSubsystem_eventDoesColorSnippetTagExist_Parms
		{
			FString tag;
			bool ReturnValue;
		};
		static const UECodeGen_Private::FStrPropertyParams NewProp_tag;
		static void NewProp_ReturnValue_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UVertexPaintDetectionEdSubsystem_DoesColorSnippetTagExist_Statics::NewProp_tag = { "tag", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(VertexPaintDetectionEdSubsystem_eventDoesColorSnippetTagExist_Parms, tag), METADATA_PARAMS(nullptr, 0) };
	void Z_Construct_UFunction_UVertexPaintDetectionEdSubsystem_DoesColorSnippetTagExist_Statics::NewProp_ReturnValue_SetBit(void* Obj)
	{
		((VertexPaintDetectionEdSubsystem_eventDoesColorSnippetTagExist_Parms*)Obj)->ReturnValue = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UVertexPaintDetectionEdSubsystem_DoesColorSnippetTagExist_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(bool), sizeof(VertexPaintDetectionEdSubsystem_eventDoesColorSnippetTagExist_Parms), &Z_Construct_UFunction_UVertexPaintDetectionEdSubsystem_DoesColorSnippetTagExist_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UVertexPaintDetectionEdSubsystem_DoesColorSnippetTagExist_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UVertexPaintDetectionEdSubsystem_DoesColorSnippetTagExist_Statics::NewProp_tag,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UVertexPaintDetectionEdSubsystem_DoesColorSnippetTagExist_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UVertexPaintDetectionEdSubsystem_DoesColorSnippetTagExist_Statics::Function_MetaDataParams[] = {
		{ "Category", "Runtime Vertex Color Paint and Detection Plugin" },
		{ "ModuleRelativePath", "Public/VertexPaintDetectionEdSubsystem.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UVertexPaintDetectionEdSubsystem_DoesColorSnippetTagExist_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UVertexPaintDetectionEdSubsystem, nullptr, "DoesColorSnippetTagExist", nullptr, nullptr, sizeof(Z_Construct_UFunction_UVertexPaintDetectionEdSubsystem_DoesColorSnippetTagExist_Statics::VertexPaintDetectionEdSubsystem_eventDoesColorSnippetTagExist_Parms), Z_Construct_UFunction_UVertexPaintDetectionEdSubsystem_DoesColorSnippetTagExist_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UVertexPaintDetectionEdSubsystem_DoesColorSnippetTagExist_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x14020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UVertexPaintDetectionEdSubsystem_DoesColorSnippetTagExist_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UVertexPaintDetectionEdSubsystem_DoesColorSnippetTagExist_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UVertexPaintDetectionEdSubsystem_DoesColorSnippetTagExist()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UVertexPaintDetectionEdSubsystem_DoesColorSnippetTagExist_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UVertexPaintDetectionEdSubsystem_GetAllColorSnippetTagsDirectlyFromIni_Statics
	{
		struct VertexPaintDetectionEdSubsystem_eventGetAllColorSnippetTagsDirectlyFromIni_Parms
		{
			TArray<FString> ReturnValue;
		};
		static const UECodeGen_Private::FStrPropertyParams NewProp_ReturnValue_Inner;
		static const UECodeGen_Private::FArrayPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UVertexPaintDetectionEdSubsystem_GetAllColorSnippetTagsDirectlyFromIni_Statics::NewProp_ReturnValue_Inner = { "ReturnValue", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, 0, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FArrayPropertyParams Z_Construct_UFunction_UVertexPaintDetectionEdSubsystem_GetAllColorSnippetTagsDirectlyFromIni_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(VertexPaintDetectionEdSubsystem_eventGetAllColorSnippetTagsDirectlyFromIni_Parms, ReturnValue), EArrayPropertyFlags::None, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UVertexPaintDetectionEdSubsystem_GetAllColorSnippetTagsDirectlyFromIni_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UVertexPaintDetectionEdSubsystem_GetAllColorSnippetTagsDirectlyFromIni_Statics::NewProp_ReturnValue_Inner,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UVertexPaintDetectionEdSubsystem_GetAllColorSnippetTagsDirectlyFromIni_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UVertexPaintDetectionEdSubsystem_GetAllColorSnippetTagsDirectlyFromIni_Statics::Function_MetaDataParams[] = {
		{ "Category", "Runtime Vertex Color Paint and Detection Plugin" },
		{ "ModuleRelativePath", "Public/VertexPaintDetectionEdSubsystem.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UVertexPaintDetectionEdSubsystem_GetAllColorSnippetTagsDirectlyFromIni_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UVertexPaintDetectionEdSubsystem, nullptr, "GetAllColorSnippetTagsDirectlyFromIni", nullptr, nullptr, sizeof(Z_Construct_UFunction_UVertexPaintDetectionEdSubsystem_GetAllColorSnippetTagsDirectlyFromIni_Statics::VertexPaintDetectionEdSubsystem_eventGetAllColorSnippetTagsDirectlyFromIni_Parms), Z_Construct_UFunction_UVertexPaintDetectionEdSubsystem_GetAllColorSnippetTagsDirectlyFromIni_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UVertexPaintDetectionEdSubsystem_GetAllColorSnippetTagsDirectlyFromIni_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UVertexPaintDetectionEdSubsystem_GetAllColorSnippetTagsDirectlyFromIni_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UVertexPaintDetectionEdSubsystem_GetAllColorSnippetTagsDirectlyFromIni_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UVertexPaintDetectionEdSubsystem_GetAllColorSnippetTagsDirectlyFromIni()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UVertexPaintDetectionEdSubsystem_GetAllColorSnippetTagsDirectlyFromIni_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UVertexPaintDetectionEdSubsystem_GetPersistentLevelsWorld_Wrapper_Statics
	{
		struct VertexPaintDetectionEdSubsystem_eventGetPersistentLevelsWorld_Wrapper_Parms
		{
			const UObject* worldContext;
			UWorld* ReturnValue;
		};
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_worldContext_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPropertyParams NewProp_worldContext;
		static const UECodeGen_Private::FObjectPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UVertexPaintDetectionEdSubsystem_GetPersistentLevelsWorld_Wrapper_Statics::NewProp_worldContext_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UVertexPaintDetectionEdSubsystem_GetPersistentLevelsWorld_Wrapper_Statics::NewProp_worldContext = { "worldContext", nullptr, (EPropertyFlags)0x0010000000000082, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(VertexPaintDetectionEdSubsystem_eventGetPersistentLevelsWorld_Wrapper_Parms, worldContext), Z_Construct_UClass_UObject_NoRegister, METADATA_PARAMS(Z_Construct_UFunction_UVertexPaintDetectionEdSubsystem_GetPersistentLevelsWorld_Wrapper_Statics::NewProp_worldContext_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UVertexPaintDetectionEdSubsystem_GetPersistentLevelsWorld_Wrapper_Statics::NewProp_worldContext_MetaData)) };
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UVertexPaintDetectionEdSubsystem_GetPersistentLevelsWorld_Wrapper_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(VertexPaintDetectionEdSubsystem_eventGetPersistentLevelsWorld_Wrapper_Parms, ReturnValue), Z_Construct_UClass_UWorld_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UVertexPaintDetectionEdSubsystem_GetPersistentLevelsWorld_Wrapper_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UVertexPaintDetectionEdSubsystem_GetPersistentLevelsWorld_Wrapper_Statics::NewProp_worldContext,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UVertexPaintDetectionEdSubsystem_GetPersistentLevelsWorld_Wrapper_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UVertexPaintDetectionEdSubsystem_GetPersistentLevelsWorld_Wrapper_Statics::Function_MetaDataParams[] = {
		{ "Category", "Runtime Vertex Color Paint and Detection Plugin" },
		{ "ModuleRelativePath", "Public/VertexPaintDetectionEdSubsystem.h" },
		{ "WorldContext", "WorldContextObject" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UVertexPaintDetectionEdSubsystem_GetPersistentLevelsWorld_Wrapper_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UVertexPaintDetectionEdSubsystem, nullptr, "GetPersistentLevelsWorld_Wrapper", nullptr, nullptr, sizeof(Z_Construct_UFunction_UVertexPaintDetectionEdSubsystem_GetPersistentLevelsWorld_Wrapper_Statics::VertexPaintDetectionEdSubsystem_eventGetPersistentLevelsWorld_Wrapper_Parms), Z_Construct_UFunction_UVertexPaintDetectionEdSubsystem_GetPersistentLevelsWorld_Wrapper_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UVertexPaintDetectionEdSubsystem_GetPersistentLevelsWorld_Wrapper_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x14020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UVertexPaintDetectionEdSubsystem_GetPersistentLevelsWorld_Wrapper_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UVertexPaintDetectionEdSubsystem_GetPersistentLevelsWorld_Wrapper_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UVertexPaintDetectionEdSubsystem_GetPersistentLevelsWorld_Wrapper()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UVertexPaintDetectionEdSubsystem_GetPersistentLevelsWorld_Wrapper_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UVertexPaintDetectionEdSubsystem_GetSkeletalMeshComponentVertexCount_Wrapper_Statics
	{
		struct VertexPaintDetectionEdSubsystem_eventGetSkeletalMeshComponentVertexCount_Wrapper_Parms
		{
			USkeletalMeshComponent* skeletalMeshComponent;
			int32 lod;
			int32 ReturnValue;
		};
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_skeletalMeshComponent_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPropertyParams NewProp_skeletalMeshComponent;
		static const UECodeGen_Private::FUnsizedIntPropertyParams NewProp_lod;
		static const UECodeGen_Private::FUnsizedIntPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UVertexPaintDetectionEdSubsystem_GetSkeletalMeshComponentVertexCount_Wrapper_Statics::NewProp_skeletalMeshComponent_MetaData[] = {
		{ "EditInline", "true" },
	};
#endif
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UVertexPaintDetectionEdSubsystem_GetSkeletalMeshComponentVertexCount_Wrapper_Statics::NewProp_skeletalMeshComponent = { "skeletalMeshComponent", nullptr, (EPropertyFlags)0x0010000000080080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(VertexPaintDetectionEdSubsystem_eventGetSkeletalMeshComponentVertexCount_Wrapper_Parms, skeletalMeshComponent), Z_Construct_UClass_USkeletalMeshComponent_NoRegister, METADATA_PARAMS(Z_Construct_UFunction_UVertexPaintDetectionEdSubsystem_GetSkeletalMeshComponentVertexCount_Wrapper_Statics::NewProp_skeletalMeshComponent_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UVertexPaintDetectionEdSubsystem_GetSkeletalMeshComponentVertexCount_Wrapper_Statics::NewProp_skeletalMeshComponent_MetaData)) };
	const UECodeGen_Private::FUnsizedIntPropertyParams Z_Construct_UFunction_UVertexPaintDetectionEdSubsystem_GetSkeletalMeshComponentVertexCount_Wrapper_Statics::NewProp_lod = { "lod", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(VertexPaintDetectionEdSubsystem_eventGetSkeletalMeshComponentVertexCount_Wrapper_Parms, lod), METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FUnsizedIntPropertyParams Z_Construct_UFunction_UVertexPaintDetectionEdSubsystem_GetSkeletalMeshComponentVertexCount_Wrapper_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(VertexPaintDetectionEdSubsystem_eventGetSkeletalMeshComponentVertexCount_Wrapper_Parms, ReturnValue), METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UVertexPaintDetectionEdSubsystem_GetSkeletalMeshComponentVertexCount_Wrapper_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UVertexPaintDetectionEdSubsystem_GetSkeletalMeshComponentVertexCount_Wrapper_Statics::NewProp_skeletalMeshComponent,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UVertexPaintDetectionEdSubsystem_GetSkeletalMeshComponentVertexCount_Wrapper_Statics::NewProp_lod,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UVertexPaintDetectionEdSubsystem_GetSkeletalMeshComponentVertexCount_Wrapper_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UVertexPaintDetectionEdSubsystem_GetSkeletalMeshComponentVertexCount_Wrapper_Statics::Function_MetaDataParams[] = {
		{ "Category", "Runtime Vertex Color Paint and Detection Plugin" },
		{ "ModuleRelativePath", "Public/VertexPaintDetectionEdSubsystem.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UVertexPaintDetectionEdSubsystem_GetSkeletalMeshComponentVertexCount_Wrapper_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UVertexPaintDetectionEdSubsystem, nullptr, "GetSkeletalMeshComponentVertexCount_Wrapper", nullptr, nullptr, sizeof(Z_Construct_UFunction_UVertexPaintDetectionEdSubsystem_GetSkeletalMeshComponentVertexCount_Wrapper_Statics::VertexPaintDetectionEdSubsystem_eventGetSkeletalMeshComponentVertexCount_Wrapper_Parms), Z_Construct_UFunction_UVertexPaintDetectionEdSubsystem_GetSkeletalMeshComponentVertexCount_Wrapper_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UVertexPaintDetectionEdSubsystem_GetSkeletalMeshComponentVertexCount_Wrapper_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x14020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UVertexPaintDetectionEdSubsystem_GetSkeletalMeshComponentVertexCount_Wrapper_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UVertexPaintDetectionEdSubsystem_GetSkeletalMeshComponentVertexCount_Wrapper_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UVertexPaintDetectionEdSubsystem_GetSkeletalMeshComponentVertexCount_Wrapper()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UVertexPaintDetectionEdSubsystem_GetSkeletalMeshComponentVertexCount_Wrapper_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UVertexPaintDetectionEdSubsystem_GetSkeletalMeshLODCount_Wrapper_Statics
	{
		struct VertexPaintDetectionEdSubsystem_eventGetSkeletalMeshLODCount_Wrapper_Parms
		{
			USkeletalMesh* skeletalMesh;
			int32 ReturnValue;
		};
		static const UECodeGen_Private::FObjectPropertyParams NewProp_skeletalMesh;
		static const UECodeGen_Private::FUnsizedIntPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UVertexPaintDetectionEdSubsystem_GetSkeletalMeshLODCount_Wrapper_Statics::NewProp_skeletalMesh = { "skeletalMesh", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(VertexPaintDetectionEdSubsystem_eventGetSkeletalMeshLODCount_Wrapper_Parms, skeletalMesh), Z_Construct_UClass_USkeletalMesh_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FUnsizedIntPropertyParams Z_Construct_UFunction_UVertexPaintDetectionEdSubsystem_GetSkeletalMeshLODCount_Wrapper_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(VertexPaintDetectionEdSubsystem_eventGetSkeletalMeshLODCount_Wrapper_Parms, ReturnValue), METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UVertexPaintDetectionEdSubsystem_GetSkeletalMeshLODCount_Wrapper_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UVertexPaintDetectionEdSubsystem_GetSkeletalMeshLODCount_Wrapper_Statics::NewProp_skeletalMesh,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UVertexPaintDetectionEdSubsystem_GetSkeletalMeshLODCount_Wrapper_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UVertexPaintDetectionEdSubsystem_GetSkeletalMeshLODCount_Wrapper_Statics::Function_MetaDataParams[] = {
		{ "Category", "Runtime Vertex Color Paint and Detection Plugin" },
		{ "ModuleRelativePath", "Public/VertexPaintDetectionEdSubsystem.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UVertexPaintDetectionEdSubsystem_GetSkeletalMeshLODCount_Wrapper_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UVertexPaintDetectionEdSubsystem, nullptr, "GetSkeletalMeshLODCount_Wrapper", nullptr, nullptr, sizeof(Z_Construct_UFunction_UVertexPaintDetectionEdSubsystem_GetSkeletalMeshLODCount_Wrapper_Statics::VertexPaintDetectionEdSubsystem_eventGetSkeletalMeshLODCount_Wrapper_Parms), Z_Construct_UFunction_UVertexPaintDetectionEdSubsystem_GetSkeletalMeshLODCount_Wrapper_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UVertexPaintDetectionEdSubsystem_GetSkeletalMeshLODCount_Wrapper_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x14020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UVertexPaintDetectionEdSubsystem_GetSkeletalMeshLODCount_Wrapper_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UVertexPaintDetectionEdSubsystem_GetSkeletalMeshLODCount_Wrapper_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UVertexPaintDetectionEdSubsystem_GetSkeletalMeshLODCount_Wrapper()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UVertexPaintDetectionEdSubsystem_GetSkeletalMeshLODCount_Wrapper_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UVertexPaintDetectionEdSubsystem_GetSkeletalMeshVerticesAmount_Wrapper_Statics
	{
		struct VertexPaintDetectionEdSubsystem_eventGetSkeletalMeshVerticesAmount_Wrapper_Parms
		{
			USkeletalMesh* mesh;
			int32 lod;
			int32 ReturnValue;
		};
		static const UECodeGen_Private::FObjectPropertyParams NewProp_mesh;
		static const UECodeGen_Private::FUnsizedIntPropertyParams NewProp_lod;
		static const UECodeGen_Private::FUnsizedIntPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UVertexPaintDetectionEdSubsystem_GetSkeletalMeshVerticesAmount_Wrapper_Statics::NewProp_mesh = { "mesh", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(VertexPaintDetectionEdSubsystem_eventGetSkeletalMeshVerticesAmount_Wrapper_Parms, mesh), Z_Construct_UClass_USkeletalMesh_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FUnsizedIntPropertyParams Z_Construct_UFunction_UVertexPaintDetectionEdSubsystem_GetSkeletalMeshVerticesAmount_Wrapper_Statics::NewProp_lod = { "lod", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(VertexPaintDetectionEdSubsystem_eventGetSkeletalMeshVerticesAmount_Wrapper_Parms, lod), METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FUnsizedIntPropertyParams Z_Construct_UFunction_UVertexPaintDetectionEdSubsystem_GetSkeletalMeshVerticesAmount_Wrapper_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(VertexPaintDetectionEdSubsystem_eventGetSkeletalMeshVerticesAmount_Wrapper_Parms, ReturnValue), METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UVertexPaintDetectionEdSubsystem_GetSkeletalMeshVerticesAmount_Wrapper_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UVertexPaintDetectionEdSubsystem_GetSkeletalMeshVerticesAmount_Wrapper_Statics::NewProp_mesh,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UVertexPaintDetectionEdSubsystem_GetSkeletalMeshVerticesAmount_Wrapper_Statics::NewProp_lod,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UVertexPaintDetectionEdSubsystem_GetSkeletalMeshVerticesAmount_Wrapper_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UVertexPaintDetectionEdSubsystem_GetSkeletalMeshVerticesAmount_Wrapper_Statics::Function_MetaDataParams[] = {
		{ "Category", "Runtime Vertex Color Paint and Detection Plugin" },
		{ "ModuleRelativePath", "Public/VertexPaintDetectionEdSubsystem.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UVertexPaintDetectionEdSubsystem_GetSkeletalMeshVerticesAmount_Wrapper_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UVertexPaintDetectionEdSubsystem, nullptr, "GetSkeletalMeshVerticesAmount_Wrapper", nullptr, nullptr, sizeof(Z_Construct_UFunction_UVertexPaintDetectionEdSubsystem_GetSkeletalMeshVerticesAmount_Wrapper_Statics::VertexPaintDetectionEdSubsystem_eventGetSkeletalMeshVerticesAmount_Wrapper_Parms), Z_Construct_UFunction_UVertexPaintDetectionEdSubsystem_GetSkeletalMeshVerticesAmount_Wrapper_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UVertexPaintDetectionEdSubsystem_GetSkeletalMeshVerticesAmount_Wrapper_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x14020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UVertexPaintDetectionEdSubsystem_GetSkeletalMeshVerticesAmount_Wrapper_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UVertexPaintDetectionEdSubsystem_GetSkeletalMeshVerticesAmount_Wrapper_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UVertexPaintDetectionEdSubsystem_GetSkeletalMeshVerticesAmount_Wrapper()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UVertexPaintDetectionEdSubsystem_GetSkeletalMeshVerticesAmount_Wrapper_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UVertexPaintDetectionEdSubsystem_GetStaticMeshComponentVertexCount_Wrapper_Statics
	{
		struct VertexPaintDetectionEdSubsystem_eventGetStaticMeshComponentVertexCount_Wrapper_Parms
		{
			UStaticMeshComponent* staticMeshComponent;
			int32 lod;
			int32 ReturnValue;
		};
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_staticMeshComponent_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPropertyParams NewProp_staticMeshComponent;
		static const UECodeGen_Private::FUnsizedIntPropertyParams NewProp_lod;
		static const UECodeGen_Private::FUnsizedIntPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UVertexPaintDetectionEdSubsystem_GetStaticMeshComponentVertexCount_Wrapper_Statics::NewProp_staticMeshComponent_MetaData[] = {
		{ "EditInline", "true" },
	};
#endif
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UVertexPaintDetectionEdSubsystem_GetStaticMeshComponentVertexCount_Wrapper_Statics::NewProp_staticMeshComponent = { "staticMeshComponent", nullptr, (EPropertyFlags)0x0010000000080080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(VertexPaintDetectionEdSubsystem_eventGetStaticMeshComponentVertexCount_Wrapper_Parms, staticMeshComponent), Z_Construct_UClass_UStaticMeshComponent_NoRegister, METADATA_PARAMS(Z_Construct_UFunction_UVertexPaintDetectionEdSubsystem_GetStaticMeshComponentVertexCount_Wrapper_Statics::NewProp_staticMeshComponent_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UVertexPaintDetectionEdSubsystem_GetStaticMeshComponentVertexCount_Wrapper_Statics::NewProp_staticMeshComponent_MetaData)) };
	const UECodeGen_Private::FUnsizedIntPropertyParams Z_Construct_UFunction_UVertexPaintDetectionEdSubsystem_GetStaticMeshComponentVertexCount_Wrapper_Statics::NewProp_lod = { "lod", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(VertexPaintDetectionEdSubsystem_eventGetStaticMeshComponentVertexCount_Wrapper_Parms, lod), METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FUnsizedIntPropertyParams Z_Construct_UFunction_UVertexPaintDetectionEdSubsystem_GetStaticMeshComponentVertexCount_Wrapper_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(VertexPaintDetectionEdSubsystem_eventGetStaticMeshComponentVertexCount_Wrapper_Parms, ReturnValue), METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UVertexPaintDetectionEdSubsystem_GetStaticMeshComponentVertexCount_Wrapper_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UVertexPaintDetectionEdSubsystem_GetStaticMeshComponentVertexCount_Wrapper_Statics::NewProp_staticMeshComponent,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UVertexPaintDetectionEdSubsystem_GetStaticMeshComponentVertexCount_Wrapper_Statics::NewProp_lod,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UVertexPaintDetectionEdSubsystem_GetStaticMeshComponentVertexCount_Wrapper_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UVertexPaintDetectionEdSubsystem_GetStaticMeshComponentVertexCount_Wrapper_Statics::Function_MetaDataParams[] = {
		{ "Category", "Runtime Vertex Color Paint and Detection Plugin" },
		{ "ModuleRelativePath", "Public/VertexPaintDetectionEdSubsystem.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UVertexPaintDetectionEdSubsystem_GetStaticMeshComponentVertexCount_Wrapper_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UVertexPaintDetectionEdSubsystem, nullptr, "GetStaticMeshComponentVertexCount_Wrapper", nullptr, nullptr, sizeof(Z_Construct_UFunction_UVertexPaintDetectionEdSubsystem_GetStaticMeshComponentVertexCount_Wrapper_Statics::VertexPaintDetectionEdSubsystem_eventGetStaticMeshComponentVertexCount_Wrapper_Parms), Z_Construct_UFunction_UVertexPaintDetectionEdSubsystem_GetStaticMeshComponentVertexCount_Wrapper_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UVertexPaintDetectionEdSubsystem_GetStaticMeshComponentVertexCount_Wrapper_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x14020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UVertexPaintDetectionEdSubsystem_GetStaticMeshComponentVertexCount_Wrapper_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UVertexPaintDetectionEdSubsystem_GetStaticMeshComponentVertexCount_Wrapper_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UVertexPaintDetectionEdSubsystem_GetStaticMeshComponentVertexCount_Wrapper()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UVertexPaintDetectionEdSubsystem_GetStaticMeshComponentVertexCount_Wrapper_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UVertexPaintDetectionEdSubsystem_GetStaticMeshLODCount_Wrapper_Statics
	{
		struct VertexPaintDetectionEdSubsystem_eventGetStaticMeshLODCount_Wrapper_Parms
		{
			UStaticMesh* mesh;
			int32 ReturnValue;
		};
		static const UECodeGen_Private::FObjectPropertyParams NewProp_mesh;
		static const UECodeGen_Private::FUnsizedIntPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UVertexPaintDetectionEdSubsystem_GetStaticMeshLODCount_Wrapper_Statics::NewProp_mesh = { "mesh", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(VertexPaintDetectionEdSubsystem_eventGetStaticMeshLODCount_Wrapper_Parms, mesh), Z_Construct_UClass_UStaticMesh_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FUnsizedIntPropertyParams Z_Construct_UFunction_UVertexPaintDetectionEdSubsystem_GetStaticMeshLODCount_Wrapper_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(VertexPaintDetectionEdSubsystem_eventGetStaticMeshLODCount_Wrapper_Parms, ReturnValue), METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UVertexPaintDetectionEdSubsystem_GetStaticMeshLODCount_Wrapper_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UVertexPaintDetectionEdSubsystem_GetStaticMeshLODCount_Wrapper_Statics::NewProp_mesh,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UVertexPaintDetectionEdSubsystem_GetStaticMeshLODCount_Wrapper_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UVertexPaintDetectionEdSubsystem_GetStaticMeshLODCount_Wrapper_Statics::Function_MetaDataParams[] = {
		{ "Category", "Runtime Vertex Color Paint and Detection Plugin" },
		{ "ModuleRelativePath", "Public/VertexPaintDetectionEdSubsystem.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UVertexPaintDetectionEdSubsystem_GetStaticMeshLODCount_Wrapper_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UVertexPaintDetectionEdSubsystem, nullptr, "GetStaticMeshLODCount_Wrapper", nullptr, nullptr, sizeof(Z_Construct_UFunction_UVertexPaintDetectionEdSubsystem_GetStaticMeshLODCount_Wrapper_Statics::VertexPaintDetectionEdSubsystem_eventGetStaticMeshLODCount_Wrapper_Parms), Z_Construct_UFunction_UVertexPaintDetectionEdSubsystem_GetStaticMeshLODCount_Wrapper_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UVertexPaintDetectionEdSubsystem_GetStaticMeshLODCount_Wrapper_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x14020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UVertexPaintDetectionEdSubsystem_GetStaticMeshLODCount_Wrapper_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UVertexPaintDetectionEdSubsystem_GetStaticMeshLODCount_Wrapper_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UVertexPaintDetectionEdSubsystem_GetStaticMeshLODCount_Wrapper()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UVertexPaintDetectionEdSubsystem_GetStaticMeshLODCount_Wrapper_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UVertexPaintDetectionEdSubsystem_GetStaticMeshVerticesAmount_Wrapper_Statics
	{
		struct VertexPaintDetectionEdSubsystem_eventGetStaticMeshVerticesAmount_Wrapper_Parms
		{
			UStaticMesh* mesh;
			int32 lod;
			int32 ReturnValue;
		};
		static const UECodeGen_Private::FObjectPropertyParams NewProp_mesh;
		static const UECodeGen_Private::FUnsizedIntPropertyParams NewProp_lod;
		static const UECodeGen_Private::FUnsizedIntPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UVertexPaintDetectionEdSubsystem_GetStaticMeshVerticesAmount_Wrapper_Statics::NewProp_mesh = { "mesh", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(VertexPaintDetectionEdSubsystem_eventGetStaticMeshVerticesAmount_Wrapper_Parms, mesh), Z_Construct_UClass_UStaticMesh_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FUnsizedIntPropertyParams Z_Construct_UFunction_UVertexPaintDetectionEdSubsystem_GetStaticMeshVerticesAmount_Wrapper_Statics::NewProp_lod = { "lod", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(VertexPaintDetectionEdSubsystem_eventGetStaticMeshVerticesAmount_Wrapper_Parms, lod), METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FUnsizedIntPropertyParams Z_Construct_UFunction_UVertexPaintDetectionEdSubsystem_GetStaticMeshVerticesAmount_Wrapper_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(VertexPaintDetectionEdSubsystem_eventGetStaticMeshVerticesAmount_Wrapper_Parms, ReturnValue), METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UVertexPaintDetectionEdSubsystem_GetStaticMeshVerticesAmount_Wrapper_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UVertexPaintDetectionEdSubsystem_GetStaticMeshVerticesAmount_Wrapper_Statics::NewProp_mesh,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UVertexPaintDetectionEdSubsystem_GetStaticMeshVerticesAmount_Wrapper_Statics::NewProp_lod,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UVertexPaintDetectionEdSubsystem_GetStaticMeshVerticesAmount_Wrapper_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UVertexPaintDetectionEdSubsystem_GetStaticMeshVerticesAmount_Wrapper_Statics::Function_MetaDataParams[] = {
		{ "Category", "Runtime Vertex Color Paint and Detection Plugin" },
		{ "ModuleRelativePath", "Public/VertexPaintDetectionEdSubsystem.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UVertexPaintDetectionEdSubsystem_GetStaticMeshVerticesAmount_Wrapper_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UVertexPaintDetectionEdSubsystem, nullptr, "GetStaticMeshVerticesAmount_Wrapper", nullptr, nullptr, sizeof(Z_Construct_UFunction_UVertexPaintDetectionEdSubsystem_GetStaticMeshVerticesAmount_Wrapper_Statics::VertexPaintDetectionEdSubsystem_eventGetStaticMeshVerticesAmount_Wrapper_Parms), Z_Construct_UFunction_UVertexPaintDetectionEdSubsystem_GetStaticMeshVerticesAmount_Wrapper_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UVertexPaintDetectionEdSubsystem_GetStaticMeshVerticesAmount_Wrapper_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x14020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UVertexPaintDetectionEdSubsystem_GetStaticMeshVerticesAmount_Wrapper_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UVertexPaintDetectionEdSubsystem_GetStaticMeshVerticesAmount_Wrapper_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UVertexPaintDetectionEdSubsystem_GetStaticMeshVerticesAmount_Wrapper()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UVertexPaintDetectionEdSubsystem_GetStaticMeshVerticesAmount_Wrapper_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UVertexPaintDetectionEdSubsystem_LoadEssentialDataAssets_Statics
	{
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UVertexPaintDetectionEdSubsystem_LoadEssentialDataAssets_Statics::Function_MetaDataParams[] = {
		{ "Category", "Runtime Vertex Color Paint and Detection Plugin" },
		{ "ModuleRelativePath", "Public/VertexPaintDetectionEdSubsystem.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UVertexPaintDetectionEdSubsystem_LoadEssentialDataAssets_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UVertexPaintDetectionEdSubsystem, nullptr, "LoadEssentialDataAssets", nullptr, nullptr, 0, nullptr, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UVertexPaintDetectionEdSubsystem_LoadEssentialDataAssets_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UVertexPaintDetectionEdSubsystem_LoadEssentialDataAssets_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UVertexPaintDetectionEdSubsystem_LoadEssentialDataAssets()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UVertexPaintDetectionEdSubsystem_LoadEssentialDataAssets_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UVertexPaintDetectionEdSubsystem_MoveMeshColorSnippet_Statics
	{
		struct VertexPaintDetectionEdSubsystem_eventMoveMeshColorSnippet_Parms
		{
			FString colorSnippetID;
			UVertexPaintColorSnippetDataAsset* colorSnippetDataAssetToMoveFrom;
			UVertexPaintColorSnippetDataAsset* colorSnippetDataAssetToMoveTo;
			bool success;
		};
		static const UECodeGen_Private::FStrPropertyParams NewProp_colorSnippetID;
		static const UECodeGen_Private::FObjectPropertyParams NewProp_colorSnippetDataAssetToMoveFrom;
		static const UECodeGen_Private::FObjectPropertyParams NewProp_colorSnippetDataAssetToMoveTo;
		static void NewProp_success_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_success;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UVertexPaintDetectionEdSubsystem_MoveMeshColorSnippet_Statics::NewProp_colorSnippetID = { "colorSnippetID", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(VertexPaintDetectionEdSubsystem_eventMoveMeshColorSnippet_Parms, colorSnippetID), METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UVertexPaintDetectionEdSubsystem_MoveMeshColorSnippet_Statics::NewProp_colorSnippetDataAssetToMoveFrom = { "colorSnippetDataAssetToMoveFrom", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(VertexPaintDetectionEdSubsystem_eventMoveMeshColorSnippet_Parms, colorSnippetDataAssetToMoveFrom), Z_Construct_UClass_UVertexPaintColorSnippetDataAsset_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UVertexPaintDetectionEdSubsystem_MoveMeshColorSnippet_Statics::NewProp_colorSnippetDataAssetToMoveTo = { "colorSnippetDataAssetToMoveTo", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(VertexPaintDetectionEdSubsystem_eventMoveMeshColorSnippet_Parms, colorSnippetDataAssetToMoveTo), Z_Construct_UClass_UVertexPaintColorSnippetDataAsset_NoRegister, METADATA_PARAMS(nullptr, 0) };
	void Z_Construct_UFunction_UVertexPaintDetectionEdSubsystem_MoveMeshColorSnippet_Statics::NewProp_success_SetBit(void* Obj)
	{
		((VertexPaintDetectionEdSubsystem_eventMoveMeshColorSnippet_Parms*)Obj)->success = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UVertexPaintDetectionEdSubsystem_MoveMeshColorSnippet_Statics::NewProp_success = { "success", nullptr, (EPropertyFlags)0x0010000000000180, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(bool), sizeof(VertexPaintDetectionEdSubsystem_eventMoveMeshColorSnippet_Parms), &Z_Construct_UFunction_UVertexPaintDetectionEdSubsystem_MoveMeshColorSnippet_Statics::NewProp_success_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UVertexPaintDetectionEdSubsystem_MoveMeshColorSnippet_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UVertexPaintDetectionEdSubsystem_MoveMeshColorSnippet_Statics::NewProp_colorSnippetID,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UVertexPaintDetectionEdSubsystem_MoveMeshColorSnippet_Statics::NewProp_colorSnippetDataAssetToMoveFrom,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UVertexPaintDetectionEdSubsystem_MoveMeshColorSnippet_Statics::NewProp_colorSnippetDataAssetToMoveTo,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UVertexPaintDetectionEdSubsystem_MoveMeshColorSnippet_Statics::NewProp_success,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UVertexPaintDetectionEdSubsystem_MoveMeshColorSnippet_Statics::Function_MetaDataParams[] = {
		{ "Category", "Runtime Vertex Color Paint and Detection Plugin" },
		{ "ModuleRelativePath", "Public/VertexPaintDetectionEdSubsystem.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UVertexPaintDetectionEdSubsystem_MoveMeshColorSnippet_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UVertexPaintDetectionEdSubsystem, nullptr, "MoveMeshColorSnippet", nullptr, nullptr, sizeof(Z_Construct_UFunction_UVertexPaintDetectionEdSubsystem_MoveMeshColorSnippet_Statics::VertexPaintDetectionEdSubsystem_eventMoveMeshColorSnippet_Parms), Z_Construct_UFunction_UVertexPaintDetectionEdSubsystem_MoveMeshColorSnippet_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UVertexPaintDetectionEdSubsystem_MoveMeshColorSnippet_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04420401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UVertexPaintDetectionEdSubsystem_MoveMeshColorSnippet_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UVertexPaintDetectionEdSubsystem_MoveMeshColorSnippet_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UVertexPaintDetectionEdSubsystem_MoveMeshColorSnippet()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UVertexPaintDetectionEdSubsystem_MoveMeshColorSnippet_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UVertexPaintDetectionEdSubsystem_RefreshAllAvailableCachedColorSnippetTagContainer_Statics
	{
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UVertexPaintDetectionEdSubsystem_RefreshAllAvailableCachedColorSnippetTagContainer_Statics::Function_MetaDataParams[] = {
		{ "Category", "Runtime Vertex Color Paint and Detection Plugin" },
		{ "ModuleRelativePath", "Public/VertexPaintDetectionEdSubsystem.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UVertexPaintDetectionEdSubsystem_RefreshAllAvailableCachedColorSnippetTagContainer_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UVertexPaintDetectionEdSubsystem, nullptr, "RefreshAllAvailableCachedColorSnippetTagContainer", nullptr, nullptr, 0, nullptr, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UVertexPaintDetectionEdSubsystem_RefreshAllAvailableCachedColorSnippetTagContainer_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UVertexPaintDetectionEdSubsystem_RefreshAllAvailableCachedColorSnippetTagContainer_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UVertexPaintDetectionEdSubsystem_RefreshAllAvailableCachedColorSnippetTagContainer()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UVertexPaintDetectionEdSubsystem_RefreshAllAvailableCachedColorSnippetTagContainer_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UVertexPaintDetectionEdSubsystem_RefreshColorSnippetAsRapidJsonString_Statics
	{
		struct VertexPaintDetectionEdSubsystem_eventRefreshColorSnippetAsRapidJsonString_Parms
		{
			UVertexPaintColorSnippetDataAsset* colorSnippetDataAsset;
			FString colorSnippet;
		};
		static const UECodeGen_Private::FObjectPropertyParams NewProp_colorSnippetDataAsset;
		static const UECodeGen_Private::FStrPropertyParams NewProp_colorSnippet;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UVertexPaintDetectionEdSubsystem_RefreshColorSnippetAsRapidJsonString_Statics::NewProp_colorSnippetDataAsset = { "colorSnippetDataAsset", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(VertexPaintDetectionEdSubsystem_eventRefreshColorSnippetAsRapidJsonString_Parms, colorSnippetDataAsset), Z_Construct_UClass_UVertexPaintColorSnippetDataAsset_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UVertexPaintDetectionEdSubsystem_RefreshColorSnippetAsRapidJsonString_Statics::NewProp_colorSnippet = { "colorSnippet", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(VertexPaintDetectionEdSubsystem_eventRefreshColorSnippetAsRapidJsonString_Parms, colorSnippet), METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UVertexPaintDetectionEdSubsystem_RefreshColorSnippetAsRapidJsonString_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UVertexPaintDetectionEdSubsystem_RefreshColorSnippetAsRapidJsonString_Statics::NewProp_colorSnippetDataAsset,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UVertexPaintDetectionEdSubsystem_RefreshColorSnippetAsRapidJsonString_Statics::NewProp_colorSnippet,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UVertexPaintDetectionEdSubsystem_RefreshColorSnippetAsRapidJsonString_Statics::Function_MetaDataParams[] = {
		{ "Category", "Runtime Vertex Color Paint and Detection Plugin" },
		{ "ModuleRelativePath", "Public/VertexPaintDetectionEdSubsystem.h" },
		{ "ToolTip", "Refreshes the color snippets so it gets stored as a serialized jstrong string which is more optimized and performant, as well as can be used in webservices." },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UVertexPaintDetectionEdSubsystem_RefreshColorSnippetAsRapidJsonString_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UVertexPaintDetectionEdSubsystem, nullptr, "RefreshColorSnippetAsRapidJsonString", nullptr, nullptr, sizeof(Z_Construct_UFunction_UVertexPaintDetectionEdSubsystem_RefreshColorSnippetAsRapidJsonString_Statics::VertexPaintDetectionEdSubsystem_eventRefreshColorSnippetAsRapidJsonString_Parms), Z_Construct_UFunction_UVertexPaintDetectionEdSubsystem_RefreshColorSnippetAsRapidJsonString_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UVertexPaintDetectionEdSubsystem_RefreshColorSnippetAsRapidJsonString_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UVertexPaintDetectionEdSubsystem_RefreshColorSnippetAsRapidJsonString_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UVertexPaintDetectionEdSubsystem_RefreshColorSnippetAsRapidJsonString_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UVertexPaintDetectionEdSubsystem_RefreshColorSnippetAsRapidJsonString()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UVertexPaintDetectionEdSubsystem_RefreshColorSnippetAsRapidJsonString_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UVertexPaintDetectionEdSubsystem_RemoveColorSnippetTag_Statics
	{
		struct VertexPaintDetectionEdSubsystem_eventRemoveColorSnippetTag_Parms
		{
			FString tag;
			bool ReturnValue;
		};
		static const UECodeGen_Private::FStrPropertyParams NewProp_tag;
		static void NewProp_ReturnValue_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UVertexPaintDetectionEdSubsystem_RemoveColorSnippetTag_Statics::NewProp_tag = { "tag", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(VertexPaintDetectionEdSubsystem_eventRemoveColorSnippetTag_Parms, tag), METADATA_PARAMS(nullptr, 0) };
	void Z_Construct_UFunction_UVertexPaintDetectionEdSubsystem_RemoveColorSnippetTag_Statics::NewProp_ReturnValue_SetBit(void* Obj)
	{
		((VertexPaintDetectionEdSubsystem_eventRemoveColorSnippetTag_Parms*)Obj)->ReturnValue = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UVertexPaintDetectionEdSubsystem_RemoveColorSnippetTag_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(bool), sizeof(VertexPaintDetectionEdSubsystem_eventRemoveColorSnippetTag_Parms), &Z_Construct_UFunction_UVertexPaintDetectionEdSubsystem_RemoveColorSnippetTag_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UVertexPaintDetectionEdSubsystem_RemoveColorSnippetTag_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UVertexPaintDetectionEdSubsystem_RemoveColorSnippetTag_Statics::NewProp_tag,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UVertexPaintDetectionEdSubsystem_RemoveColorSnippetTag_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UVertexPaintDetectionEdSubsystem_RemoveColorSnippetTag_Statics::Function_MetaDataParams[] = {
		{ "Category", "Runtime Vertex Color Paint and Detection Plugin" },
		{ "ModuleRelativePath", "Public/VertexPaintDetectionEdSubsystem.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UVertexPaintDetectionEdSubsystem_RemoveColorSnippetTag_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UVertexPaintDetectionEdSubsystem, nullptr, "RemoveColorSnippetTag", nullptr, nullptr, sizeof(Z_Construct_UFunction_UVertexPaintDetectionEdSubsystem_RemoveColorSnippetTag_Statics::VertexPaintDetectionEdSubsystem_eventRemoveColorSnippetTag_Parms), Z_Construct_UFunction_UVertexPaintDetectionEdSubsystem_RemoveColorSnippetTag_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UVertexPaintDetectionEdSubsystem_RemoveColorSnippetTag_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UVertexPaintDetectionEdSubsystem_RemoveColorSnippetTag_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UVertexPaintDetectionEdSubsystem_RemoveColorSnippetTag_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UVertexPaintDetectionEdSubsystem_RemoveColorSnippetTag()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UVertexPaintDetectionEdSubsystem_RemoveColorSnippetTag_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UVertexPaintDetectionEdSubsystem_RemoveMeshColorSnippet_Statics
	{
		struct VertexPaintDetectionEdSubsystem_eventRemoveMeshColorSnippet_Parms
		{
			FString colorSnippetID;
			UVertexPaintColorSnippetDataAsset* colorSnippetDataAsset;
		};
		static const UECodeGen_Private::FStrPropertyParams NewProp_colorSnippetID;
		static const UECodeGen_Private::FObjectPropertyParams NewProp_colorSnippetDataAsset;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UVertexPaintDetectionEdSubsystem_RemoveMeshColorSnippet_Statics::NewProp_colorSnippetID = { "colorSnippetID", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(VertexPaintDetectionEdSubsystem_eventRemoveMeshColorSnippet_Parms, colorSnippetID), METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UVertexPaintDetectionEdSubsystem_RemoveMeshColorSnippet_Statics::NewProp_colorSnippetDataAsset = { "colorSnippetDataAsset", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(VertexPaintDetectionEdSubsystem_eventRemoveMeshColorSnippet_Parms, colorSnippetDataAsset), Z_Construct_UClass_UVertexPaintColorSnippetDataAsset_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UVertexPaintDetectionEdSubsystem_RemoveMeshColorSnippet_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UVertexPaintDetectionEdSubsystem_RemoveMeshColorSnippet_Statics::NewProp_colorSnippetID,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UVertexPaintDetectionEdSubsystem_RemoveMeshColorSnippet_Statics::NewProp_colorSnippetDataAsset,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UVertexPaintDetectionEdSubsystem_RemoveMeshColorSnippet_Statics::Function_MetaDataParams[] = {
		{ "Category", "Runtime Vertex Color Paint and Detection Plugin" },
		{ "ModuleRelativePath", "Public/VertexPaintDetectionEdSubsystem.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UVertexPaintDetectionEdSubsystem_RemoveMeshColorSnippet_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UVertexPaintDetectionEdSubsystem, nullptr, "RemoveMeshColorSnippet", nullptr, nullptr, sizeof(Z_Construct_UFunction_UVertexPaintDetectionEdSubsystem_RemoveMeshColorSnippet_Statics::VertexPaintDetectionEdSubsystem_eventRemoveMeshColorSnippet_Parms), Z_Construct_UFunction_UVertexPaintDetectionEdSubsystem_RemoveMeshColorSnippet_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UVertexPaintDetectionEdSubsystem_RemoveMeshColorSnippet_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UVertexPaintDetectionEdSubsystem_RemoveMeshColorSnippet_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UVertexPaintDetectionEdSubsystem_RemoveMeshColorSnippet_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UVertexPaintDetectionEdSubsystem_RemoveMeshColorSnippet()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UVertexPaintDetectionEdSubsystem_RemoveMeshColorSnippet_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UVertexPaintDetectionEdSubsystem_RemoveSkeletalMeshAmountOfLODsToPaintByDefault_Statics
	{
		struct VertexPaintDetectionEdSubsystem_eventRemoveSkeletalMeshAmountOfLODsToPaintByDefault_Parms
		{
			USkeletalMesh* skeletalMesh;
			bool success;
		};
		static const UECodeGen_Private::FObjectPropertyParams NewProp_skeletalMesh;
		static void NewProp_success_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_success;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UVertexPaintDetectionEdSubsystem_RemoveSkeletalMeshAmountOfLODsToPaintByDefault_Statics::NewProp_skeletalMesh = { "skeletalMesh", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(VertexPaintDetectionEdSubsystem_eventRemoveSkeletalMeshAmountOfLODsToPaintByDefault_Parms, skeletalMesh), Z_Construct_UClass_USkeletalMesh_NoRegister, METADATA_PARAMS(nullptr, 0) };
	void Z_Construct_UFunction_UVertexPaintDetectionEdSubsystem_RemoveSkeletalMeshAmountOfLODsToPaintByDefault_Statics::NewProp_success_SetBit(void* Obj)
	{
		((VertexPaintDetectionEdSubsystem_eventRemoveSkeletalMeshAmountOfLODsToPaintByDefault_Parms*)Obj)->success = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UVertexPaintDetectionEdSubsystem_RemoveSkeletalMeshAmountOfLODsToPaintByDefault_Statics::NewProp_success = { "success", nullptr, (EPropertyFlags)0x0010000000000180, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(bool), sizeof(VertexPaintDetectionEdSubsystem_eventRemoveSkeletalMeshAmountOfLODsToPaintByDefault_Parms), &Z_Construct_UFunction_UVertexPaintDetectionEdSubsystem_RemoveSkeletalMeshAmountOfLODsToPaintByDefault_Statics::NewProp_success_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UVertexPaintDetectionEdSubsystem_RemoveSkeletalMeshAmountOfLODsToPaintByDefault_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UVertexPaintDetectionEdSubsystem_RemoveSkeletalMeshAmountOfLODsToPaintByDefault_Statics::NewProp_skeletalMesh,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UVertexPaintDetectionEdSubsystem_RemoveSkeletalMeshAmountOfLODsToPaintByDefault_Statics::NewProp_success,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UVertexPaintDetectionEdSubsystem_RemoveSkeletalMeshAmountOfLODsToPaintByDefault_Statics::Function_MetaDataParams[] = {
		{ "Category", "Runtime Vertex Color Paint and Detection Plugin" },
		{ "ModuleRelativePath", "Public/VertexPaintDetectionEdSubsystem.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UVertexPaintDetectionEdSubsystem_RemoveSkeletalMeshAmountOfLODsToPaintByDefault_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UVertexPaintDetectionEdSubsystem, nullptr, "RemoveSkeletalMeshAmountOfLODsToPaintByDefault", nullptr, nullptr, sizeof(Z_Construct_UFunction_UVertexPaintDetectionEdSubsystem_RemoveSkeletalMeshAmountOfLODsToPaintByDefault_Statics::VertexPaintDetectionEdSubsystem_eventRemoveSkeletalMeshAmountOfLODsToPaintByDefault_Parms), Z_Construct_UFunction_UVertexPaintDetectionEdSubsystem_RemoveSkeletalMeshAmountOfLODsToPaintByDefault_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UVertexPaintDetectionEdSubsystem_RemoveSkeletalMeshAmountOfLODsToPaintByDefault_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04420401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UVertexPaintDetectionEdSubsystem_RemoveSkeletalMeshAmountOfLODsToPaintByDefault_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UVertexPaintDetectionEdSubsystem_RemoveSkeletalMeshAmountOfLODsToPaintByDefault_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UVertexPaintDetectionEdSubsystem_RemoveSkeletalMeshAmountOfLODsToPaintByDefault()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UVertexPaintDetectionEdSubsystem_RemoveSkeletalMeshAmountOfLODsToPaintByDefault_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UVertexPaintDetectionEdSubsystem_RemoveStaticMeshAndAmountOfLODsToPaintByDefault_Statics
	{
		struct VertexPaintDetectionEdSubsystem_eventRemoveStaticMeshAndAmountOfLODsToPaintByDefault_Parms
		{
			UStaticMesh* staticMesh;
			bool success;
		};
		static const UECodeGen_Private::FObjectPropertyParams NewProp_staticMesh;
		static void NewProp_success_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_success;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UVertexPaintDetectionEdSubsystem_RemoveStaticMeshAndAmountOfLODsToPaintByDefault_Statics::NewProp_staticMesh = { "staticMesh", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(VertexPaintDetectionEdSubsystem_eventRemoveStaticMeshAndAmountOfLODsToPaintByDefault_Parms, staticMesh), Z_Construct_UClass_UStaticMesh_NoRegister, METADATA_PARAMS(nullptr, 0) };
	void Z_Construct_UFunction_UVertexPaintDetectionEdSubsystem_RemoveStaticMeshAndAmountOfLODsToPaintByDefault_Statics::NewProp_success_SetBit(void* Obj)
	{
		((VertexPaintDetectionEdSubsystem_eventRemoveStaticMeshAndAmountOfLODsToPaintByDefault_Parms*)Obj)->success = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UVertexPaintDetectionEdSubsystem_RemoveStaticMeshAndAmountOfLODsToPaintByDefault_Statics::NewProp_success = { "success", nullptr, (EPropertyFlags)0x0010000000000180, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(bool), sizeof(VertexPaintDetectionEdSubsystem_eventRemoveStaticMeshAndAmountOfLODsToPaintByDefault_Parms), &Z_Construct_UFunction_UVertexPaintDetectionEdSubsystem_RemoveStaticMeshAndAmountOfLODsToPaintByDefault_Statics::NewProp_success_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UVertexPaintDetectionEdSubsystem_RemoveStaticMeshAndAmountOfLODsToPaintByDefault_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UVertexPaintDetectionEdSubsystem_RemoveStaticMeshAndAmountOfLODsToPaintByDefault_Statics::NewProp_staticMesh,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UVertexPaintDetectionEdSubsystem_RemoveStaticMeshAndAmountOfLODsToPaintByDefault_Statics::NewProp_success,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UVertexPaintDetectionEdSubsystem_RemoveStaticMeshAndAmountOfLODsToPaintByDefault_Statics::Function_MetaDataParams[] = {
		{ "Category", "Runtime Vertex Color Paint and Detection Plugin" },
		{ "ModuleRelativePath", "Public/VertexPaintDetectionEdSubsystem.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UVertexPaintDetectionEdSubsystem_RemoveStaticMeshAndAmountOfLODsToPaintByDefault_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UVertexPaintDetectionEdSubsystem, nullptr, "RemoveStaticMeshAndAmountOfLODsToPaintByDefault", nullptr, nullptr, sizeof(Z_Construct_UFunction_UVertexPaintDetectionEdSubsystem_RemoveStaticMeshAndAmountOfLODsToPaintByDefault_Statics::VertexPaintDetectionEdSubsystem_eventRemoveStaticMeshAndAmountOfLODsToPaintByDefault_Parms), Z_Construct_UFunction_UVertexPaintDetectionEdSubsystem_RemoveStaticMeshAndAmountOfLODsToPaintByDefault_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UVertexPaintDetectionEdSubsystem_RemoveStaticMeshAndAmountOfLODsToPaintByDefault_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04420401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UVertexPaintDetectionEdSubsystem_RemoveStaticMeshAndAmountOfLODsToPaintByDefault_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UVertexPaintDetectionEdSubsystem_RemoveStaticMeshAndAmountOfLODsToPaintByDefault_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UVertexPaintDetectionEdSubsystem_RemoveStaticMeshAndAmountOfLODsToPaintByDefault()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UVertexPaintDetectionEdSubsystem_RemoveStaticMeshAndAmountOfLODsToPaintByDefault_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UVertexPaintDetectionEdSubsystem_RenameColorSnippetTag_Statics
	{
		struct VertexPaintDetectionEdSubsystem_eventRenameColorSnippetTag_Parms
		{
			FString oldTag;
			FString newTag;
		};
		static const UECodeGen_Private::FStrPropertyParams NewProp_oldTag;
		static const UECodeGen_Private::FStrPropertyParams NewProp_newTag;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UVertexPaintDetectionEdSubsystem_RenameColorSnippetTag_Statics::NewProp_oldTag = { "oldTag", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(VertexPaintDetectionEdSubsystem_eventRenameColorSnippetTag_Parms, oldTag), METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UVertexPaintDetectionEdSubsystem_RenameColorSnippetTag_Statics::NewProp_newTag = { "newTag", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(VertexPaintDetectionEdSubsystem_eventRenameColorSnippetTag_Parms, newTag), METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UVertexPaintDetectionEdSubsystem_RenameColorSnippetTag_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UVertexPaintDetectionEdSubsystem_RenameColorSnippetTag_Statics::NewProp_oldTag,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UVertexPaintDetectionEdSubsystem_RenameColorSnippetTag_Statics::NewProp_newTag,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UVertexPaintDetectionEdSubsystem_RenameColorSnippetTag_Statics::Function_MetaDataParams[] = {
		{ "Category", "Runtime Vertex Color Paint and Detection Plugin" },
		{ "ModuleRelativePath", "Public/VertexPaintDetectionEdSubsystem.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UVertexPaintDetectionEdSubsystem_RenameColorSnippetTag_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UVertexPaintDetectionEdSubsystem, nullptr, "RenameColorSnippetTag", nullptr, nullptr, sizeof(Z_Construct_UFunction_UVertexPaintDetectionEdSubsystem_RenameColorSnippetTag_Statics::VertexPaintDetectionEdSubsystem_eventRenameColorSnippetTag_Parms), Z_Construct_UFunction_UVertexPaintDetectionEdSubsystem_RenameColorSnippetTag_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UVertexPaintDetectionEdSubsystem_RenameColorSnippetTag_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UVertexPaintDetectionEdSubsystem_RenameColorSnippetTag_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UVertexPaintDetectionEdSubsystem_RenameColorSnippetTag_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UVertexPaintDetectionEdSubsystem_RenameColorSnippetTag()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UVertexPaintDetectionEdSubsystem_RenameColorSnippetTag_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UVertexPaintDetectionEdSubsystem_SavePackageWrapper_Statics
	{
		struct VertexPaintDetectionEdSubsystem_eventSavePackageWrapper_Parms
		{
			UObject* packageToSave;
			bool ReturnValue;
		};
		static const UECodeGen_Private::FObjectPropertyParams NewProp_packageToSave;
		static void NewProp_ReturnValue_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UVertexPaintDetectionEdSubsystem_SavePackageWrapper_Statics::NewProp_packageToSave = { "packageToSave", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(VertexPaintDetectionEdSubsystem_eventSavePackageWrapper_Parms, packageToSave), Z_Construct_UClass_UObject_NoRegister, METADATA_PARAMS(nullptr, 0) };
	void Z_Construct_UFunction_UVertexPaintDetectionEdSubsystem_SavePackageWrapper_Statics::NewProp_ReturnValue_SetBit(void* Obj)
	{
		((VertexPaintDetectionEdSubsystem_eventSavePackageWrapper_Parms*)Obj)->ReturnValue = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UVertexPaintDetectionEdSubsystem_SavePackageWrapper_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(bool), sizeof(VertexPaintDetectionEdSubsystem_eventSavePackageWrapper_Parms), &Z_Construct_UFunction_UVertexPaintDetectionEdSubsystem_SavePackageWrapper_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UVertexPaintDetectionEdSubsystem_SavePackageWrapper_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UVertexPaintDetectionEdSubsystem_SavePackageWrapper_Statics::NewProp_packageToSave,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UVertexPaintDetectionEdSubsystem_SavePackageWrapper_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UVertexPaintDetectionEdSubsystem_SavePackageWrapper_Statics::Function_MetaDataParams[] = {
		{ "Category", "Runtime Vertex Color Paint and Detection Plugin" },
		{ "ModuleRelativePath", "Public/VertexPaintDetectionEdSubsystem.h" },
		{ "ToolTip", "Auto Saves this package so the user doesn't have to manually press save after doing changes" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UVertexPaintDetectionEdSubsystem_SavePackageWrapper_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UVertexPaintDetectionEdSubsystem, nullptr, "SavePackageWrapper", nullptr, nullptr, sizeof(Z_Construct_UFunction_UVertexPaintDetectionEdSubsystem_SavePackageWrapper_Statics::VertexPaintDetectionEdSubsystem_eventSavePackageWrapper_Parms), Z_Construct_UFunction_UVertexPaintDetectionEdSubsystem_SavePackageWrapper_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UVertexPaintDetectionEdSubsystem_SavePackageWrapper_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UVertexPaintDetectionEdSubsystem_SavePackageWrapper_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UVertexPaintDetectionEdSubsystem_SavePackageWrapper_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UVertexPaintDetectionEdSubsystem_SavePackageWrapper()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UVertexPaintDetectionEdSubsystem_SavePackageWrapper_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UVertexPaintDetectionEdSubsystem_SetCustomSettingsOptimizationsDataAssetToUse_Statics
	{
		struct VertexPaintDetectionEdSubsystem_eventSetCustomSettingsOptimizationsDataAssetToUse_Parms
		{
			UObject* dataAsset;
		};
		static const UECodeGen_Private::FObjectPropertyParams NewProp_dataAsset;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UVertexPaintDetectionEdSubsystem_SetCustomSettingsOptimizationsDataAssetToUse_Statics::NewProp_dataAsset = { "dataAsset", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(VertexPaintDetectionEdSubsystem_eventSetCustomSettingsOptimizationsDataAssetToUse_Parms, dataAsset), Z_Construct_UClass_UObject_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UVertexPaintDetectionEdSubsystem_SetCustomSettingsOptimizationsDataAssetToUse_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UVertexPaintDetectionEdSubsystem_SetCustomSettingsOptimizationsDataAssetToUse_Statics::NewProp_dataAsset,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UVertexPaintDetectionEdSubsystem_SetCustomSettingsOptimizationsDataAssetToUse_Statics::Function_MetaDataParams[] = {
		{ "Category", "Runtime Vertex Color Paint and Detection Plugin" },
		{ "ModuleRelativePath", "Public/VertexPaintDetectionEdSubsystem.h" },
		{ "ToolTip", "Sets which Optimization Data Asset on the custom settings. Also tells the subsystem to update it's references" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UVertexPaintDetectionEdSubsystem_SetCustomSettingsOptimizationsDataAssetToUse_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UVertexPaintDetectionEdSubsystem, nullptr, "SetCustomSettingsOptimizationsDataAssetToUse", nullptr, nullptr, sizeof(Z_Construct_UFunction_UVertexPaintDetectionEdSubsystem_SetCustomSettingsOptimizationsDataAssetToUse_Statics::VertexPaintDetectionEdSubsystem_eventSetCustomSettingsOptimizationsDataAssetToUse_Parms), Z_Construct_UFunction_UVertexPaintDetectionEdSubsystem_SetCustomSettingsOptimizationsDataAssetToUse_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UVertexPaintDetectionEdSubsystem_SetCustomSettingsOptimizationsDataAssetToUse_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UVertexPaintDetectionEdSubsystem_SetCustomSettingsOptimizationsDataAssetToUse_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UVertexPaintDetectionEdSubsystem_SetCustomSettingsOptimizationsDataAssetToUse_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UVertexPaintDetectionEdSubsystem_SetCustomSettingsOptimizationsDataAssetToUse()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UVertexPaintDetectionEdSubsystem_SetCustomSettingsOptimizationsDataAssetToUse_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UVertexPaintDetectionEdSubsystem_SetCustomSettingsVertexPaintColorSnippetReferenceDataAssetToUse_Statics
	{
		struct VertexPaintDetectionEdSubsystem_eventSetCustomSettingsVertexPaintColorSnippetReferenceDataAssetToUse_Parms
		{
			UObject* dataAsset;
		};
		static const UECodeGen_Private::FObjectPropertyParams NewProp_dataAsset;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UVertexPaintDetectionEdSubsystem_SetCustomSettingsVertexPaintColorSnippetReferenceDataAssetToUse_Statics::NewProp_dataAsset = { "dataAsset", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(VertexPaintDetectionEdSubsystem_eventSetCustomSettingsVertexPaintColorSnippetReferenceDataAssetToUse_Parms, dataAsset), Z_Construct_UClass_UObject_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UVertexPaintDetectionEdSubsystem_SetCustomSettingsVertexPaintColorSnippetReferenceDataAssetToUse_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UVertexPaintDetectionEdSubsystem_SetCustomSettingsVertexPaintColorSnippetReferenceDataAssetToUse_Statics::NewProp_dataAsset,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UVertexPaintDetectionEdSubsystem_SetCustomSettingsVertexPaintColorSnippetReferenceDataAssetToUse_Statics::Function_MetaDataParams[] = {
		{ "Category", "Runtime Vertex Color Paint and Detection Plugin" },
		{ "ModuleRelativePath", "Public/VertexPaintDetectionEdSubsystem.h" },
		{ "ToolTip", "Sets which color snippet reference data asset to use that stores references to Color snippet Data Asset." },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UVertexPaintDetectionEdSubsystem_SetCustomSettingsVertexPaintColorSnippetReferenceDataAssetToUse_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UVertexPaintDetectionEdSubsystem, nullptr, "SetCustomSettingsVertexPaintColorSnippetReferenceDataAssetToUse", nullptr, nullptr, sizeof(Z_Construct_UFunction_UVertexPaintDetectionEdSubsystem_SetCustomSettingsVertexPaintColorSnippetReferenceDataAssetToUse_Statics::VertexPaintDetectionEdSubsystem_eventSetCustomSettingsVertexPaintColorSnippetReferenceDataAssetToUse_Parms), Z_Construct_UFunction_UVertexPaintDetectionEdSubsystem_SetCustomSettingsVertexPaintColorSnippetReferenceDataAssetToUse_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UVertexPaintDetectionEdSubsystem_SetCustomSettingsVertexPaintColorSnippetReferenceDataAssetToUse_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UVertexPaintDetectionEdSubsystem_SetCustomSettingsVertexPaintColorSnippetReferenceDataAssetToUse_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UVertexPaintDetectionEdSubsystem_SetCustomSettingsVertexPaintColorSnippetReferenceDataAssetToUse_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UVertexPaintDetectionEdSubsystem_SetCustomSettingsVertexPaintColorSnippetReferenceDataAssetToUse()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UVertexPaintDetectionEdSubsystem_SetCustomSettingsVertexPaintColorSnippetReferenceDataAssetToUse_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UVertexPaintDetectionEdSubsystem_SetCustomSettingsVertexPaintMaterialToUse_Statics
	{
		struct VertexPaintDetectionEdSubsystem_eventSetCustomSettingsVertexPaintMaterialToUse_Parms
		{
			UObject* dataAsset;
		};
		static const UECodeGen_Private::FObjectPropertyParams NewProp_dataAsset;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UVertexPaintDetectionEdSubsystem_SetCustomSettingsVertexPaintMaterialToUse_Statics::NewProp_dataAsset = { "dataAsset", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(VertexPaintDetectionEdSubsystem_eventSetCustomSettingsVertexPaintMaterialToUse_Parms, dataAsset), Z_Construct_UClass_UObject_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UVertexPaintDetectionEdSubsystem_SetCustomSettingsVertexPaintMaterialToUse_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UVertexPaintDetectionEdSubsystem_SetCustomSettingsVertexPaintMaterialToUse_Statics::NewProp_dataAsset,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UVertexPaintDetectionEdSubsystem_SetCustomSettingsVertexPaintMaterialToUse_Statics::Function_MetaDataParams[] = {
		{ "Category", "Runtime Vertex Color Paint and Detection Plugin" },
		{ "ModuleRelativePath", "Public/VertexPaintDetectionEdSubsystem.h" },
		{ "ToolTip", "Sets which vertex paint material to use that stores all materials we've added with vertexcolors." },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UVertexPaintDetectionEdSubsystem_SetCustomSettingsVertexPaintMaterialToUse_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UVertexPaintDetectionEdSubsystem, nullptr, "SetCustomSettingsVertexPaintMaterialToUse", nullptr, nullptr, sizeof(Z_Construct_UFunction_UVertexPaintDetectionEdSubsystem_SetCustomSettingsVertexPaintMaterialToUse_Statics::VertexPaintDetectionEdSubsystem_eventSetCustomSettingsVertexPaintMaterialToUse_Parms), Z_Construct_UFunction_UVertexPaintDetectionEdSubsystem_SetCustomSettingsVertexPaintMaterialToUse_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UVertexPaintDetectionEdSubsystem_SetCustomSettingsVertexPaintMaterialToUse_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UVertexPaintDetectionEdSubsystem_SetCustomSettingsVertexPaintMaterialToUse_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UVertexPaintDetectionEdSubsystem_SetCustomSettingsVertexPaintMaterialToUse_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UVertexPaintDetectionEdSubsystem_SetCustomSettingsVertexPaintMaterialToUse()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UVertexPaintDetectionEdSubsystem_SetCustomSettingsVertexPaintMaterialToUse_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UVertexPaintDetectionEdSubsystem_SetEngineSpecificButtonSettings_Statics
	{
		struct VertexPaintDetectionEdSubsystem_eventSetEngineSpecificButtonSettings_Parms
		{
			TArray<UButton*> buttons;
			TArray<UComboBoxString*> comboBoxes;
		};
		static const UECodeGen_Private::FObjectPropertyParams NewProp_buttons_Inner;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_buttons_MetaData[];
#endif
		static const UECodeGen_Private::FArrayPropertyParams NewProp_buttons;
		static const UECodeGen_Private::FObjectPropertyParams NewProp_comboBoxes_Inner;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_comboBoxes_MetaData[];
#endif
		static const UECodeGen_Private::FArrayPropertyParams NewProp_comboBoxes;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UVertexPaintDetectionEdSubsystem_SetEngineSpecificButtonSettings_Statics::NewProp_buttons_Inner = { "buttons", nullptr, (EPropertyFlags)0x0000000000080000, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, 0, Z_Construct_UClass_UButton_NoRegister, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UVertexPaintDetectionEdSubsystem_SetEngineSpecificButtonSettings_Statics::NewProp_buttons_MetaData[] = {
		{ "EditInline", "true" },
	};
#endif
	const UECodeGen_Private::FArrayPropertyParams Z_Construct_UFunction_UVertexPaintDetectionEdSubsystem_SetEngineSpecificButtonSettings_Statics::NewProp_buttons = { "buttons", nullptr, (EPropertyFlags)0x0010008000000080, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(VertexPaintDetectionEdSubsystem_eventSetEngineSpecificButtonSettings_Parms, buttons), EArrayPropertyFlags::None, METADATA_PARAMS(Z_Construct_UFunction_UVertexPaintDetectionEdSubsystem_SetEngineSpecificButtonSettings_Statics::NewProp_buttons_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UVertexPaintDetectionEdSubsystem_SetEngineSpecificButtonSettings_Statics::NewProp_buttons_MetaData)) };
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UVertexPaintDetectionEdSubsystem_SetEngineSpecificButtonSettings_Statics::NewProp_comboBoxes_Inner = { "comboBoxes", nullptr, (EPropertyFlags)0x0000000000080000, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, 0, Z_Construct_UClass_UComboBoxString_NoRegister, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UVertexPaintDetectionEdSubsystem_SetEngineSpecificButtonSettings_Statics::NewProp_comboBoxes_MetaData[] = {
		{ "EditInline", "true" },
	};
#endif
	const UECodeGen_Private::FArrayPropertyParams Z_Construct_UFunction_UVertexPaintDetectionEdSubsystem_SetEngineSpecificButtonSettings_Statics::NewProp_comboBoxes = { "comboBoxes", nullptr, (EPropertyFlags)0x0010008000000080, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(VertexPaintDetectionEdSubsystem_eventSetEngineSpecificButtonSettings_Parms, comboBoxes), EArrayPropertyFlags::None, METADATA_PARAMS(Z_Construct_UFunction_UVertexPaintDetectionEdSubsystem_SetEngineSpecificButtonSettings_Statics::NewProp_comboBoxes_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UVertexPaintDetectionEdSubsystem_SetEngineSpecificButtonSettings_Statics::NewProp_comboBoxes_MetaData)) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UVertexPaintDetectionEdSubsystem_SetEngineSpecificButtonSettings_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UVertexPaintDetectionEdSubsystem_SetEngineSpecificButtonSettings_Statics::NewProp_buttons_Inner,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UVertexPaintDetectionEdSubsystem_SetEngineSpecificButtonSettings_Statics::NewProp_buttons,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UVertexPaintDetectionEdSubsystem_SetEngineSpecificButtonSettings_Statics::NewProp_comboBoxes_Inner,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UVertexPaintDetectionEdSubsystem_SetEngineSpecificButtonSettings_Statics::NewProp_comboBoxes,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UVertexPaintDetectionEdSubsystem_SetEngineSpecificButtonSettings_Statics::Function_MetaDataParams[] = {
		{ "Category", "Runtime Vertex Color Paint and Detection Plugin" },
		{ "ModuleRelativePath", "Public/VertexPaintDetectionEdSubsystem.h" },
		{ "ToolTip", "Can set Button Settings depending on Engine Version" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UVertexPaintDetectionEdSubsystem_SetEngineSpecificButtonSettings_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UVertexPaintDetectionEdSubsystem, nullptr, "SetEngineSpecificButtonSettings", nullptr, nullptr, sizeof(Z_Construct_UFunction_UVertexPaintDetectionEdSubsystem_SetEngineSpecificButtonSettings_Statics::VertexPaintDetectionEdSubsystem_eventSetEngineSpecificButtonSettings_Parms), Z_Construct_UFunction_UVertexPaintDetectionEdSubsystem_SetEngineSpecificButtonSettings_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UVertexPaintDetectionEdSubsystem_SetEngineSpecificButtonSettings_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UVertexPaintDetectionEdSubsystem_SetEngineSpecificButtonSettings_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UVertexPaintDetectionEdSubsystem_SetEngineSpecificButtonSettings_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UVertexPaintDetectionEdSubsystem_SetEngineSpecificButtonSettings()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UVertexPaintDetectionEdSubsystem_SetEngineSpecificButtonSettings_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UVertexPaintDetectionEdSubsystem_UpdateMeshColorSnippetID_Statics
	{
		struct VertexPaintDetectionEdSubsystem_eventUpdateMeshColorSnippetID_Parms
		{
			FString prevColorSnippetID;
			FString newColorSnippetID;
			UVertexPaintColorSnippetDataAsset* colorSnippetDataAsset;
			bool success;
		};
		static const UECodeGen_Private::FStrPropertyParams NewProp_prevColorSnippetID;
		static const UECodeGen_Private::FStrPropertyParams NewProp_newColorSnippetID;
		static const UECodeGen_Private::FObjectPropertyParams NewProp_colorSnippetDataAsset;
		static void NewProp_success_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_success;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UVertexPaintDetectionEdSubsystem_UpdateMeshColorSnippetID_Statics::NewProp_prevColorSnippetID = { "prevColorSnippetID", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(VertexPaintDetectionEdSubsystem_eventUpdateMeshColorSnippetID_Parms, prevColorSnippetID), METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UVertexPaintDetectionEdSubsystem_UpdateMeshColorSnippetID_Statics::NewProp_newColorSnippetID = { "newColorSnippetID", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(VertexPaintDetectionEdSubsystem_eventUpdateMeshColorSnippetID_Parms, newColorSnippetID), METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UVertexPaintDetectionEdSubsystem_UpdateMeshColorSnippetID_Statics::NewProp_colorSnippetDataAsset = { "colorSnippetDataAsset", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(VertexPaintDetectionEdSubsystem_eventUpdateMeshColorSnippetID_Parms, colorSnippetDataAsset), Z_Construct_UClass_UVertexPaintColorSnippetDataAsset_NoRegister, METADATA_PARAMS(nullptr, 0) };
	void Z_Construct_UFunction_UVertexPaintDetectionEdSubsystem_UpdateMeshColorSnippetID_Statics::NewProp_success_SetBit(void* Obj)
	{
		((VertexPaintDetectionEdSubsystem_eventUpdateMeshColorSnippetID_Parms*)Obj)->success = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UVertexPaintDetectionEdSubsystem_UpdateMeshColorSnippetID_Statics::NewProp_success = { "success", nullptr, (EPropertyFlags)0x0010000000000180, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(bool), sizeof(VertexPaintDetectionEdSubsystem_eventUpdateMeshColorSnippetID_Parms), &Z_Construct_UFunction_UVertexPaintDetectionEdSubsystem_UpdateMeshColorSnippetID_Statics::NewProp_success_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UVertexPaintDetectionEdSubsystem_UpdateMeshColorSnippetID_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UVertexPaintDetectionEdSubsystem_UpdateMeshColorSnippetID_Statics::NewProp_prevColorSnippetID,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UVertexPaintDetectionEdSubsystem_UpdateMeshColorSnippetID_Statics::NewProp_newColorSnippetID,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UVertexPaintDetectionEdSubsystem_UpdateMeshColorSnippetID_Statics::NewProp_colorSnippetDataAsset,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UVertexPaintDetectionEdSubsystem_UpdateMeshColorSnippetID_Statics::NewProp_success,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UVertexPaintDetectionEdSubsystem_UpdateMeshColorSnippetID_Statics::Function_MetaDataParams[] = {
		{ "Category", "Runtime Vertex Color Paint and Detection Plugin" },
		{ "ModuleRelativePath", "Public/VertexPaintDetectionEdSubsystem.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UVertexPaintDetectionEdSubsystem_UpdateMeshColorSnippetID_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UVertexPaintDetectionEdSubsystem, nullptr, "UpdateMeshColorSnippetID", nullptr, nullptr, sizeof(Z_Construct_UFunction_UVertexPaintDetectionEdSubsystem_UpdateMeshColorSnippetID_Statics::VertexPaintDetectionEdSubsystem_eventUpdateMeshColorSnippetID_Parms), Z_Construct_UFunction_UVertexPaintDetectionEdSubsystem_UpdateMeshColorSnippetID_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UVertexPaintDetectionEdSubsystem_UpdateMeshColorSnippetID_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04420401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UVertexPaintDetectionEdSubsystem_UpdateMeshColorSnippetID_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UVertexPaintDetectionEdSubsystem_UpdateMeshColorSnippetID_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UVertexPaintDetectionEdSubsystem_UpdateMeshColorSnippetID()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UVertexPaintDetectionEdSubsystem_UpdateMeshColorSnippetID_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UVertexPaintDetectionEdSubsystem);
	UClass* Z_Construct_UClass_UVertexPaintDetectionEdSubsystem_NoRegister()
	{
		return UVertexPaintDetectionEdSubsystem::StaticClass();
	}
	struct Z_Construct_UClass_UVertexPaintDetectionEdSubsystem_Statics
	{
		static UObject* (*const DependentSingletons[])();
		static const FClassFunctionLinkInfo FuncInfo[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UVertexPaintDetectionEdSubsystem_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UEditorSubsystem,
		(UObject* (*)())Z_Construct_UPackage__Script_VertexPaintDetectionPlugin_Editor,
	};
	const FClassFunctionLinkInfo Z_Construct_UClass_UVertexPaintDetectionEdSubsystem_Statics::FuncInfo[] = {
		{ &Z_Construct_UFunction_UVertexPaintDetectionEdSubsystem_AddColorSnippetTag, "AddColorSnippetTag" }, // 2716637307
		{ &Z_Construct_UFunction_UVertexPaintDetectionEdSubsystem_AddEditorNotification, "AddEditorNotification" }, // 1171615482
		{ &Z_Construct_UFunction_UVertexPaintDetectionEdSubsystem_AddMeshColorSnippet, "AddMeshColorSnippet" }, // 2075789418
		{ &Z_Construct_UFunction_UVertexPaintDetectionEdSubsystem_AddSkeletalMeshAmountOfLODsToPaintByDefault, "AddSkeletalMeshAmountOfLODsToPaintByDefault" }, // 2223364902
		{ &Z_Construct_UFunction_UVertexPaintDetectionEdSubsystem_AddStaticMeshAndAmountOfLODsToPaintByDefault, "AddStaticMeshAndAmountOfLODsToPaintByDefault" }, // 687033696
		{ &Z_Construct_UFunction_UVertexPaintDetectionEdSubsystem_ApplyVertexColorToMeshAtLOD0, "ApplyVertexColorToMeshAtLOD0" }, // 165546638
		{ &Z_Construct_UFunction_UVertexPaintDetectionEdSubsystem_ClearAllAvailableColorSnippetCacheTagContainer, "ClearAllAvailableColorSnippetCacheTagContainer" }, // 3827781091
		{ &Z_Construct_UFunction_UVertexPaintDetectionEdSubsystem_DoesColorSnippetTagExist, "DoesColorSnippetTagExist" }, // 2139563802
		{ &Z_Construct_UFunction_UVertexPaintDetectionEdSubsystem_GetAllColorSnippetTagsDirectlyFromIni, "GetAllColorSnippetTagsDirectlyFromIni" }, // 4189261151
		{ &Z_Construct_UFunction_UVertexPaintDetectionEdSubsystem_GetPersistentLevelsWorld_Wrapper, "GetPersistentLevelsWorld_Wrapper" }, // 635775776
		{ &Z_Construct_UFunction_UVertexPaintDetectionEdSubsystem_GetSkeletalMeshComponentVertexCount_Wrapper, "GetSkeletalMeshComponentVertexCount_Wrapper" }, // 3010258154
		{ &Z_Construct_UFunction_UVertexPaintDetectionEdSubsystem_GetSkeletalMeshLODCount_Wrapper, "GetSkeletalMeshLODCount_Wrapper" }, // 2769902433
		{ &Z_Construct_UFunction_UVertexPaintDetectionEdSubsystem_GetSkeletalMeshVerticesAmount_Wrapper, "GetSkeletalMeshVerticesAmount_Wrapper" }, // 4179566336
		{ &Z_Construct_UFunction_UVertexPaintDetectionEdSubsystem_GetStaticMeshComponentVertexCount_Wrapper, "GetStaticMeshComponentVertexCount_Wrapper" }, // 2667541523
		{ &Z_Construct_UFunction_UVertexPaintDetectionEdSubsystem_GetStaticMeshLODCount_Wrapper, "GetStaticMeshLODCount_Wrapper" }, // 1351872933
		{ &Z_Construct_UFunction_UVertexPaintDetectionEdSubsystem_GetStaticMeshVerticesAmount_Wrapper, "GetStaticMeshVerticesAmount_Wrapper" }, // 1643413592
		{ &Z_Construct_UFunction_UVertexPaintDetectionEdSubsystem_LoadEssentialDataAssets, "LoadEssentialDataAssets" }, // 2407977774
		{ &Z_Construct_UFunction_UVertexPaintDetectionEdSubsystem_MoveMeshColorSnippet, "MoveMeshColorSnippet" }, // 644344036
		{ &Z_Construct_UFunction_UVertexPaintDetectionEdSubsystem_RefreshAllAvailableCachedColorSnippetTagContainer, "RefreshAllAvailableCachedColorSnippetTagContainer" }, // 2627077444
		{ &Z_Construct_UFunction_UVertexPaintDetectionEdSubsystem_RefreshColorSnippetAsRapidJsonString, "RefreshColorSnippetAsRapidJsonString" }, // 4279687145
		{ &Z_Construct_UFunction_UVertexPaintDetectionEdSubsystem_RemoveColorSnippetTag, "RemoveColorSnippetTag" }, // 30596085
		{ &Z_Construct_UFunction_UVertexPaintDetectionEdSubsystem_RemoveMeshColorSnippet, "RemoveMeshColorSnippet" }, // 3785089516
		{ &Z_Construct_UFunction_UVertexPaintDetectionEdSubsystem_RemoveSkeletalMeshAmountOfLODsToPaintByDefault, "RemoveSkeletalMeshAmountOfLODsToPaintByDefault" }, // 2208102226
		{ &Z_Construct_UFunction_UVertexPaintDetectionEdSubsystem_RemoveStaticMeshAndAmountOfLODsToPaintByDefault, "RemoveStaticMeshAndAmountOfLODsToPaintByDefault" }, // 722059090
		{ &Z_Construct_UFunction_UVertexPaintDetectionEdSubsystem_RenameColorSnippetTag, "RenameColorSnippetTag" }, // 1851987653
		{ &Z_Construct_UFunction_UVertexPaintDetectionEdSubsystem_SavePackageWrapper, "SavePackageWrapper" }, // 391986109
		{ &Z_Construct_UFunction_UVertexPaintDetectionEdSubsystem_SetCustomSettingsOptimizationsDataAssetToUse, "SetCustomSettingsOptimizationsDataAssetToUse" }, // 2117747047
		{ &Z_Construct_UFunction_UVertexPaintDetectionEdSubsystem_SetCustomSettingsVertexPaintColorSnippetReferenceDataAssetToUse, "SetCustomSettingsVertexPaintColorSnippetReferenceDataAssetToUse" }, // 1411201018
		{ &Z_Construct_UFunction_UVertexPaintDetectionEdSubsystem_SetCustomSettingsVertexPaintMaterialToUse, "SetCustomSettingsVertexPaintMaterialToUse" }, // 717392023
		{ &Z_Construct_UFunction_UVertexPaintDetectionEdSubsystem_SetEngineSpecificButtonSettings, "SetEngineSpecificButtonSettings" }, // 1735960783
		{ &Z_Construct_UFunction_UVertexPaintDetectionEdSubsystem_UpdateMeshColorSnippetID, "UpdateMeshColorSnippetID" }, // 2046842646
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UVertexPaintDetectionEdSubsystem_Statics::Class_MetaDataParams[] = {
		{ "IncludePath", "VertexPaintDetectionEdSubsystem.h" },
		{ "ModuleRelativePath", "Public/VertexPaintDetectionEdSubsystem.h" },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_UVertexPaintDetectionEdSubsystem_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UVertexPaintDetectionEdSubsystem>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_UVertexPaintDetectionEdSubsystem_Statics::ClassParams = {
		&UVertexPaintDetectionEdSubsystem::StaticClass,
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
		METADATA_PARAMS(Z_Construct_UClass_UVertexPaintDetectionEdSubsystem_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UVertexPaintDetectionEdSubsystem_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UVertexPaintDetectionEdSubsystem()
	{
		if (!Z_Registration_Info_UClass_UVertexPaintDetectionEdSubsystem.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UVertexPaintDetectionEdSubsystem.OuterSingleton, Z_Construct_UClass_UVertexPaintDetectionEdSubsystem_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_UVertexPaintDetectionEdSubsystem.OuterSingleton;
	}
	template<> VERTEXPAINTDETECTIONPLUGIN_EDITOR_API UClass* StaticClass<UVertexPaintDetectionEdSubsystem>()
	{
		return UVertexPaintDetectionEdSubsystem::StaticClass();
	}
	DEFINE_VTABLE_PTR_HELPER_CTOR(UVertexPaintDetectionEdSubsystem);
	UVertexPaintDetectionEdSubsystem::~UVertexPaintDetectionEdSubsystem() {}
	struct Z_CompiledInDeferFile_FID_build_U5M_Marketplace_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_VertexPaintDetectionPlugin_Source_VertexPaintDetectionPlugin_Editor_Public_VertexPaintDetectionEdSubsystem_h_Statics
	{
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_build_U5M_Marketplace_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_VertexPaintDetectionPlugin_Source_VertexPaintDetectionPlugin_Editor_Public_VertexPaintDetectionEdSubsystem_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_UVertexPaintDetectionEdSubsystem, UVertexPaintDetectionEdSubsystem::StaticClass, TEXT("UVertexPaintDetectionEdSubsystem"), &Z_Registration_Info_UClass_UVertexPaintDetectionEdSubsystem, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UVertexPaintDetectionEdSubsystem), 2182391769U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_build_U5M_Marketplace_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_VertexPaintDetectionPlugin_Source_VertexPaintDetectionPlugin_Editor_Public_VertexPaintDetectionEdSubsystem_h_4237840131(TEXT("/Script/VertexPaintDetectionPlugin_Editor"),
		Z_CompiledInDeferFile_FID_build_U5M_Marketplace_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_VertexPaintDetectionPlugin_Source_VertexPaintDetectionPlugin_Editor_Public_VertexPaintDetectionEdSubsystem_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_build_U5M_Marketplace_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_VertexPaintDetectionPlugin_Source_VertexPaintDetectionPlugin_Editor_Public_VertexPaintDetectionEdSubsystem_h_Statics::ClassInfo),
		nullptr, 0,
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
