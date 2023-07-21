// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "VertexPaintDetectionPlugin/Public/VertexPaintColorSnippetRefs.h"
#include "GameplayTags/Classes/GameplayTagContainer.h"
#include "VertexPaintDetectionPlugin/Public/VertexPaintDetectionStructs.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeVertexPaintColorSnippetRefs() {}
// Cross Module References
	COREUOBJECT_API UClass* Z_Construct_UClass_UObject_NoRegister();
	ENGINE_API UClass* Z_Construct_UClass_UDataAsset();
	GAMEPLAYTAGS_API UScriptStruct* Z_Construct_UScriptStruct_FGameplayTagContainer();
	UPackage* Z_Construct_UPackage__Script_VertexPaintDetectionPlugin();
	VERTEXPAINTDETECTIONPLUGIN_API UClass* Z_Construct_UClass_UVertexPaintColorSnippetDataAsset_NoRegister();
	VERTEXPAINTDETECTIONPLUGIN_API UClass* Z_Construct_UClass_UVertexPaintColorSnippetRefs();
	VERTEXPAINTDETECTIONPLUGIN_API UClass* Z_Construct_UClass_UVertexPaintColorSnippetRefs_NoRegister();
	VERTEXPAINTDETECTIONPLUGIN_API UScriptStruct* Z_Construct_UScriptStruct_FVertexDetectColorSnippetReferenceDataStruct();
// End Cross Module References
	DEFINE_FUNCTION(UVertexPaintColorSnippetRefs::execContainsColorSnippet)
	{
		P_GET_PROPERTY(FStrProperty,Z_Param_snippetID);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(bool*)Z_Param__Result=P_THIS->ContainsColorSnippet(Z_Param_snippetID);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UVertexPaintColorSnippetRefs::execGetAllColorSnippetsAndDataAssetForObject)
	{
		P_GET_OBJECT(UObject,Z_Param_object);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(TMap<FString,TSoftObjectPtr<UVertexPaintColorSnippetDataAsset> >*)Z_Param__Result=P_THIS->GetAllColorSnippetsAndDataAssetForObject(Z_Param_object);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UVertexPaintColorSnippetRefs::execGetObjectFromSnippetID)
	{
		P_GET_PROPERTY(FStrProperty,Z_Param_snippetID);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(TSoftObjectPtr<UObject>*)Z_Param__Result=P_THIS->GetObjectFromSnippetID(Z_Param_snippetID);
		P_NATIVE_END;
	}
	void UVertexPaintColorSnippetRefs::StaticRegisterNativesUVertexPaintColorSnippetRefs()
	{
		UClass* Class = UVertexPaintColorSnippetRefs::StaticClass();
		static const FNameNativePtrPair Funcs[] = {
			{ "ContainsColorSnippet", &UVertexPaintColorSnippetRefs::execContainsColorSnippet },
			{ "GetAllColorSnippetsAndDataAssetForObject", &UVertexPaintColorSnippetRefs::execGetAllColorSnippetsAndDataAssetForObject },
			{ "GetObjectFromSnippetID", &UVertexPaintColorSnippetRefs::execGetObjectFromSnippetID },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
	}
	struct Z_Construct_UFunction_UVertexPaintColorSnippetRefs_ContainsColorSnippet_Statics
	{
		struct VertexPaintColorSnippetRefs_eventContainsColorSnippet_Parms
		{
			FString snippetID;
			bool ReturnValue;
		};
		static const UECodeGen_Private::FStrPropertyParams NewProp_snippetID;
		static void NewProp_ReturnValue_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UVertexPaintColorSnippetRefs_ContainsColorSnippet_Statics::NewProp_snippetID = { "snippetID", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(VertexPaintColorSnippetRefs_eventContainsColorSnippet_Parms, snippetID), METADATA_PARAMS(nullptr, 0) };
	void Z_Construct_UFunction_UVertexPaintColorSnippetRefs_ContainsColorSnippet_Statics::NewProp_ReturnValue_SetBit(void* Obj)
	{
		((VertexPaintColorSnippetRefs_eventContainsColorSnippet_Parms*)Obj)->ReturnValue = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UVertexPaintColorSnippetRefs_ContainsColorSnippet_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(bool), sizeof(VertexPaintColorSnippetRefs_eventContainsColorSnippet_Parms), &Z_Construct_UFunction_UVertexPaintColorSnippetRefs_ContainsColorSnippet_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UVertexPaintColorSnippetRefs_ContainsColorSnippet_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UVertexPaintColorSnippetRefs_ContainsColorSnippet_Statics::NewProp_snippetID,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UVertexPaintColorSnippetRefs_ContainsColorSnippet_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UVertexPaintColorSnippetRefs_ContainsColorSnippet_Statics::Function_MetaDataParams[] = {
		{ "Category", "Runtime Vertex Color Paint and Detection Plugin" },
		{ "ModuleRelativePath", "Public/VertexPaintColorSnippetRefs.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UVertexPaintColorSnippetRefs_ContainsColorSnippet_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UVertexPaintColorSnippetRefs, nullptr, "ContainsColorSnippet", nullptr, nullptr, sizeof(Z_Construct_UFunction_UVertexPaintColorSnippetRefs_ContainsColorSnippet_Statics::VertexPaintColorSnippetRefs_eventContainsColorSnippet_Parms), Z_Construct_UFunction_UVertexPaintColorSnippetRefs_ContainsColorSnippet_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UVertexPaintColorSnippetRefs_ContainsColorSnippet_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UVertexPaintColorSnippetRefs_ContainsColorSnippet_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UVertexPaintColorSnippetRefs_ContainsColorSnippet_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UVertexPaintColorSnippetRefs_ContainsColorSnippet()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UVertexPaintColorSnippetRefs_ContainsColorSnippet_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UVertexPaintColorSnippetRefs_GetAllColorSnippetsAndDataAssetForObject_Statics
	{
		struct VertexPaintColorSnippetRefs_eventGetAllColorSnippetsAndDataAssetForObject_Parms
		{
			UObject* object;
			TMap<FString,TSoftObjectPtr<UVertexPaintColorSnippetDataAsset> > ReturnValue;
		};
		static const UECodeGen_Private::FObjectPropertyParams NewProp_object;
		static const UECodeGen_Private::FSoftObjectPropertyParams NewProp_ReturnValue_ValueProp;
		static const UECodeGen_Private::FStrPropertyParams NewProp_ReturnValue_Key_KeyProp;
		static const UECodeGen_Private::FMapPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UVertexPaintColorSnippetRefs_GetAllColorSnippetsAndDataAssetForObject_Statics::NewProp_object = { "object", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(VertexPaintColorSnippetRefs_eventGetAllColorSnippetsAndDataAssetForObject_Parms, object), Z_Construct_UClass_UObject_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FSoftObjectPropertyParams Z_Construct_UFunction_UVertexPaintColorSnippetRefs_GetAllColorSnippetsAndDataAssetForObject_Statics::NewProp_ReturnValue_ValueProp = { "ReturnValue", nullptr, (EPropertyFlags)0x0004000000000000, UECodeGen_Private::EPropertyGenFlags::SoftObject, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, 1, Z_Construct_UClass_UVertexPaintColorSnippetDataAsset_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UVertexPaintColorSnippetRefs_GetAllColorSnippetsAndDataAssetForObject_Statics::NewProp_ReturnValue_Key_KeyProp = { "ReturnValue_Key", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, 0, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FMapPropertyParams Z_Construct_UFunction_UVertexPaintColorSnippetRefs_GetAllColorSnippetsAndDataAssetForObject_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0014000000000580, UECodeGen_Private::EPropertyGenFlags::Map, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(VertexPaintColorSnippetRefs_eventGetAllColorSnippetsAndDataAssetForObject_Parms, ReturnValue), EMapPropertyFlags::None, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UVertexPaintColorSnippetRefs_GetAllColorSnippetsAndDataAssetForObject_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UVertexPaintColorSnippetRefs_GetAllColorSnippetsAndDataAssetForObject_Statics::NewProp_object,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UVertexPaintColorSnippetRefs_GetAllColorSnippetsAndDataAssetForObject_Statics::NewProp_ReturnValue_ValueProp,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UVertexPaintColorSnippetRefs_GetAllColorSnippetsAndDataAssetForObject_Statics::NewProp_ReturnValue_Key_KeyProp,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UVertexPaintColorSnippetRefs_GetAllColorSnippetsAndDataAssetForObject_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UVertexPaintColorSnippetRefs_GetAllColorSnippetsAndDataAssetForObject_Statics::Function_MetaDataParams[] = {
		{ "Category", "Runtime Vertex Color Paint and Detection Plugin" },
		{ "ModuleRelativePath", "Public/VertexPaintColorSnippetRefs.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UVertexPaintColorSnippetRefs_GetAllColorSnippetsAndDataAssetForObject_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UVertexPaintColorSnippetRefs, nullptr, "GetAllColorSnippetsAndDataAssetForObject", nullptr, nullptr, sizeof(Z_Construct_UFunction_UVertexPaintColorSnippetRefs_GetAllColorSnippetsAndDataAssetForObject_Statics::VertexPaintColorSnippetRefs_eventGetAllColorSnippetsAndDataAssetForObject_Parms), Z_Construct_UFunction_UVertexPaintColorSnippetRefs_GetAllColorSnippetsAndDataAssetForObject_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UVertexPaintColorSnippetRefs_GetAllColorSnippetsAndDataAssetForObject_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UVertexPaintColorSnippetRefs_GetAllColorSnippetsAndDataAssetForObject_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UVertexPaintColorSnippetRefs_GetAllColorSnippetsAndDataAssetForObject_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UVertexPaintColorSnippetRefs_GetAllColorSnippetsAndDataAssetForObject()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UVertexPaintColorSnippetRefs_GetAllColorSnippetsAndDataAssetForObject_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UVertexPaintColorSnippetRefs_GetObjectFromSnippetID_Statics
	{
		struct VertexPaintColorSnippetRefs_eventGetObjectFromSnippetID_Parms
		{
			FString snippetID;
			TSoftObjectPtr<UObject> ReturnValue;
		};
		static const UECodeGen_Private::FStrPropertyParams NewProp_snippetID;
		static const UECodeGen_Private::FSoftObjectPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UVertexPaintColorSnippetRefs_GetObjectFromSnippetID_Statics::NewProp_snippetID = { "snippetID", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(VertexPaintColorSnippetRefs_eventGetObjectFromSnippetID_Parms, snippetID), METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FSoftObjectPropertyParams Z_Construct_UFunction_UVertexPaintColorSnippetRefs_GetObjectFromSnippetID_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0014000000000580, UECodeGen_Private::EPropertyGenFlags::SoftObject, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(VertexPaintColorSnippetRefs_eventGetObjectFromSnippetID_Parms, ReturnValue), Z_Construct_UClass_UObject_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UVertexPaintColorSnippetRefs_GetObjectFromSnippetID_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UVertexPaintColorSnippetRefs_GetObjectFromSnippetID_Statics::NewProp_snippetID,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UVertexPaintColorSnippetRefs_GetObjectFromSnippetID_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UVertexPaintColorSnippetRefs_GetObjectFromSnippetID_Statics::Function_MetaDataParams[] = {
		{ "Category", "Runtime Vertex Color Paint and Detection Plugin" },
		{ "ModuleRelativePath", "Public/VertexPaintColorSnippetRefs.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UVertexPaintColorSnippetRefs_GetObjectFromSnippetID_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UVertexPaintColorSnippetRefs, nullptr, "GetObjectFromSnippetID", nullptr, nullptr, sizeof(Z_Construct_UFunction_UVertexPaintColorSnippetRefs_GetObjectFromSnippetID_Statics::VertexPaintColorSnippetRefs_eventGetObjectFromSnippetID_Parms), Z_Construct_UFunction_UVertexPaintColorSnippetRefs_GetObjectFromSnippetID_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UVertexPaintColorSnippetRefs_GetObjectFromSnippetID_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UVertexPaintColorSnippetRefs_GetObjectFromSnippetID_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UVertexPaintColorSnippetRefs_GetObjectFromSnippetID_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UVertexPaintColorSnippetRefs_GetObjectFromSnippetID()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UVertexPaintColorSnippetRefs_GetObjectFromSnippetID_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UVertexPaintColorSnippetRefs);
	UClass* Z_Construct_UClass_UVertexPaintColorSnippetRefs_NoRegister()
	{
		return UVertexPaintColorSnippetRefs::StaticClass();
	}
	struct Z_Construct_UClass_UVertexPaintColorSnippetRefs_Statics
	{
		static UObject* (*const DependentSingletons[])();
		static const FClassFunctionLinkInfo FuncInfo[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_staticMeshesColorSnippets_ValueProp;
		static const UECodeGen_Private::FSoftObjectPropertyParams NewProp_staticMeshesColorSnippets_Key_KeyProp;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_staticMeshesColorSnippets_MetaData[];
#endif
		static const UECodeGen_Private::FMapPropertyParams NewProp_staticMeshesColorSnippets;
		static const UECodeGen_Private::FStructPropertyParams NewProp_skeletalMeshesColorSnippets_ValueProp;
		static const UECodeGen_Private::FSoftObjectPropertyParams NewProp_skeletalMeshesColorSnippets_Key_KeyProp;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_skeletalMeshesColorSnippets_MetaData[];
#endif
		static const UECodeGen_Private::FMapPropertyParams NewProp_skeletalMeshesColorSnippets;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_allAvailableColorSnippets_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_allAvailableColorSnippets;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UVertexPaintColorSnippetRefs_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UDataAsset,
		(UObject* (*)())Z_Construct_UPackage__Script_VertexPaintDetectionPlugin,
	};
	const FClassFunctionLinkInfo Z_Construct_UClass_UVertexPaintColorSnippetRefs_Statics::FuncInfo[] = {
		{ &Z_Construct_UFunction_UVertexPaintColorSnippetRefs_ContainsColorSnippet, "ContainsColorSnippet" }, // 2229633717
		{ &Z_Construct_UFunction_UVertexPaintColorSnippetRefs_GetAllColorSnippetsAndDataAssetForObject, "GetAllColorSnippetsAndDataAssetForObject" }, // 4209871217
		{ &Z_Construct_UFunction_UVertexPaintColorSnippetRefs_GetObjectFromSnippetID, "GetObjectFromSnippetID" }, // 197379830
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UVertexPaintColorSnippetRefs_Statics::Class_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "Comment", "/**\n *\n */" },
		{ "IncludePath", "VertexPaintColorSnippetRefs.h" },
		{ "IsBlueprintBase", "true" },
		{ "ModuleRelativePath", "Public/VertexPaintColorSnippetRefs.h" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_UVertexPaintColorSnippetRefs_Statics::NewProp_staticMeshesColorSnippets_ValueProp = { "staticMeshesColorSnippets", nullptr, (EPropertyFlags)0x0000000000020001, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, 1, Z_Construct_UScriptStruct_FVertexDetectColorSnippetReferenceDataStruct, METADATA_PARAMS(nullptr, 0) }; // 2440484270
	const UECodeGen_Private::FSoftObjectPropertyParams Z_Construct_UClass_UVertexPaintColorSnippetRefs_Statics::NewProp_staticMeshesColorSnippets_Key_KeyProp = { "staticMeshesColorSnippets_Key", nullptr, (EPropertyFlags)0x0004000000020001, UECodeGen_Private::EPropertyGenFlags::SoftObject, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, 0, Z_Construct_UClass_UObject_NoRegister, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UVertexPaintColorSnippetRefs_Statics::NewProp_staticMeshesColorSnippets_MetaData[] = {
		{ "Category", "Runtime Vertex Color Paint and Detection Plugin" },
		{ "ModuleRelativePath", "Public/VertexPaintColorSnippetRefs.h" },
	};
#endif
	const UECodeGen_Private::FMapPropertyParams Z_Construct_UClass_UVertexPaintColorSnippetRefs_Statics::NewProp_staticMeshesColorSnippets = { "staticMeshesColorSnippets", nullptr, (EPropertyFlags)0x0010000000020005, UECodeGen_Private::EPropertyGenFlags::Map, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UVertexPaintColorSnippetRefs, staticMeshesColorSnippets), EMapPropertyFlags::None, METADATA_PARAMS(Z_Construct_UClass_UVertexPaintColorSnippetRefs_Statics::NewProp_staticMeshesColorSnippets_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UVertexPaintColorSnippetRefs_Statics::NewProp_staticMeshesColorSnippets_MetaData)) }; // 2440484270
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_UVertexPaintColorSnippetRefs_Statics::NewProp_skeletalMeshesColorSnippets_ValueProp = { "skeletalMeshesColorSnippets", nullptr, (EPropertyFlags)0x0000000000020001, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, 1, Z_Construct_UScriptStruct_FVertexDetectColorSnippetReferenceDataStruct, METADATA_PARAMS(nullptr, 0) }; // 2440484270
	const UECodeGen_Private::FSoftObjectPropertyParams Z_Construct_UClass_UVertexPaintColorSnippetRefs_Statics::NewProp_skeletalMeshesColorSnippets_Key_KeyProp = { "skeletalMeshesColorSnippets_Key", nullptr, (EPropertyFlags)0x0004000000020001, UECodeGen_Private::EPropertyGenFlags::SoftObject, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, 0, Z_Construct_UClass_UObject_NoRegister, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UVertexPaintColorSnippetRefs_Statics::NewProp_skeletalMeshesColorSnippets_MetaData[] = {
		{ "Category", "Runtime Vertex Color Paint and Detection Plugin" },
		{ "ModuleRelativePath", "Public/VertexPaintColorSnippetRefs.h" },
	};
#endif
	const UECodeGen_Private::FMapPropertyParams Z_Construct_UClass_UVertexPaintColorSnippetRefs_Statics::NewProp_skeletalMeshesColorSnippets = { "skeletalMeshesColorSnippets", nullptr, (EPropertyFlags)0x0010000000020005, UECodeGen_Private::EPropertyGenFlags::Map, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UVertexPaintColorSnippetRefs, skeletalMeshesColorSnippets), EMapPropertyFlags::None, METADATA_PARAMS(Z_Construct_UClass_UVertexPaintColorSnippetRefs_Statics::NewProp_skeletalMeshesColorSnippets_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UVertexPaintColorSnippetRefs_Statics::NewProp_skeletalMeshesColorSnippets_MetaData)) }; // 2440484270
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UVertexPaintColorSnippetRefs_Statics::NewProp_allAvailableColorSnippets_MetaData[] = {
		{ "Comment", "/*VisibleAnywhere*/" },
		{ "ModuleRelativePath", "Public/VertexPaintColorSnippetRefs.h" },
		{ "ToolTip", "VisibleAnywhere" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_UVertexPaintColorSnippetRefs_Statics::NewProp_allAvailableColorSnippets = { "allAvailableColorSnippets", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UVertexPaintColorSnippetRefs, allAvailableColorSnippets), Z_Construct_UScriptStruct_FGameplayTagContainer, METADATA_PARAMS(Z_Construct_UClass_UVertexPaintColorSnippetRefs_Statics::NewProp_allAvailableColorSnippets_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UVertexPaintColorSnippetRefs_Statics::NewProp_allAvailableColorSnippets_MetaData)) }; // 3057219007
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UVertexPaintColorSnippetRefs_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UVertexPaintColorSnippetRefs_Statics::NewProp_staticMeshesColorSnippets_ValueProp,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UVertexPaintColorSnippetRefs_Statics::NewProp_staticMeshesColorSnippets_Key_KeyProp,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UVertexPaintColorSnippetRefs_Statics::NewProp_staticMeshesColorSnippets,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UVertexPaintColorSnippetRefs_Statics::NewProp_skeletalMeshesColorSnippets_ValueProp,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UVertexPaintColorSnippetRefs_Statics::NewProp_skeletalMeshesColorSnippets_Key_KeyProp,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UVertexPaintColorSnippetRefs_Statics::NewProp_skeletalMeshesColorSnippets,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UVertexPaintColorSnippetRefs_Statics::NewProp_allAvailableColorSnippets,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_UVertexPaintColorSnippetRefs_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UVertexPaintColorSnippetRefs>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_UVertexPaintColorSnippetRefs_Statics::ClassParams = {
		&UVertexPaintColorSnippetRefs::StaticClass,
		nullptr,
		&StaticCppClassTypeInfo,
		DependentSingletons,
		FuncInfo,
		Z_Construct_UClass_UVertexPaintColorSnippetRefs_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		UE_ARRAY_COUNT(FuncInfo),
		UE_ARRAY_COUNT(Z_Construct_UClass_UVertexPaintColorSnippetRefs_Statics::PropPointers),
		0,
		0x001000A0u,
		METADATA_PARAMS(Z_Construct_UClass_UVertexPaintColorSnippetRefs_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UVertexPaintColorSnippetRefs_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UVertexPaintColorSnippetRefs()
	{
		if (!Z_Registration_Info_UClass_UVertexPaintColorSnippetRefs.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UVertexPaintColorSnippetRefs.OuterSingleton, Z_Construct_UClass_UVertexPaintColorSnippetRefs_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_UVertexPaintColorSnippetRefs.OuterSingleton;
	}
	template<> VERTEXPAINTDETECTIONPLUGIN_API UClass* StaticClass<UVertexPaintColorSnippetRefs>()
	{
		return UVertexPaintColorSnippetRefs::StaticClass();
	}
	DEFINE_VTABLE_PTR_HELPER_CTOR(UVertexPaintColorSnippetRefs);
	UVertexPaintColorSnippetRefs::~UVertexPaintColorSnippetRefs() {}
	struct Z_CompiledInDeferFile_FID_Build_U5M_Marketplace_Mac_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_VertexPaintDetectionPlugin_Source_VertexPaintDetectionPlugin_Public_VertexPaintColorSnippetRefs_h_Statics
	{
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Build_U5M_Marketplace_Mac_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_VertexPaintDetectionPlugin_Source_VertexPaintDetectionPlugin_Public_VertexPaintColorSnippetRefs_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_UVertexPaintColorSnippetRefs, UVertexPaintColorSnippetRefs::StaticClass, TEXT("UVertexPaintColorSnippetRefs"), &Z_Registration_Info_UClass_UVertexPaintColorSnippetRefs, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UVertexPaintColorSnippetRefs), 4058241719U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Build_U5M_Marketplace_Mac_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_VertexPaintDetectionPlugin_Source_VertexPaintDetectionPlugin_Public_VertexPaintColorSnippetRefs_h_1210722749(TEXT("/Script/VertexPaintDetectionPlugin"),
		Z_CompiledInDeferFile_FID_Build_U5M_Marketplace_Mac_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_VertexPaintDetectionPlugin_Source_VertexPaintDetectionPlugin_Public_VertexPaintColorSnippetRefs_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Build_U5M_Marketplace_Mac_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_VertexPaintDetectionPlugin_Source_VertexPaintDetectionPlugin_Public_VertexPaintColorSnippetRefs_h_Statics::ClassInfo),
		nullptr, 0,
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
