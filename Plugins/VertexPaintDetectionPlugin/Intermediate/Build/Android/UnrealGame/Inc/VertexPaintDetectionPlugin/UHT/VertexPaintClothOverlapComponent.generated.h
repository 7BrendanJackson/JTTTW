// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "VertexPaintClothOverlapComponent.h"
#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
#ifdef VERTEXPAINTDETECTIONPLUGIN_VertexPaintClothOverlapComponent_generated_h
#error "VertexPaintClothOverlapComponent.generated.h already included, missing '#pragma once' in VertexPaintClothOverlapComponent.h"
#endif
#define VERTEXPAINTDETECTIONPLUGIN_VertexPaintClothOverlapComponent_generated_h

#define FID_build_U5M_Marketplace_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_VertexPaintDetectionPlugin_Source_VertexPaintDetectionPlugin_Public_VertexPaintClothOverlapComponent_h_18_GENERATED_BODY \
	friend struct Z_Construct_UScriptStruct_FVertexPaintClothOverlapComponentsStruct_Statics; \
	VERTEXPAINTDETECTIONPLUGIN_API static class UScriptStruct* StaticStruct();


template<> VERTEXPAINTDETECTIONPLUGIN_API UScriptStruct* StaticStruct<struct FVertexPaintClothOverlapComponentsStruct>();

#define FID_build_U5M_Marketplace_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_VertexPaintDetectionPlugin_Source_VertexPaintDetectionPlugin_Public_VertexPaintClothOverlapComponent_h_27_SPARSE_DATA
#define FID_build_U5M_Marketplace_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_VertexPaintDetectionPlugin_Source_VertexPaintDetectionPlugin_Public_VertexPaintClothOverlapComponent_h_27_RPC_WRAPPERS \
 \
	DECLARE_FUNCTION(execOnRep_ClothOverlapTracingEnabledRep); \
	DECLARE_FUNCTION(execSetClothOverlapTracingEnabled); \
	DECLARE_FUNCTION(execSetClothObjectsToSphereTrace); \
	DECLARE_FUNCTION(execGetClothObjectsToSphereTrace);


#define FID_build_U5M_Marketplace_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_VertexPaintDetectionPlugin_Source_VertexPaintDetectionPlugin_Public_VertexPaintClothOverlapComponent_h_27_RPC_WRAPPERS_NO_PURE_DECLS \
 \
	DECLARE_FUNCTION(execOnRep_ClothOverlapTracingEnabledRep); \
	DECLARE_FUNCTION(execSetClothOverlapTracingEnabled); \
	DECLARE_FUNCTION(execSetClothObjectsToSphereTrace); \
	DECLARE_FUNCTION(execGetClothObjectsToSphereTrace);


#define FID_build_U5M_Marketplace_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_VertexPaintDetectionPlugin_Source_VertexPaintDetectionPlugin_Public_VertexPaintClothOverlapComponent_h_27_ACCESSORS
#define FID_build_U5M_Marketplace_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_VertexPaintDetectionPlugin_Source_VertexPaintDetectionPlugin_Public_VertexPaintClothOverlapComponent_h_27_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUVertexPaintClothOverlapComponent(); \
	friend struct Z_Construct_UClass_UVertexPaintClothOverlapComponent_Statics; \
public: \
	DECLARE_CLASS(UVertexPaintClothOverlapComponent, USceneComponent, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/VertexPaintDetectionPlugin"), NO_API) \
	DECLARE_SERIALIZER(UVertexPaintClothOverlapComponent) \
	enum class ENetFields_Private : uint16 \
	{ \
		NETFIELD_REP_START=(uint16)((int32)Super::ENetFields_Private::NETFIELD_REP_END + (int32)1), \
		clothOverlapTracingEnabled=NETFIELD_REP_START, \
		NETFIELD_REP_END=clothOverlapTracingEnabled	}; \
	NO_API virtual void ValidateGeneratedRepEnums(const TArray<struct FRepRecord>& ClassReps) const override;


#define FID_build_U5M_Marketplace_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_VertexPaintDetectionPlugin_Source_VertexPaintDetectionPlugin_Public_VertexPaintClothOverlapComponent_h_27_INCLASS \
private: \
	static void StaticRegisterNativesUVertexPaintClothOverlapComponent(); \
	friend struct Z_Construct_UClass_UVertexPaintClothOverlapComponent_Statics; \
public: \
	DECLARE_CLASS(UVertexPaintClothOverlapComponent, USceneComponent, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/VertexPaintDetectionPlugin"), NO_API) \
	DECLARE_SERIALIZER(UVertexPaintClothOverlapComponent) \
	enum class ENetFields_Private : uint16 \
	{ \
		NETFIELD_REP_START=(uint16)((int32)Super::ENetFields_Private::NETFIELD_REP_END + (int32)1), \
		clothOverlapTracingEnabled=NETFIELD_REP_START, \
		NETFIELD_REP_END=clothOverlapTracingEnabled	}; \
	NO_API virtual void ValidateGeneratedRepEnums(const TArray<struct FRepRecord>& ClassReps) const override;


#define FID_build_U5M_Marketplace_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_VertexPaintDetectionPlugin_Source_VertexPaintDetectionPlugin_Public_VertexPaintClothOverlapComponent_h_27_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UVertexPaintClothOverlapComponent(const FObjectInitializer& ObjectInitializer); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UVertexPaintClothOverlapComponent) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UVertexPaintClothOverlapComponent); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UVertexPaintClothOverlapComponent); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API UVertexPaintClothOverlapComponent(UVertexPaintClothOverlapComponent&&); \
	NO_API UVertexPaintClothOverlapComponent(const UVertexPaintClothOverlapComponent&); \
public: \
	NO_API virtual ~UVertexPaintClothOverlapComponent();


#define FID_build_U5M_Marketplace_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_VertexPaintDetectionPlugin_Source_VertexPaintDetectionPlugin_Public_VertexPaintClothOverlapComponent_h_27_ENHANCED_CONSTRUCTORS \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API UVertexPaintClothOverlapComponent(UVertexPaintClothOverlapComponent&&); \
	NO_API UVertexPaintClothOverlapComponent(const UVertexPaintClothOverlapComponent&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UVertexPaintClothOverlapComponent); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UVertexPaintClothOverlapComponent); \
	DEFINE_DEFAULT_CONSTRUCTOR_CALL(UVertexPaintClothOverlapComponent) \
	NO_API virtual ~UVertexPaintClothOverlapComponent();


#define FID_build_U5M_Marketplace_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_VertexPaintDetectionPlugin_Source_VertexPaintDetectionPlugin_Public_VertexPaintClothOverlapComponent_h_24_PROLOG
#define FID_build_U5M_Marketplace_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_VertexPaintDetectionPlugin_Source_VertexPaintDetectionPlugin_Public_VertexPaintClothOverlapComponent_h_27_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_build_U5M_Marketplace_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_VertexPaintDetectionPlugin_Source_VertexPaintDetectionPlugin_Public_VertexPaintClothOverlapComponent_h_27_SPARSE_DATA \
	FID_build_U5M_Marketplace_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_VertexPaintDetectionPlugin_Source_VertexPaintDetectionPlugin_Public_VertexPaintClothOverlapComponent_h_27_RPC_WRAPPERS \
	FID_build_U5M_Marketplace_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_VertexPaintDetectionPlugin_Source_VertexPaintDetectionPlugin_Public_VertexPaintClothOverlapComponent_h_27_ACCESSORS \
	FID_build_U5M_Marketplace_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_VertexPaintDetectionPlugin_Source_VertexPaintDetectionPlugin_Public_VertexPaintClothOverlapComponent_h_27_INCLASS \
	FID_build_U5M_Marketplace_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_VertexPaintDetectionPlugin_Source_VertexPaintDetectionPlugin_Public_VertexPaintClothOverlapComponent_h_27_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define FID_build_U5M_Marketplace_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_VertexPaintDetectionPlugin_Source_VertexPaintDetectionPlugin_Public_VertexPaintClothOverlapComponent_h_27_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_build_U5M_Marketplace_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_VertexPaintDetectionPlugin_Source_VertexPaintDetectionPlugin_Public_VertexPaintClothOverlapComponent_h_27_SPARSE_DATA \
	FID_build_U5M_Marketplace_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_VertexPaintDetectionPlugin_Source_VertexPaintDetectionPlugin_Public_VertexPaintClothOverlapComponent_h_27_RPC_WRAPPERS_NO_PURE_DECLS \
	FID_build_U5M_Marketplace_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_VertexPaintDetectionPlugin_Source_VertexPaintDetectionPlugin_Public_VertexPaintClothOverlapComponent_h_27_ACCESSORS \
	FID_build_U5M_Marketplace_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_VertexPaintDetectionPlugin_Source_VertexPaintDetectionPlugin_Public_VertexPaintClothOverlapComponent_h_27_INCLASS_NO_PURE_DECLS \
	FID_build_U5M_Marketplace_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_VertexPaintDetectionPlugin_Source_VertexPaintDetectionPlugin_Public_VertexPaintClothOverlapComponent_h_27_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> VERTEXPAINTDETECTIONPLUGIN_API UClass* StaticClass<class UVertexPaintClothOverlapComponent>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_build_U5M_Marketplace_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_VertexPaintDetectionPlugin_Source_VertexPaintDetectionPlugin_Public_VertexPaintClothOverlapComponent_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
