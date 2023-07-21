// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "VertexPaintDetectionEdSubsystem.h"
#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
class UButton;
class UComboBoxString;
class UMeshComponent;
class UObject;
class USkeletalMesh;
class USkeletalMeshComponent;
class UStaticMesh;
class UStaticMeshComponent;
class UVertexPaintColorSnippetDataAsset;
class UWorld;
struct FColor;
#ifdef VERTEXPAINTDETECTIONPLUGIN_EDITOR_VertexPaintDetectionEdSubsystem_generated_h
#error "VertexPaintDetectionEdSubsystem.generated.h already included, missing '#pragma once' in VertexPaintDetectionEdSubsystem.h"
#endif
#define VERTEXPAINTDETECTIONPLUGIN_EDITOR_VertexPaintDetectionEdSubsystem_generated_h

#define FID_build_U5M_Marketplace_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_VertexPaintDetectionPlugin_Source_VertexPaintDetectionPlugin_Editor_Public_VertexPaintDetectionEdSubsystem_h_24_SPARSE_DATA
#define FID_build_U5M_Marketplace_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_VertexPaintDetectionPlugin_Source_VertexPaintDetectionPlugin_Editor_Public_VertexPaintDetectionEdSubsystem_h_24_RPC_WRAPPERS \
 \
	DECLARE_FUNCTION(execRefreshAllAvailableCachedColorSnippetTagContainer); \
	DECLARE_FUNCTION(execRenameColorSnippetTag); \
	DECLARE_FUNCTION(execClearAllAvailableColorSnippetCacheTagContainer); \
	DECLARE_FUNCTION(execRemoveColorSnippetTag); \
	DECLARE_FUNCTION(execGetAllColorSnippetTagsDirectlyFromIni); \
	DECLARE_FUNCTION(execDoesColorSnippetTagExist); \
	DECLARE_FUNCTION(execAddColorSnippetTag); \
	DECLARE_FUNCTION(execLoadEssentialDataAssets); \
	DECLARE_FUNCTION(execSetCustomSettingsVertexPaintColorSnippetReferenceDataAssetToUse); \
	DECLARE_FUNCTION(execSetCustomSettingsVertexPaintMaterialToUse); \
	DECLARE_FUNCTION(execSetCustomSettingsOptimizationsDataAssetToUse); \
	DECLARE_FUNCTION(execGetPersistentLevelsWorld_Wrapper); \
	DECLARE_FUNCTION(execGetStaticMeshComponentVertexCount_Wrapper); \
	DECLARE_FUNCTION(execGetSkeletalMeshComponentVertexCount_Wrapper); \
	DECLARE_FUNCTION(execGetSkeletalMeshLODCount_Wrapper); \
	DECLARE_FUNCTION(execGetStaticMeshLODCount_Wrapper); \
	DECLARE_FUNCTION(execGetSkeletalMeshVerticesAmount_Wrapper); \
	DECLARE_FUNCTION(execGetStaticMeshVerticesAmount_Wrapper); \
	DECLARE_FUNCTION(execRefreshColorSnippetAsRapidJsonString); \
	DECLARE_FUNCTION(execApplyVertexColorToMeshAtLOD0); \
	DECLARE_FUNCTION(execRemoveMeshColorSnippet); \
	DECLARE_FUNCTION(execUpdateMeshColorSnippetID); \
	DECLARE_FUNCTION(execMoveMeshColorSnippet); \
	DECLARE_FUNCTION(execAddMeshColorSnippet); \
	DECLARE_FUNCTION(execRemoveStaticMeshAndAmountOfLODsToPaintByDefault); \
	DECLARE_FUNCTION(execAddStaticMeshAndAmountOfLODsToPaintByDefault); \
	DECLARE_FUNCTION(execRemoveSkeletalMeshAmountOfLODsToPaintByDefault); \
	DECLARE_FUNCTION(execAddSkeletalMeshAmountOfLODsToPaintByDefault); \
	DECLARE_FUNCTION(execSavePackageWrapper); \
	DECLARE_FUNCTION(execSetEngineSpecificButtonSettings); \
	DECLARE_FUNCTION(execAddEditorNotification);


#define FID_build_U5M_Marketplace_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_VertexPaintDetectionPlugin_Source_VertexPaintDetectionPlugin_Editor_Public_VertexPaintDetectionEdSubsystem_h_24_RPC_WRAPPERS_NO_PURE_DECLS \
 \
	DECLARE_FUNCTION(execRefreshAllAvailableCachedColorSnippetTagContainer); \
	DECLARE_FUNCTION(execRenameColorSnippetTag); \
	DECLARE_FUNCTION(execClearAllAvailableColorSnippetCacheTagContainer); \
	DECLARE_FUNCTION(execRemoveColorSnippetTag); \
	DECLARE_FUNCTION(execGetAllColorSnippetTagsDirectlyFromIni); \
	DECLARE_FUNCTION(execDoesColorSnippetTagExist); \
	DECLARE_FUNCTION(execAddColorSnippetTag); \
	DECLARE_FUNCTION(execLoadEssentialDataAssets); \
	DECLARE_FUNCTION(execSetCustomSettingsVertexPaintColorSnippetReferenceDataAssetToUse); \
	DECLARE_FUNCTION(execSetCustomSettingsVertexPaintMaterialToUse); \
	DECLARE_FUNCTION(execSetCustomSettingsOptimizationsDataAssetToUse); \
	DECLARE_FUNCTION(execGetPersistentLevelsWorld_Wrapper); \
	DECLARE_FUNCTION(execGetStaticMeshComponentVertexCount_Wrapper); \
	DECLARE_FUNCTION(execGetSkeletalMeshComponentVertexCount_Wrapper); \
	DECLARE_FUNCTION(execGetSkeletalMeshLODCount_Wrapper); \
	DECLARE_FUNCTION(execGetStaticMeshLODCount_Wrapper); \
	DECLARE_FUNCTION(execGetSkeletalMeshVerticesAmount_Wrapper); \
	DECLARE_FUNCTION(execGetStaticMeshVerticesAmount_Wrapper); \
	DECLARE_FUNCTION(execRefreshColorSnippetAsRapidJsonString); \
	DECLARE_FUNCTION(execApplyVertexColorToMeshAtLOD0); \
	DECLARE_FUNCTION(execRemoveMeshColorSnippet); \
	DECLARE_FUNCTION(execUpdateMeshColorSnippetID); \
	DECLARE_FUNCTION(execMoveMeshColorSnippet); \
	DECLARE_FUNCTION(execAddMeshColorSnippet); \
	DECLARE_FUNCTION(execRemoveStaticMeshAndAmountOfLODsToPaintByDefault); \
	DECLARE_FUNCTION(execAddStaticMeshAndAmountOfLODsToPaintByDefault); \
	DECLARE_FUNCTION(execRemoveSkeletalMeshAmountOfLODsToPaintByDefault); \
	DECLARE_FUNCTION(execAddSkeletalMeshAmountOfLODsToPaintByDefault); \
	DECLARE_FUNCTION(execSavePackageWrapper); \
	DECLARE_FUNCTION(execSetEngineSpecificButtonSettings); \
	DECLARE_FUNCTION(execAddEditorNotification);


#define FID_build_U5M_Marketplace_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_VertexPaintDetectionPlugin_Source_VertexPaintDetectionPlugin_Editor_Public_VertexPaintDetectionEdSubsystem_h_24_ACCESSORS
#define FID_build_U5M_Marketplace_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_VertexPaintDetectionPlugin_Source_VertexPaintDetectionPlugin_Editor_Public_VertexPaintDetectionEdSubsystem_h_24_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUVertexPaintDetectionEdSubsystem(); \
	friend struct Z_Construct_UClass_UVertexPaintDetectionEdSubsystem_Statics; \
public: \
	DECLARE_CLASS(UVertexPaintDetectionEdSubsystem, UEditorSubsystem, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/VertexPaintDetectionPlugin_Editor"), NO_API) \
	DECLARE_SERIALIZER(UVertexPaintDetectionEdSubsystem)


#define FID_build_U5M_Marketplace_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_VertexPaintDetectionPlugin_Source_VertexPaintDetectionPlugin_Editor_Public_VertexPaintDetectionEdSubsystem_h_24_INCLASS \
private: \
	static void StaticRegisterNativesUVertexPaintDetectionEdSubsystem(); \
	friend struct Z_Construct_UClass_UVertexPaintDetectionEdSubsystem_Statics; \
public: \
	DECLARE_CLASS(UVertexPaintDetectionEdSubsystem, UEditorSubsystem, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/VertexPaintDetectionPlugin_Editor"), NO_API) \
	DECLARE_SERIALIZER(UVertexPaintDetectionEdSubsystem)


#define FID_build_U5M_Marketplace_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_VertexPaintDetectionPlugin_Source_VertexPaintDetectionPlugin_Editor_Public_VertexPaintDetectionEdSubsystem_h_24_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UVertexPaintDetectionEdSubsystem(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UVertexPaintDetectionEdSubsystem) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UVertexPaintDetectionEdSubsystem); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UVertexPaintDetectionEdSubsystem); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API UVertexPaintDetectionEdSubsystem(UVertexPaintDetectionEdSubsystem&&); \
	NO_API UVertexPaintDetectionEdSubsystem(const UVertexPaintDetectionEdSubsystem&); \
public: \
	NO_API virtual ~UVertexPaintDetectionEdSubsystem();


#define FID_build_U5M_Marketplace_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_VertexPaintDetectionPlugin_Source_VertexPaintDetectionPlugin_Editor_Public_VertexPaintDetectionEdSubsystem_h_24_ENHANCED_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UVertexPaintDetectionEdSubsystem() { }; \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API UVertexPaintDetectionEdSubsystem(UVertexPaintDetectionEdSubsystem&&); \
	NO_API UVertexPaintDetectionEdSubsystem(const UVertexPaintDetectionEdSubsystem&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UVertexPaintDetectionEdSubsystem); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UVertexPaintDetectionEdSubsystem); \
	DEFINE_DEFAULT_CONSTRUCTOR_CALL(UVertexPaintDetectionEdSubsystem) \
	NO_API virtual ~UVertexPaintDetectionEdSubsystem();


#define FID_build_U5M_Marketplace_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_VertexPaintDetectionPlugin_Source_VertexPaintDetectionPlugin_Editor_Public_VertexPaintDetectionEdSubsystem_h_21_PROLOG
#define FID_build_U5M_Marketplace_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_VertexPaintDetectionPlugin_Source_VertexPaintDetectionPlugin_Editor_Public_VertexPaintDetectionEdSubsystem_h_24_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_build_U5M_Marketplace_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_VertexPaintDetectionPlugin_Source_VertexPaintDetectionPlugin_Editor_Public_VertexPaintDetectionEdSubsystem_h_24_SPARSE_DATA \
	FID_build_U5M_Marketplace_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_VertexPaintDetectionPlugin_Source_VertexPaintDetectionPlugin_Editor_Public_VertexPaintDetectionEdSubsystem_h_24_RPC_WRAPPERS \
	FID_build_U5M_Marketplace_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_VertexPaintDetectionPlugin_Source_VertexPaintDetectionPlugin_Editor_Public_VertexPaintDetectionEdSubsystem_h_24_ACCESSORS \
	FID_build_U5M_Marketplace_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_VertexPaintDetectionPlugin_Source_VertexPaintDetectionPlugin_Editor_Public_VertexPaintDetectionEdSubsystem_h_24_INCLASS \
	FID_build_U5M_Marketplace_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_VertexPaintDetectionPlugin_Source_VertexPaintDetectionPlugin_Editor_Public_VertexPaintDetectionEdSubsystem_h_24_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define FID_build_U5M_Marketplace_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_VertexPaintDetectionPlugin_Source_VertexPaintDetectionPlugin_Editor_Public_VertexPaintDetectionEdSubsystem_h_24_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_build_U5M_Marketplace_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_VertexPaintDetectionPlugin_Source_VertexPaintDetectionPlugin_Editor_Public_VertexPaintDetectionEdSubsystem_h_24_SPARSE_DATA \
	FID_build_U5M_Marketplace_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_VertexPaintDetectionPlugin_Source_VertexPaintDetectionPlugin_Editor_Public_VertexPaintDetectionEdSubsystem_h_24_RPC_WRAPPERS_NO_PURE_DECLS \
	FID_build_U5M_Marketplace_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_VertexPaintDetectionPlugin_Source_VertexPaintDetectionPlugin_Editor_Public_VertexPaintDetectionEdSubsystem_h_24_ACCESSORS \
	FID_build_U5M_Marketplace_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_VertexPaintDetectionPlugin_Source_VertexPaintDetectionPlugin_Editor_Public_VertexPaintDetectionEdSubsystem_h_24_INCLASS_NO_PURE_DECLS \
	FID_build_U5M_Marketplace_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_VertexPaintDetectionPlugin_Source_VertexPaintDetectionPlugin_Editor_Public_VertexPaintDetectionEdSubsystem_h_24_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> VERTEXPAINTDETECTIONPLUGIN_EDITOR_API UClass* StaticClass<class UVertexPaintDetectionEdSubsystem>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_build_U5M_Marketplace_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_VertexPaintDetectionPlugin_Source_VertexPaintDetectionPlugin_Editor_Public_VertexPaintDetectionEdSubsystem_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
