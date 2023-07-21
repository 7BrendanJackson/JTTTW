// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "VertexPaintDetectionPlugin/Public/VertexPaintOptimizationDataAsset.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeVertexPaintOptimizationDataAsset() {}
// Cross Module References
	ENGINE_API UClass* Z_Construct_UClass_UDataAsset();
	ENGINE_API UClass* Z_Construct_UClass_USkeletalMesh_NoRegister();
	ENGINE_API UClass* Z_Construct_UClass_UStaticMesh_NoRegister();
	UPackage* Z_Construct_UPackage__Script_VertexPaintDetectionPlugin();
	VERTEXPAINTDETECTIONPLUGIN_API UClass* Z_Construct_UClass_UVertexPaintOptimizationDataAsset();
	VERTEXPAINTDETECTIONPLUGIN_API UClass* Z_Construct_UClass_UVertexPaintOptimizationDataAsset_NoRegister();
	VERTEXPAINTDETECTIONPLUGIN_API UScriptStruct* Z_Construct_UScriptStruct_FPaintOnLODSettingsStruct();
// End Cross Module References
	static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_PaintOnLODSettingsStruct;
class UScriptStruct* FPaintOnLODSettingsStruct::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_PaintOnLODSettingsStruct.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_PaintOnLODSettingsStruct.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FPaintOnLODSettingsStruct, Z_Construct_UPackage__Script_VertexPaintDetectionPlugin(), TEXT("PaintOnLODSettingsStruct"));
	}
	return Z_Registration_Info_UScriptStruct_PaintOnLODSettingsStruct.OuterSingleton;
}
template<> VERTEXPAINTDETECTIONPLUGIN_API UScriptStruct* StaticStruct<FPaintOnLODSettingsStruct>()
{
	return FPaintOnLODSettingsStruct::StaticStruct();
}
	struct Z_Construct_UScriptStruct_FPaintOnLODSettingsStruct_Statics
	{
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_maxAmountOfLODsToPaint_MetaData[];
#endif
		static const UECodeGen_Private::FUnsizedIntPropertyParams NewProp_maxAmountOfLODsToPaint;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UECodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FPaintOnLODSettingsStruct_Statics::Struct_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "Comment", "// Paint On LOD Settings Struct\n" },
		{ "ModuleRelativePath", "Public/VertexPaintOptimizationDataAsset.h" },
		{ "ToolTip", "Paint On LOD Settings Struct" },
	};
#endif
	void* Z_Construct_UScriptStruct_FPaintOnLODSettingsStruct_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FPaintOnLODSettingsStruct>();
	}
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FPaintOnLODSettingsStruct_Statics::NewProp_maxAmountOfLODsToPaint_MetaData[] = {
		{ "Category", "Runtime Vertex Color Paint and Detection Plugin" },
		{ "ModuleRelativePath", "Public/VertexPaintOptimizationDataAsset.h" },
	};
#endif
	const UECodeGen_Private::FUnsizedIntPropertyParams Z_Construct_UScriptStruct_FPaintOnLODSettingsStruct_Statics::NewProp_maxAmountOfLODsToPaint = { "maxAmountOfLODsToPaint", nullptr, (EPropertyFlags)0x0010000000020005, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FPaintOnLODSettingsStruct, maxAmountOfLODsToPaint), METADATA_PARAMS(Z_Construct_UScriptStruct_FPaintOnLODSettingsStruct_Statics::NewProp_maxAmountOfLODsToPaint_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FPaintOnLODSettingsStruct_Statics::NewProp_maxAmountOfLODsToPaint_MetaData)) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FPaintOnLODSettingsStruct_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FPaintOnLODSettingsStruct_Statics::NewProp_maxAmountOfLODsToPaint,
	};
	const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FPaintOnLODSettingsStruct_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_VertexPaintDetectionPlugin,
		nullptr,
		&NewStructOps,
		"PaintOnLODSettingsStruct",
		sizeof(FPaintOnLODSettingsStruct),
		alignof(FPaintOnLODSettingsStruct),
		Z_Construct_UScriptStruct_FPaintOnLODSettingsStruct_Statics::PropPointers,
		UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FPaintOnLODSettingsStruct_Statics::PropPointers),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000001),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FPaintOnLODSettingsStruct_Statics::Struct_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FPaintOnLODSettingsStruct_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FPaintOnLODSettingsStruct()
	{
		if (!Z_Registration_Info_UScriptStruct_PaintOnLODSettingsStruct.InnerSingleton)
		{
			UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_PaintOnLODSettingsStruct.InnerSingleton, Z_Construct_UScriptStruct_FPaintOnLODSettingsStruct_Statics::ReturnStructParams);
		}
		return Z_Registration_Info_UScriptStruct_PaintOnLODSettingsStruct.InnerSingleton;
	}
	void UVertexPaintOptimizationDataAsset::StaticRegisterNativesUVertexPaintOptimizationDataAsset()
	{
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UVertexPaintOptimizationDataAsset);
	UClass* Z_Construct_UClass_UVertexPaintOptimizationDataAsset_NoRegister()
	{
		return UVertexPaintOptimizationDataAsset::StaticClass();
	}
	struct Z_Construct_UClass_UVertexPaintOptimizationDataAsset_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_staticMeshNumOfLODsToPaint_ValueProp;
		static const UECodeGen_Private::FObjectPropertyParams NewProp_staticMeshNumOfLODsToPaint_Key_KeyProp;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_staticMeshNumOfLODsToPaint_MetaData[];
#endif
		static const UECodeGen_Private::FMapPropertyParams NewProp_staticMeshNumOfLODsToPaint;
		static const UECodeGen_Private::FStructPropertyParams NewProp_skeletalMeshNumOfLODsToPaint_ValueProp;
		static const UECodeGen_Private::FObjectPropertyParams NewProp_skeletalMeshNumOfLODsToPaint_Key_KeyProp;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_skeletalMeshNumOfLODsToPaint_MetaData[];
#endif
		static const UECodeGen_Private::FMapPropertyParams NewProp_skeletalMeshNumOfLODsToPaint;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UVertexPaintOptimizationDataAsset_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UDataAsset,
		(UObject* (*)())Z_Construct_UPackage__Script_VertexPaintDetectionPlugin,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UVertexPaintOptimizationDataAsset_Statics::Class_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "Comment", "//-------------------------------------------------------\n" },
		{ "IncludePath", "VertexPaintOptimizationDataAsset.h" },
		{ "IsBlueprintBase", "true" },
		{ "ModuleRelativePath", "Public/VertexPaintOptimizationDataAsset.h" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_UVertexPaintOptimizationDataAsset_Statics::NewProp_staticMeshNumOfLODsToPaint_ValueProp = { "staticMeshNumOfLODsToPaint", nullptr, (EPropertyFlags)0x0000000000020001, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, 1, Z_Construct_UScriptStruct_FPaintOnLODSettingsStruct, METADATA_PARAMS(nullptr, 0) }; // 1361368832
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UVertexPaintOptimizationDataAsset_Statics::NewProp_staticMeshNumOfLODsToPaint_Key_KeyProp = { "staticMeshNumOfLODsToPaint_Key", nullptr, (EPropertyFlags)0x0000000000020001, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, 0, Z_Construct_UClass_UStaticMesh_NoRegister, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UVertexPaintOptimizationDataAsset_Statics::NewProp_staticMeshNumOfLODsToPaint_MetaData[] = {
		{ "Category", "Runtime Vertex Color Paint and Detection Plugin|Optimization|Paint on LODs" },
		{ "ModuleRelativePath", "Public/VertexPaintOptimizationDataAsset.h" },
		{ "ToolTip", "How many LODs to Paint on Static Meshes that are Added here, given that it has that many LODs. Also if the amount set is the max amount that should be stored. Meshes that aren't added here will be painted on all their LODs." },
	};
#endif
	const UECodeGen_Private::FMapPropertyParams Z_Construct_UClass_UVertexPaintOptimizationDataAsset_Statics::NewProp_staticMeshNumOfLODsToPaint = { "staticMeshNumOfLODsToPaint", nullptr, (EPropertyFlags)0x0010000000020015, UECodeGen_Private::EPropertyGenFlags::Map, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UVertexPaintOptimizationDataAsset, staticMeshNumOfLODsToPaint), EMapPropertyFlags::None, METADATA_PARAMS(Z_Construct_UClass_UVertexPaintOptimizationDataAsset_Statics::NewProp_staticMeshNumOfLODsToPaint_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UVertexPaintOptimizationDataAsset_Statics::NewProp_staticMeshNumOfLODsToPaint_MetaData)) }; // 1361368832
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_UVertexPaintOptimizationDataAsset_Statics::NewProp_skeletalMeshNumOfLODsToPaint_ValueProp = { "skeletalMeshNumOfLODsToPaint", nullptr, (EPropertyFlags)0x0000000000020001, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, 1, Z_Construct_UScriptStruct_FPaintOnLODSettingsStruct, METADATA_PARAMS(nullptr, 0) }; // 1361368832
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UVertexPaintOptimizationDataAsset_Statics::NewProp_skeletalMeshNumOfLODsToPaint_Key_KeyProp = { "skeletalMeshNumOfLODsToPaint_Key", nullptr, (EPropertyFlags)0x0000000000020001, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, 0, Z_Construct_UClass_USkeletalMesh_NoRegister, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UVertexPaintOptimizationDataAsset_Statics::NewProp_skeletalMeshNumOfLODsToPaint_MetaData[] = {
		{ "Category", "Runtime Vertex Color Paint and Detection Plugin|Optimization|Paint on LODs" },
		{ "ModuleRelativePath", "Public/VertexPaintOptimizationDataAsset.h" },
		{ "ToolTip", "How many LODs to Paint on Static Meshes that are Added here, given that it has that many LODs. Also if the amount set is the max amount that should be stored. Meshes that aren't added here will be painted on all their LODs." },
	};
#endif
	const UECodeGen_Private::FMapPropertyParams Z_Construct_UClass_UVertexPaintOptimizationDataAsset_Statics::NewProp_skeletalMeshNumOfLODsToPaint = { "skeletalMeshNumOfLODsToPaint", nullptr, (EPropertyFlags)0x0010000000020015, UECodeGen_Private::EPropertyGenFlags::Map, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UVertexPaintOptimizationDataAsset, skeletalMeshNumOfLODsToPaint), EMapPropertyFlags::None, METADATA_PARAMS(Z_Construct_UClass_UVertexPaintOptimizationDataAsset_Statics::NewProp_skeletalMeshNumOfLODsToPaint_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UVertexPaintOptimizationDataAsset_Statics::NewProp_skeletalMeshNumOfLODsToPaint_MetaData)) }; // 1361368832
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UVertexPaintOptimizationDataAsset_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UVertexPaintOptimizationDataAsset_Statics::NewProp_staticMeshNumOfLODsToPaint_ValueProp,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UVertexPaintOptimizationDataAsset_Statics::NewProp_staticMeshNumOfLODsToPaint_Key_KeyProp,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UVertexPaintOptimizationDataAsset_Statics::NewProp_staticMeshNumOfLODsToPaint,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UVertexPaintOptimizationDataAsset_Statics::NewProp_skeletalMeshNumOfLODsToPaint_ValueProp,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UVertexPaintOptimizationDataAsset_Statics::NewProp_skeletalMeshNumOfLODsToPaint_Key_KeyProp,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UVertexPaintOptimizationDataAsset_Statics::NewProp_skeletalMeshNumOfLODsToPaint,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_UVertexPaintOptimizationDataAsset_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UVertexPaintOptimizationDataAsset>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_UVertexPaintOptimizationDataAsset_Statics::ClassParams = {
		&UVertexPaintOptimizationDataAsset::StaticClass,
		nullptr,
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		Z_Construct_UClass_UVertexPaintOptimizationDataAsset_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		0,
		UE_ARRAY_COUNT(Z_Construct_UClass_UVertexPaintOptimizationDataAsset_Statics::PropPointers),
		0,
		0x001000A0u,
		METADATA_PARAMS(Z_Construct_UClass_UVertexPaintOptimizationDataAsset_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UVertexPaintOptimizationDataAsset_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UVertexPaintOptimizationDataAsset()
	{
		if (!Z_Registration_Info_UClass_UVertexPaintOptimizationDataAsset.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UVertexPaintOptimizationDataAsset.OuterSingleton, Z_Construct_UClass_UVertexPaintOptimizationDataAsset_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_UVertexPaintOptimizationDataAsset.OuterSingleton;
	}
	template<> VERTEXPAINTDETECTIONPLUGIN_API UClass* StaticClass<UVertexPaintOptimizationDataAsset>()
	{
		return UVertexPaintOptimizationDataAsset::StaticClass();
	}
	DEFINE_VTABLE_PTR_HELPER_CTOR(UVertexPaintOptimizationDataAsset);
	UVertexPaintOptimizationDataAsset::~UVertexPaintOptimizationDataAsset() {}
	struct Z_CompiledInDeferFile_FID_build_U5M_Marketplace_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_VertexPaintDetectionPlugin_Source_VertexPaintDetectionPlugin_Public_VertexPaintOptimizationDataAsset_h_Statics
	{
		static const FStructRegisterCompiledInInfo ScriptStructInfo[];
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FStructRegisterCompiledInInfo Z_CompiledInDeferFile_FID_build_U5M_Marketplace_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_VertexPaintDetectionPlugin_Source_VertexPaintDetectionPlugin_Public_VertexPaintOptimizationDataAsset_h_Statics::ScriptStructInfo[] = {
		{ FPaintOnLODSettingsStruct::StaticStruct, Z_Construct_UScriptStruct_FPaintOnLODSettingsStruct_Statics::NewStructOps, TEXT("PaintOnLODSettingsStruct"), &Z_Registration_Info_UScriptStruct_PaintOnLODSettingsStruct, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FPaintOnLODSettingsStruct), 1361368832U) },
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_build_U5M_Marketplace_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_VertexPaintDetectionPlugin_Source_VertexPaintDetectionPlugin_Public_VertexPaintOptimizationDataAsset_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_UVertexPaintOptimizationDataAsset, UVertexPaintOptimizationDataAsset::StaticClass, TEXT("UVertexPaintOptimizationDataAsset"), &Z_Registration_Info_UClass_UVertexPaintOptimizationDataAsset, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UVertexPaintOptimizationDataAsset), 571371215U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_build_U5M_Marketplace_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_VertexPaintDetectionPlugin_Source_VertexPaintDetectionPlugin_Public_VertexPaintOptimizationDataAsset_h_793948745(TEXT("/Script/VertexPaintDetectionPlugin"),
		Z_CompiledInDeferFile_FID_build_U5M_Marketplace_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_VertexPaintDetectionPlugin_Source_VertexPaintDetectionPlugin_Public_VertexPaintOptimizationDataAsset_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_build_U5M_Marketplace_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_VertexPaintDetectionPlugin_Source_VertexPaintDetectionPlugin_Public_VertexPaintOptimizationDataAsset_h_Statics::ClassInfo),
		Z_CompiledInDeferFile_FID_build_U5M_Marketplace_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_VertexPaintDetectionPlugin_Source_VertexPaintDetectionPlugin_Public_VertexPaintOptimizationDataAsset_h_Statics::ScriptStructInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_build_U5M_Marketplace_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_VertexPaintDetectionPlugin_Source_VertexPaintDetectionPlugin_Public_VertexPaintOptimizationDataAsset_h_Statics::ScriptStructInfo),
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
