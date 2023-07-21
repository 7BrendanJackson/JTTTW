// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeRapidJsonModule_init() {}
	static FPackageRegistrationInfo Z_Registration_Info_UPackage__Script_RapidJsonModule;
	FORCENOINLINE UPackage* Z_Construct_UPackage__Script_RapidJsonModule()
	{
		if (!Z_Registration_Info_UPackage__Script_RapidJsonModule.OuterSingleton)
		{
			static const UECodeGen_Private::FPackageParams PackageParams = {
				"/Script/RapidJsonModule",
				nullptr,
				0,
				PKG_CompiledIn | 0x00000000,
				0x0B10A4FF,
				0x3FBFA639,
				METADATA_PARAMS(nullptr, 0)
			};
			UECodeGen_Private::ConstructUPackage(Z_Registration_Info_UPackage__Script_RapidJsonModule.OuterSingleton, PackageParams);
		}
		return Z_Registration_Info_UPackage__Script_RapidJsonModule.OuterSingleton;
	}
	static FRegisterCompiledInInfo Z_CompiledInDeferPackage_UPackage__Script_RapidJsonModule(Z_Construct_UPackage__Script_RapidJsonModule, TEXT("/Script/RapidJsonModule"), Z_Registration_Info_UPackage__Script_RapidJsonModule, CONSTRUCT_RELOAD_VERSION_INFO(FPackageReloadVersionInfo, 0x0B10A4FF, 0x3FBFA639));
PRAGMA_ENABLE_DEPRECATION_WARNINGS
