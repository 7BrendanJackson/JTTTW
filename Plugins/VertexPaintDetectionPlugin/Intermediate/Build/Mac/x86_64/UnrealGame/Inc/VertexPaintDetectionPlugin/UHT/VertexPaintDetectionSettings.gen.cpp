// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "VertexPaintDetectionPlugin/Public/VertexPaintDetectionSettings.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeVertexPaintDetectionSettings() {}
// Cross Module References
	DEVELOPERSETTINGS_API UClass* Z_Construct_UClass_UDeveloperSettings();
	UPackage* Z_Construct_UPackage__Script_VertexPaintDetectionPlugin();
	VERTEXPAINTDETECTIONPLUGIN_API UClass* Z_Construct_UClass_UVertexPaintColorSnippetRefs_NoRegister();
	VERTEXPAINTDETECTIONPLUGIN_API UClass* Z_Construct_UClass_UVertexPaintDetectionSettings();
	VERTEXPAINTDETECTIONPLUGIN_API UClass* Z_Construct_UClass_UVertexPaintDetectionSettings_NoRegister();
	VERTEXPAINTDETECTIONPLUGIN_API UClass* Z_Construct_UClass_UVertexPaintMaterialDataAsset_NoRegister();
	VERTEXPAINTDETECTIONPLUGIN_API UClass* Z_Construct_UClass_UVertexPaintOptimizationDataAsset_NoRegister();
// End Cross Module References
	void UVertexPaintDetectionSettings::StaticRegisterNativesUVertexPaintDetectionSettings()
	{
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UVertexPaintDetectionSettings);
	UClass* Z_Construct_UClass_UVertexPaintDetectionSettings_NoRegister()
	{
		return UVertexPaintDetectionSettings::StaticClass();
	}
	struct Z_Construct_UClass_UVertexPaintDetectionSettings_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_vertexPaintAndDetectionPlugin_OptimizationDataAssetToUse_MetaData[];
#endif
		static const UECodeGen_Private::FSoftObjectPropertyParams NewProp_vertexPaintAndDetectionPlugin_OptimizationDataAssetToUse;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_vertexPaintAndDetectionPlugin_MaterialsDataAssetToUse_MetaData[];
#endif
		static const UECodeGen_Private::FSoftObjectPropertyParams NewProp_vertexPaintAndDetectionPlugin_MaterialsDataAssetToUse;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_vertexPaintAndDetectionPlugin_ColorSnippetReferencesDataAssetToUse_MetaData[];
#endif
		static const UECodeGen_Private::FSoftObjectPropertyParams NewProp_vertexPaintAndDetectionPlugin_ColorSnippetReferencesDataAssetToUse;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_vertexPaintAndDetectionPlugin_EditorWidgetNotificationEnabled_MetaData[];
#endif
		static void NewProp_vertexPaintAndDetectionPlugin_EditorWidgetNotificationEnabled_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_vertexPaintAndDetectionPlugin_EditorWidgetNotificationEnabled;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_vertexPaintAndDetectionPlugin_EditorWidgetNotificationDuration_MetaData[];
#endif
		static const UECodeGen_Private::FFloatPropertyParams NewProp_vertexPaintAndDetectionPlugin_EditorWidgetNotificationDuration;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_vertexPaintAndDetectionPlugin_MaxAmountOfAllowedTasksPerMesh_MetaData[];
#endif
		static const UECodeGen_Private::FUnsizedIntPropertyParams NewProp_vertexPaintAndDetectionPlugin_MaxAmountOfAllowedTasksPerMesh;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UVertexPaintDetectionSettings_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UDeveloperSettings,
		(UObject* (*)())Z_Construct_UPackage__Script_VertexPaintDetectionPlugin,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UVertexPaintDetectionSettings_Statics::Class_MetaDataParams[] = {
		{ "Comment", "/**\n *\n */" },
		{ "DisplayName", "Runtime Vertex Color Paint and Detection Plugin Settings" },
		{ "IncludePath", "VertexPaintDetectionSettings.h" },
		{ "ModuleRelativePath", "Public/VertexPaintDetectionSettings.h" },
	};
#endif
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UVertexPaintDetectionSettings_Statics::NewProp_vertexPaintAndDetectionPlugin_OptimizationDataAssetToUse_MetaData[] = {
		{ "Category", "Runtime Vertex Color Paint and Detection Plugin" },
		{ "ModuleRelativePath", "Public/VertexPaintDetectionSettings.h" },
		{ "ToolTip", "Which Optimization Data Asset we should use when painting. Meshes that are registered in it are only painted on those amounts of LODs which can save alot of performance. \nThis can be changed in the Editor Widget." },
	};
#endif
	const UECodeGen_Private::FSoftObjectPropertyParams Z_Construct_UClass_UVertexPaintDetectionSettings_Statics::NewProp_vertexPaintAndDetectionPlugin_OptimizationDataAssetToUse = { "vertexPaintAndDetectionPlugin_OptimizationDataAssetToUse", nullptr, (EPropertyFlags)0x0014000000024015, UECodeGen_Private::EPropertyGenFlags::SoftObject, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UVertexPaintDetectionSettings, vertexPaintAndDetectionPlugin_OptimizationDataAssetToUse), Z_Construct_UClass_UVertexPaintOptimizationDataAsset_NoRegister, METADATA_PARAMS(Z_Construct_UClass_UVertexPaintDetectionSettings_Statics::NewProp_vertexPaintAndDetectionPlugin_OptimizationDataAssetToUse_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UVertexPaintDetectionSettings_Statics::NewProp_vertexPaintAndDetectionPlugin_OptimizationDataAssetToUse_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UVertexPaintDetectionSettings_Statics::NewProp_vertexPaintAndDetectionPlugin_MaterialsDataAssetToUse_MetaData[] = {
		{ "Category", "Runtime Vertex Color Paint and Detection Plugin" },
		{ "ModuleRelativePath", "Public/VertexPaintDetectionSettings.h" },
		{ "ToolTip", "Which Vertex Paint Material Data Asset to use. This is the data asset you register your materials that use vertex colors that you want to detect what is on what channel etc. \nIf there is none set then you can't detect vertex data, you can only paint. \nThis can be changed in the Editor Widget." },
	};
#endif
	const UECodeGen_Private::FSoftObjectPropertyParams Z_Construct_UClass_UVertexPaintDetectionSettings_Statics::NewProp_vertexPaintAndDetectionPlugin_MaterialsDataAssetToUse = { "vertexPaintAndDetectionPlugin_MaterialsDataAssetToUse", nullptr, (EPropertyFlags)0x0014000000024015, UECodeGen_Private::EPropertyGenFlags::SoftObject, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UVertexPaintDetectionSettings, vertexPaintAndDetectionPlugin_MaterialsDataAssetToUse), Z_Construct_UClass_UVertexPaintMaterialDataAsset_NoRegister, METADATA_PARAMS(Z_Construct_UClass_UVertexPaintDetectionSettings_Statics::NewProp_vertexPaintAndDetectionPlugin_MaterialsDataAssetToUse_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UVertexPaintDetectionSettings_Statics::NewProp_vertexPaintAndDetectionPlugin_MaterialsDataAssetToUse_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UVertexPaintDetectionSettings_Statics::NewProp_vertexPaintAndDetectionPlugin_ColorSnippetReferencesDataAssetToUse_MetaData[] = {
		{ "Category", "Runtime Vertex Color Paint and Detection Plugin" },
		{ "ModuleRelativePath", "Public/VertexPaintDetectionSettings.h" },
		{ "ToolTip", "Which Data Asset to store references to Color Snippet Data Assets. Used so we can more optimally get which color snippet data asset to bring into memory so we don't have to go through them all in order to find a stored snippet. \nThis can be changed in the Editor Widget." },
	};
#endif
	const UECodeGen_Private::FSoftObjectPropertyParams Z_Construct_UClass_UVertexPaintDetectionSettings_Statics::NewProp_vertexPaintAndDetectionPlugin_ColorSnippetReferencesDataAssetToUse = { "vertexPaintAndDetectionPlugin_ColorSnippetReferencesDataAssetToUse", nullptr, (EPropertyFlags)0x0014000000024015, UECodeGen_Private::EPropertyGenFlags::SoftObject, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UVertexPaintDetectionSettings, vertexPaintAndDetectionPlugin_ColorSnippetReferencesDataAssetToUse), Z_Construct_UClass_UVertexPaintColorSnippetRefs_NoRegister, METADATA_PARAMS(Z_Construct_UClass_UVertexPaintDetectionSettings_Statics::NewProp_vertexPaintAndDetectionPlugin_ColorSnippetReferencesDataAssetToUse_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UVertexPaintDetectionSettings_Statics::NewProp_vertexPaintAndDetectionPlugin_ColorSnippetReferencesDataAssetToUse_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UVertexPaintDetectionSettings_Statics::NewProp_vertexPaintAndDetectionPlugin_EditorWidgetNotificationEnabled_MetaData[] = {
		{ "Category", "Runtime Vertex Color Paint and Detection Plugin" },
		{ "ModuleRelativePath", "Public/VertexPaintDetectionSettings.h" },
		{ "ToolTip", "If we should Show Notifications when making changes in the Editor Widget." },
	};
#endif
	void Z_Construct_UClass_UVertexPaintDetectionSettings_Statics::NewProp_vertexPaintAndDetectionPlugin_EditorWidgetNotificationEnabled_SetBit(void* Obj)
	{
		((UVertexPaintDetectionSettings*)Obj)->vertexPaintAndDetectionPlugin_EditorWidgetNotificationEnabled = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UVertexPaintDetectionSettings_Statics::NewProp_vertexPaintAndDetectionPlugin_EditorWidgetNotificationEnabled = { "vertexPaintAndDetectionPlugin_EditorWidgetNotificationEnabled", nullptr, (EPropertyFlags)0x0010000000014001, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(bool), sizeof(UVertexPaintDetectionSettings), &Z_Construct_UClass_UVertexPaintDetectionSettings_Statics::NewProp_vertexPaintAndDetectionPlugin_EditorWidgetNotificationEnabled_SetBit, METADATA_PARAMS(Z_Construct_UClass_UVertexPaintDetectionSettings_Statics::NewProp_vertexPaintAndDetectionPlugin_EditorWidgetNotificationEnabled_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UVertexPaintDetectionSettings_Statics::NewProp_vertexPaintAndDetectionPlugin_EditorWidgetNotificationEnabled_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UVertexPaintDetectionSettings_Statics::NewProp_vertexPaintAndDetectionPlugin_EditorWidgetNotificationDuration_MetaData[] = {
		{ "Category", "Runtime Vertex Color Paint and Detection Plugin" },
		{ "ModuleRelativePath", "Public/VertexPaintDetectionSettings.h" },
		{ "ToolTip", "Duration of the Notifications that pop up when making certain changes in  the editor widget." },
	};
#endif
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_UVertexPaintDetectionSettings_Statics::NewProp_vertexPaintAndDetectionPlugin_EditorWidgetNotificationDuration = { "vertexPaintAndDetectionPlugin_EditorWidgetNotificationDuration", nullptr, (EPropertyFlags)0x0010000000014001, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UVertexPaintDetectionSettings, vertexPaintAndDetectionPlugin_EditorWidgetNotificationDuration), METADATA_PARAMS(Z_Construct_UClass_UVertexPaintDetectionSettings_Statics::NewProp_vertexPaintAndDetectionPlugin_EditorWidgetNotificationDuration_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UVertexPaintDetectionSettings_Statics::NewProp_vertexPaintAndDetectionPlugin_EditorWidgetNotificationDuration_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UVertexPaintDetectionSettings_Statics::NewProp_vertexPaintAndDetectionPlugin_MaxAmountOfAllowedTasksPerMesh_MetaData[] = {
		{ "Category", "Runtime Vertex Color Paint and Detection Plugin" },
		{ "ModuleRelativePath", "Public/VertexPaintDetectionSettings.h" },
		{ "ToolTip", "This is the Max Amount of Tasks a Mesh can have, any new Tasks will Declined. Don't recommend changing this too much since if the Task Queue grows to large, performance will be affected since the TMaps become much more heavier when you run .Add, .FindRef etc. For instance at 1000 Tasks you can drop to 20FPS. \nRecommend making sure you don't add more Tasks than you need, for instance adding the new task when the current task is finished instead of every frame. If the queue grows too large, paint jobs will feel unresponsive as well since it may take a while before it reaches the latest added task." },
	};
#endif
	const UECodeGen_Private::FUnsizedIntPropertyParams Z_Construct_UClass_UVertexPaintDetectionSettings_Statics::NewProp_vertexPaintAndDetectionPlugin_MaxAmountOfAllowedTasksPerMesh = { "vertexPaintAndDetectionPlugin_MaxAmountOfAllowedTasksPerMesh", nullptr, (EPropertyFlags)0x0010000000014001, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UVertexPaintDetectionSettings, vertexPaintAndDetectionPlugin_MaxAmountOfAllowedTasksPerMesh), METADATA_PARAMS(Z_Construct_UClass_UVertexPaintDetectionSettings_Statics::NewProp_vertexPaintAndDetectionPlugin_MaxAmountOfAllowedTasksPerMesh_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UVertexPaintDetectionSettings_Statics::NewProp_vertexPaintAndDetectionPlugin_MaxAmountOfAllowedTasksPerMesh_MetaData)) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UVertexPaintDetectionSettings_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UVertexPaintDetectionSettings_Statics::NewProp_vertexPaintAndDetectionPlugin_OptimizationDataAssetToUse,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UVertexPaintDetectionSettings_Statics::NewProp_vertexPaintAndDetectionPlugin_MaterialsDataAssetToUse,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UVertexPaintDetectionSettings_Statics::NewProp_vertexPaintAndDetectionPlugin_ColorSnippetReferencesDataAssetToUse,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UVertexPaintDetectionSettings_Statics::NewProp_vertexPaintAndDetectionPlugin_EditorWidgetNotificationEnabled,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UVertexPaintDetectionSettings_Statics::NewProp_vertexPaintAndDetectionPlugin_EditorWidgetNotificationDuration,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UVertexPaintDetectionSettings_Statics::NewProp_vertexPaintAndDetectionPlugin_MaxAmountOfAllowedTasksPerMesh,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_UVertexPaintDetectionSettings_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UVertexPaintDetectionSettings>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_UVertexPaintDetectionSettings_Statics::ClassParams = {
		&UVertexPaintDetectionSettings::StaticClass,
		"Game",
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		Z_Construct_UClass_UVertexPaintDetectionSettings_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		0,
		UE_ARRAY_COUNT(Z_Construct_UClass_UVertexPaintDetectionSettings_Statics::PropPointers),
		0,
		0x001000A6u,
		METADATA_PARAMS(Z_Construct_UClass_UVertexPaintDetectionSettings_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UVertexPaintDetectionSettings_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UVertexPaintDetectionSettings()
	{
		if (!Z_Registration_Info_UClass_UVertexPaintDetectionSettings.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UVertexPaintDetectionSettings.OuterSingleton, Z_Construct_UClass_UVertexPaintDetectionSettings_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_UVertexPaintDetectionSettings.OuterSingleton;
	}
	template<> VERTEXPAINTDETECTIONPLUGIN_API UClass* StaticClass<UVertexPaintDetectionSettings>()
	{
		return UVertexPaintDetectionSettings::StaticClass();
	}
	DEFINE_VTABLE_PTR_HELPER_CTOR(UVertexPaintDetectionSettings);
	UVertexPaintDetectionSettings::~UVertexPaintDetectionSettings() {}
	struct Z_CompiledInDeferFile_FID_Build_U5M_Marketplace_Mac_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_VertexPaintDetectionPlugin_Source_VertexPaintDetectionPlugin_Public_VertexPaintDetectionSettings_h_Statics
	{
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Build_U5M_Marketplace_Mac_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_VertexPaintDetectionPlugin_Source_VertexPaintDetectionPlugin_Public_VertexPaintDetectionSettings_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_UVertexPaintDetectionSettings, UVertexPaintDetectionSettings::StaticClass, TEXT("UVertexPaintDetectionSettings"), &Z_Registration_Info_UClass_UVertexPaintDetectionSettings, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UVertexPaintDetectionSettings), 3699117875U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Build_U5M_Marketplace_Mac_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_VertexPaintDetectionPlugin_Source_VertexPaintDetectionPlugin_Public_VertexPaintDetectionSettings_h_2268177170(TEXT("/Script/VertexPaintDetectionPlugin"),
		Z_CompiledInDeferFile_FID_Build_U5M_Marketplace_Mac_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_VertexPaintDetectionPlugin_Source_VertexPaintDetectionPlugin_Public_VertexPaintDetectionSettings_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Build_U5M_Marketplace_Mac_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_VertexPaintDetectionPlugin_Source_VertexPaintDetectionPlugin_Public_VertexPaintDetectionSettings_h_Statics::ClassInfo),
		nullptr, 0,
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
