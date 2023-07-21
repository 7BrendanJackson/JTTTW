// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "RapidJsonModule/Public/CustomStructSerializationExample.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeCustomStructSerializationExample() {}
// Cross Module References
	ENGINE_API UClass* Z_Construct_UClass_AActor();
	RAPIDJSONMODULE_API UClass* Z_Construct_UClass_ACustomStructSerializationExample();
	RAPIDJSONMODULE_API UClass* Z_Construct_UClass_ACustomStructSerializationExample_NoRegister();
	RAPIDJSONMODULE_API UScriptStruct* Z_Construct_UScriptStruct_FCustomStructSerialization();
	RAPIDJSONMODULE_API UScriptStruct* Z_Construct_UScriptStruct_FMyCustomStruct();
	UPackage* Z_Construct_UPackage__Script_RapidJsonModule();
// End Cross Module References

static_assert(std::is_polymorphic<FMyCustomStruct>() == std::is_polymorphic<FCustomStructSerialization>(), "USTRUCT FMyCustomStruct cannot be polymorphic unless super FCustomStructSerialization is polymorphic");

	static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_MyCustomStruct;
class UScriptStruct* FMyCustomStruct::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_MyCustomStruct.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_MyCustomStruct.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FMyCustomStruct, Z_Construct_UPackage__Script_RapidJsonModule(), TEXT("MyCustomStruct"));
	}
	return Z_Registration_Info_UScriptStruct_MyCustomStruct.OuterSingleton;
}
template<> RAPIDJSONMODULE_API UScriptStruct* StaticStruct<FMyCustomStruct>()
{
	return FMyCustomStruct::StaticStruct();
}
	struct Z_Construct_UScriptStruct_FMyCustomStruct_Statics
	{
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Name_MetaData[];
#endif
		static const UECodeGen_Private::FStrPropertyParams NewProp_Name;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Age_MetaData[];
#endif
		static const UECodeGen_Private::FIntPropertyParams NewProp_Age;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UECodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FMyCustomStruct_Statics::Struct_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "ModuleRelativePath", "Public/CustomStructSerializationExample.h" },
	};
#endif
	void* Z_Construct_UScriptStruct_FMyCustomStruct_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FMyCustomStruct>();
	}
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FMyCustomStruct_Statics::NewProp_Name_MetaData[] = {
		{ "Category", "Custom Struct Serialization Example" },
		{ "ModuleRelativePath", "Public/CustomStructSerializationExample.h" },
	};
#endif
	const UECodeGen_Private::FStrPropertyParams Z_Construct_UScriptStruct_FMyCustomStruct_Statics::NewProp_Name = { "Name", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FMyCustomStruct, Name), METADATA_PARAMS(Z_Construct_UScriptStruct_FMyCustomStruct_Statics::NewProp_Name_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FMyCustomStruct_Statics::NewProp_Name_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FMyCustomStruct_Statics::NewProp_Age_MetaData[] = {
		{ "Category", "Custom Struct Serialization Example" },
		{ "ModuleRelativePath", "Public/CustomStructSerializationExample.h" },
	};
#endif
	const UECodeGen_Private::FIntPropertyParams Z_Construct_UScriptStruct_FMyCustomStruct_Statics::NewProp_Age = { "Age", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FMyCustomStruct, Age), METADATA_PARAMS(Z_Construct_UScriptStruct_FMyCustomStruct_Statics::NewProp_Age_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FMyCustomStruct_Statics::NewProp_Age_MetaData)) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FMyCustomStruct_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FMyCustomStruct_Statics::NewProp_Name,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FMyCustomStruct_Statics::NewProp_Age,
	};
	const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FMyCustomStruct_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_RapidJsonModule,
		Z_Construct_UScriptStruct_FCustomStructSerialization,
		&NewStructOps,
		"MyCustomStruct",
		sizeof(FMyCustomStruct),
		alignof(FMyCustomStruct),
		Z_Construct_UScriptStruct_FMyCustomStruct_Statics::PropPointers,
		UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FMyCustomStruct_Statics::PropPointers),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000001),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FMyCustomStruct_Statics::Struct_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FMyCustomStruct_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FMyCustomStruct()
	{
		if (!Z_Registration_Info_UScriptStruct_MyCustomStruct.InnerSingleton)
		{
			UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_MyCustomStruct.InnerSingleton, Z_Construct_UScriptStruct_FMyCustomStruct_Statics::ReturnStructParams);
		}
		return Z_Registration_Info_UScriptStruct_MyCustomStruct.InnerSingleton;
	}
	void ACustomStructSerializationExample::StaticRegisterNativesACustomStructSerializationExample()
	{
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(ACustomStructSerializationExample);
	UClass* Z_Construct_UClass_ACustomStructSerializationExample_NoRegister()
	{
		return ACustomStructSerializationExample::StaticClass();
	}
	struct Z_Construct_UClass_ACustomStructSerializationExample_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_ACustomStructSerializationExample_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_AActor,
		(UObject* (*)())Z_Construct_UPackage__Script_RapidJsonModule,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ACustomStructSerializationExample_Statics::Class_MetaDataParams[] = {
		{ "IncludePath", "CustomStructSerializationExample.h" },
		{ "ModuleRelativePath", "Public/CustomStructSerializationExample.h" },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_ACustomStructSerializationExample_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<ACustomStructSerializationExample>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_ACustomStructSerializationExample_Statics::ClassParams = {
		&ACustomStructSerializationExample::StaticClass,
		"Engine",
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		nullptr,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		0,
		0,
		0,
		0x009000A4u,
		METADATA_PARAMS(Z_Construct_UClass_ACustomStructSerializationExample_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_ACustomStructSerializationExample_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_ACustomStructSerializationExample()
	{
		if (!Z_Registration_Info_UClass_ACustomStructSerializationExample.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_ACustomStructSerializationExample.OuterSingleton, Z_Construct_UClass_ACustomStructSerializationExample_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_ACustomStructSerializationExample.OuterSingleton;
	}
	template<> RAPIDJSONMODULE_API UClass* StaticClass<ACustomStructSerializationExample>()
	{
		return ACustomStructSerializationExample::StaticClass();
	}
	DEFINE_VTABLE_PTR_HELPER_CTOR(ACustomStructSerializationExample);
	ACustomStructSerializationExample::~ACustomStructSerializationExample() {}
	struct Z_CompiledInDeferFile_FID_Build_U5M_Marketplace_Mac_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_VertexPaintDetectionPlugin_Source_RapidJsonModule_Public_CustomStructSerializationExample_h_Statics
	{
		static const FStructRegisterCompiledInInfo ScriptStructInfo[];
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FStructRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Build_U5M_Marketplace_Mac_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_VertexPaintDetectionPlugin_Source_RapidJsonModule_Public_CustomStructSerializationExample_h_Statics::ScriptStructInfo[] = {
		{ FMyCustomStruct::StaticStruct, Z_Construct_UScriptStruct_FMyCustomStruct_Statics::NewStructOps, TEXT("MyCustomStruct"), &Z_Registration_Info_UScriptStruct_MyCustomStruct, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FMyCustomStruct), 2859105008U) },
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Build_U5M_Marketplace_Mac_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_VertexPaintDetectionPlugin_Source_RapidJsonModule_Public_CustomStructSerializationExample_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_ACustomStructSerializationExample, ACustomStructSerializationExample::StaticClass, TEXT("ACustomStructSerializationExample"), &Z_Registration_Info_UClass_ACustomStructSerializationExample, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(ACustomStructSerializationExample), 2411521776U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Build_U5M_Marketplace_Mac_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_VertexPaintDetectionPlugin_Source_RapidJsonModule_Public_CustomStructSerializationExample_h_626315303(TEXT("/Script/RapidJsonModule"),
		Z_CompiledInDeferFile_FID_Build_U5M_Marketplace_Mac_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_VertexPaintDetectionPlugin_Source_RapidJsonModule_Public_CustomStructSerializationExample_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Build_U5M_Marketplace_Mac_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_VertexPaintDetectionPlugin_Source_RapidJsonModule_Public_CustomStructSerializationExample_h_Statics::ClassInfo),
		Z_CompiledInDeferFile_FID_Build_U5M_Marketplace_Mac_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_VertexPaintDetectionPlugin_Source_RapidJsonModule_Public_CustomStructSerializationExample_h_Statics::ScriptStructInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Build_U5M_Marketplace_Mac_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_VertexPaintDetectionPlugin_Source_RapidJsonModule_Public_CustomStructSerializationExample_h_Statics::ScriptStructInfo),
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
