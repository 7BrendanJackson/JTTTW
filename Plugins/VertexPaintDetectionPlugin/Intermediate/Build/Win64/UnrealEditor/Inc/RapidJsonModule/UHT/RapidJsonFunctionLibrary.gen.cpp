// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "RapidJsonModule/Public/RapidJsonFunctionLibrary.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeRapidJsonFunctionLibrary() {}
// Cross Module References
	COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FColor();
	COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FRotator();
	COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FTransform();
	COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FVector();
	ENGINE_API UClass* Z_Construct_UClass_UBlueprintFunctionLibrary();
	RAPIDJSONMODULE_API UClass* Z_Construct_UClass_URapidJsonFunctionLibrary();
	RAPIDJSONMODULE_API UClass* Z_Construct_UClass_URapidJsonFunctionLibrary_NoRegister();
	RAPIDJSONMODULE_API UScriptStruct* Z_Construct_UScriptStruct_FCustomStructSerialization();
	UPackage* Z_Construct_UPackage__Script_RapidJsonModule();
// End Cross Module References
	static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_CustomStructSerialization;
class UScriptStruct* FCustomStructSerialization::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_CustomStructSerialization.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_CustomStructSerialization.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FCustomStructSerialization, Z_Construct_UPackage__Script_RapidJsonModule(), TEXT("CustomStructSerialization"));
	}
	return Z_Registration_Info_UScriptStruct_CustomStructSerialization.OuterSingleton;
}
template<> RAPIDJSONMODULE_API UScriptStruct* StaticStruct<FCustomStructSerialization>()
{
	return FCustomStructSerialization::StaticStruct();
}
	struct Z_Construct_UScriptStruct_FCustomStructSerialization_Statics
	{
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
		static const UECodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FCustomStructSerialization_Statics::Struct_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "ModuleRelativePath", "Public/RapidJsonFunctionLibrary.h" },
	};
#endif
	void* Z_Construct_UScriptStruct_FCustomStructSerialization_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FCustomStructSerialization>();
	}
	const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FCustomStructSerialization_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_RapidJsonModule,
		nullptr,
		&NewStructOps,
		"CustomStructSerialization",
		sizeof(FCustomStructSerialization),
		alignof(FCustomStructSerialization),
		nullptr,
		0,
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000001),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FCustomStructSerialization_Statics::Struct_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FCustomStructSerialization_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FCustomStructSerialization()
	{
		if (!Z_Registration_Info_UScriptStruct_CustomStructSerialization.InnerSingleton)
		{
			UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_CustomStructSerialization.InnerSingleton, Z_Construct_UScriptStruct_FCustomStructSerialization_Statics::ReturnStructParams);
		}
		return Z_Registration_Info_UScriptStruct_CustomStructSerialization.InnerSingleton;
	}
	DEFINE_FUNCTION(URapidJsonFunctionLibrary::execDeserializeTArrayFTransform_Wrapper)
	{
		P_GET_PROPERTY(FStrProperty,Z_Param_JsonString);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(TArray<FTransform>*)Z_Param__Result=URapidJsonFunctionLibrary::DeserializeTArrayFTransform_Wrapper(Z_Param_JsonString);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(URapidJsonFunctionLibrary::execDeserializeTArrayFRotator_Wrapper)
	{
		P_GET_PROPERTY(FStrProperty,Z_Param_JsonString);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(TArray<FRotator>*)Z_Param__Result=URapidJsonFunctionLibrary::DeserializeTArrayFRotator_Wrapper(Z_Param_JsonString);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(URapidJsonFunctionLibrary::execDeserializeTArrayFVector_Wrapper)
	{
		P_GET_PROPERTY(FStrProperty,Z_Param_JsonString);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(TArray<FVector>*)Z_Param__Result=URapidJsonFunctionLibrary::DeserializeTArrayFVector_Wrapper(Z_Param_JsonString);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(URapidJsonFunctionLibrary::execDeserializeTArrayFloat_Wrapper)
	{
		P_GET_PROPERTY(FStrProperty,Z_Param_JsonString);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(TArray<float>*)Z_Param__Result=URapidJsonFunctionLibrary::DeserializeTArrayFloat_Wrapper(Z_Param_JsonString);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(URapidJsonFunctionLibrary::execDeserializeTArrayFText_Wrapper)
	{
		P_GET_PROPERTY(FStrProperty,Z_Param_JsonString);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(TArray<FText>*)Z_Param__Result=URapidJsonFunctionLibrary::DeserializeTArrayFText_Wrapper(Z_Param_JsonString);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(URapidJsonFunctionLibrary::execDeserializeTArrayFName_Wrapper)
	{
		P_GET_PROPERTY(FStrProperty,Z_Param_JsonString);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(TArray<FName>*)Z_Param__Result=URapidJsonFunctionLibrary::DeserializeTArrayFName_Wrapper(Z_Param_JsonString);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(URapidJsonFunctionLibrary::execDeserializeTArrayBool_Wrapper)
	{
		P_GET_PROPERTY(FStrProperty,Z_Param_JsonString);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(TArray<bool>*)Z_Param__Result=URapidJsonFunctionLibrary::DeserializeTArrayBool_Wrapper(Z_Param_JsonString);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(URapidJsonFunctionLibrary::execDeserializeTArrayFColor_Wrapper)
	{
		P_GET_PROPERTY(FStrProperty,Z_Param_JsonString);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(TArray<FColor>*)Z_Param__Result=URapidJsonFunctionLibrary::DeserializeTArrayFColor_Wrapper(Z_Param_JsonString);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(URapidJsonFunctionLibrary::execDeserializeTArrayFString_Wrapper)
	{
		P_GET_PROPERTY(FStrProperty,Z_Param_JsonString);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(TArray<FString>*)Z_Param__Result=URapidJsonFunctionLibrary::DeserializeTArrayFString_Wrapper(Z_Param_JsonString);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(URapidJsonFunctionLibrary::execDeserializeTArrayInt64_Wrapper)
	{
		P_GET_PROPERTY(FStrProperty,Z_Param_JsonString);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(TArray<int64>*)Z_Param__Result=URapidJsonFunctionLibrary::DeserializeTArrayInt64_Wrapper(Z_Param_JsonString);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(URapidJsonFunctionLibrary::execDeserializeTArrayUInt8_Wrapper)
	{
		P_GET_PROPERTY(FStrProperty,Z_Param_JsonString);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(TArray<uint8>*)Z_Param__Result=URapidJsonFunctionLibrary::DeserializeTArrayUInt8_Wrapper(Z_Param_JsonString);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(URapidJsonFunctionLibrary::execDeserializeTArrayInt_Wrapper)
	{
		P_GET_PROPERTY(FStrProperty,Z_Param_JsonString);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(TArray<int32>*)Z_Param__Result=URapidJsonFunctionLibrary::DeserializeTArrayInt_Wrapper(Z_Param_JsonString);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(URapidJsonFunctionLibrary::execSerializeTArrayFTransform_Wrapper)
	{
		P_GET_TARRAY_REF(FTransform,Z_Param_Out_inTransform);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(FString*)Z_Param__Result=URapidJsonFunctionLibrary::SerializeTArrayFTransform_Wrapper(Z_Param_Out_inTransform);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(URapidJsonFunctionLibrary::execSerializeTArrayFRotator_Wrapper)
	{
		P_GET_TARRAY_REF(FRotator,Z_Param_Out_inRotator);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(FString*)Z_Param__Result=URapidJsonFunctionLibrary::SerializeTArrayFRotator_Wrapper(Z_Param_Out_inRotator);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(URapidJsonFunctionLibrary::execSerializeTArrayFVector_Wrapper)
	{
		P_GET_TARRAY_REF(FVector,Z_Param_Out_inFVector);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(FString*)Z_Param__Result=URapidJsonFunctionLibrary::SerializeTArrayFVector_Wrapper(Z_Param_Out_inFVector);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(URapidJsonFunctionLibrary::execSerializeTArrayFloat_Wrapper)
	{
		P_GET_TARRAY_REF(float,Z_Param_Out_inFloats);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(FString*)Z_Param__Result=URapidJsonFunctionLibrary::SerializeTArrayFloat_Wrapper(Z_Param_Out_inFloats);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(URapidJsonFunctionLibrary::execSerializeTArrayFText_Wrapper)
	{
		P_GET_TARRAY_REF(FText,Z_Param_Out_InTexts);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(FString*)Z_Param__Result=URapidJsonFunctionLibrary::SerializeTArrayFText_Wrapper(Z_Param_Out_InTexts);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(URapidJsonFunctionLibrary::execSerializeTArrayFName_Wrapper)
	{
		P_GET_TARRAY_REF(FName,Z_Param_Out_InNames);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(FString*)Z_Param__Result=URapidJsonFunctionLibrary::SerializeTArrayFName_Wrapper(Z_Param_Out_InNames);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(URapidJsonFunctionLibrary::execSerializeTArrayBool_Wrapper)
	{
		P_GET_TARRAY_REF(bool,Z_Param_Out_InBools);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(FString*)Z_Param__Result=URapidJsonFunctionLibrary::SerializeTArrayBool_Wrapper(Z_Param_Out_InBools);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(URapidJsonFunctionLibrary::execSerializeTArrayFColor_Wrapper)
	{
		P_GET_TARRAY_REF(FColor,Z_Param_Out_Colors);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(FString*)Z_Param__Result=URapidJsonFunctionLibrary::SerializeTArrayFColor_Wrapper(Z_Param_Out_Colors);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(URapidJsonFunctionLibrary::execSerializeTArrayFString_Wrapper)
	{
		P_GET_TARRAY_REF(FString,Z_Param_Out_InStrings);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(FString*)Z_Param__Result=URapidJsonFunctionLibrary::SerializeTArrayFString_Wrapper(Z_Param_Out_InStrings);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(URapidJsonFunctionLibrary::execSerializeTArrayInt64_Wrapper)
	{
		P_GET_TARRAY_REF(int64,Z_Param_Out_InInt64s);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(FString*)Z_Param__Result=URapidJsonFunctionLibrary::SerializeTArrayInt64_Wrapper(Z_Param_Out_InInt64s);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(URapidJsonFunctionLibrary::execSerializeTArrayUInt8_Wrapper)
	{
		P_GET_TARRAY_REF(uint8,Z_Param_Out_InUInt8s);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(FString*)Z_Param__Result=URapidJsonFunctionLibrary::SerializeTArrayUInt8_Wrapper(Z_Param_Out_InUInt8s);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(URapidJsonFunctionLibrary::execSerializeTArrayInt_Wrapper)
	{
		P_GET_TARRAY_REF(int32,Z_Param_Out_InInts);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(FString*)Z_Param__Result=URapidJsonFunctionLibrary::SerializeTArrayInt_Wrapper(Z_Param_Out_InInts);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(URapidJsonFunctionLibrary::execDeserializeFTransform_Wrapper)
	{
		P_GET_PROPERTY(FStrProperty,Z_Param_JsonString);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(FTransform*)Z_Param__Result=URapidJsonFunctionLibrary::DeserializeFTransform_Wrapper(Z_Param_JsonString);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(URapidJsonFunctionLibrary::execDeserializeFRotator_Wrapper)
	{
		P_GET_PROPERTY(FStrProperty,Z_Param_JsonString);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(FRotator*)Z_Param__Result=URapidJsonFunctionLibrary::DeserializeFRotator_Wrapper(Z_Param_JsonString);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(URapidJsonFunctionLibrary::execDeserializeFVector_Wrapper)
	{
		P_GET_PROPERTY(FStrProperty,Z_Param_JsonString);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(FVector*)Z_Param__Result=URapidJsonFunctionLibrary::DeserializeFVector_Wrapper(Z_Param_JsonString);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(URapidJsonFunctionLibrary::execDeserializeFloat_Wrapper)
	{
		P_GET_PROPERTY(FStrProperty,Z_Param_JsonString);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(float*)Z_Param__Result=URapidJsonFunctionLibrary::DeserializeFloat_Wrapper(Z_Param_JsonString);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(URapidJsonFunctionLibrary::execDeserializeFText_Wrapper)
	{
		P_GET_PROPERTY(FStrProperty,Z_Param_JsonString);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(FText*)Z_Param__Result=URapidJsonFunctionLibrary::DeserializeFText_Wrapper(Z_Param_JsonString);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(URapidJsonFunctionLibrary::execDeserializeFName_Wrapper)
	{
		P_GET_PROPERTY(FStrProperty,Z_Param_JsonString);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(FName*)Z_Param__Result=URapidJsonFunctionLibrary::DeserializeFName_Wrapper(Z_Param_JsonString);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(URapidJsonFunctionLibrary::execDeserializeBool_Wrapper)
	{
		P_GET_PROPERTY(FStrProperty,Z_Param_JsonString);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(bool*)Z_Param__Result=URapidJsonFunctionLibrary::DeserializeBool_Wrapper(Z_Param_JsonString);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(URapidJsonFunctionLibrary::execDeserializeFColor_Wrapper)
	{
		P_GET_PROPERTY(FStrProperty,Z_Param_JsonString);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(FColor*)Z_Param__Result=URapidJsonFunctionLibrary::DeserializeFColor_Wrapper(Z_Param_JsonString);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(URapidJsonFunctionLibrary::execDeserializeFString_Wrapper)
	{
		P_GET_PROPERTY(FStrProperty,Z_Param_JsonString);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(FString*)Z_Param__Result=URapidJsonFunctionLibrary::DeserializeFString_Wrapper(Z_Param_JsonString);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(URapidJsonFunctionLibrary::execDeserializeInt64_Wrapper)
	{
		P_GET_PROPERTY(FStrProperty,Z_Param_JsonString);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(int64*)Z_Param__Result=URapidJsonFunctionLibrary::DeserializeInt64_Wrapper(Z_Param_JsonString);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(URapidJsonFunctionLibrary::execDeserializeUInt8_Wrapper)
	{
		P_GET_PROPERTY(FStrProperty,Z_Param_JsonString);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(uint8*)Z_Param__Result=URapidJsonFunctionLibrary::DeserializeUInt8_Wrapper(Z_Param_JsonString);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(URapidJsonFunctionLibrary::execDeserializeInt_Wrapper)
	{
		P_GET_PROPERTY(FStrProperty,Z_Param_JsonString);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(int32*)Z_Param__Result=URapidJsonFunctionLibrary::DeserializeInt_Wrapper(Z_Param_JsonString);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(URapidJsonFunctionLibrary::execSerializeFTransform_Wrapper)
	{
		P_GET_STRUCT_REF(FTransform,Z_Param_Out_TextValue);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(FString*)Z_Param__Result=URapidJsonFunctionLibrary::SerializeFTransform_Wrapper(Z_Param_Out_TextValue);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(URapidJsonFunctionLibrary::execSerializeFRotator_Wrapper)
	{
		P_GET_STRUCT_REF(FRotator,Z_Param_Out_TextValue);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(FString*)Z_Param__Result=URapidJsonFunctionLibrary::SerializeFRotator_Wrapper(Z_Param_Out_TextValue);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(URapidJsonFunctionLibrary::execSerializeFVector_Wrapper)
	{
		P_GET_STRUCT_REF(FVector,Z_Param_Out_TextValue);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(FString*)Z_Param__Result=URapidJsonFunctionLibrary::SerializeFVector_Wrapper(Z_Param_Out_TextValue);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(URapidJsonFunctionLibrary::execSerializeFloat_Wrapper)
	{
		P_GET_PROPERTY_REF(FFloatProperty,Z_Param_Out_TextValue);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(FString*)Z_Param__Result=URapidJsonFunctionLibrary::SerializeFloat_Wrapper(Z_Param_Out_TextValue);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(URapidJsonFunctionLibrary::execSerializeFText_Wrapper)
	{
		P_GET_PROPERTY_REF(FTextProperty,Z_Param_Out_TextValue);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(FString*)Z_Param__Result=URapidJsonFunctionLibrary::SerializeFText_Wrapper(Z_Param_Out_TextValue);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(URapidJsonFunctionLibrary::execSerializeFName_Wrapper)
	{
		P_GET_PROPERTY_REF(FNameProperty,Z_Param_Out_NameValue);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(FString*)Z_Param__Result=URapidJsonFunctionLibrary::SerializeFName_Wrapper(Z_Param_Out_NameValue);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(URapidJsonFunctionLibrary::execSerializeBool_Wrapper)
	{
		P_GET_UBOOL(Z_Param_BoolValue);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(FString*)Z_Param__Result=URapidJsonFunctionLibrary::SerializeBool_Wrapper(Z_Param_BoolValue);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(URapidJsonFunctionLibrary::execSerializeFColor_Wrapper)
	{
		P_GET_STRUCT_REF(FColor,Z_Param_Out_ColorValue);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(FString*)Z_Param__Result=URapidJsonFunctionLibrary::SerializeFColor_Wrapper(Z_Param_Out_ColorValue);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(URapidJsonFunctionLibrary::execSerializeFString_Wrapper)
	{
		P_GET_PROPERTY(FStrProperty,Z_Param_StringValue);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(FString*)Z_Param__Result=URapidJsonFunctionLibrary::SerializeFString_Wrapper(Z_Param_StringValue);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(URapidJsonFunctionLibrary::execSerializeInt64_Wrapper)
	{
		P_GET_PROPERTY(FInt64Property,Z_Param_Int64Value);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(FString*)Z_Param__Result=URapidJsonFunctionLibrary::SerializeInt64_Wrapper(Z_Param_Int64Value);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(URapidJsonFunctionLibrary::execSerializeUInt8_Wrapper)
	{
		P_GET_PROPERTY(FByteProperty,Z_Param_UInt8Value);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(FString*)Z_Param__Result=URapidJsonFunctionLibrary::SerializeUInt8_Wrapper(Z_Param_UInt8Value);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(URapidJsonFunctionLibrary::execSerializeInt_Wrapper)
	{
		P_GET_PROPERTY(FIntProperty,Z_Param_IntValue);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(FString*)Z_Param__Result=URapidJsonFunctionLibrary::SerializeInt_Wrapper(Z_Param_IntValue);
		P_NATIVE_END;
	}
	void URapidJsonFunctionLibrary::StaticRegisterNativesURapidJsonFunctionLibrary()
	{
		UClass* Class = URapidJsonFunctionLibrary::StaticClass();
		static const FNameNativePtrPair Funcs[] = {
			{ "DeserializeBool_Wrapper", &URapidJsonFunctionLibrary::execDeserializeBool_Wrapper },
			{ "DeserializeFColor_Wrapper", &URapidJsonFunctionLibrary::execDeserializeFColor_Wrapper },
			{ "DeserializeFloat_Wrapper", &URapidJsonFunctionLibrary::execDeserializeFloat_Wrapper },
			{ "DeserializeFName_Wrapper", &URapidJsonFunctionLibrary::execDeserializeFName_Wrapper },
			{ "DeserializeFRotator_Wrapper", &URapidJsonFunctionLibrary::execDeserializeFRotator_Wrapper },
			{ "DeserializeFString_Wrapper", &URapidJsonFunctionLibrary::execDeserializeFString_Wrapper },
			{ "DeserializeFText_Wrapper", &URapidJsonFunctionLibrary::execDeserializeFText_Wrapper },
			{ "DeserializeFTransform_Wrapper", &URapidJsonFunctionLibrary::execDeserializeFTransform_Wrapper },
			{ "DeserializeFVector_Wrapper", &URapidJsonFunctionLibrary::execDeserializeFVector_Wrapper },
			{ "DeserializeInt64_Wrapper", &URapidJsonFunctionLibrary::execDeserializeInt64_Wrapper },
			{ "DeserializeInt_Wrapper", &URapidJsonFunctionLibrary::execDeserializeInt_Wrapper },
			{ "DeserializeTArrayBool_Wrapper", &URapidJsonFunctionLibrary::execDeserializeTArrayBool_Wrapper },
			{ "DeserializeTArrayFColor_Wrapper", &URapidJsonFunctionLibrary::execDeserializeTArrayFColor_Wrapper },
			{ "DeserializeTArrayFloat_Wrapper", &URapidJsonFunctionLibrary::execDeserializeTArrayFloat_Wrapper },
			{ "DeserializeTArrayFName_Wrapper", &URapidJsonFunctionLibrary::execDeserializeTArrayFName_Wrapper },
			{ "DeserializeTArrayFRotator_Wrapper", &URapidJsonFunctionLibrary::execDeserializeTArrayFRotator_Wrapper },
			{ "DeserializeTArrayFString_Wrapper", &URapidJsonFunctionLibrary::execDeserializeTArrayFString_Wrapper },
			{ "DeserializeTArrayFText_Wrapper", &URapidJsonFunctionLibrary::execDeserializeTArrayFText_Wrapper },
			{ "DeserializeTArrayFTransform_Wrapper", &URapidJsonFunctionLibrary::execDeserializeTArrayFTransform_Wrapper },
			{ "DeserializeTArrayFVector_Wrapper", &URapidJsonFunctionLibrary::execDeserializeTArrayFVector_Wrapper },
			{ "DeserializeTArrayInt64_Wrapper", &URapidJsonFunctionLibrary::execDeserializeTArrayInt64_Wrapper },
			{ "DeserializeTArrayInt_Wrapper", &URapidJsonFunctionLibrary::execDeserializeTArrayInt_Wrapper },
			{ "DeserializeTArrayUInt8_Wrapper", &URapidJsonFunctionLibrary::execDeserializeTArrayUInt8_Wrapper },
			{ "DeserializeUInt8_Wrapper", &URapidJsonFunctionLibrary::execDeserializeUInt8_Wrapper },
			{ "SerializeBool_Wrapper", &URapidJsonFunctionLibrary::execSerializeBool_Wrapper },
			{ "SerializeFColor_Wrapper", &URapidJsonFunctionLibrary::execSerializeFColor_Wrapper },
			{ "SerializeFloat_Wrapper", &URapidJsonFunctionLibrary::execSerializeFloat_Wrapper },
			{ "SerializeFName_Wrapper", &URapidJsonFunctionLibrary::execSerializeFName_Wrapper },
			{ "SerializeFRotator_Wrapper", &URapidJsonFunctionLibrary::execSerializeFRotator_Wrapper },
			{ "SerializeFString_Wrapper", &URapidJsonFunctionLibrary::execSerializeFString_Wrapper },
			{ "SerializeFText_Wrapper", &URapidJsonFunctionLibrary::execSerializeFText_Wrapper },
			{ "SerializeFTransform_Wrapper", &URapidJsonFunctionLibrary::execSerializeFTransform_Wrapper },
			{ "SerializeFVector_Wrapper", &URapidJsonFunctionLibrary::execSerializeFVector_Wrapper },
			{ "SerializeInt64_Wrapper", &URapidJsonFunctionLibrary::execSerializeInt64_Wrapper },
			{ "SerializeInt_Wrapper", &URapidJsonFunctionLibrary::execSerializeInt_Wrapper },
			{ "SerializeTArrayBool_Wrapper", &URapidJsonFunctionLibrary::execSerializeTArrayBool_Wrapper },
			{ "SerializeTArrayFColor_Wrapper", &URapidJsonFunctionLibrary::execSerializeTArrayFColor_Wrapper },
			{ "SerializeTArrayFloat_Wrapper", &URapidJsonFunctionLibrary::execSerializeTArrayFloat_Wrapper },
			{ "SerializeTArrayFName_Wrapper", &URapidJsonFunctionLibrary::execSerializeTArrayFName_Wrapper },
			{ "SerializeTArrayFRotator_Wrapper", &URapidJsonFunctionLibrary::execSerializeTArrayFRotator_Wrapper },
			{ "SerializeTArrayFString_Wrapper", &URapidJsonFunctionLibrary::execSerializeTArrayFString_Wrapper },
			{ "SerializeTArrayFText_Wrapper", &URapidJsonFunctionLibrary::execSerializeTArrayFText_Wrapper },
			{ "SerializeTArrayFTransform_Wrapper", &URapidJsonFunctionLibrary::execSerializeTArrayFTransform_Wrapper },
			{ "SerializeTArrayFVector_Wrapper", &URapidJsonFunctionLibrary::execSerializeTArrayFVector_Wrapper },
			{ "SerializeTArrayInt64_Wrapper", &URapidJsonFunctionLibrary::execSerializeTArrayInt64_Wrapper },
			{ "SerializeTArrayInt_Wrapper", &URapidJsonFunctionLibrary::execSerializeTArrayInt_Wrapper },
			{ "SerializeTArrayUInt8_Wrapper", &URapidJsonFunctionLibrary::execSerializeTArrayUInt8_Wrapper },
			{ "SerializeUInt8_Wrapper", &URapidJsonFunctionLibrary::execSerializeUInt8_Wrapper },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
	}
	struct Z_Construct_UFunction_URapidJsonFunctionLibrary_DeserializeBool_Wrapper_Statics
	{
		struct RapidJsonFunctionLibrary_eventDeserializeBool_Wrapper_Parms
		{
			FString JsonString;
			bool ReturnValue;
		};
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_JsonString_MetaData[];
#endif
		static const UECodeGen_Private::FStrPropertyParams NewProp_JsonString;
		static void NewProp_ReturnValue_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_URapidJsonFunctionLibrary_DeserializeBool_Wrapper_Statics::NewProp_JsonString_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UECodeGen_Private::FStrPropertyParams Z_Construct_UFunction_URapidJsonFunctionLibrary_DeserializeBool_Wrapper_Statics::NewProp_JsonString = { "JsonString", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(RapidJsonFunctionLibrary_eventDeserializeBool_Wrapper_Parms, JsonString), METADATA_PARAMS(Z_Construct_UFunction_URapidJsonFunctionLibrary_DeserializeBool_Wrapper_Statics::NewProp_JsonString_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_URapidJsonFunctionLibrary_DeserializeBool_Wrapper_Statics::NewProp_JsonString_MetaData)) };
	void Z_Construct_UFunction_URapidJsonFunctionLibrary_DeserializeBool_Wrapper_Statics::NewProp_ReturnValue_SetBit(void* Obj)
	{
		((RapidJsonFunctionLibrary_eventDeserializeBool_Wrapper_Parms*)Obj)->ReturnValue = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_URapidJsonFunctionLibrary_DeserializeBool_Wrapper_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(bool), sizeof(RapidJsonFunctionLibrary_eventDeserializeBool_Wrapper_Parms), &Z_Construct_UFunction_URapidJsonFunctionLibrary_DeserializeBool_Wrapper_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_URapidJsonFunctionLibrary_DeserializeBool_Wrapper_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_URapidJsonFunctionLibrary_DeserializeBool_Wrapper_Statics::NewProp_JsonString,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_URapidJsonFunctionLibrary_DeserializeBool_Wrapper_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_URapidJsonFunctionLibrary_DeserializeBool_Wrapper_Statics::Function_MetaDataParams[] = {
		{ "Category", "RapidJson|De-Serialize" },
		{ "DisplayName", "De-Serialize Bool" },
		{ "ModuleRelativePath", "Public/RapidJsonFunctionLibrary.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_URapidJsonFunctionLibrary_DeserializeBool_Wrapper_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_URapidJsonFunctionLibrary, nullptr, "DeserializeBool_Wrapper", nullptr, nullptr, sizeof(Z_Construct_UFunction_URapidJsonFunctionLibrary_DeserializeBool_Wrapper_Statics::RapidJsonFunctionLibrary_eventDeserializeBool_Wrapper_Parms), Z_Construct_UFunction_URapidJsonFunctionLibrary_DeserializeBool_Wrapper_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_URapidJsonFunctionLibrary_DeserializeBool_Wrapper_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04022401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_URapidJsonFunctionLibrary_DeserializeBool_Wrapper_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_URapidJsonFunctionLibrary_DeserializeBool_Wrapper_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_URapidJsonFunctionLibrary_DeserializeBool_Wrapper()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_URapidJsonFunctionLibrary_DeserializeBool_Wrapper_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_URapidJsonFunctionLibrary_DeserializeFColor_Wrapper_Statics
	{
		struct RapidJsonFunctionLibrary_eventDeserializeFColor_Wrapper_Parms
		{
			FString JsonString;
			FColor ReturnValue;
		};
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_JsonString_MetaData[];
#endif
		static const UECodeGen_Private::FStrPropertyParams NewProp_JsonString;
		static const UECodeGen_Private::FStructPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_URapidJsonFunctionLibrary_DeserializeFColor_Wrapper_Statics::NewProp_JsonString_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UECodeGen_Private::FStrPropertyParams Z_Construct_UFunction_URapidJsonFunctionLibrary_DeserializeFColor_Wrapper_Statics::NewProp_JsonString = { "JsonString", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(RapidJsonFunctionLibrary_eventDeserializeFColor_Wrapper_Parms, JsonString), METADATA_PARAMS(Z_Construct_UFunction_URapidJsonFunctionLibrary_DeserializeFColor_Wrapper_Statics::NewProp_JsonString_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_URapidJsonFunctionLibrary_DeserializeFColor_Wrapper_Statics::NewProp_JsonString_MetaData)) };
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_URapidJsonFunctionLibrary_DeserializeFColor_Wrapper_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(RapidJsonFunctionLibrary_eventDeserializeFColor_Wrapper_Parms, ReturnValue), Z_Construct_UScriptStruct_FColor, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_URapidJsonFunctionLibrary_DeserializeFColor_Wrapper_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_URapidJsonFunctionLibrary_DeserializeFColor_Wrapper_Statics::NewProp_JsonString,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_URapidJsonFunctionLibrary_DeserializeFColor_Wrapper_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_URapidJsonFunctionLibrary_DeserializeFColor_Wrapper_Statics::Function_MetaDataParams[] = {
		{ "Category", "RapidJson|De-Serialize" },
		{ "DisplayName", "De-Serialize Color" },
		{ "ModuleRelativePath", "Public/RapidJsonFunctionLibrary.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_URapidJsonFunctionLibrary_DeserializeFColor_Wrapper_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_URapidJsonFunctionLibrary, nullptr, "DeserializeFColor_Wrapper", nullptr, nullptr, sizeof(Z_Construct_UFunction_URapidJsonFunctionLibrary_DeserializeFColor_Wrapper_Statics::RapidJsonFunctionLibrary_eventDeserializeFColor_Wrapper_Parms), Z_Construct_UFunction_URapidJsonFunctionLibrary_DeserializeFColor_Wrapper_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_URapidJsonFunctionLibrary_DeserializeFColor_Wrapper_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04822401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_URapidJsonFunctionLibrary_DeserializeFColor_Wrapper_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_URapidJsonFunctionLibrary_DeserializeFColor_Wrapper_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_URapidJsonFunctionLibrary_DeserializeFColor_Wrapper()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_URapidJsonFunctionLibrary_DeserializeFColor_Wrapper_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_URapidJsonFunctionLibrary_DeserializeFloat_Wrapper_Statics
	{
		struct RapidJsonFunctionLibrary_eventDeserializeFloat_Wrapper_Parms
		{
			FString JsonString;
			float ReturnValue;
		};
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_JsonString_MetaData[];
#endif
		static const UECodeGen_Private::FStrPropertyParams NewProp_JsonString;
		static const UECodeGen_Private::FFloatPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_URapidJsonFunctionLibrary_DeserializeFloat_Wrapper_Statics::NewProp_JsonString_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UECodeGen_Private::FStrPropertyParams Z_Construct_UFunction_URapidJsonFunctionLibrary_DeserializeFloat_Wrapper_Statics::NewProp_JsonString = { "JsonString", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(RapidJsonFunctionLibrary_eventDeserializeFloat_Wrapper_Parms, JsonString), METADATA_PARAMS(Z_Construct_UFunction_URapidJsonFunctionLibrary_DeserializeFloat_Wrapper_Statics::NewProp_JsonString_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_URapidJsonFunctionLibrary_DeserializeFloat_Wrapper_Statics::NewProp_JsonString_MetaData)) };
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_URapidJsonFunctionLibrary_DeserializeFloat_Wrapper_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(RapidJsonFunctionLibrary_eventDeserializeFloat_Wrapper_Parms, ReturnValue), METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_URapidJsonFunctionLibrary_DeserializeFloat_Wrapper_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_URapidJsonFunctionLibrary_DeserializeFloat_Wrapper_Statics::NewProp_JsonString,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_URapidJsonFunctionLibrary_DeserializeFloat_Wrapper_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_URapidJsonFunctionLibrary_DeserializeFloat_Wrapper_Statics::Function_MetaDataParams[] = {
		{ "Category", "RapidJson|De-Serialize" },
		{ "DisplayName", "De-Serialize Float" },
		{ "ModuleRelativePath", "Public/RapidJsonFunctionLibrary.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_URapidJsonFunctionLibrary_DeserializeFloat_Wrapper_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_URapidJsonFunctionLibrary, nullptr, "DeserializeFloat_Wrapper", nullptr, nullptr, sizeof(Z_Construct_UFunction_URapidJsonFunctionLibrary_DeserializeFloat_Wrapper_Statics::RapidJsonFunctionLibrary_eventDeserializeFloat_Wrapper_Parms), Z_Construct_UFunction_URapidJsonFunctionLibrary_DeserializeFloat_Wrapper_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_URapidJsonFunctionLibrary_DeserializeFloat_Wrapper_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04022401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_URapidJsonFunctionLibrary_DeserializeFloat_Wrapper_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_URapidJsonFunctionLibrary_DeserializeFloat_Wrapper_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_URapidJsonFunctionLibrary_DeserializeFloat_Wrapper()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_URapidJsonFunctionLibrary_DeserializeFloat_Wrapper_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_URapidJsonFunctionLibrary_DeserializeFName_Wrapper_Statics
	{
		struct RapidJsonFunctionLibrary_eventDeserializeFName_Wrapper_Parms
		{
			FString JsonString;
			FName ReturnValue;
		};
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_JsonString_MetaData[];
#endif
		static const UECodeGen_Private::FStrPropertyParams NewProp_JsonString;
		static const UECodeGen_Private::FNamePropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_URapidJsonFunctionLibrary_DeserializeFName_Wrapper_Statics::NewProp_JsonString_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UECodeGen_Private::FStrPropertyParams Z_Construct_UFunction_URapidJsonFunctionLibrary_DeserializeFName_Wrapper_Statics::NewProp_JsonString = { "JsonString", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(RapidJsonFunctionLibrary_eventDeserializeFName_Wrapper_Parms, JsonString), METADATA_PARAMS(Z_Construct_UFunction_URapidJsonFunctionLibrary_DeserializeFName_Wrapper_Statics::NewProp_JsonString_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_URapidJsonFunctionLibrary_DeserializeFName_Wrapper_Statics::NewProp_JsonString_MetaData)) };
	const UECodeGen_Private::FNamePropertyParams Z_Construct_UFunction_URapidJsonFunctionLibrary_DeserializeFName_Wrapper_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(RapidJsonFunctionLibrary_eventDeserializeFName_Wrapper_Parms, ReturnValue), METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_URapidJsonFunctionLibrary_DeserializeFName_Wrapper_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_URapidJsonFunctionLibrary_DeserializeFName_Wrapper_Statics::NewProp_JsonString,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_URapidJsonFunctionLibrary_DeserializeFName_Wrapper_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_URapidJsonFunctionLibrary_DeserializeFName_Wrapper_Statics::Function_MetaDataParams[] = {
		{ "Category", "RapidJson|De-Serialize" },
		{ "DisplayName", "De-Serialize Name" },
		{ "ModuleRelativePath", "Public/RapidJsonFunctionLibrary.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_URapidJsonFunctionLibrary_DeserializeFName_Wrapper_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_URapidJsonFunctionLibrary, nullptr, "DeserializeFName_Wrapper", nullptr, nullptr, sizeof(Z_Construct_UFunction_URapidJsonFunctionLibrary_DeserializeFName_Wrapper_Statics::RapidJsonFunctionLibrary_eventDeserializeFName_Wrapper_Parms), Z_Construct_UFunction_URapidJsonFunctionLibrary_DeserializeFName_Wrapper_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_URapidJsonFunctionLibrary_DeserializeFName_Wrapper_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04022401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_URapidJsonFunctionLibrary_DeserializeFName_Wrapper_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_URapidJsonFunctionLibrary_DeserializeFName_Wrapper_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_URapidJsonFunctionLibrary_DeserializeFName_Wrapper()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_URapidJsonFunctionLibrary_DeserializeFName_Wrapper_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_URapidJsonFunctionLibrary_DeserializeFRotator_Wrapper_Statics
	{
		struct RapidJsonFunctionLibrary_eventDeserializeFRotator_Wrapper_Parms
		{
			FString JsonString;
			FRotator ReturnValue;
		};
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_JsonString_MetaData[];
#endif
		static const UECodeGen_Private::FStrPropertyParams NewProp_JsonString;
		static const UECodeGen_Private::FStructPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_URapidJsonFunctionLibrary_DeserializeFRotator_Wrapper_Statics::NewProp_JsonString_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UECodeGen_Private::FStrPropertyParams Z_Construct_UFunction_URapidJsonFunctionLibrary_DeserializeFRotator_Wrapper_Statics::NewProp_JsonString = { "JsonString", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(RapidJsonFunctionLibrary_eventDeserializeFRotator_Wrapper_Parms, JsonString), METADATA_PARAMS(Z_Construct_UFunction_URapidJsonFunctionLibrary_DeserializeFRotator_Wrapper_Statics::NewProp_JsonString_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_URapidJsonFunctionLibrary_DeserializeFRotator_Wrapper_Statics::NewProp_JsonString_MetaData)) };
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_URapidJsonFunctionLibrary_DeserializeFRotator_Wrapper_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(RapidJsonFunctionLibrary_eventDeserializeFRotator_Wrapper_Parms, ReturnValue), Z_Construct_UScriptStruct_FRotator, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_URapidJsonFunctionLibrary_DeserializeFRotator_Wrapper_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_URapidJsonFunctionLibrary_DeserializeFRotator_Wrapper_Statics::NewProp_JsonString,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_URapidJsonFunctionLibrary_DeserializeFRotator_Wrapper_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_URapidJsonFunctionLibrary_DeserializeFRotator_Wrapper_Statics::Function_MetaDataParams[] = {
		{ "Category", "RapidJson|De-Serialize" },
		{ "DisplayName", "De-Serialize Rotator" },
		{ "ModuleRelativePath", "Public/RapidJsonFunctionLibrary.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_URapidJsonFunctionLibrary_DeserializeFRotator_Wrapper_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_URapidJsonFunctionLibrary, nullptr, "DeserializeFRotator_Wrapper", nullptr, nullptr, sizeof(Z_Construct_UFunction_URapidJsonFunctionLibrary_DeserializeFRotator_Wrapper_Statics::RapidJsonFunctionLibrary_eventDeserializeFRotator_Wrapper_Parms), Z_Construct_UFunction_URapidJsonFunctionLibrary_DeserializeFRotator_Wrapper_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_URapidJsonFunctionLibrary_DeserializeFRotator_Wrapper_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04822401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_URapidJsonFunctionLibrary_DeserializeFRotator_Wrapper_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_URapidJsonFunctionLibrary_DeserializeFRotator_Wrapper_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_URapidJsonFunctionLibrary_DeserializeFRotator_Wrapper()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_URapidJsonFunctionLibrary_DeserializeFRotator_Wrapper_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_URapidJsonFunctionLibrary_DeserializeFString_Wrapper_Statics
	{
		struct RapidJsonFunctionLibrary_eventDeserializeFString_Wrapper_Parms
		{
			FString JsonString;
			FString ReturnValue;
		};
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_JsonString_MetaData[];
#endif
		static const UECodeGen_Private::FStrPropertyParams NewProp_JsonString;
		static const UECodeGen_Private::FStrPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_URapidJsonFunctionLibrary_DeserializeFString_Wrapper_Statics::NewProp_JsonString_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UECodeGen_Private::FStrPropertyParams Z_Construct_UFunction_URapidJsonFunctionLibrary_DeserializeFString_Wrapper_Statics::NewProp_JsonString = { "JsonString", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(RapidJsonFunctionLibrary_eventDeserializeFString_Wrapper_Parms, JsonString), METADATA_PARAMS(Z_Construct_UFunction_URapidJsonFunctionLibrary_DeserializeFString_Wrapper_Statics::NewProp_JsonString_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_URapidJsonFunctionLibrary_DeserializeFString_Wrapper_Statics::NewProp_JsonString_MetaData)) };
	const UECodeGen_Private::FStrPropertyParams Z_Construct_UFunction_URapidJsonFunctionLibrary_DeserializeFString_Wrapper_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(RapidJsonFunctionLibrary_eventDeserializeFString_Wrapper_Parms, ReturnValue), METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_URapidJsonFunctionLibrary_DeserializeFString_Wrapper_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_URapidJsonFunctionLibrary_DeserializeFString_Wrapper_Statics::NewProp_JsonString,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_URapidJsonFunctionLibrary_DeserializeFString_Wrapper_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_URapidJsonFunctionLibrary_DeserializeFString_Wrapper_Statics::Function_MetaDataParams[] = {
		{ "Category", "RapidJson|De-Serialize" },
		{ "DisplayName", "De-Serialize String" },
		{ "ModuleRelativePath", "Public/RapidJsonFunctionLibrary.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_URapidJsonFunctionLibrary_DeserializeFString_Wrapper_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_URapidJsonFunctionLibrary, nullptr, "DeserializeFString_Wrapper", nullptr, nullptr, sizeof(Z_Construct_UFunction_URapidJsonFunctionLibrary_DeserializeFString_Wrapper_Statics::RapidJsonFunctionLibrary_eventDeserializeFString_Wrapper_Parms), Z_Construct_UFunction_URapidJsonFunctionLibrary_DeserializeFString_Wrapper_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_URapidJsonFunctionLibrary_DeserializeFString_Wrapper_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04022401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_URapidJsonFunctionLibrary_DeserializeFString_Wrapper_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_URapidJsonFunctionLibrary_DeserializeFString_Wrapper_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_URapidJsonFunctionLibrary_DeserializeFString_Wrapper()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_URapidJsonFunctionLibrary_DeserializeFString_Wrapper_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_URapidJsonFunctionLibrary_DeserializeFText_Wrapper_Statics
	{
		struct RapidJsonFunctionLibrary_eventDeserializeFText_Wrapper_Parms
		{
			FString JsonString;
			FText ReturnValue;
		};
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_JsonString_MetaData[];
#endif
		static const UECodeGen_Private::FStrPropertyParams NewProp_JsonString;
		static const UECodeGen_Private::FTextPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_URapidJsonFunctionLibrary_DeserializeFText_Wrapper_Statics::NewProp_JsonString_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UECodeGen_Private::FStrPropertyParams Z_Construct_UFunction_URapidJsonFunctionLibrary_DeserializeFText_Wrapper_Statics::NewProp_JsonString = { "JsonString", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(RapidJsonFunctionLibrary_eventDeserializeFText_Wrapper_Parms, JsonString), METADATA_PARAMS(Z_Construct_UFunction_URapidJsonFunctionLibrary_DeserializeFText_Wrapper_Statics::NewProp_JsonString_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_URapidJsonFunctionLibrary_DeserializeFText_Wrapper_Statics::NewProp_JsonString_MetaData)) };
	const UECodeGen_Private::FTextPropertyParams Z_Construct_UFunction_URapidJsonFunctionLibrary_DeserializeFText_Wrapper_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Text, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(RapidJsonFunctionLibrary_eventDeserializeFText_Wrapper_Parms, ReturnValue), METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_URapidJsonFunctionLibrary_DeserializeFText_Wrapper_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_URapidJsonFunctionLibrary_DeserializeFText_Wrapper_Statics::NewProp_JsonString,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_URapidJsonFunctionLibrary_DeserializeFText_Wrapper_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_URapidJsonFunctionLibrary_DeserializeFText_Wrapper_Statics::Function_MetaDataParams[] = {
		{ "Category", "RapidJson|De-Serialize" },
		{ "DisplayName", "De-Serialize Text" },
		{ "ModuleRelativePath", "Public/RapidJsonFunctionLibrary.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_URapidJsonFunctionLibrary_DeserializeFText_Wrapper_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_URapidJsonFunctionLibrary, nullptr, "DeserializeFText_Wrapper", nullptr, nullptr, sizeof(Z_Construct_UFunction_URapidJsonFunctionLibrary_DeserializeFText_Wrapper_Statics::RapidJsonFunctionLibrary_eventDeserializeFText_Wrapper_Parms), Z_Construct_UFunction_URapidJsonFunctionLibrary_DeserializeFText_Wrapper_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_URapidJsonFunctionLibrary_DeserializeFText_Wrapper_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04022401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_URapidJsonFunctionLibrary_DeserializeFText_Wrapper_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_URapidJsonFunctionLibrary_DeserializeFText_Wrapper_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_URapidJsonFunctionLibrary_DeserializeFText_Wrapper()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_URapidJsonFunctionLibrary_DeserializeFText_Wrapper_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_URapidJsonFunctionLibrary_DeserializeFTransform_Wrapper_Statics
	{
		struct RapidJsonFunctionLibrary_eventDeserializeFTransform_Wrapper_Parms
		{
			FString JsonString;
			FTransform ReturnValue;
		};
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_JsonString_MetaData[];
#endif
		static const UECodeGen_Private::FStrPropertyParams NewProp_JsonString;
		static const UECodeGen_Private::FStructPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_URapidJsonFunctionLibrary_DeserializeFTransform_Wrapper_Statics::NewProp_JsonString_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UECodeGen_Private::FStrPropertyParams Z_Construct_UFunction_URapidJsonFunctionLibrary_DeserializeFTransform_Wrapper_Statics::NewProp_JsonString = { "JsonString", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(RapidJsonFunctionLibrary_eventDeserializeFTransform_Wrapper_Parms, JsonString), METADATA_PARAMS(Z_Construct_UFunction_URapidJsonFunctionLibrary_DeserializeFTransform_Wrapper_Statics::NewProp_JsonString_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_URapidJsonFunctionLibrary_DeserializeFTransform_Wrapper_Statics::NewProp_JsonString_MetaData)) };
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_URapidJsonFunctionLibrary_DeserializeFTransform_Wrapper_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(RapidJsonFunctionLibrary_eventDeserializeFTransform_Wrapper_Parms, ReturnValue), Z_Construct_UScriptStruct_FTransform, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_URapidJsonFunctionLibrary_DeserializeFTransform_Wrapper_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_URapidJsonFunctionLibrary_DeserializeFTransform_Wrapper_Statics::NewProp_JsonString,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_URapidJsonFunctionLibrary_DeserializeFTransform_Wrapper_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_URapidJsonFunctionLibrary_DeserializeFTransform_Wrapper_Statics::Function_MetaDataParams[] = {
		{ "Category", "RapidJson|De-Serialize" },
		{ "DisplayName", "De-Serialize Transform" },
		{ "ModuleRelativePath", "Public/RapidJsonFunctionLibrary.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_URapidJsonFunctionLibrary_DeserializeFTransform_Wrapper_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_URapidJsonFunctionLibrary, nullptr, "DeserializeFTransform_Wrapper", nullptr, nullptr, sizeof(Z_Construct_UFunction_URapidJsonFunctionLibrary_DeserializeFTransform_Wrapper_Statics::RapidJsonFunctionLibrary_eventDeserializeFTransform_Wrapper_Parms), Z_Construct_UFunction_URapidJsonFunctionLibrary_DeserializeFTransform_Wrapper_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_URapidJsonFunctionLibrary_DeserializeFTransform_Wrapper_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04822401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_URapidJsonFunctionLibrary_DeserializeFTransform_Wrapper_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_URapidJsonFunctionLibrary_DeserializeFTransform_Wrapper_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_URapidJsonFunctionLibrary_DeserializeFTransform_Wrapper()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_URapidJsonFunctionLibrary_DeserializeFTransform_Wrapper_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_URapidJsonFunctionLibrary_DeserializeFVector_Wrapper_Statics
	{
		struct RapidJsonFunctionLibrary_eventDeserializeFVector_Wrapper_Parms
		{
			FString JsonString;
			FVector ReturnValue;
		};
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_JsonString_MetaData[];
#endif
		static const UECodeGen_Private::FStrPropertyParams NewProp_JsonString;
		static const UECodeGen_Private::FStructPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_URapidJsonFunctionLibrary_DeserializeFVector_Wrapper_Statics::NewProp_JsonString_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UECodeGen_Private::FStrPropertyParams Z_Construct_UFunction_URapidJsonFunctionLibrary_DeserializeFVector_Wrapper_Statics::NewProp_JsonString = { "JsonString", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(RapidJsonFunctionLibrary_eventDeserializeFVector_Wrapper_Parms, JsonString), METADATA_PARAMS(Z_Construct_UFunction_URapidJsonFunctionLibrary_DeserializeFVector_Wrapper_Statics::NewProp_JsonString_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_URapidJsonFunctionLibrary_DeserializeFVector_Wrapper_Statics::NewProp_JsonString_MetaData)) };
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_URapidJsonFunctionLibrary_DeserializeFVector_Wrapper_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(RapidJsonFunctionLibrary_eventDeserializeFVector_Wrapper_Parms, ReturnValue), Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_URapidJsonFunctionLibrary_DeserializeFVector_Wrapper_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_URapidJsonFunctionLibrary_DeserializeFVector_Wrapper_Statics::NewProp_JsonString,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_URapidJsonFunctionLibrary_DeserializeFVector_Wrapper_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_URapidJsonFunctionLibrary_DeserializeFVector_Wrapper_Statics::Function_MetaDataParams[] = {
		{ "Category", "RapidJson|De-Serialize" },
		{ "DisplayName", "De-Serialize Vector" },
		{ "ModuleRelativePath", "Public/RapidJsonFunctionLibrary.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_URapidJsonFunctionLibrary_DeserializeFVector_Wrapper_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_URapidJsonFunctionLibrary, nullptr, "DeserializeFVector_Wrapper", nullptr, nullptr, sizeof(Z_Construct_UFunction_URapidJsonFunctionLibrary_DeserializeFVector_Wrapper_Statics::RapidJsonFunctionLibrary_eventDeserializeFVector_Wrapper_Parms), Z_Construct_UFunction_URapidJsonFunctionLibrary_DeserializeFVector_Wrapper_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_URapidJsonFunctionLibrary_DeserializeFVector_Wrapper_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04822401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_URapidJsonFunctionLibrary_DeserializeFVector_Wrapper_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_URapidJsonFunctionLibrary_DeserializeFVector_Wrapper_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_URapidJsonFunctionLibrary_DeserializeFVector_Wrapper()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_URapidJsonFunctionLibrary_DeserializeFVector_Wrapper_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_URapidJsonFunctionLibrary_DeserializeInt64_Wrapper_Statics
	{
		struct RapidJsonFunctionLibrary_eventDeserializeInt64_Wrapper_Parms
		{
			FString JsonString;
			int64 ReturnValue;
		};
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_JsonString_MetaData[];
#endif
		static const UECodeGen_Private::FStrPropertyParams NewProp_JsonString;
		static const UECodeGen_Private::FInt64PropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_URapidJsonFunctionLibrary_DeserializeInt64_Wrapper_Statics::NewProp_JsonString_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UECodeGen_Private::FStrPropertyParams Z_Construct_UFunction_URapidJsonFunctionLibrary_DeserializeInt64_Wrapper_Statics::NewProp_JsonString = { "JsonString", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(RapidJsonFunctionLibrary_eventDeserializeInt64_Wrapper_Parms, JsonString), METADATA_PARAMS(Z_Construct_UFunction_URapidJsonFunctionLibrary_DeserializeInt64_Wrapper_Statics::NewProp_JsonString_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_URapidJsonFunctionLibrary_DeserializeInt64_Wrapper_Statics::NewProp_JsonString_MetaData)) };
	const UECodeGen_Private::FInt64PropertyParams Z_Construct_UFunction_URapidJsonFunctionLibrary_DeserializeInt64_Wrapper_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Int64, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(RapidJsonFunctionLibrary_eventDeserializeInt64_Wrapper_Parms, ReturnValue), METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_URapidJsonFunctionLibrary_DeserializeInt64_Wrapper_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_URapidJsonFunctionLibrary_DeserializeInt64_Wrapper_Statics::NewProp_JsonString,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_URapidJsonFunctionLibrary_DeserializeInt64_Wrapper_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_URapidJsonFunctionLibrary_DeserializeInt64_Wrapper_Statics::Function_MetaDataParams[] = {
		{ "Category", "RapidJson|De-Serialize" },
		{ "DisplayName", "De-Serialize Int64" },
		{ "ModuleRelativePath", "Public/RapidJsonFunctionLibrary.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_URapidJsonFunctionLibrary_DeserializeInt64_Wrapper_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_URapidJsonFunctionLibrary, nullptr, "DeserializeInt64_Wrapper", nullptr, nullptr, sizeof(Z_Construct_UFunction_URapidJsonFunctionLibrary_DeserializeInt64_Wrapper_Statics::RapidJsonFunctionLibrary_eventDeserializeInt64_Wrapper_Parms), Z_Construct_UFunction_URapidJsonFunctionLibrary_DeserializeInt64_Wrapper_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_URapidJsonFunctionLibrary_DeserializeInt64_Wrapper_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04022401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_URapidJsonFunctionLibrary_DeserializeInt64_Wrapper_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_URapidJsonFunctionLibrary_DeserializeInt64_Wrapper_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_URapidJsonFunctionLibrary_DeserializeInt64_Wrapper()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_URapidJsonFunctionLibrary_DeserializeInt64_Wrapper_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_URapidJsonFunctionLibrary_DeserializeInt_Wrapper_Statics
	{
		struct RapidJsonFunctionLibrary_eventDeserializeInt_Wrapper_Parms
		{
			FString JsonString;
			int32 ReturnValue;
		};
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_JsonString_MetaData[];
#endif
		static const UECodeGen_Private::FStrPropertyParams NewProp_JsonString;
		static const UECodeGen_Private::FIntPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_URapidJsonFunctionLibrary_DeserializeInt_Wrapper_Statics::NewProp_JsonString_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UECodeGen_Private::FStrPropertyParams Z_Construct_UFunction_URapidJsonFunctionLibrary_DeserializeInt_Wrapper_Statics::NewProp_JsonString = { "JsonString", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(RapidJsonFunctionLibrary_eventDeserializeInt_Wrapper_Parms, JsonString), METADATA_PARAMS(Z_Construct_UFunction_URapidJsonFunctionLibrary_DeserializeInt_Wrapper_Statics::NewProp_JsonString_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_URapidJsonFunctionLibrary_DeserializeInt_Wrapper_Statics::NewProp_JsonString_MetaData)) };
	const UECodeGen_Private::FIntPropertyParams Z_Construct_UFunction_URapidJsonFunctionLibrary_DeserializeInt_Wrapper_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(RapidJsonFunctionLibrary_eventDeserializeInt_Wrapper_Parms, ReturnValue), METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_URapidJsonFunctionLibrary_DeserializeInt_Wrapper_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_URapidJsonFunctionLibrary_DeserializeInt_Wrapper_Statics::NewProp_JsonString,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_URapidJsonFunctionLibrary_DeserializeInt_Wrapper_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_URapidJsonFunctionLibrary_DeserializeInt_Wrapper_Statics::Function_MetaDataParams[] = {
		{ "Category", "RapidJson|De-Serialize" },
		{ "Comment", "//------- De-SERIALIZE --------//\n" },
		{ "DisplayName", "De-Serialize Int" },
		{ "ModuleRelativePath", "Public/RapidJsonFunctionLibrary.h" },
		{ "ToolTip", "------- De-SERIALIZE --------" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_URapidJsonFunctionLibrary_DeserializeInt_Wrapper_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_URapidJsonFunctionLibrary, nullptr, "DeserializeInt_Wrapper", nullptr, nullptr, sizeof(Z_Construct_UFunction_URapidJsonFunctionLibrary_DeserializeInt_Wrapper_Statics::RapidJsonFunctionLibrary_eventDeserializeInt_Wrapper_Parms), Z_Construct_UFunction_URapidJsonFunctionLibrary_DeserializeInt_Wrapper_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_URapidJsonFunctionLibrary_DeserializeInt_Wrapper_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04022401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_URapidJsonFunctionLibrary_DeserializeInt_Wrapper_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_URapidJsonFunctionLibrary_DeserializeInt_Wrapper_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_URapidJsonFunctionLibrary_DeserializeInt_Wrapper()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_URapidJsonFunctionLibrary_DeserializeInt_Wrapper_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_URapidJsonFunctionLibrary_DeserializeTArrayBool_Wrapper_Statics
	{
		struct RapidJsonFunctionLibrary_eventDeserializeTArrayBool_Wrapper_Parms
		{
			FString JsonString;
			TArray<bool> ReturnValue;
		};
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_JsonString_MetaData[];
#endif
		static const UECodeGen_Private::FStrPropertyParams NewProp_JsonString;
		static const UECodeGen_Private::FBoolPropertyParams NewProp_ReturnValue_Inner;
		static const UECodeGen_Private::FArrayPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_URapidJsonFunctionLibrary_DeserializeTArrayBool_Wrapper_Statics::NewProp_JsonString_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UECodeGen_Private::FStrPropertyParams Z_Construct_UFunction_URapidJsonFunctionLibrary_DeserializeTArrayBool_Wrapper_Statics::NewProp_JsonString = { "JsonString", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(RapidJsonFunctionLibrary_eventDeserializeTArrayBool_Wrapper_Parms, JsonString), METADATA_PARAMS(Z_Construct_UFunction_URapidJsonFunctionLibrary_DeserializeTArrayBool_Wrapper_Statics::NewProp_JsonString_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_URapidJsonFunctionLibrary_DeserializeTArrayBool_Wrapper_Statics::NewProp_JsonString_MetaData)) };
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_URapidJsonFunctionLibrary_DeserializeTArrayBool_Wrapper_Statics::NewProp_ReturnValue_Inner = { "ReturnValue", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(bool), 0, nullptr, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FArrayPropertyParams Z_Construct_UFunction_URapidJsonFunctionLibrary_DeserializeTArrayBool_Wrapper_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(RapidJsonFunctionLibrary_eventDeserializeTArrayBool_Wrapper_Parms, ReturnValue), EArrayPropertyFlags::None, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_URapidJsonFunctionLibrary_DeserializeTArrayBool_Wrapper_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_URapidJsonFunctionLibrary_DeserializeTArrayBool_Wrapper_Statics::NewProp_JsonString,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_URapidJsonFunctionLibrary_DeserializeTArrayBool_Wrapper_Statics::NewProp_ReturnValue_Inner,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_URapidJsonFunctionLibrary_DeserializeTArrayBool_Wrapper_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_URapidJsonFunctionLibrary_DeserializeTArrayBool_Wrapper_Statics::Function_MetaDataParams[] = {
		{ "Category", "RapidJson|De-Serialize Array" },
		{ "DisplayName", "De-Serialize Bool Array" },
		{ "ModuleRelativePath", "Public/RapidJsonFunctionLibrary.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_URapidJsonFunctionLibrary_DeserializeTArrayBool_Wrapper_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_URapidJsonFunctionLibrary, nullptr, "DeserializeTArrayBool_Wrapper", nullptr, nullptr, sizeof(Z_Construct_UFunction_URapidJsonFunctionLibrary_DeserializeTArrayBool_Wrapper_Statics::RapidJsonFunctionLibrary_eventDeserializeTArrayBool_Wrapper_Parms), Z_Construct_UFunction_URapidJsonFunctionLibrary_DeserializeTArrayBool_Wrapper_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_URapidJsonFunctionLibrary_DeserializeTArrayBool_Wrapper_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04022401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_URapidJsonFunctionLibrary_DeserializeTArrayBool_Wrapper_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_URapidJsonFunctionLibrary_DeserializeTArrayBool_Wrapper_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_URapidJsonFunctionLibrary_DeserializeTArrayBool_Wrapper()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_URapidJsonFunctionLibrary_DeserializeTArrayBool_Wrapper_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_URapidJsonFunctionLibrary_DeserializeTArrayFColor_Wrapper_Statics
	{
		struct RapidJsonFunctionLibrary_eventDeserializeTArrayFColor_Wrapper_Parms
		{
			FString JsonString;
			TArray<FColor> ReturnValue;
		};
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_JsonString_MetaData[];
#endif
		static const UECodeGen_Private::FStrPropertyParams NewProp_JsonString;
		static const UECodeGen_Private::FStructPropertyParams NewProp_ReturnValue_Inner;
		static const UECodeGen_Private::FArrayPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_URapidJsonFunctionLibrary_DeserializeTArrayFColor_Wrapper_Statics::NewProp_JsonString_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UECodeGen_Private::FStrPropertyParams Z_Construct_UFunction_URapidJsonFunctionLibrary_DeserializeTArrayFColor_Wrapper_Statics::NewProp_JsonString = { "JsonString", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(RapidJsonFunctionLibrary_eventDeserializeTArrayFColor_Wrapper_Parms, JsonString), METADATA_PARAMS(Z_Construct_UFunction_URapidJsonFunctionLibrary_DeserializeTArrayFColor_Wrapper_Statics::NewProp_JsonString_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_URapidJsonFunctionLibrary_DeserializeTArrayFColor_Wrapper_Statics::NewProp_JsonString_MetaData)) };
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_URapidJsonFunctionLibrary_DeserializeTArrayFColor_Wrapper_Statics::NewProp_ReturnValue_Inner = { "ReturnValue", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, 0, Z_Construct_UScriptStruct_FColor, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FArrayPropertyParams Z_Construct_UFunction_URapidJsonFunctionLibrary_DeserializeTArrayFColor_Wrapper_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(RapidJsonFunctionLibrary_eventDeserializeTArrayFColor_Wrapper_Parms, ReturnValue), EArrayPropertyFlags::None, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_URapidJsonFunctionLibrary_DeserializeTArrayFColor_Wrapper_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_URapidJsonFunctionLibrary_DeserializeTArrayFColor_Wrapper_Statics::NewProp_JsonString,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_URapidJsonFunctionLibrary_DeserializeTArrayFColor_Wrapper_Statics::NewProp_ReturnValue_Inner,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_URapidJsonFunctionLibrary_DeserializeTArrayFColor_Wrapper_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_URapidJsonFunctionLibrary_DeserializeTArrayFColor_Wrapper_Statics::Function_MetaDataParams[] = {
		{ "Category", "RapidJson|De-Serialize Array" },
		{ "DisplayName", "De-Serialize Color Array" },
		{ "ModuleRelativePath", "Public/RapidJsonFunctionLibrary.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_URapidJsonFunctionLibrary_DeserializeTArrayFColor_Wrapper_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_URapidJsonFunctionLibrary, nullptr, "DeserializeTArrayFColor_Wrapper", nullptr, nullptr, sizeof(Z_Construct_UFunction_URapidJsonFunctionLibrary_DeserializeTArrayFColor_Wrapper_Statics::RapidJsonFunctionLibrary_eventDeserializeTArrayFColor_Wrapper_Parms), Z_Construct_UFunction_URapidJsonFunctionLibrary_DeserializeTArrayFColor_Wrapper_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_URapidJsonFunctionLibrary_DeserializeTArrayFColor_Wrapper_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04022401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_URapidJsonFunctionLibrary_DeserializeTArrayFColor_Wrapper_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_URapidJsonFunctionLibrary_DeserializeTArrayFColor_Wrapper_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_URapidJsonFunctionLibrary_DeserializeTArrayFColor_Wrapper()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_URapidJsonFunctionLibrary_DeserializeTArrayFColor_Wrapper_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_URapidJsonFunctionLibrary_DeserializeTArrayFloat_Wrapper_Statics
	{
		struct RapidJsonFunctionLibrary_eventDeserializeTArrayFloat_Wrapper_Parms
		{
			FString JsonString;
			TArray<float> ReturnValue;
		};
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_JsonString_MetaData[];
#endif
		static const UECodeGen_Private::FStrPropertyParams NewProp_JsonString;
		static const UECodeGen_Private::FFloatPropertyParams NewProp_ReturnValue_Inner;
		static const UECodeGen_Private::FArrayPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_URapidJsonFunctionLibrary_DeserializeTArrayFloat_Wrapper_Statics::NewProp_JsonString_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UECodeGen_Private::FStrPropertyParams Z_Construct_UFunction_URapidJsonFunctionLibrary_DeserializeTArrayFloat_Wrapper_Statics::NewProp_JsonString = { "JsonString", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(RapidJsonFunctionLibrary_eventDeserializeTArrayFloat_Wrapper_Parms, JsonString), METADATA_PARAMS(Z_Construct_UFunction_URapidJsonFunctionLibrary_DeserializeTArrayFloat_Wrapper_Statics::NewProp_JsonString_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_URapidJsonFunctionLibrary_DeserializeTArrayFloat_Wrapper_Statics::NewProp_JsonString_MetaData)) };
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_URapidJsonFunctionLibrary_DeserializeTArrayFloat_Wrapper_Statics::NewProp_ReturnValue_Inner = { "ReturnValue", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, 0, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FArrayPropertyParams Z_Construct_UFunction_URapidJsonFunctionLibrary_DeserializeTArrayFloat_Wrapper_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(RapidJsonFunctionLibrary_eventDeserializeTArrayFloat_Wrapper_Parms, ReturnValue), EArrayPropertyFlags::None, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_URapidJsonFunctionLibrary_DeserializeTArrayFloat_Wrapper_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_URapidJsonFunctionLibrary_DeserializeTArrayFloat_Wrapper_Statics::NewProp_JsonString,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_URapidJsonFunctionLibrary_DeserializeTArrayFloat_Wrapper_Statics::NewProp_ReturnValue_Inner,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_URapidJsonFunctionLibrary_DeserializeTArrayFloat_Wrapper_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_URapidJsonFunctionLibrary_DeserializeTArrayFloat_Wrapper_Statics::Function_MetaDataParams[] = {
		{ "Category", "RapidJson|De-Serialize Array" },
		{ "DisplayName", "De-Serialize Float Array" },
		{ "ModuleRelativePath", "Public/RapidJsonFunctionLibrary.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_URapidJsonFunctionLibrary_DeserializeTArrayFloat_Wrapper_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_URapidJsonFunctionLibrary, nullptr, "DeserializeTArrayFloat_Wrapper", nullptr, nullptr, sizeof(Z_Construct_UFunction_URapidJsonFunctionLibrary_DeserializeTArrayFloat_Wrapper_Statics::RapidJsonFunctionLibrary_eventDeserializeTArrayFloat_Wrapper_Parms), Z_Construct_UFunction_URapidJsonFunctionLibrary_DeserializeTArrayFloat_Wrapper_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_URapidJsonFunctionLibrary_DeserializeTArrayFloat_Wrapper_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04022401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_URapidJsonFunctionLibrary_DeserializeTArrayFloat_Wrapper_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_URapidJsonFunctionLibrary_DeserializeTArrayFloat_Wrapper_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_URapidJsonFunctionLibrary_DeserializeTArrayFloat_Wrapper()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_URapidJsonFunctionLibrary_DeserializeTArrayFloat_Wrapper_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_URapidJsonFunctionLibrary_DeserializeTArrayFName_Wrapper_Statics
	{
		struct RapidJsonFunctionLibrary_eventDeserializeTArrayFName_Wrapper_Parms
		{
			FString JsonString;
			TArray<FName> ReturnValue;
		};
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_JsonString_MetaData[];
#endif
		static const UECodeGen_Private::FStrPropertyParams NewProp_JsonString;
		static const UECodeGen_Private::FNamePropertyParams NewProp_ReturnValue_Inner;
		static const UECodeGen_Private::FArrayPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_URapidJsonFunctionLibrary_DeserializeTArrayFName_Wrapper_Statics::NewProp_JsonString_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UECodeGen_Private::FStrPropertyParams Z_Construct_UFunction_URapidJsonFunctionLibrary_DeserializeTArrayFName_Wrapper_Statics::NewProp_JsonString = { "JsonString", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(RapidJsonFunctionLibrary_eventDeserializeTArrayFName_Wrapper_Parms, JsonString), METADATA_PARAMS(Z_Construct_UFunction_URapidJsonFunctionLibrary_DeserializeTArrayFName_Wrapper_Statics::NewProp_JsonString_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_URapidJsonFunctionLibrary_DeserializeTArrayFName_Wrapper_Statics::NewProp_JsonString_MetaData)) };
	const UECodeGen_Private::FNamePropertyParams Z_Construct_UFunction_URapidJsonFunctionLibrary_DeserializeTArrayFName_Wrapper_Statics::NewProp_ReturnValue_Inner = { "ReturnValue", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, 0, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FArrayPropertyParams Z_Construct_UFunction_URapidJsonFunctionLibrary_DeserializeTArrayFName_Wrapper_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(RapidJsonFunctionLibrary_eventDeserializeTArrayFName_Wrapper_Parms, ReturnValue), EArrayPropertyFlags::None, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_URapidJsonFunctionLibrary_DeserializeTArrayFName_Wrapper_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_URapidJsonFunctionLibrary_DeserializeTArrayFName_Wrapper_Statics::NewProp_JsonString,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_URapidJsonFunctionLibrary_DeserializeTArrayFName_Wrapper_Statics::NewProp_ReturnValue_Inner,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_URapidJsonFunctionLibrary_DeserializeTArrayFName_Wrapper_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_URapidJsonFunctionLibrary_DeserializeTArrayFName_Wrapper_Statics::Function_MetaDataParams[] = {
		{ "Category", "RapidJson|De-Serialize Array" },
		{ "DisplayName", "De-Serialize Name Array" },
		{ "ModuleRelativePath", "Public/RapidJsonFunctionLibrary.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_URapidJsonFunctionLibrary_DeserializeTArrayFName_Wrapper_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_URapidJsonFunctionLibrary, nullptr, "DeserializeTArrayFName_Wrapper", nullptr, nullptr, sizeof(Z_Construct_UFunction_URapidJsonFunctionLibrary_DeserializeTArrayFName_Wrapper_Statics::RapidJsonFunctionLibrary_eventDeserializeTArrayFName_Wrapper_Parms), Z_Construct_UFunction_URapidJsonFunctionLibrary_DeserializeTArrayFName_Wrapper_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_URapidJsonFunctionLibrary_DeserializeTArrayFName_Wrapper_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04022401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_URapidJsonFunctionLibrary_DeserializeTArrayFName_Wrapper_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_URapidJsonFunctionLibrary_DeserializeTArrayFName_Wrapper_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_URapidJsonFunctionLibrary_DeserializeTArrayFName_Wrapper()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_URapidJsonFunctionLibrary_DeserializeTArrayFName_Wrapper_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_URapidJsonFunctionLibrary_DeserializeTArrayFRotator_Wrapper_Statics
	{
		struct RapidJsonFunctionLibrary_eventDeserializeTArrayFRotator_Wrapper_Parms
		{
			FString JsonString;
			TArray<FRotator> ReturnValue;
		};
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_JsonString_MetaData[];
#endif
		static const UECodeGen_Private::FStrPropertyParams NewProp_JsonString;
		static const UECodeGen_Private::FStructPropertyParams NewProp_ReturnValue_Inner;
		static const UECodeGen_Private::FArrayPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_URapidJsonFunctionLibrary_DeserializeTArrayFRotator_Wrapper_Statics::NewProp_JsonString_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UECodeGen_Private::FStrPropertyParams Z_Construct_UFunction_URapidJsonFunctionLibrary_DeserializeTArrayFRotator_Wrapper_Statics::NewProp_JsonString = { "JsonString", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(RapidJsonFunctionLibrary_eventDeserializeTArrayFRotator_Wrapper_Parms, JsonString), METADATA_PARAMS(Z_Construct_UFunction_URapidJsonFunctionLibrary_DeserializeTArrayFRotator_Wrapper_Statics::NewProp_JsonString_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_URapidJsonFunctionLibrary_DeserializeTArrayFRotator_Wrapper_Statics::NewProp_JsonString_MetaData)) };
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_URapidJsonFunctionLibrary_DeserializeTArrayFRotator_Wrapper_Statics::NewProp_ReturnValue_Inner = { "ReturnValue", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, 0, Z_Construct_UScriptStruct_FRotator, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FArrayPropertyParams Z_Construct_UFunction_URapidJsonFunctionLibrary_DeserializeTArrayFRotator_Wrapper_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(RapidJsonFunctionLibrary_eventDeserializeTArrayFRotator_Wrapper_Parms, ReturnValue), EArrayPropertyFlags::None, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_URapidJsonFunctionLibrary_DeserializeTArrayFRotator_Wrapper_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_URapidJsonFunctionLibrary_DeserializeTArrayFRotator_Wrapper_Statics::NewProp_JsonString,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_URapidJsonFunctionLibrary_DeserializeTArrayFRotator_Wrapper_Statics::NewProp_ReturnValue_Inner,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_URapidJsonFunctionLibrary_DeserializeTArrayFRotator_Wrapper_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_URapidJsonFunctionLibrary_DeserializeTArrayFRotator_Wrapper_Statics::Function_MetaDataParams[] = {
		{ "Category", "RapidJson|De-Serialize Array" },
		{ "DisplayName", "De-Serialize Rotator Array" },
		{ "ModuleRelativePath", "Public/RapidJsonFunctionLibrary.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_URapidJsonFunctionLibrary_DeserializeTArrayFRotator_Wrapper_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_URapidJsonFunctionLibrary, nullptr, "DeserializeTArrayFRotator_Wrapper", nullptr, nullptr, sizeof(Z_Construct_UFunction_URapidJsonFunctionLibrary_DeserializeTArrayFRotator_Wrapper_Statics::RapidJsonFunctionLibrary_eventDeserializeTArrayFRotator_Wrapper_Parms), Z_Construct_UFunction_URapidJsonFunctionLibrary_DeserializeTArrayFRotator_Wrapper_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_URapidJsonFunctionLibrary_DeserializeTArrayFRotator_Wrapper_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04022401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_URapidJsonFunctionLibrary_DeserializeTArrayFRotator_Wrapper_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_URapidJsonFunctionLibrary_DeserializeTArrayFRotator_Wrapper_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_URapidJsonFunctionLibrary_DeserializeTArrayFRotator_Wrapper()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_URapidJsonFunctionLibrary_DeserializeTArrayFRotator_Wrapper_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_URapidJsonFunctionLibrary_DeserializeTArrayFString_Wrapper_Statics
	{
		struct RapidJsonFunctionLibrary_eventDeserializeTArrayFString_Wrapper_Parms
		{
			FString JsonString;
			TArray<FString> ReturnValue;
		};
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_JsonString_MetaData[];
#endif
		static const UECodeGen_Private::FStrPropertyParams NewProp_JsonString;
		static const UECodeGen_Private::FStrPropertyParams NewProp_ReturnValue_Inner;
		static const UECodeGen_Private::FArrayPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_URapidJsonFunctionLibrary_DeserializeTArrayFString_Wrapper_Statics::NewProp_JsonString_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UECodeGen_Private::FStrPropertyParams Z_Construct_UFunction_URapidJsonFunctionLibrary_DeserializeTArrayFString_Wrapper_Statics::NewProp_JsonString = { "JsonString", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(RapidJsonFunctionLibrary_eventDeserializeTArrayFString_Wrapper_Parms, JsonString), METADATA_PARAMS(Z_Construct_UFunction_URapidJsonFunctionLibrary_DeserializeTArrayFString_Wrapper_Statics::NewProp_JsonString_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_URapidJsonFunctionLibrary_DeserializeTArrayFString_Wrapper_Statics::NewProp_JsonString_MetaData)) };
	const UECodeGen_Private::FStrPropertyParams Z_Construct_UFunction_URapidJsonFunctionLibrary_DeserializeTArrayFString_Wrapper_Statics::NewProp_ReturnValue_Inner = { "ReturnValue", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, 0, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FArrayPropertyParams Z_Construct_UFunction_URapidJsonFunctionLibrary_DeserializeTArrayFString_Wrapper_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(RapidJsonFunctionLibrary_eventDeserializeTArrayFString_Wrapper_Parms, ReturnValue), EArrayPropertyFlags::None, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_URapidJsonFunctionLibrary_DeserializeTArrayFString_Wrapper_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_URapidJsonFunctionLibrary_DeserializeTArrayFString_Wrapper_Statics::NewProp_JsonString,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_URapidJsonFunctionLibrary_DeserializeTArrayFString_Wrapper_Statics::NewProp_ReturnValue_Inner,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_URapidJsonFunctionLibrary_DeserializeTArrayFString_Wrapper_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_URapidJsonFunctionLibrary_DeserializeTArrayFString_Wrapper_Statics::Function_MetaDataParams[] = {
		{ "Category", "RapidJson|De-Serialize Array" },
		{ "DisplayName", "De-Serialize String Array" },
		{ "ModuleRelativePath", "Public/RapidJsonFunctionLibrary.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_URapidJsonFunctionLibrary_DeserializeTArrayFString_Wrapper_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_URapidJsonFunctionLibrary, nullptr, "DeserializeTArrayFString_Wrapper", nullptr, nullptr, sizeof(Z_Construct_UFunction_URapidJsonFunctionLibrary_DeserializeTArrayFString_Wrapper_Statics::RapidJsonFunctionLibrary_eventDeserializeTArrayFString_Wrapper_Parms), Z_Construct_UFunction_URapidJsonFunctionLibrary_DeserializeTArrayFString_Wrapper_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_URapidJsonFunctionLibrary_DeserializeTArrayFString_Wrapper_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04022401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_URapidJsonFunctionLibrary_DeserializeTArrayFString_Wrapper_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_URapidJsonFunctionLibrary_DeserializeTArrayFString_Wrapper_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_URapidJsonFunctionLibrary_DeserializeTArrayFString_Wrapper()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_URapidJsonFunctionLibrary_DeserializeTArrayFString_Wrapper_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_URapidJsonFunctionLibrary_DeserializeTArrayFText_Wrapper_Statics
	{
		struct RapidJsonFunctionLibrary_eventDeserializeTArrayFText_Wrapper_Parms
		{
			FString JsonString;
			TArray<FText> ReturnValue;
		};
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_JsonString_MetaData[];
#endif
		static const UECodeGen_Private::FStrPropertyParams NewProp_JsonString;
		static const UECodeGen_Private::FTextPropertyParams NewProp_ReturnValue_Inner;
		static const UECodeGen_Private::FArrayPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_URapidJsonFunctionLibrary_DeserializeTArrayFText_Wrapper_Statics::NewProp_JsonString_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UECodeGen_Private::FStrPropertyParams Z_Construct_UFunction_URapidJsonFunctionLibrary_DeserializeTArrayFText_Wrapper_Statics::NewProp_JsonString = { "JsonString", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(RapidJsonFunctionLibrary_eventDeserializeTArrayFText_Wrapper_Parms, JsonString), METADATA_PARAMS(Z_Construct_UFunction_URapidJsonFunctionLibrary_DeserializeTArrayFText_Wrapper_Statics::NewProp_JsonString_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_URapidJsonFunctionLibrary_DeserializeTArrayFText_Wrapper_Statics::NewProp_JsonString_MetaData)) };
	const UECodeGen_Private::FTextPropertyParams Z_Construct_UFunction_URapidJsonFunctionLibrary_DeserializeTArrayFText_Wrapper_Statics::NewProp_ReturnValue_Inner = { "ReturnValue", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Text, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, 0, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FArrayPropertyParams Z_Construct_UFunction_URapidJsonFunctionLibrary_DeserializeTArrayFText_Wrapper_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(RapidJsonFunctionLibrary_eventDeserializeTArrayFText_Wrapper_Parms, ReturnValue), EArrayPropertyFlags::None, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_URapidJsonFunctionLibrary_DeserializeTArrayFText_Wrapper_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_URapidJsonFunctionLibrary_DeserializeTArrayFText_Wrapper_Statics::NewProp_JsonString,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_URapidJsonFunctionLibrary_DeserializeTArrayFText_Wrapper_Statics::NewProp_ReturnValue_Inner,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_URapidJsonFunctionLibrary_DeserializeTArrayFText_Wrapper_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_URapidJsonFunctionLibrary_DeserializeTArrayFText_Wrapper_Statics::Function_MetaDataParams[] = {
		{ "Category", "RapidJson|De-Serialize Array" },
		{ "DisplayName", "De-Serialize Text Array" },
		{ "ModuleRelativePath", "Public/RapidJsonFunctionLibrary.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_URapidJsonFunctionLibrary_DeserializeTArrayFText_Wrapper_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_URapidJsonFunctionLibrary, nullptr, "DeserializeTArrayFText_Wrapper", nullptr, nullptr, sizeof(Z_Construct_UFunction_URapidJsonFunctionLibrary_DeserializeTArrayFText_Wrapper_Statics::RapidJsonFunctionLibrary_eventDeserializeTArrayFText_Wrapper_Parms), Z_Construct_UFunction_URapidJsonFunctionLibrary_DeserializeTArrayFText_Wrapper_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_URapidJsonFunctionLibrary_DeserializeTArrayFText_Wrapper_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04022401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_URapidJsonFunctionLibrary_DeserializeTArrayFText_Wrapper_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_URapidJsonFunctionLibrary_DeserializeTArrayFText_Wrapper_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_URapidJsonFunctionLibrary_DeserializeTArrayFText_Wrapper()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_URapidJsonFunctionLibrary_DeserializeTArrayFText_Wrapper_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_URapidJsonFunctionLibrary_DeserializeTArrayFTransform_Wrapper_Statics
	{
		struct RapidJsonFunctionLibrary_eventDeserializeTArrayFTransform_Wrapper_Parms
		{
			FString JsonString;
			TArray<FTransform> ReturnValue;
		};
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_JsonString_MetaData[];
#endif
		static const UECodeGen_Private::FStrPropertyParams NewProp_JsonString;
		static const UECodeGen_Private::FStructPropertyParams NewProp_ReturnValue_Inner;
		static const UECodeGen_Private::FArrayPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_URapidJsonFunctionLibrary_DeserializeTArrayFTransform_Wrapper_Statics::NewProp_JsonString_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UECodeGen_Private::FStrPropertyParams Z_Construct_UFunction_URapidJsonFunctionLibrary_DeserializeTArrayFTransform_Wrapper_Statics::NewProp_JsonString = { "JsonString", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(RapidJsonFunctionLibrary_eventDeserializeTArrayFTransform_Wrapper_Parms, JsonString), METADATA_PARAMS(Z_Construct_UFunction_URapidJsonFunctionLibrary_DeserializeTArrayFTransform_Wrapper_Statics::NewProp_JsonString_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_URapidJsonFunctionLibrary_DeserializeTArrayFTransform_Wrapper_Statics::NewProp_JsonString_MetaData)) };
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_URapidJsonFunctionLibrary_DeserializeTArrayFTransform_Wrapper_Statics::NewProp_ReturnValue_Inner = { "ReturnValue", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, 0, Z_Construct_UScriptStruct_FTransform, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FArrayPropertyParams Z_Construct_UFunction_URapidJsonFunctionLibrary_DeserializeTArrayFTransform_Wrapper_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(RapidJsonFunctionLibrary_eventDeserializeTArrayFTransform_Wrapper_Parms, ReturnValue), EArrayPropertyFlags::None, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_URapidJsonFunctionLibrary_DeserializeTArrayFTransform_Wrapper_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_URapidJsonFunctionLibrary_DeserializeTArrayFTransform_Wrapper_Statics::NewProp_JsonString,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_URapidJsonFunctionLibrary_DeserializeTArrayFTransform_Wrapper_Statics::NewProp_ReturnValue_Inner,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_URapidJsonFunctionLibrary_DeserializeTArrayFTransform_Wrapper_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_URapidJsonFunctionLibrary_DeserializeTArrayFTransform_Wrapper_Statics::Function_MetaDataParams[] = {
		{ "Category", "RapidJson|De-Serialize Array" },
		{ "DisplayName", "De-Serialize Transform Array" },
		{ "ModuleRelativePath", "Public/RapidJsonFunctionLibrary.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_URapidJsonFunctionLibrary_DeserializeTArrayFTransform_Wrapper_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_URapidJsonFunctionLibrary, nullptr, "DeserializeTArrayFTransform_Wrapper", nullptr, nullptr, sizeof(Z_Construct_UFunction_URapidJsonFunctionLibrary_DeserializeTArrayFTransform_Wrapper_Statics::RapidJsonFunctionLibrary_eventDeserializeTArrayFTransform_Wrapper_Parms), Z_Construct_UFunction_URapidJsonFunctionLibrary_DeserializeTArrayFTransform_Wrapper_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_URapidJsonFunctionLibrary_DeserializeTArrayFTransform_Wrapper_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04022401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_URapidJsonFunctionLibrary_DeserializeTArrayFTransform_Wrapper_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_URapidJsonFunctionLibrary_DeserializeTArrayFTransform_Wrapper_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_URapidJsonFunctionLibrary_DeserializeTArrayFTransform_Wrapper()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_URapidJsonFunctionLibrary_DeserializeTArrayFTransform_Wrapper_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_URapidJsonFunctionLibrary_DeserializeTArrayFVector_Wrapper_Statics
	{
		struct RapidJsonFunctionLibrary_eventDeserializeTArrayFVector_Wrapper_Parms
		{
			FString JsonString;
			TArray<FVector> ReturnValue;
		};
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_JsonString_MetaData[];
#endif
		static const UECodeGen_Private::FStrPropertyParams NewProp_JsonString;
		static const UECodeGen_Private::FStructPropertyParams NewProp_ReturnValue_Inner;
		static const UECodeGen_Private::FArrayPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_URapidJsonFunctionLibrary_DeserializeTArrayFVector_Wrapper_Statics::NewProp_JsonString_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UECodeGen_Private::FStrPropertyParams Z_Construct_UFunction_URapidJsonFunctionLibrary_DeserializeTArrayFVector_Wrapper_Statics::NewProp_JsonString = { "JsonString", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(RapidJsonFunctionLibrary_eventDeserializeTArrayFVector_Wrapper_Parms, JsonString), METADATA_PARAMS(Z_Construct_UFunction_URapidJsonFunctionLibrary_DeserializeTArrayFVector_Wrapper_Statics::NewProp_JsonString_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_URapidJsonFunctionLibrary_DeserializeTArrayFVector_Wrapper_Statics::NewProp_JsonString_MetaData)) };
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_URapidJsonFunctionLibrary_DeserializeTArrayFVector_Wrapper_Statics::NewProp_ReturnValue_Inner = { "ReturnValue", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, 0, Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FArrayPropertyParams Z_Construct_UFunction_URapidJsonFunctionLibrary_DeserializeTArrayFVector_Wrapper_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(RapidJsonFunctionLibrary_eventDeserializeTArrayFVector_Wrapper_Parms, ReturnValue), EArrayPropertyFlags::None, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_URapidJsonFunctionLibrary_DeserializeTArrayFVector_Wrapper_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_URapidJsonFunctionLibrary_DeserializeTArrayFVector_Wrapper_Statics::NewProp_JsonString,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_URapidJsonFunctionLibrary_DeserializeTArrayFVector_Wrapper_Statics::NewProp_ReturnValue_Inner,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_URapidJsonFunctionLibrary_DeserializeTArrayFVector_Wrapper_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_URapidJsonFunctionLibrary_DeserializeTArrayFVector_Wrapper_Statics::Function_MetaDataParams[] = {
		{ "Category", "RapidJson|De-Serialize Array" },
		{ "DisplayName", "De-Serialize Vector Array" },
		{ "ModuleRelativePath", "Public/RapidJsonFunctionLibrary.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_URapidJsonFunctionLibrary_DeserializeTArrayFVector_Wrapper_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_URapidJsonFunctionLibrary, nullptr, "DeserializeTArrayFVector_Wrapper", nullptr, nullptr, sizeof(Z_Construct_UFunction_URapidJsonFunctionLibrary_DeserializeTArrayFVector_Wrapper_Statics::RapidJsonFunctionLibrary_eventDeserializeTArrayFVector_Wrapper_Parms), Z_Construct_UFunction_URapidJsonFunctionLibrary_DeserializeTArrayFVector_Wrapper_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_URapidJsonFunctionLibrary_DeserializeTArrayFVector_Wrapper_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04022401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_URapidJsonFunctionLibrary_DeserializeTArrayFVector_Wrapper_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_URapidJsonFunctionLibrary_DeserializeTArrayFVector_Wrapper_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_URapidJsonFunctionLibrary_DeserializeTArrayFVector_Wrapper()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_URapidJsonFunctionLibrary_DeserializeTArrayFVector_Wrapper_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_URapidJsonFunctionLibrary_DeserializeTArrayInt64_Wrapper_Statics
	{
		struct RapidJsonFunctionLibrary_eventDeserializeTArrayInt64_Wrapper_Parms
		{
			FString JsonString;
			TArray<int64> ReturnValue;
		};
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_JsonString_MetaData[];
#endif
		static const UECodeGen_Private::FStrPropertyParams NewProp_JsonString;
		static const UECodeGen_Private::FInt64PropertyParams NewProp_ReturnValue_Inner;
		static const UECodeGen_Private::FArrayPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_URapidJsonFunctionLibrary_DeserializeTArrayInt64_Wrapper_Statics::NewProp_JsonString_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UECodeGen_Private::FStrPropertyParams Z_Construct_UFunction_URapidJsonFunctionLibrary_DeserializeTArrayInt64_Wrapper_Statics::NewProp_JsonString = { "JsonString", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(RapidJsonFunctionLibrary_eventDeserializeTArrayInt64_Wrapper_Parms, JsonString), METADATA_PARAMS(Z_Construct_UFunction_URapidJsonFunctionLibrary_DeserializeTArrayInt64_Wrapper_Statics::NewProp_JsonString_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_URapidJsonFunctionLibrary_DeserializeTArrayInt64_Wrapper_Statics::NewProp_JsonString_MetaData)) };
	const UECodeGen_Private::FInt64PropertyParams Z_Construct_UFunction_URapidJsonFunctionLibrary_DeserializeTArrayInt64_Wrapper_Statics::NewProp_ReturnValue_Inner = { "ReturnValue", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Int64, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, 0, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FArrayPropertyParams Z_Construct_UFunction_URapidJsonFunctionLibrary_DeserializeTArrayInt64_Wrapper_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(RapidJsonFunctionLibrary_eventDeserializeTArrayInt64_Wrapper_Parms, ReturnValue), EArrayPropertyFlags::None, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_URapidJsonFunctionLibrary_DeserializeTArrayInt64_Wrapper_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_URapidJsonFunctionLibrary_DeserializeTArrayInt64_Wrapper_Statics::NewProp_JsonString,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_URapidJsonFunctionLibrary_DeserializeTArrayInt64_Wrapper_Statics::NewProp_ReturnValue_Inner,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_URapidJsonFunctionLibrary_DeserializeTArrayInt64_Wrapper_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_URapidJsonFunctionLibrary_DeserializeTArrayInt64_Wrapper_Statics::Function_MetaDataParams[] = {
		{ "Category", "RapidJson|De-Serialize Array" },
		{ "DisplayName", "De-Serialize Int64 Array" },
		{ "ModuleRelativePath", "Public/RapidJsonFunctionLibrary.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_URapidJsonFunctionLibrary_DeserializeTArrayInt64_Wrapper_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_URapidJsonFunctionLibrary, nullptr, "DeserializeTArrayInt64_Wrapper", nullptr, nullptr, sizeof(Z_Construct_UFunction_URapidJsonFunctionLibrary_DeserializeTArrayInt64_Wrapper_Statics::RapidJsonFunctionLibrary_eventDeserializeTArrayInt64_Wrapper_Parms), Z_Construct_UFunction_URapidJsonFunctionLibrary_DeserializeTArrayInt64_Wrapper_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_URapidJsonFunctionLibrary_DeserializeTArrayInt64_Wrapper_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04022401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_URapidJsonFunctionLibrary_DeserializeTArrayInt64_Wrapper_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_URapidJsonFunctionLibrary_DeserializeTArrayInt64_Wrapper_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_URapidJsonFunctionLibrary_DeserializeTArrayInt64_Wrapper()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_URapidJsonFunctionLibrary_DeserializeTArrayInt64_Wrapper_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_URapidJsonFunctionLibrary_DeserializeTArrayInt_Wrapper_Statics
	{
		struct RapidJsonFunctionLibrary_eventDeserializeTArrayInt_Wrapper_Parms
		{
			FString JsonString;
			TArray<int32> ReturnValue;
		};
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_JsonString_MetaData[];
#endif
		static const UECodeGen_Private::FStrPropertyParams NewProp_JsonString;
		static const UECodeGen_Private::FIntPropertyParams NewProp_ReturnValue_Inner;
		static const UECodeGen_Private::FArrayPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_URapidJsonFunctionLibrary_DeserializeTArrayInt_Wrapper_Statics::NewProp_JsonString_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UECodeGen_Private::FStrPropertyParams Z_Construct_UFunction_URapidJsonFunctionLibrary_DeserializeTArrayInt_Wrapper_Statics::NewProp_JsonString = { "JsonString", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(RapidJsonFunctionLibrary_eventDeserializeTArrayInt_Wrapper_Parms, JsonString), METADATA_PARAMS(Z_Construct_UFunction_URapidJsonFunctionLibrary_DeserializeTArrayInt_Wrapper_Statics::NewProp_JsonString_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_URapidJsonFunctionLibrary_DeserializeTArrayInt_Wrapper_Statics::NewProp_JsonString_MetaData)) };
	const UECodeGen_Private::FIntPropertyParams Z_Construct_UFunction_URapidJsonFunctionLibrary_DeserializeTArrayInt_Wrapper_Statics::NewProp_ReturnValue_Inner = { "ReturnValue", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, 0, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FArrayPropertyParams Z_Construct_UFunction_URapidJsonFunctionLibrary_DeserializeTArrayInt_Wrapper_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(RapidJsonFunctionLibrary_eventDeserializeTArrayInt_Wrapper_Parms, ReturnValue), EArrayPropertyFlags::None, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_URapidJsonFunctionLibrary_DeserializeTArrayInt_Wrapper_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_URapidJsonFunctionLibrary_DeserializeTArrayInt_Wrapper_Statics::NewProp_JsonString,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_URapidJsonFunctionLibrary_DeserializeTArrayInt_Wrapper_Statics::NewProp_ReturnValue_Inner,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_URapidJsonFunctionLibrary_DeserializeTArrayInt_Wrapper_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_URapidJsonFunctionLibrary_DeserializeTArrayInt_Wrapper_Statics::Function_MetaDataParams[] = {
		{ "Category", "RapidJson|De-Serialize Array" },
		{ "Comment", "//------- DE-SERIALIZE ARRAYS --------//\n" },
		{ "DisplayName", "De-Serialize Int Array" },
		{ "ModuleRelativePath", "Public/RapidJsonFunctionLibrary.h" },
		{ "ToolTip", "------- DE-SERIALIZE ARRAYS --------" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_URapidJsonFunctionLibrary_DeserializeTArrayInt_Wrapper_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_URapidJsonFunctionLibrary, nullptr, "DeserializeTArrayInt_Wrapper", nullptr, nullptr, sizeof(Z_Construct_UFunction_URapidJsonFunctionLibrary_DeserializeTArrayInt_Wrapper_Statics::RapidJsonFunctionLibrary_eventDeserializeTArrayInt_Wrapper_Parms), Z_Construct_UFunction_URapidJsonFunctionLibrary_DeserializeTArrayInt_Wrapper_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_URapidJsonFunctionLibrary_DeserializeTArrayInt_Wrapper_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04022401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_URapidJsonFunctionLibrary_DeserializeTArrayInt_Wrapper_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_URapidJsonFunctionLibrary_DeserializeTArrayInt_Wrapper_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_URapidJsonFunctionLibrary_DeserializeTArrayInt_Wrapper()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_URapidJsonFunctionLibrary_DeserializeTArrayInt_Wrapper_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_URapidJsonFunctionLibrary_DeserializeTArrayUInt8_Wrapper_Statics
	{
		struct RapidJsonFunctionLibrary_eventDeserializeTArrayUInt8_Wrapper_Parms
		{
			FString JsonString;
			TArray<uint8> ReturnValue;
		};
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_JsonString_MetaData[];
#endif
		static const UECodeGen_Private::FStrPropertyParams NewProp_JsonString;
		static const UECodeGen_Private::FBytePropertyParams NewProp_ReturnValue_Inner;
		static const UECodeGen_Private::FArrayPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_URapidJsonFunctionLibrary_DeserializeTArrayUInt8_Wrapper_Statics::NewProp_JsonString_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UECodeGen_Private::FStrPropertyParams Z_Construct_UFunction_URapidJsonFunctionLibrary_DeserializeTArrayUInt8_Wrapper_Statics::NewProp_JsonString = { "JsonString", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(RapidJsonFunctionLibrary_eventDeserializeTArrayUInt8_Wrapper_Parms, JsonString), METADATA_PARAMS(Z_Construct_UFunction_URapidJsonFunctionLibrary_DeserializeTArrayUInt8_Wrapper_Statics::NewProp_JsonString_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_URapidJsonFunctionLibrary_DeserializeTArrayUInt8_Wrapper_Statics::NewProp_JsonString_MetaData)) };
	const UECodeGen_Private::FBytePropertyParams Z_Construct_UFunction_URapidJsonFunctionLibrary_DeserializeTArrayUInt8_Wrapper_Statics::NewProp_ReturnValue_Inner = { "ReturnValue", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, 0, nullptr, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FArrayPropertyParams Z_Construct_UFunction_URapidJsonFunctionLibrary_DeserializeTArrayUInt8_Wrapper_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(RapidJsonFunctionLibrary_eventDeserializeTArrayUInt8_Wrapper_Parms, ReturnValue), EArrayPropertyFlags::None, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_URapidJsonFunctionLibrary_DeserializeTArrayUInt8_Wrapper_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_URapidJsonFunctionLibrary_DeserializeTArrayUInt8_Wrapper_Statics::NewProp_JsonString,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_URapidJsonFunctionLibrary_DeserializeTArrayUInt8_Wrapper_Statics::NewProp_ReturnValue_Inner,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_URapidJsonFunctionLibrary_DeserializeTArrayUInt8_Wrapper_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_URapidJsonFunctionLibrary_DeserializeTArrayUInt8_Wrapper_Statics::Function_MetaDataParams[] = {
		{ "Category", "RapidJson|De-Serialize Array" },
		{ "DisplayName", "De-Serialize Byte Array" },
		{ "ModuleRelativePath", "Public/RapidJsonFunctionLibrary.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_URapidJsonFunctionLibrary_DeserializeTArrayUInt8_Wrapper_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_URapidJsonFunctionLibrary, nullptr, "DeserializeTArrayUInt8_Wrapper", nullptr, nullptr, sizeof(Z_Construct_UFunction_URapidJsonFunctionLibrary_DeserializeTArrayUInt8_Wrapper_Statics::RapidJsonFunctionLibrary_eventDeserializeTArrayUInt8_Wrapper_Parms), Z_Construct_UFunction_URapidJsonFunctionLibrary_DeserializeTArrayUInt8_Wrapper_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_URapidJsonFunctionLibrary_DeserializeTArrayUInt8_Wrapper_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04022401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_URapidJsonFunctionLibrary_DeserializeTArrayUInt8_Wrapper_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_URapidJsonFunctionLibrary_DeserializeTArrayUInt8_Wrapper_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_URapidJsonFunctionLibrary_DeserializeTArrayUInt8_Wrapper()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_URapidJsonFunctionLibrary_DeserializeTArrayUInt8_Wrapper_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_URapidJsonFunctionLibrary_DeserializeUInt8_Wrapper_Statics
	{
		struct RapidJsonFunctionLibrary_eventDeserializeUInt8_Wrapper_Parms
		{
			FString JsonString;
			uint8 ReturnValue;
		};
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_JsonString_MetaData[];
#endif
		static const UECodeGen_Private::FStrPropertyParams NewProp_JsonString;
		static const UECodeGen_Private::FBytePropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_URapidJsonFunctionLibrary_DeserializeUInt8_Wrapper_Statics::NewProp_JsonString_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UECodeGen_Private::FStrPropertyParams Z_Construct_UFunction_URapidJsonFunctionLibrary_DeserializeUInt8_Wrapper_Statics::NewProp_JsonString = { "JsonString", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(RapidJsonFunctionLibrary_eventDeserializeUInt8_Wrapper_Parms, JsonString), METADATA_PARAMS(Z_Construct_UFunction_URapidJsonFunctionLibrary_DeserializeUInt8_Wrapper_Statics::NewProp_JsonString_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_URapidJsonFunctionLibrary_DeserializeUInt8_Wrapper_Statics::NewProp_JsonString_MetaData)) };
	const UECodeGen_Private::FBytePropertyParams Z_Construct_UFunction_URapidJsonFunctionLibrary_DeserializeUInt8_Wrapper_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(RapidJsonFunctionLibrary_eventDeserializeUInt8_Wrapper_Parms, ReturnValue), nullptr, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_URapidJsonFunctionLibrary_DeserializeUInt8_Wrapper_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_URapidJsonFunctionLibrary_DeserializeUInt8_Wrapper_Statics::NewProp_JsonString,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_URapidJsonFunctionLibrary_DeserializeUInt8_Wrapper_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_URapidJsonFunctionLibrary_DeserializeUInt8_Wrapper_Statics::Function_MetaDataParams[] = {
		{ "Category", "RapidJson|De-Serialize" },
		{ "DisplayName", "De-Serialize Byte" },
		{ "ModuleRelativePath", "Public/RapidJsonFunctionLibrary.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_URapidJsonFunctionLibrary_DeserializeUInt8_Wrapper_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_URapidJsonFunctionLibrary, nullptr, "DeserializeUInt8_Wrapper", nullptr, nullptr, sizeof(Z_Construct_UFunction_URapidJsonFunctionLibrary_DeserializeUInt8_Wrapper_Statics::RapidJsonFunctionLibrary_eventDeserializeUInt8_Wrapper_Parms), Z_Construct_UFunction_URapidJsonFunctionLibrary_DeserializeUInt8_Wrapper_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_URapidJsonFunctionLibrary_DeserializeUInt8_Wrapper_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04022401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_URapidJsonFunctionLibrary_DeserializeUInt8_Wrapper_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_URapidJsonFunctionLibrary_DeserializeUInt8_Wrapper_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_URapidJsonFunctionLibrary_DeserializeUInt8_Wrapper()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_URapidJsonFunctionLibrary_DeserializeUInt8_Wrapper_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_URapidJsonFunctionLibrary_SerializeBool_Wrapper_Statics
	{
		struct RapidJsonFunctionLibrary_eventSerializeBool_Wrapper_Parms
		{
			bool BoolValue;
			FString ReturnValue;
		};
		static void NewProp_BoolValue_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_BoolValue;
		static const UECodeGen_Private::FStrPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	void Z_Construct_UFunction_URapidJsonFunctionLibrary_SerializeBool_Wrapper_Statics::NewProp_BoolValue_SetBit(void* Obj)
	{
		((RapidJsonFunctionLibrary_eventSerializeBool_Wrapper_Parms*)Obj)->BoolValue = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_URapidJsonFunctionLibrary_SerializeBool_Wrapper_Statics::NewProp_BoolValue = { "BoolValue", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(bool), sizeof(RapidJsonFunctionLibrary_eventSerializeBool_Wrapper_Parms), &Z_Construct_UFunction_URapidJsonFunctionLibrary_SerializeBool_Wrapper_Statics::NewProp_BoolValue_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FStrPropertyParams Z_Construct_UFunction_URapidJsonFunctionLibrary_SerializeBool_Wrapper_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(RapidJsonFunctionLibrary_eventSerializeBool_Wrapper_Parms, ReturnValue), METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_URapidJsonFunctionLibrary_SerializeBool_Wrapper_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_URapidJsonFunctionLibrary_SerializeBool_Wrapper_Statics::NewProp_BoolValue,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_URapidJsonFunctionLibrary_SerializeBool_Wrapper_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_URapidJsonFunctionLibrary_SerializeBool_Wrapper_Statics::Function_MetaDataParams[] = {
		{ "Category", "RapidJson|Serialize" },
		{ "DisplayName", "Serialize Bool" },
		{ "ModuleRelativePath", "Public/RapidJsonFunctionLibrary.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_URapidJsonFunctionLibrary_SerializeBool_Wrapper_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_URapidJsonFunctionLibrary, nullptr, "SerializeBool_Wrapper", nullptr, nullptr, sizeof(Z_Construct_UFunction_URapidJsonFunctionLibrary_SerializeBool_Wrapper_Statics::RapidJsonFunctionLibrary_eventSerializeBool_Wrapper_Parms), Z_Construct_UFunction_URapidJsonFunctionLibrary_SerializeBool_Wrapper_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_URapidJsonFunctionLibrary_SerializeBool_Wrapper_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04022401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_URapidJsonFunctionLibrary_SerializeBool_Wrapper_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_URapidJsonFunctionLibrary_SerializeBool_Wrapper_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_URapidJsonFunctionLibrary_SerializeBool_Wrapper()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_URapidJsonFunctionLibrary_SerializeBool_Wrapper_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_URapidJsonFunctionLibrary_SerializeFColor_Wrapper_Statics
	{
		struct RapidJsonFunctionLibrary_eventSerializeFColor_Wrapper_Parms
		{
			FColor ColorValue;
			FString ReturnValue;
		};
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_ColorValue_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_ColorValue;
		static const UECodeGen_Private::FStrPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_URapidJsonFunctionLibrary_SerializeFColor_Wrapper_Statics::NewProp_ColorValue_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_URapidJsonFunctionLibrary_SerializeFColor_Wrapper_Statics::NewProp_ColorValue = { "ColorValue", nullptr, (EPropertyFlags)0x0010000008000182, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(RapidJsonFunctionLibrary_eventSerializeFColor_Wrapper_Parms, ColorValue), Z_Construct_UScriptStruct_FColor, METADATA_PARAMS(Z_Construct_UFunction_URapidJsonFunctionLibrary_SerializeFColor_Wrapper_Statics::NewProp_ColorValue_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_URapidJsonFunctionLibrary_SerializeFColor_Wrapper_Statics::NewProp_ColorValue_MetaData)) };
	const UECodeGen_Private::FStrPropertyParams Z_Construct_UFunction_URapidJsonFunctionLibrary_SerializeFColor_Wrapper_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(RapidJsonFunctionLibrary_eventSerializeFColor_Wrapper_Parms, ReturnValue), METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_URapidJsonFunctionLibrary_SerializeFColor_Wrapper_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_URapidJsonFunctionLibrary_SerializeFColor_Wrapper_Statics::NewProp_ColorValue,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_URapidJsonFunctionLibrary_SerializeFColor_Wrapper_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_URapidJsonFunctionLibrary_SerializeFColor_Wrapper_Statics::Function_MetaDataParams[] = {
		{ "Category", "RapidJson|Serialize" },
		{ "DisplayName", "Serialize Color" },
		{ "ModuleRelativePath", "Public/RapidJsonFunctionLibrary.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_URapidJsonFunctionLibrary_SerializeFColor_Wrapper_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_URapidJsonFunctionLibrary, nullptr, "SerializeFColor_Wrapper", nullptr, nullptr, sizeof(Z_Construct_UFunction_URapidJsonFunctionLibrary_SerializeFColor_Wrapper_Statics::RapidJsonFunctionLibrary_eventSerializeFColor_Wrapper_Parms), Z_Construct_UFunction_URapidJsonFunctionLibrary_SerializeFColor_Wrapper_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_URapidJsonFunctionLibrary_SerializeFColor_Wrapper_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04C22401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_URapidJsonFunctionLibrary_SerializeFColor_Wrapper_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_URapidJsonFunctionLibrary_SerializeFColor_Wrapper_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_URapidJsonFunctionLibrary_SerializeFColor_Wrapper()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_URapidJsonFunctionLibrary_SerializeFColor_Wrapper_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_URapidJsonFunctionLibrary_SerializeFloat_Wrapper_Statics
	{
		struct RapidJsonFunctionLibrary_eventSerializeFloat_Wrapper_Parms
		{
			float TextValue;
			FString ReturnValue;
		};
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_TextValue_MetaData[];
#endif
		static const UECodeGen_Private::FFloatPropertyParams NewProp_TextValue;
		static const UECodeGen_Private::FStrPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_URapidJsonFunctionLibrary_SerializeFloat_Wrapper_Statics::NewProp_TextValue_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_URapidJsonFunctionLibrary_SerializeFloat_Wrapper_Statics::NewProp_TextValue = { "TextValue", nullptr, (EPropertyFlags)0x0010000008000182, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(RapidJsonFunctionLibrary_eventSerializeFloat_Wrapper_Parms, TextValue), METADATA_PARAMS(Z_Construct_UFunction_URapidJsonFunctionLibrary_SerializeFloat_Wrapper_Statics::NewProp_TextValue_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_URapidJsonFunctionLibrary_SerializeFloat_Wrapper_Statics::NewProp_TextValue_MetaData)) };
	const UECodeGen_Private::FStrPropertyParams Z_Construct_UFunction_URapidJsonFunctionLibrary_SerializeFloat_Wrapper_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(RapidJsonFunctionLibrary_eventSerializeFloat_Wrapper_Parms, ReturnValue), METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_URapidJsonFunctionLibrary_SerializeFloat_Wrapper_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_URapidJsonFunctionLibrary_SerializeFloat_Wrapper_Statics::NewProp_TextValue,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_URapidJsonFunctionLibrary_SerializeFloat_Wrapper_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_URapidJsonFunctionLibrary_SerializeFloat_Wrapper_Statics::Function_MetaDataParams[] = {
		{ "Category", "RapidJson|Serialize" },
		{ "DisplayName", "Serialize Float" },
		{ "ModuleRelativePath", "Public/RapidJsonFunctionLibrary.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_URapidJsonFunctionLibrary_SerializeFloat_Wrapper_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_URapidJsonFunctionLibrary, nullptr, "SerializeFloat_Wrapper", nullptr, nullptr, sizeof(Z_Construct_UFunction_URapidJsonFunctionLibrary_SerializeFloat_Wrapper_Statics::RapidJsonFunctionLibrary_eventSerializeFloat_Wrapper_Parms), Z_Construct_UFunction_URapidJsonFunctionLibrary_SerializeFloat_Wrapper_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_URapidJsonFunctionLibrary_SerializeFloat_Wrapper_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04422401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_URapidJsonFunctionLibrary_SerializeFloat_Wrapper_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_URapidJsonFunctionLibrary_SerializeFloat_Wrapper_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_URapidJsonFunctionLibrary_SerializeFloat_Wrapper()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_URapidJsonFunctionLibrary_SerializeFloat_Wrapper_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_URapidJsonFunctionLibrary_SerializeFName_Wrapper_Statics
	{
		struct RapidJsonFunctionLibrary_eventSerializeFName_Wrapper_Parms
		{
			FName NameValue;
			FString ReturnValue;
		};
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_NameValue_MetaData[];
#endif
		static const UECodeGen_Private::FNamePropertyParams NewProp_NameValue;
		static const UECodeGen_Private::FStrPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_URapidJsonFunctionLibrary_SerializeFName_Wrapper_Statics::NewProp_NameValue_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UECodeGen_Private::FNamePropertyParams Z_Construct_UFunction_URapidJsonFunctionLibrary_SerializeFName_Wrapper_Statics::NewProp_NameValue = { "NameValue", nullptr, (EPropertyFlags)0x0010000008000182, UECodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(RapidJsonFunctionLibrary_eventSerializeFName_Wrapper_Parms, NameValue), METADATA_PARAMS(Z_Construct_UFunction_URapidJsonFunctionLibrary_SerializeFName_Wrapper_Statics::NewProp_NameValue_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_URapidJsonFunctionLibrary_SerializeFName_Wrapper_Statics::NewProp_NameValue_MetaData)) };
	const UECodeGen_Private::FStrPropertyParams Z_Construct_UFunction_URapidJsonFunctionLibrary_SerializeFName_Wrapper_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(RapidJsonFunctionLibrary_eventSerializeFName_Wrapper_Parms, ReturnValue), METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_URapidJsonFunctionLibrary_SerializeFName_Wrapper_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_URapidJsonFunctionLibrary_SerializeFName_Wrapper_Statics::NewProp_NameValue,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_URapidJsonFunctionLibrary_SerializeFName_Wrapper_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_URapidJsonFunctionLibrary_SerializeFName_Wrapper_Statics::Function_MetaDataParams[] = {
		{ "Category", "RapidJson|Serialize" },
		{ "DisplayName", "Serialize Name" },
		{ "ModuleRelativePath", "Public/RapidJsonFunctionLibrary.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_URapidJsonFunctionLibrary_SerializeFName_Wrapper_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_URapidJsonFunctionLibrary, nullptr, "SerializeFName_Wrapper", nullptr, nullptr, sizeof(Z_Construct_UFunction_URapidJsonFunctionLibrary_SerializeFName_Wrapper_Statics::RapidJsonFunctionLibrary_eventSerializeFName_Wrapper_Parms), Z_Construct_UFunction_URapidJsonFunctionLibrary_SerializeFName_Wrapper_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_URapidJsonFunctionLibrary_SerializeFName_Wrapper_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04422401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_URapidJsonFunctionLibrary_SerializeFName_Wrapper_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_URapidJsonFunctionLibrary_SerializeFName_Wrapper_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_URapidJsonFunctionLibrary_SerializeFName_Wrapper()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_URapidJsonFunctionLibrary_SerializeFName_Wrapper_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_URapidJsonFunctionLibrary_SerializeFRotator_Wrapper_Statics
	{
		struct RapidJsonFunctionLibrary_eventSerializeFRotator_Wrapper_Parms
		{
			FRotator TextValue;
			FString ReturnValue;
		};
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_TextValue_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_TextValue;
		static const UECodeGen_Private::FStrPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_URapidJsonFunctionLibrary_SerializeFRotator_Wrapper_Statics::NewProp_TextValue_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_URapidJsonFunctionLibrary_SerializeFRotator_Wrapper_Statics::NewProp_TextValue = { "TextValue", nullptr, (EPropertyFlags)0x0010000008000182, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(RapidJsonFunctionLibrary_eventSerializeFRotator_Wrapper_Parms, TextValue), Z_Construct_UScriptStruct_FRotator, METADATA_PARAMS(Z_Construct_UFunction_URapidJsonFunctionLibrary_SerializeFRotator_Wrapper_Statics::NewProp_TextValue_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_URapidJsonFunctionLibrary_SerializeFRotator_Wrapper_Statics::NewProp_TextValue_MetaData)) };
	const UECodeGen_Private::FStrPropertyParams Z_Construct_UFunction_URapidJsonFunctionLibrary_SerializeFRotator_Wrapper_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(RapidJsonFunctionLibrary_eventSerializeFRotator_Wrapper_Parms, ReturnValue), METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_URapidJsonFunctionLibrary_SerializeFRotator_Wrapper_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_URapidJsonFunctionLibrary_SerializeFRotator_Wrapper_Statics::NewProp_TextValue,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_URapidJsonFunctionLibrary_SerializeFRotator_Wrapper_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_URapidJsonFunctionLibrary_SerializeFRotator_Wrapper_Statics::Function_MetaDataParams[] = {
		{ "Category", "RapidJson|Serialize" },
		{ "DisplayName", "Serialize Rotator" },
		{ "ModuleRelativePath", "Public/RapidJsonFunctionLibrary.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_URapidJsonFunctionLibrary_SerializeFRotator_Wrapper_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_URapidJsonFunctionLibrary, nullptr, "SerializeFRotator_Wrapper", nullptr, nullptr, sizeof(Z_Construct_UFunction_URapidJsonFunctionLibrary_SerializeFRotator_Wrapper_Statics::RapidJsonFunctionLibrary_eventSerializeFRotator_Wrapper_Parms), Z_Construct_UFunction_URapidJsonFunctionLibrary_SerializeFRotator_Wrapper_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_URapidJsonFunctionLibrary_SerializeFRotator_Wrapper_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04C22401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_URapidJsonFunctionLibrary_SerializeFRotator_Wrapper_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_URapidJsonFunctionLibrary_SerializeFRotator_Wrapper_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_URapidJsonFunctionLibrary_SerializeFRotator_Wrapper()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_URapidJsonFunctionLibrary_SerializeFRotator_Wrapper_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_URapidJsonFunctionLibrary_SerializeFString_Wrapper_Statics
	{
		struct RapidJsonFunctionLibrary_eventSerializeFString_Wrapper_Parms
		{
			FString StringValue;
			FString ReturnValue;
		};
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_StringValue_MetaData[];
#endif
		static const UECodeGen_Private::FStrPropertyParams NewProp_StringValue;
		static const UECodeGen_Private::FStrPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_URapidJsonFunctionLibrary_SerializeFString_Wrapper_Statics::NewProp_StringValue_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UECodeGen_Private::FStrPropertyParams Z_Construct_UFunction_URapidJsonFunctionLibrary_SerializeFString_Wrapper_Statics::NewProp_StringValue = { "StringValue", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(RapidJsonFunctionLibrary_eventSerializeFString_Wrapper_Parms, StringValue), METADATA_PARAMS(Z_Construct_UFunction_URapidJsonFunctionLibrary_SerializeFString_Wrapper_Statics::NewProp_StringValue_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_URapidJsonFunctionLibrary_SerializeFString_Wrapper_Statics::NewProp_StringValue_MetaData)) };
	const UECodeGen_Private::FStrPropertyParams Z_Construct_UFunction_URapidJsonFunctionLibrary_SerializeFString_Wrapper_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(RapidJsonFunctionLibrary_eventSerializeFString_Wrapper_Parms, ReturnValue), METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_URapidJsonFunctionLibrary_SerializeFString_Wrapper_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_URapidJsonFunctionLibrary_SerializeFString_Wrapper_Statics::NewProp_StringValue,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_URapidJsonFunctionLibrary_SerializeFString_Wrapper_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_URapidJsonFunctionLibrary_SerializeFString_Wrapper_Statics::Function_MetaDataParams[] = {
		{ "Category", "RapidJson|Serialize" },
		{ "DisplayName", "Serialize String" },
		{ "ModuleRelativePath", "Public/RapidJsonFunctionLibrary.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_URapidJsonFunctionLibrary_SerializeFString_Wrapper_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_URapidJsonFunctionLibrary, nullptr, "SerializeFString_Wrapper", nullptr, nullptr, sizeof(Z_Construct_UFunction_URapidJsonFunctionLibrary_SerializeFString_Wrapper_Statics::RapidJsonFunctionLibrary_eventSerializeFString_Wrapper_Parms), Z_Construct_UFunction_URapidJsonFunctionLibrary_SerializeFString_Wrapper_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_URapidJsonFunctionLibrary_SerializeFString_Wrapper_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04022401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_URapidJsonFunctionLibrary_SerializeFString_Wrapper_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_URapidJsonFunctionLibrary_SerializeFString_Wrapper_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_URapidJsonFunctionLibrary_SerializeFString_Wrapper()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_URapidJsonFunctionLibrary_SerializeFString_Wrapper_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_URapidJsonFunctionLibrary_SerializeFText_Wrapper_Statics
	{
		struct RapidJsonFunctionLibrary_eventSerializeFText_Wrapper_Parms
		{
			FText TextValue;
			FString ReturnValue;
		};
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_TextValue_MetaData[];
#endif
		static const UECodeGen_Private::FTextPropertyParams NewProp_TextValue;
		static const UECodeGen_Private::FStrPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_URapidJsonFunctionLibrary_SerializeFText_Wrapper_Statics::NewProp_TextValue_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UECodeGen_Private::FTextPropertyParams Z_Construct_UFunction_URapidJsonFunctionLibrary_SerializeFText_Wrapper_Statics::NewProp_TextValue = { "TextValue", nullptr, (EPropertyFlags)0x0010000008000182, UECodeGen_Private::EPropertyGenFlags::Text, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(RapidJsonFunctionLibrary_eventSerializeFText_Wrapper_Parms, TextValue), METADATA_PARAMS(Z_Construct_UFunction_URapidJsonFunctionLibrary_SerializeFText_Wrapper_Statics::NewProp_TextValue_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_URapidJsonFunctionLibrary_SerializeFText_Wrapper_Statics::NewProp_TextValue_MetaData)) };
	const UECodeGen_Private::FStrPropertyParams Z_Construct_UFunction_URapidJsonFunctionLibrary_SerializeFText_Wrapper_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(RapidJsonFunctionLibrary_eventSerializeFText_Wrapper_Parms, ReturnValue), METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_URapidJsonFunctionLibrary_SerializeFText_Wrapper_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_URapidJsonFunctionLibrary_SerializeFText_Wrapper_Statics::NewProp_TextValue,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_URapidJsonFunctionLibrary_SerializeFText_Wrapper_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_URapidJsonFunctionLibrary_SerializeFText_Wrapper_Statics::Function_MetaDataParams[] = {
		{ "Category", "RapidJson|Serialize" },
		{ "DisplayName", "Serialize Text" },
		{ "ModuleRelativePath", "Public/RapidJsonFunctionLibrary.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_URapidJsonFunctionLibrary_SerializeFText_Wrapper_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_URapidJsonFunctionLibrary, nullptr, "SerializeFText_Wrapper", nullptr, nullptr, sizeof(Z_Construct_UFunction_URapidJsonFunctionLibrary_SerializeFText_Wrapper_Statics::RapidJsonFunctionLibrary_eventSerializeFText_Wrapper_Parms), Z_Construct_UFunction_URapidJsonFunctionLibrary_SerializeFText_Wrapper_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_URapidJsonFunctionLibrary_SerializeFText_Wrapper_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04422401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_URapidJsonFunctionLibrary_SerializeFText_Wrapper_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_URapidJsonFunctionLibrary_SerializeFText_Wrapper_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_URapidJsonFunctionLibrary_SerializeFText_Wrapper()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_URapidJsonFunctionLibrary_SerializeFText_Wrapper_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_URapidJsonFunctionLibrary_SerializeFTransform_Wrapper_Statics
	{
		struct RapidJsonFunctionLibrary_eventSerializeFTransform_Wrapper_Parms
		{
			FTransform TextValue;
			FString ReturnValue;
		};
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_TextValue_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_TextValue;
		static const UECodeGen_Private::FStrPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_URapidJsonFunctionLibrary_SerializeFTransform_Wrapper_Statics::NewProp_TextValue_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_URapidJsonFunctionLibrary_SerializeFTransform_Wrapper_Statics::NewProp_TextValue = { "TextValue", nullptr, (EPropertyFlags)0x0010000008000182, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(RapidJsonFunctionLibrary_eventSerializeFTransform_Wrapper_Parms, TextValue), Z_Construct_UScriptStruct_FTransform, METADATA_PARAMS(Z_Construct_UFunction_URapidJsonFunctionLibrary_SerializeFTransform_Wrapper_Statics::NewProp_TextValue_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_URapidJsonFunctionLibrary_SerializeFTransform_Wrapper_Statics::NewProp_TextValue_MetaData)) };
	const UECodeGen_Private::FStrPropertyParams Z_Construct_UFunction_URapidJsonFunctionLibrary_SerializeFTransform_Wrapper_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(RapidJsonFunctionLibrary_eventSerializeFTransform_Wrapper_Parms, ReturnValue), METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_URapidJsonFunctionLibrary_SerializeFTransform_Wrapper_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_URapidJsonFunctionLibrary_SerializeFTransform_Wrapper_Statics::NewProp_TextValue,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_URapidJsonFunctionLibrary_SerializeFTransform_Wrapper_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_URapidJsonFunctionLibrary_SerializeFTransform_Wrapper_Statics::Function_MetaDataParams[] = {
		{ "Category", "RapidJson|Serialize" },
		{ "DisplayName", "Serialize Transform" },
		{ "ModuleRelativePath", "Public/RapidJsonFunctionLibrary.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_URapidJsonFunctionLibrary_SerializeFTransform_Wrapper_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_URapidJsonFunctionLibrary, nullptr, "SerializeFTransform_Wrapper", nullptr, nullptr, sizeof(Z_Construct_UFunction_URapidJsonFunctionLibrary_SerializeFTransform_Wrapper_Statics::RapidJsonFunctionLibrary_eventSerializeFTransform_Wrapper_Parms), Z_Construct_UFunction_URapidJsonFunctionLibrary_SerializeFTransform_Wrapper_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_URapidJsonFunctionLibrary_SerializeFTransform_Wrapper_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04C22401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_URapidJsonFunctionLibrary_SerializeFTransform_Wrapper_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_URapidJsonFunctionLibrary_SerializeFTransform_Wrapper_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_URapidJsonFunctionLibrary_SerializeFTransform_Wrapper()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_URapidJsonFunctionLibrary_SerializeFTransform_Wrapper_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_URapidJsonFunctionLibrary_SerializeFVector_Wrapper_Statics
	{
		struct RapidJsonFunctionLibrary_eventSerializeFVector_Wrapper_Parms
		{
			FVector TextValue;
			FString ReturnValue;
		};
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_TextValue_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_TextValue;
		static const UECodeGen_Private::FStrPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_URapidJsonFunctionLibrary_SerializeFVector_Wrapper_Statics::NewProp_TextValue_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_URapidJsonFunctionLibrary_SerializeFVector_Wrapper_Statics::NewProp_TextValue = { "TextValue", nullptr, (EPropertyFlags)0x0010000008000182, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(RapidJsonFunctionLibrary_eventSerializeFVector_Wrapper_Parms, TextValue), Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(Z_Construct_UFunction_URapidJsonFunctionLibrary_SerializeFVector_Wrapper_Statics::NewProp_TextValue_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_URapidJsonFunctionLibrary_SerializeFVector_Wrapper_Statics::NewProp_TextValue_MetaData)) };
	const UECodeGen_Private::FStrPropertyParams Z_Construct_UFunction_URapidJsonFunctionLibrary_SerializeFVector_Wrapper_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(RapidJsonFunctionLibrary_eventSerializeFVector_Wrapper_Parms, ReturnValue), METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_URapidJsonFunctionLibrary_SerializeFVector_Wrapper_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_URapidJsonFunctionLibrary_SerializeFVector_Wrapper_Statics::NewProp_TextValue,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_URapidJsonFunctionLibrary_SerializeFVector_Wrapper_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_URapidJsonFunctionLibrary_SerializeFVector_Wrapper_Statics::Function_MetaDataParams[] = {
		{ "Category", "RapidJson|Serialize" },
		{ "DisplayName", "Serialize Vector" },
		{ "ModuleRelativePath", "Public/RapidJsonFunctionLibrary.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_URapidJsonFunctionLibrary_SerializeFVector_Wrapper_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_URapidJsonFunctionLibrary, nullptr, "SerializeFVector_Wrapper", nullptr, nullptr, sizeof(Z_Construct_UFunction_URapidJsonFunctionLibrary_SerializeFVector_Wrapper_Statics::RapidJsonFunctionLibrary_eventSerializeFVector_Wrapper_Parms), Z_Construct_UFunction_URapidJsonFunctionLibrary_SerializeFVector_Wrapper_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_URapidJsonFunctionLibrary_SerializeFVector_Wrapper_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04C22401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_URapidJsonFunctionLibrary_SerializeFVector_Wrapper_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_URapidJsonFunctionLibrary_SerializeFVector_Wrapper_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_URapidJsonFunctionLibrary_SerializeFVector_Wrapper()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_URapidJsonFunctionLibrary_SerializeFVector_Wrapper_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_URapidJsonFunctionLibrary_SerializeInt64_Wrapper_Statics
	{
		struct RapidJsonFunctionLibrary_eventSerializeInt64_Wrapper_Parms
		{
			int64 Int64Value;
			FString ReturnValue;
		};
		static const UECodeGen_Private::FInt64PropertyParams NewProp_Int64Value;
		static const UECodeGen_Private::FStrPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FInt64PropertyParams Z_Construct_UFunction_URapidJsonFunctionLibrary_SerializeInt64_Wrapper_Statics::NewProp_Int64Value = { "Int64Value", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Int64, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(RapidJsonFunctionLibrary_eventSerializeInt64_Wrapper_Parms, Int64Value), METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FStrPropertyParams Z_Construct_UFunction_URapidJsonFunctionLibrary_SerializeInt64_Wrapper_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(RapidJsonFunctionLibrary_eventSerializeInt64_Wrapper_Parms, ReturnValue), METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_URapidJsonFunctionLibrary_SerializeInt64_Wrapper_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_URapidJsonFunctionLibrary_SerializeInt64_Wrapper_Statics::NewProp_Int64Value,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_URapidJsonFunctionLibrary_SerializeInt64_Wrapper_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_URapidJsonFunctionLibrary_SerializeInt64_Wrapper_Statics::Function_MetaDataParams[] = {
		{ "Category", "RapidJson|Serialize" },
		{ "DisplayName", "Serialize Int64" },
		{ "ModuleRelativePath", "Public/RapidJsonFunctionLibrary.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_URapidJsonFunctionLibrary_SerializeInt64_Wrapper_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_URapidJsonFunctionLibrary, nullptr, "SerializeInt64_Wrapper", nullptr, nullptr, sizeof(Z_Construct_UFunction_URapidJsonFunctionLibrary_SerializeInt64_Wrapper_Statics::RapidJsonFunctionLibrary_eventSerializeInt64_Wrapper_Parms), Z_Construct_UFunction_URapidJsonFunctionLibrary_SerializeInt64_Wrapper_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_URapidJsonFunctionLibrary_SerializeInt64_Wrapper_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04022401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_URapidJsonFunctionLibrary_SerializeInt64_Wrapper_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_URapidJsonFunctionLibrary_SerializeInt64_Wrapper_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_URapidJsonFunctionLibrary_SerializeInt64_Wrapper()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_URapidJsonFunctionLibrary_SerializeInt64_Wrapper_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_URapidJsonFunctionLibrary_SerializeInt_Wrapper_Statics
	{
		struct RapidJsonFunctionLibrary_eventSerializeInt_Wrapper_Parms
		{
			int32 IntValue;
			FString ReturnValue;
		};
		static const UECodeGen_Private::FIntPropertyParams NewProp_IntValue;
		static const UECodeGen_Private::FStrPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FIntPropertyParams Z_Construct_UFunction_URapidJsonFunctionLibrary_SerializeInt_Wrapper_Statics::NewProp_IntValue = { "IntValue", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(RapidJsonFunctionLibrary_eventSerializeInt_Wrapper_Parms, IntValue), METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FStrPropertyParams Z_Construct_UFunction_URapidJsonFunctionLibrary_SerializeInt_Wrapper_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(RapidJsonFunctionLibrary_eventSerializeInt_Wrapper_Parms, ReturnValue), METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_URapidJsonFunctionLibrary_SerializeInt_Wrapper_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_URapidJsonFunctionLibrary_SerializeInt_Wrapper_Statics::NewProp_IntValue,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_URapidJsonFunctionLibrary_SerializeInt_Wrapper_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_URapidJsonFunctionLibrary_SerializeInt_Wrapper_Statics::Function_MetaDataParams[] = {
		{ "Category", "RapidJson|Serialize" },
		{ "Comment", "//------- SERIALIZE --------//\n" },
		{ "DisplayName", "Serialize Int" },
		{ "ModuleRelativePath", "Public/RapidJsonFunctionLibrary.h" },
		{ "ToolTip", "------- SERIALIZE --------" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_URapidJsonFunctionLibrary_SerializeInt_Wrapper_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_URapidJsonFunctionLibrary, nullptr, "SerializeInt_Wrapper", nullptr, nullptr, sizeof(Z_Construct_UFunction_URapidJsonFunctionLibrary_SerializeInt_Wrapper_Statics::RapidJsonFunctionLibrary_eventSerializeInt_Wrapper_Parms), Z_Construct_UFunction_URapidJsonFunctionLibrary_SerializeInt_Wrapper_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_URapidJsonFunctionLibrary_SerializeInt_Wrapper_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04022401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_URapidJsonFunctionLibrary_SerializeInt_Wrapper_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_URapidJsonFunctionLibrary_SerializeInt_Wrapper_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_URapidJsonFunctionLibrary_SerializeInt_Wrapper()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_URapidJsonFunctionLibrary_SerializeInt_Wrapper_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_URapidJsonFunctionLibrary_SerializeTArrayBool_Wrapper_Statics
	{
		struct RapidJsonFunctionLibrary_eventSerializeTArrayBool_Wrapper_Parms
		{
			TArray<bool> InBools;
			FString ReturnValue;
		};
		static const UECodeGen_Private::FBoolPropertyParams NewProp_InBools_Inner;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_InBools_MetaData[];
#endif
		static const UECodeGen_Private::FArrayPropertyParams NewProp_InBools;
		static const UECodeGen_Private::FStrPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_URapidJsonFunctionLibrary_SerializeTArrayBool_Wrapper_Statics::NewProp_InBools_Inner = { "InBools", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(bool), 0, nullptr, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_URapidJsonFunctionLibrary_SerializeTArrayBool_Wrapper_Statics::NewProp_InBools_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UECodeGen_Private::FArrayPropertyParams Z_Construct_UFunction_URapidJsonFunctionLibrary_SerializeTArrayBool_Wrapper_Statics::NewProp_InBools = { "InBools", nullptr, (EPropertyFlags)0x0010000008000182, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(RapidJsonFunctionLibrary_eventSerializeTArrayBool_Wrapper_Parms, InBools), EArrayPropertyFlags::None, METADATA_PARAMS(Z_Construct_UFunction_URapidJsonFunctionLibrary_SerializeTArrayBool_Wrapper_Statics::NewProp_InBools_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_URapidJsonFunctionLibrary_SerializeTArrayBool_Wrapper_Statics::NewProp_InBools_MetaData)) };
	const UECodeGen_Private::FStrPropertyParams Z_Construct_UFunction_URapidJsonFunctionLibrary_SerializeTArrayBool_Wrapper_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(RapidJsonFunctionLibrary_eventSerializeTArrayBool_Wrapper_Parms, ReturnValue), METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_URapidJsonFunctionLibrary_SerializeTArrayBool_Wrapper_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_URapidJsonFunctionLibrary_SerializeTArrayBool_Wrapper_Statics::NewProp_InBools_Inner,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_URapidJsonFunctionLibrary_SerializeTArrayBool_Wrapper_Statics::NewProp_InBools,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_URapidJsonFunctionLibrary_SerializeTArrayBool_Wrapper_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_URapidJsonFunctionLibrary_SerializeTArrayBool_Wrapper_Statics::Function_MetaDataParams[] = {
		{ "Category", "RapidJson|Serialize Array" },
		{ "DisplayName", "Serialize Bool Array" },
		{ "ModuleRelativePath", "Public/RapidJsonFunctionLibrary.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_URapidJsonFunctionLibrary_SerializeTArrayBool_Wrapper_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_URapidJsonFunctionLibrary, nullptr, "SerializeTArrayBool_Wrapper", nullptr, nullptr, sizeof(Z_Construct_UFunction_URapidJsonFunctionLibrary_SerializeTArrayBool_Wrapper_Statics::RapidJsonFunctionLibrary_eventSerializeTArrayBool_Wrapper_Parms), Z_Construct_UFunction_URapidJsonFunctionLibrary_SerializeTArrayBool_Wrapper_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_URapidJsonFunctionLibrary_SerializeTArrayBool_Wrapper_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04422401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_URapidJsonFunctionLibrary_SerializeTArrayBool_Wrapper_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_URapidJsonFunctionLibrary_SerializeTArrayBool_Wrapper_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_URapidJsonFunctionLibrary_SerializeTArrayBool_Wrapper()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_URapidJsonFunctionLibrary_SerializeTArrayBool_Wrapper_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_URapidJsonFunctionLibrary_SerializeTArrayFColor_Wrapper_Statics
	{
		struct RapidJsonFunctionLibrary_eventSerializeTArrayFColor_Wrapper_Parms
		{
			TArray<FColor> Colors;
			FString ReturnValue;
		};
		static const UECodeGen_Private::FStructPropertyParams NewProp_Colors_Inner;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Colors_MetaData[];
#endif
		static const UECodeGen_Private::FArrayPropertyParams NewProp_Colors;
		static const UECodeGen_Private::FStrPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_URapidJsonFunctionLibrary_SerializeTArrayFColor_Wrapper_Statics::NewProp_Colors_Inner = { "Colors", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, 0, Z_Construct_UScriptStruct_FColor, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_URapidJsonFunctionLibrary_SerializeTArrayFColor_Wrapper_Statics::NewProp_Colors_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UECodeGen_Private::FArrayPropertyParams Z_Construct_UFunction_URapidJsonFunctionLibrary_SerializeTArrayFColor_Wrapper_Statics::NewProp_Colors = { "Colors", nullptr, (EPropertyFlags)0x0010000008000182, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(RapidJsonFunctionLibrary_eventSerializeTArrayFColor_Wrapper_Parms, Colors), EArrayPropertyFlags::None, METADATA_PARAMS(Z_Construct_UFunction_URapidJsonFunctionLibrary_SerializeTArrayFColor_Wrapper_Statics::NewProp_Colors_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_URapidJsonFunctionLibrary_SerializeTArrayFColor_Wrapper_Statics::NewProp_Colors_MetaData)) };
	const UECodeGen_Private::FStrPropertyParams Z_Construct_UFunction_URapidJsonFunctionLibrary_SerializeTArrayFColor_Wrapper_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(RapidJsonFunctionLibrary_eventSerializeTArrayFColor_Wrapper_Parms, ReturnValue), METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_URapidJsonFunctionLibrary_SerializeTArrayFColor_Wrapper_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_URapidJsonFunctionLibrary_SerializeTArrayFColor_Wrapper_Statics::NewProp_Colors_Inner,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_URapidJsonFunctionLibrary_SerializeTArrayFColor_Wrapper_Statics::NewProp_Colors,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_URapidJsonFunctionLibrary_SerializeTArrayFColor_Wrapper_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_URapidJsonFunctionLibrary_SerializeTArrayFColor_Wrapper_Statics::Function_MetaDataParams[] = {
		{ "Category", "RapidJson|Serialize Array" },
		{ "DisplayName", "Serialize Color Array" },
		{ "ModuleRelativePath", "Public/RapidJsonFunctionLibrary.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_URapidJsonFunctionLibrary_SerializeTArrayFColor_Wrapper_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_URapidJsonFunctionLibrary, nullptr, "SerializeTArrayFColor_Wrapper", nullptr, nullptr, sizeof(Z_Construct_UFunction_URapidJsonFunctionLibrary_SerializeTArrayFColor_Wrapper_Statics::RapidJsonFunctionLibrary_eventSerializeTArrayFColor_Wrapper_Parms), Z_Construct_UFunction_URapidJsonFunctionLibrary_SerializeTArrayFColor_Wrapper_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_URapidJsonFunctionLibrary_SerializeTArrayFColor_Wrapper_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04422401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_URapidJsonFunctionLibrary_SerializeTArrayFColor_Wrapper_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_URapidJsonFunctionLibrary_SerializeTArrayFColor_Wrapper_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_URapidJsonFunctionLibrary_SerializeTArrayFColor_Wrapper()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_URapidJsonFunctionLibrary_SerializeTArrayFColor_Wrapper_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_URapidJsonFunctionLibrary_SerializeTArrayFloat_Wrapper_Statics
	{
		struct RapidJsonFunctionLibrary_eventSerializeTArrayFloat_Wrapper_Parms
		{
			TArray<float> inFloats;
			FString ReturnValue;
		};
		static const UECodeGen_Private::FFloatPropertyParams NewProp_inFloats_Inner;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_inFloats_MetaData[];
#endif
		static const UECodeGen_Private::FArrayPropertyParams NewProp_inFloats;
		static const UECodeGen_Private::FStrPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_URapidJsonFunctionLibrary_SerializeTArrayFloat_Wrapper_Statics::NewProp_inFloats_Inner = { "inFloats", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, 0, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_URapidJsonFunctionLibrary_SerializeTArrayFloat_Wrapper_Statics::NewProp_inFloats_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UECodeGen_Private::FArrayPropertyParams Z_Construct_UFunction_URapidJsonFunctionLibrary_SerializeTArrayFloat_Wrapper_Statics::NewProp_inFloats = { "inFloats", nullptr, (EPropertyFlags)0x0010000008000182, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(RapidJsonFunctionLibrary_eventSerializeTArrayFloat_Wrapper_Parms, inFloats), EArrayPropertyFlags::None, METADATA_PARAMS(Z_Construct_UFunction_URapidJsonFunctionLibrary_SerializeTArrayFloat_Wrapper_Statics::NewProp_inFloats_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_URapidJsonFunctionLibrary_SerializeTArrayFloat_Wrapper_Statics::NewProp_inFloats_MetaData)) };
	const UECodeGen_Private::FStrPropertyParams Z_Construct_UFunction_URapidJsonFunctionLibrary_SerializeTArrayFloat_Wrapper_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(RapidJsonFunctionLibrary_eventSerializeTArrayFloat_Wrapper_Parms, ReturnValue), METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_URapidJsonFunctionLibrary_SerializeTArrayFloat_Wrapper_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_URapidJsonFunctionLibrary_SerializeTArrayFloat_Wrapper_Statics::NewProp_inFloats_Inner,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_URapidJsonFunctionLibrary_SerializeTArrayFloat_Wrapper_Statics::NewProp_inFloats,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_URapidJsonFunctionLibrary_SerializeTArrayFloat_Wrapper_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_URapidJsonFunctionLibrary_SerializeTArrayFloat_Wrapper_Statics::Function_MetaDataParams[] = {
		{ "Category", "RapidJson|Serialize Array" },
		{ "DisplayName", "Serialize Float Array" },
		{ "ModuleRelativePath", "Public/RapidJsonFunctionLibrary.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_URapidJsonFunctionLibrary_SerializeTArrayFloat_Wrapper_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_URapidJsonFunctionLibrary, nullptr, "SerializeTArrayFloat_Wrapper", nullptr, nullptr, sizeof(Z_Construct_UFunction_URapidJsonFunctionLibrary_SerializeTArrayFloat_Wrapper_Statics::RapidJsonFunctionLibrary_eventSerializeTArrayFloat_Wrapper_Parms), Z_Construct_UFunction_URapidJsonFunctionLibrary_SerializeTArrayFloat_Wrapper_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_URapidJsonFunctionLibrary_SerializeTArrayFloat_Wrapper_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04422401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_URapidJsonFunctionLibrary_SerializeTArrayFloat_Wrapper_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_URapidJsonFunctionLibrary_SerializeTArrayFloat_Wrapper_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_URapidJsonFunctionLibrary_SerializeTArrayFloat_Wrapper()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_URapidJsonFunctionLibrary_SerializeTArrayFloat_Wrapper_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_URapidJsonFunctionLibrary_SerializeTArrayFName_Wrapper_Statics
	{
		struct RapidJsonFunctionLibrary_eventSerializeTArrayFName_Wrapper_Parms
		{
			TArray<FName> InNames;
			FString ReturnValue;
		};
		static const UECodeGen_Private::FNamePropertyParams NewProp_InNames_Inner;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_InNames_MetaData[];
#endif
		static const UECodeGen_Private::FArrayPropertyParams NewProp_InNames;
		static const UECodeGen_Private::FStrPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FNamePropertyParams Z_Construct_UFunction_URapidJsonFunctionLibrary_SerializeTArrayFName_Wrapper_Statics::NewProp_InNames_Inner = { "InNames", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, 0, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_URapidJsonFunctionLibrary_SerializeTArrayFName_Wrapper_Statics::NewProp_InNames_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UECodeGen_Private::FArrayPropertyParams Z_Construct_UFunction_URapidJsonFunctionLibrary_SerializeTArrayFName_Wrapper_Statics::NewProp_InNames = { "InNames", nullptr, (EPropertyFlags)0x0010000008000182, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(RapidJsonFunctionLibrary_eventSerializeTArrayFName_Wrapper_Parms, InNames), EArrayPropertyFlags::None, METADATA_PARAMS(Z_Construct_UFunction_URapidJsonFunctionLibrary_SerializeTArrayFName_Wrapper_Statics::NewProp_InNames_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_URapidJsonFunctionLibrary_SerializeTArrayFName_Wrapper_Statics::NewProp_InNames_MetaData)) };
	const UECodeGen_Private::FStrPropertyParams Z_Construct_UFunction_URapidJsonFunctionLibrary_SerializeTArrayFName_Wrapper_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(RapidJsonFunctionLibrary_eventSerializeTArrayFName_Wrapper_Parms, ReturnValue), METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_URapidJsonFunctionLibrary_SerializeTArrayFName_Wrapper_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_URapidJsonFunctionLibrary_SerializeTArrayFName_Wrapper_Statics::NewProp_InNames_Inner,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_URapidJsonFunctionLibrary_SerializeTArrayFName_Wrapper_Statics::NewProp_InNames,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_URapidJsonFunctionLibrary_SerializeTArrayFName_Wrapper_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_URapidJsonFunctionLibrary_SerializeTArrayFName_Wrapper_Statics::Function_MetaDataParams[] = {
		{ "Category", "RapidJson|Serialize Array" },
		{ "DisplayName", "Serialize Name Array" },
		{ "ModuleRelativePath", "Public/RapidJsonFunctionLibrary.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_URapidJsonFunctionLibrary_SerializeTArrayFName_Wrapper_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_URapidJsonFunctionLibrary, nullptr, "SerializeTArrayFName_Wrapper", nullptr, nullptr, sizeof(Z_Construct_UFunction_URapidJsonFunctionLibrary_SerializeTArrayFName_Wrapper_Statics::RapidJsonFunctionLibrary_eventSerializeTArrayFName_Wrapper_Parms), Z_Construct_UFunction_URapidJsonFunctionLibrary_SerializeTArrayFName_Wrapper_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_URapidJsonFunctionLibrary_SerializeTArrayFName_Wrapper_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04422401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_URapidJsonFunctionLibrary_SerializeTArrayFName_Wrapper_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_URapidJsonFunctionLibrary_SerializeTArrayFName_Wrapper_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_URapidJsonFunctionLibrary_SerializeTArrayFName_Wrapper()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_URapidJsonFunctionLibrary_SerializeTArrayFName_Wrapper_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_URapidJsonFunctionLibrary_SerializeTArrayFRotator_Wrapper_Statics
	{
		struct RapidJsonFunctionLibrary_eventSerializeTArrayFRotator_Wrapper_Parms
		{
			TArray<FRotator> inRotator;
			FString ReturnValue;
		};
		static const UECodeGen_Private::FStructPropertyParams NewProp_inRotator_Inner;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_inRotator_MetaData[];
#endif
		static const UECodeGen_Private::FArrayPropertyParams NewProp_inRotator;
		static const UECodeGen_Private::FStrPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_URapidJsonFunctionLibrary_SerializeTArrayFRotator_Wrapper_Statics::NewProp_inRotator_Inner = { "inRotator", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, 0, Z_Construct_UScriptStruct_FRotator, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_URapidJsonFunctionLibrary_SerializeTArrayFRotator_Wrapper_Statics::NewProp_inRotator_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UECodeGen_Private::FArrayPropertyParams Z_Construct_UFunction_URapidJsonFunctionLibrary_SerializeTArrayFRotator_Wrapper_Statics::NewProp_inRotator = { "inRotator", nullptr, (EPropertyFlags)0x0010000008000182, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(RapidJsonFunctionLibrary_eventSerializeTArrayFRotator_Wrapper_Parms, inRotator), EArrayPropertyFlags::None, METADATA_PARAMS(Z_Construct_UFunction_URapidJsonFunctionLibrary_SerializeTArrayFRotator_Wrapper_Statics::NewProp_inRotator_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_URapidJsonFunctionLibrary_SerializeTArrayFRotator_Wrapper_Statics::NewProp_inRotator_MetaData)) };
	const UECodeGen_Private::FStrPropertyParams Z_Construct_UFunction_URapidJsonFunctionLibrary_SerializeTArrayFRotator_Wrapper_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(RapidJsonFunctionLibrary_eventSerializeTArrayFRotator_Wrapper_Parms, ReturnValue), METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_URapidJsonFunctionLibrary_SerializeTArrayFRotator_Wrapper_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_URapidJsonFunctionLibrary_SerializeTArrayFRotator_Wrapper_Statics::NewProp_inRotator_Inner,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_URapidJsonFunctionLibrary_SerializeTArrayFRotator_Wrapper_Statics::NewProp_inRotator,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_URapidJsonFunctionLibrary_SerializeTArrayFRotator_Wrapper_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_URapidJsonFunctionLibrary_SerializeTArrayFRotator_Wrapper_Statics::Function_MetaDataParams[] = {
		{ "Category", "RapidJson|Serialize Array" },
		{ "DisplayName", "Serialize Rotator Array" },
		{ "ModuleRelativePath", "Public/RapidJsonFunctionLibrary.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_URapidJsonFunctionLibrary_SerializeTArrayFRotator_Wrapper_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_URapidJsonFunctionLibrary, nullptr, "SerializeTArrayFRotator_Wrapper", nullptr, nullptr, sizeof(Z_Construct_UFunction_URapidJsonFunctionLibrary_SerializeTArrayFRotator_Wrapper_Statics::RapidJsonFunctionLibrary_eventSerializeTArrayFRotator_Wrapper_Parms), Z_Construct_UFunction_URapidJsonFunctionLibrary_SerializeTArrayFRotator_Wrapper_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_URapidJsonFunctionLibrary_SerializeTArrayFRotator_Wrapper_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04422401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_URapidJsonFunctionLibrary_SerializeTArrayFRotator_Wrapper_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_URapidJsonFunctionLibrary_SerializeTArrayFRotator_Wrapper_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_URapidJsonFunctionLibrary_SerializeTArrayFRotator_Wrapper()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_URapidJsonFunctionLibrary_SerializeTArrayFRotator_Wrapper_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_URapidJsonFunctionLibrary_SerializeTArrayFString_Wrapper_Statics
	{
		struct RapidJsonFunctionLibrary_eventSerializeTArrayFString_Wrapper_Parms
		{
			TArray<FString> InStrings;
			FString ReturnValue;
		};
		static const UECodeGen_Private::FStrPropertyParams NewProp_InStrings_Inner;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_InStrings_MetaData[];
#endif
		static const UECodeGen_Private::FArrayPropertyParams NewProp_InStrings;
		static const UECodeGen_Private::FStrPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FStrPropertyParams Z_Construct_UFunction_URapidJsonFunctionLibrary_SerializeTArrayFString_Wrapper_Statics::NewProp_InStrings_Inner = { "InStrings", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, 0, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_URapidJsonFunctionLibrary_SerializeTArrayFString_Wrapper_Statics::NewProp_InStrings_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UECodeGen_Private::FArrayPropertyParams Z_Construct_UFunction_URapidJsonFunctionLibrary_SerializeTArrayFString_Wrapper_Statics::NewProp_InStrings = { "InStrings", nullptr, (EPropertyFlags)0x0010000008000182, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(RapidJsonFunctionLibrary_eventSerializeTArrayFString_Wrapper_Parms, InStrings), EArrayPropertyFlags::None, METADATA_PARAMS(Z_Construct_UFunction_URapidJsonFunctionLibrary_SerializeTArrayFString_Wrapper_Statics::NewProp_InStrings_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_URapidJsonFunctionLibrary_SerializeTArrayFString_Wrapper_Statics::NewProp_InStrings_MetaData)) };
	const UECodeGen_Private::FStrPropertyParams Z_Construct_UFunction_URapidJsonFunctionLibrary_SerializeTArrayFString_Wrapper_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(RapidJsonFunctionLibrary_eventSerializeTArrayFString_Wrapper_Parms, ReturnValue), METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_URapidJsonFunctionLibrary_SerializeTArrayFString_Wrapper_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_URapidJsonFunctionLibrary_SerializeTArrayFString_Wrapper_Statics::NewProp_InStrings_Inner,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_URapidJsonFunctionLibrary_SerializeTArrayFString_Wrapper_Statics::NewProp_InStrings,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_URapidJsonFunctionLibrary_SerializeTArrayFString_Wrapper_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_URapidJsonFunctionLibrary_SerializeTArrayFString_Wrapper_Statics::Function_MetaDataParams[] = {
		{ "Category", "RapidJson|Serialize Array" },
		{ "DisplayName", "Serialize String Array" },
		{ "ModuleRelativePath", "Public/RapidJsonFunctionLibrary.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_URapidJsonFunctionLibrary_SerializeTArrayFString_Wrapper_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_URapidJsonFunctionLibrary, nullptr, "SerializeTArrayFString_Wrapper", nullptr, nullptr, sizeof(Z_Construct_UFunction_URapidJsonFunctionLibrary_SerializeTArrayFString_Wrapper_Statics::RapidJsonFunctionLibrary_eventSerializeTArrayFString_Wrapper_Parms), Z_Construct_UFunction_URapidJsonFunctionLibrary_SerializeTArrayFString_Wrapper_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_URapidJsonFunctionLibrary_SerializeTArrayFString_Wrapper_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04422401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_URapidJsonFunctionLibrary_SerializeTArrayFString_Wrapper_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_URapidJsonFunctionLibrary_SerializeTArrayFString_Wrapper_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_URapidJsonFunctionLibrary_SerializeTArrayFString_Wrapper()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_URapidJsonFunctionLibrary_SerializeTArrayFString_Wrapper_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_URapidJsonFunctionLibrary_SerializeTArrayFText_Wrapper_Statics
	{
		struct RapidJsonFunctionLibrary_eventSerializeTArrayFText_Wrapper_Parms
		{
			TArray<FText> InTexts;
			FString ReturnValue;
		};
		static const UECodeGen_Private::FTextPropertyParams NewProp_InTexts_Inner;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_InTexts_MetaData[];
#endif
		static const UECodeGen_Private::FArrayPropertyParams NewProp_InTexts;
		static const UECodeGen_Private::FStrPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FTextPropertyParams Z_Construct_UFunction_URapidJsonFunctionLibrary_SerializeTArrayFText_Wrapper_Statics::NewProp_InTexts_Inner = { "InTexts", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Text, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, 0, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_URapidJsonFunctionLibrary_SerializeTArrayFText_Wrapper_Statics::NewProp_InTexts_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UECodeGen_Private::FArrayPropertyParams Z_Construct_UFunction_URapidJsonFunctionLibrary_SerializeTArrayFText_Wrapper_Statics::NewProp_InTexts = { "InTexts", nullptr, (EPropertyFlags)0x0010000008000182, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(RapidJsonFunctionLibrary_eventSerializeTArrayFText_Wrapper_Parms, InTexts), EArrayPropertyFlags::None, METADATA_PARAMS(Z_Construct_UFunction_URapidJsonFunctionLibrary_SerializeTArrayFText_Wrapper_Statics::NewProp_InTexts_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_URapidJsonFunctionLibrary_SerializeTArrayFText_Wrapper_Statics::NewProp_InTexts_MetaData)) };
	const UECodeGen_Private::FStrPropertyParams Z_Construct_UFunction_URapidJsonFunctionLibrary_SerializeTArrayFText_Wrapper_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(RapidJsonFunctionLibrary_eventSerializeTArrayFText_Wrapper_Parms, ReturnValue), METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_URapidJsonFunctionLibrary_SerializeTArrayFText_Wrapper_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_URapidJsonFunctionLibrary_SerializeTArrayFText_Wrapper_Statics::NewProp_InTexts_Inner,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_URapidJsonFunctionLibrary_SerializeTArrayFText_Wrapper_Statics::NewProp_InTexts,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_URapidJsonFunctionLibrary_SerializeTArrayFText_Wrapper_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_URapidJsonFunctionLibrary_SerializeTArrayFText_Wrapper_Statics::Function_MetaDataParams[] = {
		{ "Category", "RapidJson|Serialize Array" },
		{ "DisplayName", "Serialize Text Array" },
		{ "ModuleRelativePath", "Public/RapidJsonFunctionLibrary.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_URapidJsonFunctionLibrary_SerializeTArrayFText_Wrapper_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_URapidJsonFunctionLibrary, nullptr, "SerializeTArrayFText_Wrapper", nullptr, nullptr, sizeof(Z_Construct_UFunction_URapidJsonFunctionLibrary_SerializeTArrayFText_Wrapper_Statics::RapidJsonFunctionLibrary_eventSerializeTArrayFText_Wrapper_Parms), Z_Construct_UFunction_URapidJsonFunctionLibrary_SerializeTArrayFText_Wrapper_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_URapidJsonFunctionLibrary_SerializeTArrayFText_Wrapper_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04422401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_URapidJsonFunctionLibrary_SerializeTArrayFText_Wrapper_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_URapidJsonFunctionLibrary_SerializeTArrayFText_Wrapper_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_URapidJsonFunctionLibrary_SerializeTArrayFText_Wrapper()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_URapidJsonFunctionLibrary_SerializeTArrayFText_Wrapper_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_URapidJsonFunctionLibrary_SerializeTArrayFTransform_Wrapper_Statics
	{
		struct RapidJsonFunctionLibrary_eventSerializeTArrayFTransform_Wrapper_Parms
		{
			TArray<FTransform> inTransform;
			FString ReturnValue;
		};
		static const UECodeGen_Private::FStructPropertyParams NewProp_inTransform_Inner;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_inTransform_MetaData[];
#endif
		static const UECodeGen_Private::FArrayPropertyParams NewProp_inTransform;
		static const UECodeGen_Private::FStrPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_URapidJsonFunctionLibrary_SerializeTArrayFTransform_Wrapper_Statics::NewProp_inTransform_Inner = { "inTransform", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, 0, Z_Construct_UScriptStruct_FTransform, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_URapidJsonFunctionLibrary_SerializeTArrayFTransform_Wrapper_Statics::NewProp_inTransform_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UECodeGen_Private::FArrayPropertyParams Z_Construct_UFunction_URapidJsonFunctionLibrary_SerializeTArrayFTransform_Wrapper_Statics::NewProp_inTransform = { "inTransform", nullptr, (EPropertyFlags)0x0010000008000182, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(RapidJsonFunctionLibrary_eventSerializeTArrayFTransform_Wrapper_Parms, inTransform), EArrayPropertyFlags::None, METADATA_PARAMS(Z_Construct_UFunction_URapidJsonFunctionLibrary_SerializeTArrayFTransform_Wrapper_Statics::NewProp_inTransform_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_URapidJsonFunctionLibrary_SerializeTArrayFTransform_Wrapper_Statics::NewProp_inTransform_MetaData)) };
	const UECodeGen_Private::FStrPropertyParams Z_Construct_UFunction_URapidJsonFunctionLibrary_SerializeTArrayFTransform_Wrapper_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(RapidJsonFunctionLibrary_eventSerializeTArrayFTransform_Wrapper_Parms, ReturnValue), METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_URapidJsonFunctionLibrary_SerializeTArrayFTransform_Wrapper_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_URapidJsonFunctionLibrary_SerializeTArrayFTransform_Wrapper_Statics::NewProp_inTransform_Inner,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_URapidJsonFunctionLibrary_SerializeTArrayFTransform_Wrapper_Statics::NewProp_inTransform,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_URapidJsonFunctionLibrary_SerializeTArrayFTransform_Wrapper_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_URapidJsonFunctionLibrary_SerializeTArrayFTransform_Wrapper_Statics::Function_MetaDataParams[] = {
		{ "Category", "RapidJson|Serialize Array" },
		{ "DisplayName", "Serialize Transform Array" },
		{ "ModuleRelativePath", "Public/RapidJsonFunctionLibrary.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_URapidJsonFunctionLibrary_SerializeTArrayFTransform_Wrapper_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_URapidJsonFunctionLibrary, nullptr, "SerializeTArrayFTransform_Wrapper", nullptr, nullptr, sizeof(Z_Construct_UFunction_URapidJsonFunctionLibrary_SerializeTArrayFTransform_Wrapper_Statics::RapidJsonFunctionLibrary_eventSerializeTArrayFTransform_Wrapper_Parms), Z_Construct_UFunction_URapidJsonFunctionLibrary_SerializeTArrayFTransform_Wrapper_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_URapidJsonFunctionLibrary_SerializeTArrayFTransform_Wrapper_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04422401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_URapidJsonFunctionLibrary_SerializeTArrayFTransform_Wrapper_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_URapidJsonFunctionLibrary_SerializeTArrayFTransform_Wrapper_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_URapidJsonFunctionLibrary_SerializeTArrayFTransform_Wrapper()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_URapidJsonFunctionLibrary_SerializeTArrayFTransform_Wrapper_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_URapidJsonFunctionLibrary_SerializeTArrayFVector_Wrapper_Statics
	{
		struct RapidJsonFunctionLibrary_eventSerializeTArrayFVector_Wrapper_Parms
		{
			TArray<FVector> inFVector;
			FString ReturnValue;
		};
		static const UECodeGen_Private::FStructPropertyParams NewProp_inFVector_Inner;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_inFVector_MetaData[];
#endif
		static const UECodeGen_Private::FArrayPropertyParams NewProp_inFVector;
		static const UECodeGen_Private::FStrPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_URapidJsonFunctionLibrary_SerializeTArrayFVector_Wrapper_Statics::NewProp_inFVector_Inner = { "inFVector", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, 0, Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_URapidJsonFunctionLibrary_SerializeTArrayFVector_Wrapper_Statics::NewProp_inFVector_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UECodeGen_Private::FArrayPropertyParams Z_Construct_UFunction_URapidJsonFunctionLibrary_SerializeTArrayFVector_Wrapper_Statics::NewProp_inFVector = { "inFVector", nullptr, (EPropertyFlags)0x0010000008000182, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(RapidJsonFunctionLibrary_eventSerializeTArrayFVector_Wrapper_Parms, inFVector), EArrayPropertyFlags::None, METADATA_PARAMS(Z_Construct_UFunction_URapidJsonFunctionLibrary_SerializeTArrayFVector_Wrapper_Statics::NewProp_inFVector_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_URapidJsonFunctionLibrary_SerializeTArrayFVector_Wrapper_Statics::NewProp_inFVector_MetaData)) };
	const UECodeGen_Private::FStrPropertyParams Z_Construct_UFunction_URapidJsonFunctionLibrary_SerializeTArrayFVector_Wrapper_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(RapidJsonFunctionLibrary_eventSerializeTArrayFVector_Wrapper_Parms, ReturnValue), METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_URapidJsonFunctionLibrary_SerializeTArrayFVector_Wrapper_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_URapidJsonFunctionLibrary_SerializeTArrayFVector_Wrapper_Statics::NewProp_inFVector_Inner,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_URapidJsonFunctionLibrary_SerializeTArrayFVector_Wrapper_Statics::NewProp_inFVector,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_URapidJsonFunctionLibrary_SerializeTArrayFVector_Wrapper_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_URapidJsonFunctionLibrary_SerializeTArrayFVector_Wrapper_Statics::Function_MetaDataParams[] = {
		{ "Category", "RapidJson|Serialize Array" },
		{ "DisplayName", "Serialize Vector Array" },
		{ "ModuleRelativePath", "Public/RapidJsonFunctionLibrary.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_URapidJsonFunctionLibrary_SerializeTArrayFVector_Wrapper_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_URapidJsonFunctionLibrary, nullptr, "SerializeTArrayFVector_Wrapper", nullptr, nullptr, sizeof(Z_Construct_UFunction_URapidJsonFunctionLibrary_SerializeTArrayFVector_Wrapper_Statics::RapidJsonFunctionLibrary_eventSerializeTArrayFVector_Wrapper_Parms), Z_Construct_UFunction_URapidJsonFunctionLibrary_SerializeTArrayFVector_Wrapper_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_URapidJsonFunctionLibrary_SerializeTArrayFVector_Wrapper_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04422401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_URapidJsonFunctionLibrary_SerializeTArrayFVector_Wrapper_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_URapidJsonFunctionLibrary_SerializeTArrayFVector_Wrapper_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_URapidJsonFunctionLibrary_SerializeTArrayFVector_Wrapper()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_URapidJsonFunctionLibrary_SerializeTArrayFVector_Wrapper_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_URapidJsonFunctionLibrary_SerializeTArrayInt64_Wrapper_Statics
	{
		struct RapidJsonFunctionLibrary_eventSerializeTArrayInt64_Wrapper_Parms
		{
			TArray<int64> InInt64s;
			FString ReturnValue;
		};
		static const UECodeGen_Private::FInt64PropertyParams NewProp_InInt64s_Inner;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_InInt64s_MetaData[];
#endif
		static const UECodeGen_Private::FArrayPropertyParams NewProp_InInt64s;
		static const UECodeGen_Private::FStrPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FInt64PropertyParams Z_Construct_UFunction_URapidJsonFunctionLibrary_SerializeTArrayInt64_Wrapper_Statics::NewProp_InInt64s_Inner = { "InInt64s", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Int64, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, 0, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_URapidJsonFunctionLibrary_SerializeTArrayInt64_Wrapper_Statics::NewProp_InInt64s_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UECodeGen_Private::FArrayPropertyParams Z_Construct_UFunction_URapidJsonFunctionLibrary_SerializeTArrayInt64_Wrapper_Statics::NewProp_InInt64s = { "InInt64s", nullptr, (EPropertyFlags)0x0010000008000182, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(RapidJsonFunctionLibrary_eventSerializeTArrayInt64_Wrapper_Parms, InInt64s), EArrayPropertyFlags::None, METADATA_PARAMS(Z_Construct_UFunction_URapidJsonFunctionLibrary_SerializeTArrayInt64_Wrapper_Statics::NewProp_InInt64s_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_URapidJsonFunctionLibrary_SerializeTArrayInt64_Wrapper_Statics::NewProp_InInt64s_MetaData)) };
	const UECodeGen_Private::FStrPropertyParams Z_Construct_UFunction_URapidJsonFunctionLibrary_SerializeTArrayInt64_Wrapper_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(RapidJsonFunctionLibrary_eventSerializeTArrayInt64_Wrapper_Parms, ReturnValue), METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_URapidJsonFunctionLibrary_SerializeTArrayInt64_Wrapper_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_URapidJsonFunctionLibrary_SerializeTArrayInt64_Wrapper_Statics::NewProp_InInt64s_Inner,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_URapidJsonFunctionLibrary_SerializeTArrayInt64_Wrapper_Statics::NewProp_InInt64s,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_URapidJsonFunctionLibrary_SerializeTArrayInt64_Wrapper_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_URapidJsonFunctionLibrary_SerializeTArrayInt64_Wrapper_Statics::Function_MetaDataParams[] = {
		{ "Category", "RapidJson|Serialize Array" },
		{ "DisplayName", "Serialize Int64 Array" },
		{ "ModuleRelativePath", "Public/RapidJsonFunctionLibrary.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_URapidJsonFunctionLibrary_SerializeTArrayInt64_Wrapper_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_URapidJsonFunctionLibrary, nullptr, "SerializeTArrayInt64_Wrapper", nullptr, nullptr, sizeof(Z_Construct_UFunction_URapidJsonFunctionLibrary_SerializeTArrayInt64_Wrapper_Statics::RapidJsonFunctionLibrary_eventSerializeTArrayInt64_Wrapper_Parms), Z_Construct_UFunction_URapidJsonFunctionLibrary_SerializeTArrayInt64_Wrapper_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_URapidJsonFunctionLibrary_SerializeTArrayInt64_Wrapper_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04422401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_URapidJsonFunctionLibrary_SerializeTArrayInt64_Wrapper_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_URapidJsonFunctionLibrary_SerializeTArrayInt64_Wrapper_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_URapidJsonFunctionLibrary_SerializeTArrayInt64_Wrapper()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_URapidJsonFunctionLibrary_SerializeTArrayInt64_Wrapper_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_URapidJsonFunctionLibrary_SerializeTArrayInt_Wrapper_Statics
	{
		struct RapidJsonFunctionLibrary_eventSerializeTArrayInt_Wrapper_Parms
		{
			TArray<int32> InInts;
			FString ReturnValue;
		};
		static const UECodeGen_Private::FIntPropertyParams NewProp_InInts_Inner;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_InInts_MetaData[];
#endif
		static const UECodeGen_Private::FArrayPropertyParams NewProp_InInts;
		static const UECodeGen_Private::FStrPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FIntPropertyParams Z_Construct_UFunction_URapidJsonFunctionLibrary_SerializeTArrayInt_Wrapper_Statics::NewProp_InInts_Inner = { "InInts", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, 0, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_URapidJsonFunctionLibrary_SerializeTArrayInt_Wrapper_Statics::NewProp_InInts_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UECodeGen_Private::FArrayPropertyParams Z_Construct_UFunction_URapidJsonFunctionLibrary_SerializeTArrayInt_Wrapper_Statics::NewProp_InInts = { "InInts", nullptr, (EPropertyFlags)0x0010000008000182, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(RapidJsonFunctionLibrary_eventSerializeTArrayInt_Wrapper_Parms, InInts), EArrayPropertyFlags::None, METADATA_PARAMS(Z_Construct_UFunction_URapidJsonFunctionLibrary_SerializeTArrayInt_Wrapper_Statics::NewProp_InInts_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_URapidJsonFunctionLibrary_SerializeTArrayInt_Wrapper_Statics::NewProp_InInts_MetaData)) };
	const UECodeGen_Private::FStrPropertyParams Z_Construct_UFunction_URapidJsonFunctionLibrary_SerializeTArrayInt_Wrapper_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(RapidJsonFunctionLibrary_eventSerializeTArrayInt_Wrapper_Parms, ReturnValue), METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_URapidJsonFunctionLibrary_SerializeTArrayInt_Wrapper_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_URapidJsonFunctionLibrary_SerializeTArrayInt_Wrapper_Statics::NewProp_InInts_Inner,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_URapidJsonFunctionLibrary_SerializeTArrayInt_Wrapper_Statics::NewProp_InInts,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_URapidJsonFunctionLibrary_SerializeTArrayInt_Wrapper_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_URapidJsonFunctionLibrary_SerializeTArrayInt_Wrapper_Statics::Function_MetaDataParams[] = {
		{ "Category", "RapidJson|Serialize Array" },
		{ "Comment", "//------- SERIALIZE ARRAYS --------//\n" },
		{ "DisplayName", "Serialize Int Array" },
		{ "ModuleRelativePath", "Public/RapidJsonFunctionLibrary.h" },
		{ "ToolTip", "------- SERIALIZE ARRAYS --------" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_URapidJsonFunctionLibrary_SerializeTArrayInt_Wrapper_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_URapidJsonFunctionLibrary, nullptr, "SerializeTArrayInt_Wrapper", nullptr, nullptr, sizeof(Z_Construct_UFunction_URapidJsonFunctionLibrary_SerializeTArrayInt_Wrapper_Statics::RapidJsonFunctionLibrary_eventSerializeTArrayInt_Wrapper_Parms), Z_Construct_UFunction_URapidJsonFunctionLibrary_SerializeTArrayInt_Wrapper_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_URapidJsonFunctionLibrary_SerializeTArrayInt_Wrapper_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04422401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_URapidJsonFunctionLibrary_SerializeTArrayInt_Wrapper_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_URapidJsonFunctionLibrary_SerializeTArrayInt_Wrapper_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_URapidJsonFunctionLibrary_SerializeTArrayInt_Wrapper()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_URapidJsonFunctionLibrary_SerializeTArrayInt_Wrapper_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_URapidJsonFunctionLibrary_SerializeTArrayUInt8_Wrapper_Statics
	{
		struct RapidJsonFunctionLibrary_eventSerializeTArrayUInt8_Wrapper_Parms
		{
			TArray<uint8> InUInt8s;
			FString ReturnValue;
		};
		static const UECodeGen_Private::FBytePropertyParams NewProp_InUInt8s_Inner;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_InUInt8s_MetaData[];
#endif
		static const UECodeGen_Private::FArrayPropertyParams NewProp_InUInt8s;
		static const UECodeGen_Private::FStrPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FBytePropertyParams Z_Construct_UFunction_URapidJsonFunctionLibrary_SerializeTArrayUInt8_Wrapper_Statics::NewProp_InUInt8s_Inner = { "InUInt8s", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, 0, nullptr, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_URapidJsonFunctionLibrary_SerializeTArrayUInt8_Wrapper_Statics::NewProp_InUInt8s_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UECodeGen_Private::FArrayPropertyParams Z_Construct_UFunction_URapidJsonFunctionLibrary_SerializeTArrayUInt8_Wrapper_Statics::NewProp_InUInt8s = { "InUInt8s", nullptr, (EPropertyFlags)0x0010000008000182, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(RapidJsonFunctionLibrary_eventSerializeTArrayUInt8_Wrapper_Parms, InUInt8s), EArrayPropertyFlags::None, METADATA_PARAMS(Z_Construct_UFunction_URapidJsonFunctionLibrary_SerializeTArrayUInt8_Wrapper_Statics::NewProp_InUInt8s_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_URapidJsonFunctionLibrary_SerializeTArrayUInt8_Wrapper_Statics::NewProp_InUInt8s_MetaData)) };
	const UECodeGen_Private::FStrPropertyParams Z_Construct_UFunction_URapidJsonFunctionLibrary_SerializeTArrayUInt8_Wrapper_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(RapidJsonFunctionLibrary_eventSerializeTArrayUInt8_Wrapper_Parms, ReturnValue), METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_URapidJsonFunctionLibrary_SerializeTArrayUInt8_Wrapper_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_URapidJsonFunctionLibrary_SerializeTArrayUInt8_Wrapper_Statics::NewProp_InUInt8s_Inner,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_URapidJsonFunctionLibrary_SerializeTArrayUInt8_Wrapper_Statics::NewProp_InUInt8s,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_URapidJsonFunctionLibrary_SerializeTArrayUInt8_Wrapper_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_URapidJsonFunctionLibrary_SerializeTArrayUInt8_Wrapper_Statics::Function_MetaDataParams[] = {
		{ "Category", "RapidJson|Serialize Array" },
		{ "DisplayName", "Serialize Byte Array" },
		{ "ModuleRelativePath", "Public/RapidJsonFunctionLibrary.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_URapidJsonFunctionLibrary_SerializeTArrayUInt8_Wrapper_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_URapidJsonFunctionLibrary, nullptr, "SerializeTArrayUInt8_Wrapper", nullptr, nullptr, sizeof(Z_Construct_UFunction_URapidJsonFunctionLibrary_SerializeTArrayUInt8_Wrapper_Statics::RapidJsonFunctionLibrary_eventSerializeTArrayUInt8_Wrapper_Parms), Z_Construct_UFunction_URapidJsonFunctionLibrary_SerializeTArrayUInt8_Wrapper_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_URapidJsonFunctionLibrary_SerializeTArrayUInt8_Wrapper_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04422401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_URapidJsonFunctionLibrary_SerializeTArrayUInt8_Wrapper_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_URapidJsonFunctionLibrary_SerializeTArrayUInt8_Wrapper_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_URapidJsonFunctionLibrary_SerializeTArrayUInt8_Wrapper()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_URapidJsonFunctionLibrary_SerializeTArrayUInt8_Wrapper_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_URapidJsonFunctionLibrary_SerializeUInt8_Wrapper_Statics
	{
		struct RapidJsonFunctionLibrary_eventSerializeUInt8_Wrapper_Parms
		{
			uint8 UInt8Value;
			FString ReturnValue;
		};
		static const UECodeGen_Private::FBytePropertyParams NewProp_UInt8Value;
		static const UECodeGen_Private::FStrPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FBytePropertyParams Z_Construct_UFunction_URapidJsonFunctionLibrary_SerializeUInt8_Wrapper_Statics::NewProp_UInt8Value = { "UInt8Value", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(RapidJsonFunctionLibrary_eventSerializeUInt8_Wrapper_Parms, UInt8Value), nullptr, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FStrPropertyParams Z_Construct_UFunction_URapidJsonFunctionLibrary_SerializeUInt8_Wrapper_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(RapidJsonFunctionLibrary_eventSerializeUInt8_Wrapper_Parms, ReturnValue), METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_URapidJsonFunctionLibrary_SerializeUInt8_Wrapper_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_URapidJsonFunctionLibrary_SerializeUInt8_Wrapper_Statics::NewProp_UInt8Value,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_URapidJsonFunctionLibrary_SerializeUInt8_Wrapper_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_URapidJsonFunctionLibrary_SerializeUInt8_Wrapper_Statics::Function_MetaDataParams[] = {
		{ "Category", "RapidJson|Serialize" },
		{ "DisplayName", "Serialize Byte" },
		{ "ModuleRelativePath", "Public/RapidJsonFunctionLibrary.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_URapidJsonFunctionLibrary_SerializeUInt8_Wrapper_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_URapidJsonFunctionLibrary, nullptr, "SerializeUInt8_Wrapper", nullptr, nullptr, sizeof(Z_Construct_UFunction_URapidJsonFunctionLibrary_SerializeUInt8_Wrapper_Statics::RapidJsonFunctionLibrary_eventSerializeUInt8_Wrapper_Parms), Z_Construct_UFunction_URapidJsonFunctionLibrary_SerializeUInt8_Wrapper_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_URapidJsonFunctionLibrary_SerializeUInt8_Wrapper_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04022401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_URapidJsonFunctionLibrary_SerializeUInt8_Wrapper_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_URapidJsonFunctionLibrary_SerializeUInt8_Wrapper_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_URapidJsonFunctionLibrary_SerializeUInt8_Wrapper()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_URapidJsonFunctionLibrary_SerializeUInt8_Wrapper_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(URapidJsonFunctionLibrary);
	UClass* Z_Construct_UClass_URapidJsonFunctionLibrary_NoRegister()
	{
		return URapidJsonFunctionLibrary::StaticClass();
	}
	struct Z_Construct_UClass_URapidJsonFunctionLibrary_Statics
	{
		static UObject* (*const DependentSingletons[])();
		static const FClassFunctionLinkInfo FuncInfo[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_URapidJsonFunctionLibrary_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UBlueprintFunctionLibrary,
		(UObject* (*)())Z_Construct_UPackage__Script_RapidJsonModule,
	};
	const FClassFunctionLinkInfo Z_Construct_UClass_URapidJsonFunctionLibrary_Statics::FuncInfo[] = {
		{ &Z_Construct_UFunction_URapidJsonFunctionLibrary_DeserializeBool_Wrapper, "DeserializeBool_Wrapper" }, // 1779543296
		{ &Z_Construct_UFunction_URapidJsonFunctionLibrary_DeserializeFColor_Wrapper, "DeserializeFColor_Wrapper" }, // 2521312608
		{ &Z_Construct_UFunction_URapidJsonFunctionLibrary_DeserializeFloat_Wrapper, "DeserializeFloat_Wrapper" }, // 2631039307
		{ &Z_Construct_UFunction_URapidJsonFunctionLibrary_DeserializeFName_Wrapper, "DeserializeFName_Wrapper" }, // 3410808156
		{ &Z_Construct_UFunction_URapidJsonFunctionLibrary_DeserializeFRotator_Wrapper, "DeserializeFRotator_Wrapper" }, // 2965057604
		{ &Z_Construct_UFunction_URapidJsonFunctionLibrary_DeserializeFString_Wrapper, "DeserializeFString_Wrapper" }, // 1795969848
		{ &Z_Construct_UFunction_URapidJsonFunctionLibrary_DeserializeFText_Wrapper, "DeserializeFText_Wrapper" }, // 4079798710
		{ &Z_Construct_UFunction_URapidJsonFunctionLibrary_DeserializeFTransform_Wrapper, "DeserializeFTransform_Wrapper" }, // 1508011553
		{ &Z_Construct_UFunction_URapidJsonFunctionLibrary_DeserializeFVector_Wrapper, "DeserializeFVector_Wrapper" }, // 3913207198
		{ &Z_Construct_UFunction_URapidJsonFunctionLibrary_DeserializeInt64_Wrapper, "DeserializeInt64_Wrapper" }, // 3385887437
		{ &Z_Construct_UFunction_URapidJsonFunctionLibrary_DeserializeInt_Wrapper, "DeserializeInt_Wrapper" }, // 1404716802
		{ &Z_Construct_UFunction_URapidJsonFunctionLibrary_DeserializeTArrayBool_Wrapper, "DeserializeTArrayBool_Wrapper" }, // 2624740929
		{ &Z_Construct_UFunction_URapidJsonFunctionLibrary_DeserializeTArrayFColor_Wrapper, "DeserializeTArrayFColor_Wrapper" }, // 2004710334
		{ &Z_Construct_UFunction_URapidJsonFunctionLibrary_DeserializeTArrayFloat_Wrapper, "DeserializeTArrayFloat_Wrapper" }, // 1921150435
		{ &Z_Construct_UFunction_URapidJsonFunctionLibrary_DeserializeTArrayFName_Wrapper, "DeserializeTArrayFName_Wrapper" }, // 2960468552
		{ &Z_Construct_UFunction_URapidJsonFunctionLibrary_DeserializeTArrayFRotator_Wrapper, "DeserializeTArrayFRotator_Wrapper" }, // 695534242
		{ &Z_Construct_UFunction_URapidJsonFunctionLibrary_DeserializeTArrayFString_Wrapper, "DeserializeTArrayFString_Wrapper" }, // 3758877102
		{ &Z_Construct_UFunction_URapidJsonFunctionLibrary_DeserializeTArrayFText_Wrapper, "DeserializeTArrayFText_Wrapper" }, // 852145820
		{ &Z_Construct_UFunction_URapidJsonFunctionLibrary_DeserializeTArrayFTransform_Wrapper, "DeserializeTArrayFTransform_Wrapper" }, // 235139902
		{ &Z_Construct_UFunction_URapidJsonFunctionLibrary_DeserializeTArrayFVector_Wrapper, "DeserializeTArrayFVector_Wrapper" }, // 375686795
		{ &Z_Construct_UFunction_URapidJsonFunctionLibrary_DeserializeTArrayInt64_Wrapper, "DeserializeTArrayInt64_Wrapper" }, // 3182568298
		{ &Z_Construct_UFunction_URapidJsonFunctionLibrary_DeserializeTArrayInt_Wrapper, "DeserializeTArrayInt_Wrapper" }, // 4078948083
		{ &Z_Construct_UFunction_URapidJsonFunctionLibrary_DeserializeTArrayUInt8_Wrapper, "DeserializeTArrayUInt8_Wrapper" }, // 189783793
		{ &Z_Construct_UFunction_URapidJsonFunctionLibrary_DeserializeUInt8_Wrapper, "DeserializeUInt8_Wrapper" }, // 1850422878
		{ &Z_Construct_UFunction_URapidJsonFunctionLibrary_SerializeBool_Wrapper, "SerializeBool_Wrapper" }, // 190943669
		{ &Z_Construct_UFunction_URapidJsonFunctionLibrary_SerializeFColor_Wrapper, "SerializeFColor_Wrapper" }, // 3994702148
		{ &Z_Construct_UFunction_URapidJsonFunctionLibrary_SerializeFloat_Wrapper, "SerializeFloat_Wrapper" }, // 3059964200
		{ &Z_Construct_UFunction_URapidJsonFunctionLibrary_SerializeFName_Wrapper, "SerializeFName_Wrapper" }, // 3037278649
		{ &Z_Construct_UFunction_URapidJsonFunctionLibrary_SerializeFRotator_Wrapper, "SerializeFRotator_Wrapper" }, // 177653189
		{ &Z_Construct_UFunction_URapidJsonFunctionLibrary_SerializeFString_Wrapper, "SerializeFString_Wrapper" }, // 3034194103
		{ &Z_Construct_UFunction_URapidJsonFunctionLibrary_SerializeFText_Wrapper, "SerializeFText_Wrapper" }, // 3872988772
		{ &Z_Construct_UFunction_URapidJsonFunctionLibrary_SerializeFTransform_Wrapper, "SerializeFTransform_Wrapper" }, // 3162604554
		{ &Z_Construct_UFunction_URapidJsonFunctionLibrary_SerializeFVector_Wrapper, "SerializeFVector_Wrapper" }, // 1037394134
		{ &Z_Construct_UFunction_URapidJsonFunctionLibrary_SerializeInt64_Wrapper, "SerializeInt64_Wrapper" }, // 1546812937
		{ &Z_Construct_UFunction_URapidJsonFunctionLibrary_SerializeInt_Wrapper, "SerializeInt_Wrapper" }, // 95625519
		{ &Z_Construct_UFunction_URapidJsonFunctionLibrary_SerializeTArrayBool_Wrapper, "SerializeTArrayBool_Wrapper" }, // 2784619669
		{ &Z_Construct_UFunction_URapidJsonFunctionLibrary_SerializeTArrayFColor_Wrapper, "SerializeTArrayFColor_Wrapper" }, // 1631039101
		{ &Z_Construct_UFunction_URapidJsonFunctionLibrary_SerializeTArrayFloat_Wrapper, "SerializeTArrayFloat_Wrapper" }, // 294371006
		{ &Z_Construct_UFunction_URapidJsonFunctionLibrary_SerializeTArrayFName_Wrapper, "SerializeTArrayFName_Wrapper" }, // 2930134483
		{ &Z_Construct_UFunction_URapidJsonFunctionLibrary_SerializeTArrayFRotator_Wrapper, "SerializeTArrayFRotator_Wrapper" }, // 2785456293
		{ &Z_Construct_UFunction_URapidJsonFunctionLibrary_SerializeTArrayFString_Wrapper, "SerializeTArrayFString_Wrapper" }, // 2119375106
		{ &Z_Construct_UFunction_URapidJsonFunctionLibrary_SerializeTArrayFText_Wrapper, "SerializeTArrayFText_Wrapper" }, // 1497153632
		{ &Z_Construct_UFunction_URapidJsonFunctionLibrary_SerializeTArrayFTransform_Wrapper, "SerializeTArrayFTransform_Wrapper" }, // 2639872898
		{ &Z_Construct_UFunction_URapidJsonFunctionLibrary_SerializeTArrayFVector_Wrapper, "SerializeTArrayFVector_Wrapper" }, // 4004029259
		{ &Z_Construct_UFunction_URapidJsonFunctionLibrary_SerializeTArrayInt64_Wrapper, "SerializeTArrayInt64_Wrapper" }, // 387299694
		{ &Z_Construct_UFunction_URapidJsonFunctionLibrary_SerializeTArrayInt_Wrapper, "SerializeTArrayInt_Wrapper" }, // 3554693725
		{ &Z_Construct_UFunction_URapidJsonFunctionLibrary_SerializeTArrayUInt8_Wrapper, "SerializeTArrayUInt8_Wrapper" }, // 218507239
		{ &Z_Construct_UFunction_URapidJsonFunctionLibrary_SerializeUInt8_Wrapper, "SerializeUInt8_Wrapper" }, // 3806686305
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_URapidJsonFunctionLibrary_Statics::Class_MetaDataParams[] = {
		{ "IncludePath", "RapidJsonFunctionLibrary.h" },
		{ "ModuleRelativePath", "Public/RapidJsonFunctionLibrary.h" },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_URapidJsonFunctionLibrary_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<URapidJsonFunctionLibrary>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_URapidJsonFunctionLibrary_Statics::ClassParams = {
		&URapidJsonFunctionLibrary::StaticClass,
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
		METADATA_PARAMS(Z_Construct_UClass_URapidJsonFunctionLibrary_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_URapidJsonFunctionLibrary_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_URapidJsonFunctionLibrary()
	{
		if (!Z_Registration_Info_UClass_URapidJsonFunctionLibrary.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_URapidJsonFunctionLibrary.OuterSingleton, Z_Construct_UClass_URapidJsonFunctionLibrary_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_URapidJsonFunctionLibrary.OuterSingleton;
	}
	template<> RAPIDJSONMODULE_API UClass* StaticClass<URapidJsonFunctionLibrary>()
	{
		return URapidJsonFunctionLibrary::StaticClass();
	}
	DEFINE_VTABLE_PTR_HELPER_CTOR(URapidJsonFunctionLibrary);
	URapidJsonFunctionLibrary::~URapidJsonFunctionLibrary() {}
	struct Z_CompiledInDeferFile_FID_build_U5M_Marketplace_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_VertexPaintDetectionPlugin_Source_RapidJsonModule_Public_RapidJsonFunctionLibrary_h_Statics
	{
		static const FStructRegisterCompiledInInfo ScriptStructInfo[];
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FStructRegisterCompiledInInfo Z_CompiledInDeferFile_FID_build_U5M_Marketplace_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_VertexPaintDetectionPlugin_Source_RapidJsonModule_Public_RapidJsonFunctionLibrary_h_Statics::ScriptStructInfo[] = {
		{ FCustomStructSerialization::StaticStruct, Z_Construct_UScriptStruct_FCustomStructSerialization_Statics::NewStructOps, TEXT("CustomStructSerialization"), &Z_Registration_Info_UScriptStruct_CustomStructSerialization, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FCustomStructSerialization), 3860565939U) },
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_build_U5M_Marketplace_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_VertexPaintDetectionPlugin_Source_RapidJsonModule_Public_RapidJsonFunctionLibrary_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_URapidJsonFunctionLibrary, URapidJsonFunctionLibrary::StaticClass, TEXT("URapidJsonFunctionLibrary"), &Z_Registration_Info_UClass_URapidJsonFunctionLibrary, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(URapidJsonFunctionLibrary), 2753712997U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_build_U5M_Marketplace_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_VertexPaintDetectionPlugin_Source_RapidJsonModule_Public_RapidJsonFunctionLibrary_h_1944812568(TEXT("/Script/RapidJsonModule"),
		Z_CompiledInDeferFile_FID_build_U5M_Marketplace_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_VertexPaintDetectionPlugin_Source_RapidJsonModule_Public_RapidJsonFunctionLibrary_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_build_U5M_Marketplace_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_VertexPaintDetectionPlugin_Source_RapidJsonModule_Public_RapidJsonFunctionLibrary_h_Statics::ClassInfo),
		Z_CompiledInDeferFile_FID_build_U5M_Marketplace_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_VertexPaintDetectionPlugin_Source_RapidJsonModule_Public_RapidJsonFunctionLibrary_h_Statics::ScriptStructInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_build_U5M_Marketplace_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_VertexPaintDetectionPlugin_Source_RapidJsonModule_Public_RapidJsonFunctionLibrary_h_Statics::ScriptStructInfo),
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
