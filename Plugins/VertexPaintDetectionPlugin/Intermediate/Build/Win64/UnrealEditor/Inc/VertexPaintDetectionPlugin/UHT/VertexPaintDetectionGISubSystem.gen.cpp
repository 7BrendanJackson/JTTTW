// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "VertexPaintDetectionPlugin/Public/VertexPaintDetectionGISubSystem.h"
#include "Engine/Classes/Engine/EngineTypes.h"
#include "Engine/Classes/Engine/GameInstance.h"
#include "VertexPaintDetectionPlugin/Public/VertexPaintDetectionStructs.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeVertexPaintDetectionGISubSystem() {}
// Cross Module References
	ENGINE_API UClass* Z_Construct_UClass_UGameInstanceSubsystem();
	ENGINE_API UClass* Z_Construct_UClass_UPrimitiveComponent_NoRegister();
	ENGINE_API UClass* Z_Construct_UClass_UWorld_NoRegister();
	ENGINE_API UScriptStruct* Z_Construct_UScriptStruct_FTimerHandle();
	PHYSICSCORE_API UClass* Z_Construct_UClass_UPhysicalMaterial_NoRegister();
	UPackage* Z_Construct_UPackage__Script_VertexPaintDetectionPlugin();
	VERTEXPAINTDETECTIONPLUGIN_API UClass* Z_Construct_UClass_UVertexPaintDetectionGISubSystem();
	VERTEXPAINTDETECTIONPLUGIN_API UClass* Z_Construct_UClass_UVertexPaintDetectionGISubSystem_NoRegister();
	VERTEXPAINTDETECTIONPLUGIN_API UScriptStruct* Z_Construct_UScriptStruct_FCalculateColorsInfo();
	VERTEXPAINTDETECTIONPLUGIN_API UScriptStruct* Z_Construct_UScriptStruct_FVertexPaintCalculateColorsQueueArrayStruct();
// End Cross Module References
	void UVertexPaintDetectionGISubSystem::StaticRegisterNativesUVertexPaintDetectionGISubSystem()
	{
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UVertexPaintDetectionGISubSystem);
	UClass* Z_Construct_UClass_UVertexPaintDetectionGISubSystem_NoRegister()
	{
		return UVertexPaintDetectionGISubSystem::StaticClass();
	}
	struct Z_Construct_UClass_UVertexPaintDetectionGISubSystem_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_calculateColorsPaintQueue_ValueProp;
		static const UECodeGen_Private::FObjectPropertyParams NewProp_calculateColorsPaintQueue_Key_KeyProp;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_calculateColorsPaintQueue_MetaData[];
#endif
		static const UECodeGen_Private::FMapPropertyParams NewProp_calculateColorsPaintQueue;
		static const UECodeGen_Private::FStructPropertyParams NewProp_calculateColorsDetectionQueue_ValueProp;
		static const UECodeGen_Private::FObjectPropertyParams NewProp_calculateColorsDetectionQueue_Key_KeyProp;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_calculateColorsDetectionQueue_MetaData[];
#endif
		static const UECodeGen_Private::FMapPropertyParams NewProp_calculateColorsDetectionQueue;
		static const UECodeGen_Private::FStructPropertyParams NewProp_onGoingAsyncTasks_ValueProp;
		static const UECodeGen_Private::FIntPropertyParams NewProp_onGoingAsyncTasks_Key_KeyProp;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_onGoingAsyncTasks_MetaData[];
#endif
		static const UECodeGen_Private::FMapPropertyParams NewProp_onGoingAsyncTasks;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_vertexColorPaint_QueueThreadPool_ResetTimer_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_vertexColorPaint_QueueThreadPool_ResetTimer;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_vertexColorPaint_QueueThreadPool_ResetTimerWorld_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPropertyParams NewProp_vertexColorPaint_QueueThreadPool_ResetTimerWorld;
		static const UECodeGen_Private::FStructPropertyParams NewProp_cleanupOldVertexColorBufferTimers_Inner;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_cleanupOldVertexColorBufferTimers_MetaData[];
#endif
		static const UECodeGen_Private::FArrayPropertyParams NewProp_cleanupOldVertexColorBufferTimers;
		static const UECodeGen_Private::FUnsizedIntPropertyParams NewProp_meshesPaintedOnSinceSessionStarted_ValueProp;
		static const UECodeGen_Private::FObjectPropertyParams NewProp_meshesPaintedOnSinceSessionStarted_Key_KeyProp;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_meshesPaintedOnSinceSessionStarted_MetaData[];
#endif
		static const UECodeGen_Private::FMapPropertyParams NewProp_meshesPaintedOnSinceSessionStarted;
		static const UECodeGen_Private::FObjectPropertyParams NewProp_cachedPhysicalMaterialAssets_Inner;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_cachedPhysicalMaterialAssets_MetaData[];
#endif
		static const UECodeGen_Private::FArrayPropertyParams NewProp_cachedPhysicalMaterialAssets;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UVertexPaintDetectionGISubSystem_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UGameInstanceSubsystem,
		(UObject* (*)())Z_Construct_UPackage__Script_VertexPaintDetectionPlugin,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UVertexPaintDetectionGISubSystem_Statics::Class_MetaDataParams[] = {
		{ "Comment", "/**\n *\n */" },
		{ "IncludePath", "VertexPaintDetectionGISubSystem.h" },
		{ "ModuleRelativePath", "Public/VertexPaintDetectionGISubSystem.h" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_UVertexPaintDetectionGISubSystem_Statics::NewProp_calculateColorsPaintQueue_ValueProp = { "calculateColorsPaintQueue", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, 1, Z_Construct_UScriptStruct_FVertexPaintCalculateColorsQueueArrayStruct, METADATA_PARAMS(nullptr, 0) }; // 3051565849
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UVertexPaintDetectionGISubSystem_Statics::NewProp_calculateColorsPaintQueue_Key_KeyProp = { "calculateColorsPaintQueue_Key", nullptr, (EPropertyFlags)0x0000000000080000, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, 0, Z_Construct_UClass_UPrimitiveComponent_NoRegister, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UVertexPaintDetectionGISubSystem_Statics::NewProp_calculateColorsPaintQueue_MetaData[] = {
		{ "Comment", "//--------------------------------------------------\n// Properties\n" },
		{ "ModuleRelativePath", "Public/VertexPaintDetectionGISubSystem.h" },
		{ "ToolTip", "Properties" },
	};
#endif
	const UECodeGen_Private::FMapPropertyParams Z_Construct_UClass_UVertexPaintDetectionGISubSystem_Statics::NewProp_calculateColorsPaintQueue = { "calculateColorsPaintQueue", nullptr, (EPropertyFlags)0x0040008000000000, UECodeGen_Private::EPropertyGenFlags::Map, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UVertexPaintDetectionGISubSystem, calculateColorsPaintQueue), EMapPropertyFlags::None, METADATA_PARAMS(Z_Construct_UClass_UVertexPaintDetectionGISubSystem_Statics::NewProp_calculateColorsPaintQueue_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UVertexPaintDetectionGISubSystem_Statics::NewProp_calculateColorsPaintQueue_MetaData)) }; // 3051565849
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_UVertexPaintDetectionGISubSystem_Statics::NewProp_calculateColorsDetectionQueue_ValueProp = { "calculateColorsDetectionQueue", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, 1, Z_Construct_UScriptStruct_FVertexPaintCalculateColorsQueueArrayStruct, METADATA_PARAMS(nullptr, 0) }; // 3051565849
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UVertexPaintDetectionGISubSystem_Statics::NewProp_calculateColorsDetectionQueue_Key_KeyProp = { "calculateColorsDetectionQueue_Key", nullptr, (EPropertyFlags)0x0000000000080000, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, 0, Z_Construct_UClass_UPrimitiveComponent_NoRegister, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UVertexPaintDetectionGISubSystem_Statics::NewProp_calculateColorsDetectionQueue_MetaData[] = {
		{ "ModuleRelativePath", "Public/VertexPaintDetectionGISubSystem.h" },
	};
#endif
	const UECodeGen_Private::FMapPropertyParams Z_Construct_UClass_UVertexPaintDetectionGISubSystem_Statics::NewProp_calculateColorsDetectionQueue = { "calculateColorsDetectionQueue", nullptr, (EPropertyFlags)0x0040008000000000, UECodeGen_Private::EPropertyGenFlags::Map, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UVertexPaintDetectionGISubSystem, calculateColorsDetectionQueue), EMapPropertyFlags::None, METADATA_PARAMS(Z_Construct_UClass_UVertexPaintDetectionGISubSystem_Statics::NewProp_calculateColorsDetectionQueue_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UVertexPaintDetectionGISubSystem_Statics::NewProp_calculateColorsDetectionQueue_MetaData)) }; // 3051565849
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_UVertexPaintDetectionGISubSystem_Statics::NewProp_onGoingAsyncTasks_ValueProp = { "onGoingAsyncTasks", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, 1, Z_Construct_UScriptStruct_FCalculateColorsInfo, METADATA_PARAMS(nullptr, 0) }; // 3787281297
	const UECodeGen_Private::FIntPropertyParams Z_Construct_UClass_UVertexPaintDetectionGISubSystem_Statics::NewProp_onGoingAsyncTasks_Key_KeyProp = { "onGoingAsyncTasks_Key", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, 0, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UVertexPaintDetectionGISubSystem_Statics::NewProp_onGoingAsyncTasks_MetaData[] = {
		{ "ModuleRelativePath", "Public/VertexPaintDetectionGISubSystem.h" },
	};
#endif
	const UECodeGen_Private::FMapPropertyParams Z_Construct_UClass_UVertexPaintDetectionGISubSystem_Statics::NewProp_onGoingAsyncTasks = { "onGoingAsyncTasks", nullptr, (EPropertyFlags)0x0040000000000000, UECodeGen_Private::EPropertyGenFlags::Map, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UVertexPaintDetectionGISubSystem, onGoingAsyncTasks), EMapPropertyFlags::None, METADATA_PARAMS(Z_Construct_UClass_UVertexPaintDetectionGISubSystem_Statics::NewProp_onGoingAsyncTasks_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UVertexPaintDetectionGISubSystem_Statics::NewProp_onGoingAsyncTasks_MetaData)) }; // 3787281297
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UVertexPaintDetectionGISubSystem_Statics::NewProp_vertexColorPaint_QueueThreadPool_ResetTimer_MetaData[] = {
		{ "ModuleRelativePath", "Public/VertexPaintDetectionGISubSystem.h" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_UVertexPaintDetectionGISubSystem_Statics::NewProp_vertexColorPaint_QueueThreadPool_ResetTimer = { "vertexColorPaint_QueueThreadPool_ResetTimer", nullptr, (EPropertyFlags)0x0040000000000000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UVertexPaintDetectionGISubSystem, vertexColorPaint_QueueThreadPool_ResetTimer), Z_Construct_UScriptStruct_FTimerHandle, METADATA_PARAMS(Z_Construct_UClass_UVertexPaintDetectionGISubSystem_Statics::NewProp_vertexColorPaint_QueueThreadPool_ResetTimer_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UVertexPaintDetectionGISubSystem_Statics::NewProp_vertexColorPaint_QueueThreadPool_ResetTimer_MetaData)) }; // 4017759265
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UVertexPaintDetectionGISubSystem_Statics::NewProp_vertexColorPaint_QueueThreadPool_ResetTimerWorld_MetaData[] = {
		{ "ModuleRelativePath", "Public/VertexPaintDetectionGISubSystem.h" },
	};
#endif
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UVertexPaintDetectionGISubSystem_Statics::NewProp_vertexColorPaint_QueueThreadPool_ResetTimerWorld = { "vertexColorPaint_QueueThreadPool_ResetTimerWorld", nullptr, (EPropertyFlags)0x0040000000000000, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UVertexPaintDetectionGISubSystem, vertexColorPaint_QueueThreadPool_ResetTimerWorld), Z_Construct_UClass_UWorld_NoRegister, METADATA_PARAMS(Z_Construct_UClass_UVertexPaintDetectionGISubSystem_Statics::NewProp_vertexColorPaint_QueueThreadPool_ResetTimerWorld_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UVertexPaintDetectionGISubSystem_Statics::NewProp_vertexColorPaint_QueueThreadPool_ResetTimerWorld_MetaData)) };
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_UVertexPaintDetectionGISubSystem_Statics::NewProp_cleanupOldVertexColorBufferTimers_Inner = { "cleanupOldVertexColorBufferTimers", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, 0, Z_Construct_UScriptStruct_FTimerHandle, METADATA_PARAMS(nullptr, 0) }; // 4017759265
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UVertexPaintDetectionGISubSystem_Statics::NewProp_cleanupOldVertexColorBufferTimers_MetaData[] = {
		{ "ModuleRelativePath", "Public/VertexPaintDetectionGISubSystem.h" },
	};
#endif
	const UECodeGen_Private::FArrayPropertyParams Z_Construct_UClass_UVertexPaintDetectionGISubSystem_Statics::NewProp_cleanupOldVertexColorBufferTimers = { "cleanupOldVertexColorBufferTimers", nullptr, (EPropertyFlags)0x0040000000000000, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UVertexPaintDetectionGISubSystem, cleanupOldVertexColorBufferTimers), EArrayPropertyFlags::None, METADATA_PARAMS(Z_Construct_UClass_UVertexPaintDetectionGISubSystem_Statics::NewProp_cleanupOldVertexColorBufferTimers_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UVertexPaintDetectionGISubSystem_Statics::NewProp_cleanupOldVertexColorBufferTimers_MetaData)) }; // 4017759265
	const UECodeGen_Private::FUnsizedIntPropertyParams Z_Construct_UClass_UVertexPaintDetectionGISubSystem_Statics::NewProp_meshesPaintedOnSinceSessionStarted_ValueProp = { "meshesPaintedOnSinceSessionStarted", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, 1, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UVertexPaintDetectionGISubSystem_Statics::NewProp_meshesPaintedOnSinceSessionStarted_Key_KeyProp = { "meshesPaintedOnSinceSessionStarted_Key", nullptr, (EPropertyFlags)0x0000000000080000, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, 0, Z_Construct_UClass_UPrimitiveComponent_NoRegister, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UVertexPaintDetectionGISubSystem_Statics::NewProp_meshesPaintedOnSinceSessionStarted_MetaData[] = {
		{ "Comment", "// TMap so we can always just run .Add, instead of array where we have to run .Contain and only add if not in it\n" },
		{ "ModuleRelativePath", "Public/VertexPaintDetectionGISubSystem.h" },
		{ "ToolTip", "TMap so we can always just run .Add, instead of array where we have to run .Contain and only add if not in it" },
	};
#endif
	const UECodeGen_Private::FMapPropertyParams Z_Construct_UClass_UVertexPaintDetectionGISubSystem_Statics::NewProp_meshesPaintedOnSinceSessionStarted = { "meshesPaintedOnSinceSessionStarted", nullptr, (EPropertyFlags)0x0040008000000000, UECodeGen_Private::EPropertyGenFlags::Map, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UVertexPaintDetectionGISubSystem, meshesPaintedOnSinceSessionStarted), EMapPropertyFlags::None, METADATA_PARAMS(Z_Construct_UClass_UVertexPaintDetectionGISubSystem_Statics::NewProp_meshesPaintedOnSinceSessionStarted_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UVertexPaintDetectionGISubSystem_Statics::NewProp_meshesPaintedOnSinceSessionStarted_MetaData)) };
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UVertexPaintDetectionGISubSystem_Statics::NewProp_cachedPhysicalMaterialAssets_Inner = { "cachedPhysicalMaterialAssets", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, 0, Z_Construct_UClass_UPhysicalMaterial_NoRegister, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UVertexPaintDetectionGISubSystem_Statics::NewProp_cachedPhysicalMaterialAssets_MetaData[] = {
		{ "ModuleRelativePath", "Public/VertexPaintDetectionGISubSystem.h" },
	};
#endif
	const UECodeGen_Private::FArrayPropertyParams Z_Construct_UClass_UVertexPaintDetectionGISubSystem_Statics::NewProp_cachedPhysicalMaterialAssets = { "cachedPhysicalMaterialAssets", nullptr, (EPropertyFlags)0x0040000000000000, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UVertexPaintDetectionGISubSystem, cachedPhysicalMaterialAssets), EArrayPropertyFlags::None, METADATA_PARAMS(Z_Construct_UClass_UVertexPaintDetectionGISubSystem_Statics::NewProp_cachedPhysicalMaterialAssets_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UVertexPaintDetectionGISubSystem_Statics::NewProp_cachedPhysicalMaterialAssets_MetaData)) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UVertexPaintDetectionGISubSystem_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UVertexPaintDetectionGISubSystem_Statics::NewProp_calculateColorsPaintQueue_ValueProp,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UVertexPaintDetectionGISubSystem_Statics::NewProp_calculateColorsPaintQueue_Key_KeyProp,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UVertexPaintDetectionGISubSystem_Statics::NewProp_calculateColorsPaintQueue,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UVertexPaintDetectionGISubSystem_Statics::NewProp_calculateColorsDetectionQueue_ValueProp,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UVertexPaintDetectionGISubSystem_Statics::NewProp_calculateColorsDetectionQueue_Key_KeyProp,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UVertexPaintDetectionGISubSystem_Statics::NewProp_calculateColorsDetectionQueue,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UVertexPaintDetectionGISubSystem_Statics::NewProp_onGoingAsyncTasks_ValueProp,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UVertexPaintDetectionGISubSystem_Statics::NewProp_onGoingAsyncTasks_Key_KeyProp,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UVertexPaintDetectionGISubSystem_Statics::NewProp_onGoingAsyncTasks,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UVertexPaintDetectionGISubSystem_Statics::NewProp_vertexColorPaint_QueueThreadPool_ResetTimer,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UVertexPaintDetectionGISubSystem_Statics::NewProp_vertexColorPaint_QueueThreadPool_ResetTimerWorld,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UVertexPaintDetectionGISubSystem_Statics::NewProp_cleanupOldVertexColorBufferTimers_Inner,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UVertexPaintDetectionGISubSystem_Statics::NewProp_cleanupOldVertexColorBufferTimers,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UVertexPaintDetectionGISubSystem_Statics::NewProp_meshesPaintedOnSinceSessionStarted_ValueProp,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UVertexPaintDetectionGISubSystem_Statics::NewProp_meshesPaintedOnSinceSessionStarted_Key_KeyProp,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UVertexPaintDetectionGISubSystem_Statics::NewProp_meshesPaintedOnSinceSessionStarted,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UVertexPaintDetectionGISubSystem_Statics::NewProp_cachedPhysicalMaterialAssets_Inner,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UVertexPaintDetectionGISubSystem_Statics::NewProp_cachedPhysicalMaterialAssets,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_UVertexPaintDetectionGISubSystem_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UVertexPaintDetectionGISubSystem>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_UVertexPaintDetectionGISubSystem_Statics::ClassParams = {
		&UVertexPaintDetectionGISubSystem::StaticClass,
		nullptr,
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		Z_Construct_UClass_UVertexPaintDetectionGISubSystem_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		0,
		UE_ARRAY_COUNT(Z_Construct_UClass_UVertexPaintDetectionGISubSystem_Statics::PropPointers),
		0,
		0x009000A0u,
		METADATA_PARAMS(Z_Construct_UClass_UVertexPaintDetectionGISubSystem_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UVertexPaintDetectionGISubSystem_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UVertexPaintDetectionGISubSystem()
	{
		if (!Z_Registration_Info_UClass_UVertexPaintDetectionGISubSystem.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UVertexPaintDetectionGISubSystem.OuterSingleton, Z_Construct_UClass_UVertexPaintDetectionGISubSystem_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_UVertexPaintDetectionGISubSystem.OuterSingleton;
	}
	template<> VERTEXPAINTDETECTIONPLUGIN_API UClass* StaticClass<UVertexPaintDetectionGISubSystem>()
	{
		return UVertexPaintDetectionGISubSystem::StaticClass();
	}
	DEFINE_VTABLE_PTR_HELPER_CTOR(UVertexPaintDetectionGISubSystem);
	UVertexPaintDetectionGISubSystem::~UVertexPaintDetectionGISubSystem() {}
	struct Z_CompiledInDeferFile_FID_build_U5M_Marketplace_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_VertexPaintDetectionPlugin_Source_VertexPaintDetectionPlugin_Public_VertexPaintDetectionGISubSystem_h_Statics
	{
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_build_U5M_Marketplace_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_VertexPaintDetectionPlugin_Source_VertexPaintDetectionPlugin_Public_VertexPaintDetectionGISubSystem_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_UVertexPaintDetectionGISubSystem, UVertexPaintDetectionGISubSystem::StaticClass, TEXT("UVertexPaintDetectionGISubSystem"), &Z_Registration_Info_UClass_UVertexPaintDetectionGISubSystem, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UVertexPaintDetectionGISubSystem), 3984420590U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_build_U5M_Marketplace_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_VertexPaintDetectionPlugin_Source_VertexPaintDetectionPlugin_Public_VertexPaintDetectionGISubSystem_h_1470550126(TEXT("/Script/VertexPaintDetectionPlugin"),
		Z_CompiledInDeferFile_FID_build_U5M_Marketplace_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_VertexPaintDetectionPlugin_Source_VertexPaintDetectionPlugin_Public_VertexPaintDetectionGISubSystem_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_build_U5M_Marketplace_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_VertexPaintDetectionPlugin_Source_VertexPaintDetectionPlugin_Public_VertexPaintDetectionGISubSystem_h_Statics::ClassInfo),
		nullptr, 0,
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
