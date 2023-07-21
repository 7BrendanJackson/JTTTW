// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "VertexPaintDetectionPlugin/Public/VertexPaintMaterialDataAsset.h"
#include "VertexPaintDetectionPlugin/Public/VertexPaintDetectionStructs.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeVertexPaintMaterialDataAsset() {}
// Cross Module References
	ENGINE_API UClass* Z_Construct_UClass_UDataAsset();
	ENGINE_API UClass* Z_Construct_UClass_UMaterialInterface_NoRegister();
	UPackage* Z_Construct_UPackage__Script_VertexPaintDetectionPlugin();
	VERTEXPAINTDETECTIONPLUGIN_API UClass* Z_Construct_UClass_UVertexPaintMaterialDataAsset();
	VERTEXPAINTDETECTIONPLUGIN_API UClass* Z_Construct_UClass_UVertexPaintMaterialDataAsset_NoRegister();
	VERTEXPAINTDETECTIONPLUGIN_API UScriptStruct* Z_Construct_UScriptStruct_FVertexPaintMaterialDataAssetStruct();
// End Cross Module References
	DEFINE_FUNCTION(UVertexPaintMaterialDataAsset::execGetVertexPaintMaterialInterface)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		*(TMap<TSoftObjectPtr<UMaterialInterface> ,FVertexPaintMaterialDataAssetStruct>*)Z_Param__Result=P_THIS->GetVertexPaintMaterialInterface();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UVertexPaintMaterialDataAsset::execAddToVertexPaintMaterialInterface)
	{
		P_GET_SOFTOBJECT(TSoftObjectPtr<UMaterialInterface>,Z_Param_material);
		P_GET_STRUCT(FVertexPaintMaterialDataAssetStruct,Z_Param_materialDataAssetStruct);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->AddToVertexPaintMaterialInterface(Z_Param_material,Z_Param_materialDataAssetStruct);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UVertexPaintMaterialDataAsset::execRemoveFromVertexPaintMaterialInterface)
	{
		P_GET_SOFTOBJECT(TSoftObjectPtr<UMaterialInterface>,Z_Param_material);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->RemoveFromVertexPaintMaterialInterface(Z_Param_material);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UVertexPaintMaterialDataAsset::execIsMaterialAddedToPaintOnMaterialDataAsset)
	{
		P_GET_SOFTOBJECT(TSoftObjectPtr<UMaterialInterface>,Z_Param_material);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(bool*)Z_Param__Result=P_THIS->IsMaterialAddedToPaintOnMaterialDataAsset(Z_Param_material);
		P_NATIVE_END;
	}
	void UVertexPaintMaterialDataAsset::StaticRegisterNativesUVertexPaintMaterialDataAsset()
	{
		UClass* Class = UVertexPaintMaterialDataAsset::StaticClass();
		static const FNameNativePtrPair Funcs[] = {
			{ "AddToVertexPaintMaterialInterface", &UVertexPaintMaterialDataAsset::execAddToVertexPaintMaterialInterface },
			{ "GetVertexPaintMaterialInterface", &UVertexPaintMaterialDataAsset::execGetVertexPaintMaterialInterface },
			{ "IsMaterialAddedToPaintOnMaterialDataAsset", &UVertexPaintMaterialDataAsset::execIsMaterialAddedToPaintOnMaterialDataAsset },
			{ "RemoveFromVertexPaintMaterialInterface", &UVertexPaintMaterialDataAsset::execRemoveFromVertexPaintMaterialInterface },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
	}
	struct Z_Construct_UFunction_UVertexPaintMaterialDataAsset_AddToVertexPaintMaterialInterface_Statics
	{
		struct VertexPaintMaterialDataAsset_eventAddToVertexPaintMaterialInterface_Parms
		{
			TSoftObjectPtr<UMaterialInterface> material;
			FVertexPaintMaterialDataAssetStruct materialDataAssetStruct;
		};
		static const UECodeGen_Private::FSoftObjectPropertyParams NewProp_material;
		static const UECodeGen_Private::FStructPropertyParams NewProp_materialDataAssetStruct;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FSoftObjectPropertyParams Z_Construct_UFunction_UVertexPaintMaterialDataAsset_AddToVertexPaintMaterialInterface_Statics::NewProp_material = { "material", nullptr, (EPropertyFlags)0x0014000000000080, UECodeGen_Private::EPropertyGenFlags::SoftObject, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(VertexPaintMaterialDataAsset_eventAddToVertexPaintMaterialInterface_Parms, material), Z_Construct_UClass_UMaterialInterface_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UVertexPaintMaterialDataAsset_AddToVertexPaintMaterialInterface_Statics::NewProp_materialDataAssetStruct = { "materialDataAssetStruct", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(VertexPaintMaterialDataAsset_eventAddToVertexPaintMaterialInterface_Parms, materialDataAssetStruct), Z_Construct_UScriptStruct_FVertexPaintMaterialDataAssetStruct, METADATA_PARAMS(nullptr, 0) }; // 1850525291
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UVertexPaintMaterialDataAsset_AddToVertexPaintMaterialInterface_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UVertexPaintMaterialDataAsset_AddToVertexPaintMaterialInterface_Statics::NewProp_material,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UVertexPaintMaterialDataAsset_AddToVertexPaintMaterialInterface_Statics::NewProp_materialDataAssetStruct,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UVertexPaintMaterialDataAsset_AddToVertexPaintMaterialInterface_Statics::Function_MetaDataParams[] = {
		{ "Category", "Runtime Vertex Color Paint and Detection Plugin" },
		{ "ModuleRelativePath", "Public/VertexPaintMaterialDataAsset.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UVertexPaintMaterialDataAsset_AddToVertexPaintMaterialInterface_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UVertexPaintMaterialDataAsset, nullptr, "AddToVertexPaintMaterialInterface", nullptr, nullptr, sizeof(Z_Construct_UFunction_UVertexPaintMaterialDataAsset_AddToVertexPaintMaterialInterface_Statics::VertexPaintMaterialDataAsset_eventAddToVertexPaintMaterialInterface_Parms), Z_Construct_UFunction_UVertexPaintMaterialDataAsset_AddToVertexPaintMaterialInterface_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UVertexPaintMaterialDataAsset_AddToVertexPaintMaterialInterface_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UVertexPaintMaterialDataAsset_AddToVertexPaintMaterialInterface_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UVertexPaintMaterialDataAsset_AddToVertexPaintMaterialInterface_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UVertexPaintMaterialDataAsset_AddToVertexPaintMaterialInterface()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UVertexPaintMaterialDataAsset_AddToVertexPaintMaterialInterface_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UVertexPaintMaterialDataAsset_GetVertexPaintMaterialInterface_Statics
	{
		struct VertexPaintMaterialDataAsset_eventGetVertexPaintMaterialInterface_Parms
		{
			TMap<TSoftObjectPtr<UMaterialInterface> ,FVertexPaintMaterialDataAssetStruct> ReturnValue;
		};
		static const UECodeGen_Private::FStructPropertyParams NewProp_ReturnValue_ValueProp;
		static const UECodeGen_Private::FSoftObjectPropertyParams NewProp_ReturnValue_Key_KeyProp;
		static const UECodeGen_Private::FMapPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UVertexPaintMaterialDataAsset_GetVertexPaintMaterialInterface_Statics::NewProp_ReturnValue_ValueProp = { "ReturnValue", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, 1, Z_Construct_UScriptStruct_FVertexPaintMaterialDataAssetStruct, METADATA_PARAMS(nullptr, 0) }; // 1850525291
	const UECodeGen_Private::FSoftObjectPropertyParams Z_Construct_UFunction_UVertexPaintMaterialDataAsset_GetVertexPaintMaterialInterface_Statics::NewProp_ReturnValue_Key_KeyProp = { "ReturnValue_Key", nullptr, (EPropertyFlags)0x0004000000000000, UECodeGen_Private::EPropertyGenFlags::SoftObject, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, 0, Z_Construct_UClass_UMaterialInterface_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FMapPropertyParams Z_Construct_UFunction_UVertexPaintMaterialDataAsset_GetVertexPaintMaterialInterface_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Map, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(VertexPaintMaterialDataAsset_eventGetVertexPaintMaterialInterface_Parms, ReturnValue), EMapPropertyFlags::None, METADATA_PARAMS(nullptr, 0) }; // 1850525291
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UVertexPaintMaterialDataAsset_GetVertexPaintMaterialInterface_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UVertexPaintMaterialDataAsset_GetVertexPaintMaterialInterface_Statics::NewProp_ReturnValue_ValueProp,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UVertexPaintMaterialDataAsset_GetVertexPaintMaterialInterface_Statics::NewProp_ReturnValue_Key_KeyProp,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UVertexPaintMaterialDataAsset_GetVertexPaintMaterialInterface_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UVertexPaintMaterialDataAsset_GetVertexPaintMaterialInterface_Statics::Function_MetaDataParams[] = {
		{ "Category", "Runtime Vertex Color Paint and Detection Plugin" },
		{ "ModuleRelativePath", "Public/VertexPaintMaterialDataAsset.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UVertexPaintMaterialDataAsset_GetVertexPaintMaterialInterface_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UVertexPaintMaterialDataAsset, nullptr, "GetVertexPaintMaterialInterface", nullptr, nullptr, sizeof(Z_Construct_UFunction_UVertexPaintMaterialDataAsset_GetVertexPaintMaterialInterface_Statics::VertexPaintMaterialDataAsset_eventGetVertexPaintMaterialInterface_Parms), Z_Construct_UFunction_UVertexPaintMaterialDataAsset_GetVertexPaintMaterialInterface_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UVertexPaintMaterialDataAsset_GetVertexPaintMaterialInterface_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x14020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UVertexPaintMaterialDataAsset_GetVertexPaintMaterialInterface_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UVertexPaintMaterialDataAsset_GetVertexPaintMaterialInterface_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UVertexPaintMaterialDataAsset_GetVertexPaintMaterialInterface()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UVertexPaintMaterialDataAsset_GetVertexPaintMaterialInterface_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UVertexPaintMaterialDataAsset_IsMaterialAddedToPaintOnMaterialDataAsset_Statics
	{
		struct VertexPaintMaterialDataAsset_eventIsMaterialAddedToPaintOnMaterialDataAsset_Parms
		{
			TSoftObjectPtr<UMaterialInterface> material;
			bool ReturnValue;
		};
		static const UECodeGen_Private::FSoftObjectPropertyParams NewProp_material;
		static void NewProp_ReturnValue_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FSoftObjectPropertyParams Z_Construct_UFunction_UVertexPaintMaterialDataAsset_IsMaterialAddedToPaintOnMaterialDataAsset_Statics::NewProp_material = { "material", nullptr, (EPropertyFlags)0x0014000000000080, UECodeGen_Private::EPropertyGenFlags::SoftObject, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(VertexPaintMaterialDataAsset_eventIsMaterialAddedToPaintOnMaterialDataAsset_Parms, material), Z_Construct_UClass_UMaterialInterface_NoRegister, METADATA_PARAMS(nullptr, 0) };
	void Z_Construct_UFunction_UVertexPaintMaterialDataAsset_IsMaterialAddedToPaintOnMaterialDataAsset_Statics::NewProp_ReturnValue_SetBit(void* Obj)
	{
		((VertexPaintMaterialDataAsset_eventIsMaterialAddedToPaintOnMaterialDataAsset_Parms*)Obj)->ReturnValue = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UVertexPaintMaterialDataAsset_IsMaterialAddedToPaintOnMaterialDataAsset_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(bool), sizeof(VertexPaintMaterialDataAsset_eventIsMaterialAddedToPaintOnMaterialDataAsset_Parms), &Z_Construct_UFunction_UVertexPaintMaterialDataAsset_IsMaterialAddedToPaintOnMaterialDataAsset_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UVertexPaintMaterialDataAsset_IsMaterialAddedToPaintOnMaterialDataAsset_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UVertexPaintMaterialDataAsset_IsMaterialAddedToPaintOnMaterialDataAsset_Statics::NewProp_material,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UVertexPaintMaterialDataAsset_IsMaterialAddedToPaintOnMaterialDataAsset_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UVertexPaintMaterialDataAsset_IsMaterialAddedToPaintOnMaterialDataAsset_Statics::Function_MetaDataParams[] = {
		{ "Category", "Runtime Vertex Color Paint and Detection Plugin" },
		{ "ModuleRelativePath", "Public/VertexPaintMaterialDataAsset.h" },
		{ "ToolTip", "If the Material is added in the paint on material TMap. Soft UMaterialInterface Ptr so it can be used with UMaterialInterface directly gotten from GetSoftPointerObjectsOfClass without resolving and casting, i.e. bringing them into memory." },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UVertexPaintMaterialDataAsset_IsMaterialAddedToPaintOnMaterialDataAsset_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UVertexPaintMaterialDataAsset, nullptr, "IsMaterialAddedToPaintOnMaterialDataAsset", nullptr, nullptr, sizeof(Z_Construct_UFunction_UVertexPaintMaterialDataAsset_IsMaterialAddedToPaintOnMaterialDataAsset_Statics::VertexPaintMaterialDataAsset_eventIsMaterialAddedToPaintOnMaterialDataAsset_Parms), Z_Construct_UFunction_UVertexPaintMaterialDataAsset_IsMaterialAddedToPaintOnMaterialDataAsset_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UVertexPaintMaterialDataAsset_IsMaterialAddedToPaintOnMaterialDataAsset_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x14020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UVertexPaintMaterialDataAsset_IsMaterialAddedToPaintOnMaterialDataAsset_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UVertexPaintMaterialDataAsset_IsMaterialAddedToPaintOnMaterialDataAsset_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UVertexPaintMaterialDataAsset_IsMaterialAddedToPaintOnMaterialDataAsset()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UVertexPaintMaterialDataAsset_IsMaterialAddedToPaintOnMaterialDataAsset_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UVertexPaintMaterialDataAsset_RemoveFromVertexPaintMaterialInterface_Statics
	{
		struct VertexPaintMaterialDataAsset_eventRemoveFromVertexPaintMaterialInterface_Parms
		{
			TSoftObjectPtr<UMaterialInterface> material;
		};
		static const UECodeGen_Private::FSoftObjectPropertyParams NewProp_material;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FSoftObjectPropertyParams Z_Construct_UFunction_UVertexPaintMaterialDataAsset_RemoveFromVertexPaintMaterialInterface_Statics::NewProp_material = { "material", nullptr, (EPropertyFlags)0x0014000000000080, UECodeGen_Private::EPropertyGenFlags::SoftObject, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(VertexPaintMaterialDataAsset_eventRemoveFromVertexPaintMaterialInterface_Parms, material), Z_Construct_UClass_UMaterialInterface_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UVertexPaintMaterialDataAsset_RemoveFromVertexPaintMaterialInterface_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UVertexPaintMaterialDataAsset_RemoveFromVertexPaintMaterialInterface_Statics::NewProp_material,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UVertexPaintMaterialDataAsset_RemoveFromVertexPaintMaterialInterface_Statics::Function_MetaDataParams[] = {
		{ "Category", "Runtime Vertex Color Paint and Detection Plugin" },
		{ "ModuleRelativePath", "Public/VertexPaintMaterialDataAsset.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UVertexPaintMaterialDataAsset_RemoveFromVertexPaintMaterialInterface_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UVertexPaintMaterialDataAsset, nullptr, "RemoveFromVertexPaintMaterialInterface", nullptr, nullptr, sizeof(Z_Construct_UFunction_UVertexPaintMaterialDataAsset_RemoveFromVertexPaintMaterialInterface_Statics::VertexPaintMaterialDataAsset_eventRemoveFromVertexPaintMaterialInterface_Parms), Z_Construct_UFunction_UVertexPaintMaterialDataAsset_RemoveFromVertexPaintMaterialInterface_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UVertexPaintMaterialDataAsset_RemoveFromVertexPaintMaterialInterface_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UVertexPaintMaterialDataAsset_RemoveFromVertexPaintMaterialInterface_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UVertexPaintMaterialDataAsset_RemoveFromVertexPaintMaterialInterface_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UVertexPaintMaterialDataAsset_RemoveFromVertexPaintMaterialInterface()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UVertexPaintMaterialDataAsset_RemoveFromVertexPaintMaterialInterface_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UVertexPaintMaterialDataAsset);
	UClass* Z_Construct_UClass_UVertexPaintMaterialDataAsset_NoRegister()
	{
		return UVertexPaintMaterialDataAsset::StaticClass();
	}
	struct Z_Construct_UClass_UVertexPaintMaterialDataAsset_Statics
	{
		static UObject* (*const DependentSingletons[])();
		static const FClassFunctionLinkInfo FuncInfo[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_vertexPaintMaterialInterfaces_ValueProp;
		static const UECodeGen_Private::FSoftObjectPropertyParams NewProp_vertexPaintMaterialInterfaces_Key_KeyProp;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_vertexPaintMaterialInterfaces_MetaData[];
#endif
		static const UECodeGen_Private::FMapPropertyParams NewProp_vertexPaintMaterialInterfaces;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UVertexPaintMaterialDataAsset_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UDataAsset,
		(UObject* (*)())Z_Construct_UPackage__Script_VertexPaintDetectionPlugin,
	};
	const FClassFunctionLinkInfo Z_Construct_UClass_UVertexPaintMaterialDataAsset_Statics::FuncInfo[] = {
		{ &Z_Construct_UFunction_UVertexPaintMaterialDataAsset_AddToVertexPaintMaterialInterface, "AddToVertexPaintMaterialInterface" }, // 2110495501
		{ &Z_Construct_UFunction_UVertexPaintMaterialDataAsset_GetVertexPaintMaterialInterface, "GetVertexPaintMaterialInterface" }, // 3847630476
		{ &Z_Construct_UFunction_UVertexPaintMaterialDataAsset_IsMaterialAddedToPaintOnMaterialDataAsset, "IsMaterialAddedToPaintOnMaterialDataAsset" }, // 3016250140
		{ &Z_Construct_UFunction_UVertexPaintMaterialDataAsset_RemoveFromVertexPaintMaterialInterface, "RemoveFromVertexPaintMaterialInterface" }, // 4237471107
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UVertexPaintMaterialDataAsset_Statics::Class_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "Comment", "/**\n *\n */" },
		{ "IncludePath", "VertexPaintMaterialDataAsset.h" },
		{ "IsBlueprintBase", "true" },
		{ "ModuleRelativePath", "Public/VertexPaintMaterialDataAsset.h" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_UVertexPaintMaterialDataAsset_Statics::NewProp_vertexPaintMaterialInterfaces_ValueProp = { "vertexPaintMaterialInterfaces", nullptr, (EPropertyFlags)0x0000000000020001, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, 1, Z_Construct_UScriptStruct_FVertexPaintMaterialDataAssetStruct, METADATA_PARAMS(nullptr, 0) }; // 1850525291
	const UECodeGen_Private::FSoftObjectPropertyParams Z_Construct_UClass_UVertexPaintMaterialDataAsset_Statics::NewProp_vertexPaintMaterialInterfaces_Key_KeyProp = { "vertexPaintMaterialInterfaces_Key", nullptr, (EPropertyFlags)0x0004000000020001, UECodeGen_Private::EPropertyGenFlags::SoftObject, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, 0, Z_Construct_UClass_UMaterialInterface_NoRegister, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UVertexPaintMaterialDataAsset_Statics::NewProp_vertexPaintMaterialInterfaces_MetaData[] = {
		{ "Category", "Runtime Vertex Color Paint and Detection Plugin" },
		{ "Comment", "// TMap of All Materials that uses Vertex Colors\n" },
		{ "ModuleRelativePath", "Public/VertexPaintMaterialDataAsset.h" },
		{ "ToolTip", "TMap of All Materials that uses Vertex Colors" },
	};
#endif
	const UECodeGen_Private::FMapPropertyParams Z_Construct_UClass_UVertexPaintMaterialDataAsset_Statics::NewProp_vertexPaintMaterialInterfaces = { "vertexPaintMaterialInterfaces", nullptr, (EPropertyFlags)0x0040000000020001, UECodeGen_Private::EPropertyGenFlags::Map, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UVertexPaintMaterialDataAsset, vertexPaintMaterialInterfaces), EMapPropertyFlags::None, METADATA_PARAMS(Z_Construct_UClass_UVertexPaintMaterialDataAsset_Statics::NewProp_vertexPaintMaterialInterfaces_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UVertexPaintMaterialDataAsset_Statics::NewProp_vertexPaintMaterialInterfaces_MetaData)) }; // 1850525291
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UVertexPaintMaterialDataAsset_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UVertexPaintMaterialDataAsset_Statics::NewProp_vertexPaintMaterialInterfaces_ValueProp,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UVertexPaintMaterialDataAsset_Statics::NewProp_vertexPaintMaterialInterfaces_Key_KeyProp,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UVertexPaintMaterialDataAsset_Statics::NewProp_vertexPaintMaterialInterfaces,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_UVertexPaintMaterialDataAsset_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UVertexPaintMaterialDataAsset>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_UVertexPaintMaterialDataAsset_Statics::ClassParams = {
		&UVertexPaintMaterialDataAsset::StaticClass,
		nullptr,
		&StaticCppClassTypeInfo,
		DependentSingletons,
		FuncInfo,
		Z_Construct_UClass_UVertexPaintMaterialDataAsset_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		UE_ARRAY_COUNT(FuncInfo),
		UE_ARRAY_COUNT(Z_Construct_UClass_UVertexPaintMaterialDataAsset_Statics::PropPointers),
		0,
		0x001000A0u,
		METADATA_PARAMS(Z_Construct_UClass_UVertexPaintMaterialDataAsset_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UVertexPaintMaterialDataAsset_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UVertexPaintMaterialDataAsset()
	{
		if (!Z_Registration_Info_UClass_UVertexPaintMaterialDataAsset.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UVertexPaintMaterialDataAsset.OuterSingleton, Z_Construct_UClass_UVertexPaintMaterialDataAsset_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_UVertexPaintMaterialDataAsset.OuterSingleton;
	}
	template<> VERTEXPAINTDETECTIONPLUGIN_API UClass* StaticClass<UVertexPaintMaterialDataAsset>()
	{
		return UVertexPaintMaterialDataAsset::StaticClass();
	}
	DEFINE_VTABLE_PTR_HELPER_CTOR(UVertexPaintMaterialDataAsset);
	UVertexPaintMaterialDataAsset::~UVertexPaintMaterialDataAsset() {}
	struct Z_CompiledInDeferFile_FID_build_U5M_Marketplace_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_VertexPaintDetectionPlugin_Source_VertexPaintDetectionPlugin_Public_VertexPaintMaterialDataAsset_h_Statics
	{
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_build_U5M_Marketplace_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_VertexPaintDetectionPlugin_Source_VertexPaintDetectionPlugin_Public_VertexPaintMaterialDataAsset_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_UVertexPaintMaterialDataAsset, UVertexPaintMaterialDataAsset::StaticClass, TEXT("UVertexPaintMaterialDataAsset"), &Z_Registration_Info_UClass_UVertexPaintMaterialDataAsset, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UVertexPaintMaterialDataAsset), 2624675936U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_build_U5M_Marketplace_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_VertexPaintDetectionPlugin_Source_VertexPaintDetectionPlugin_Public_VertexPaintMaterialDataAsset_h_2062006675(TEXT("/Script/VertexPaintDetectionPlugin"),
		Z_CompiledInDeferFile_FID_build_U5M_Marketplace_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_VertexPaintDetectionPlugin_Source_VertexPaintDetectionPlugin_Public_VertexPaintMaterialDataAsset_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_build_U5M_Marketplace_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_VertexPaintDetectionPlugin_Source_VertexPaintDetectionPlugin_Public_VertexPaintMaterialDataAsset_h_Statics::ClassInfo),
		nullptr, 0,
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
