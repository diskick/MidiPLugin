// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeBP_Test_init() {}
	static FPackageRegistrationInfo Z_Registration_Info_UPackage__Script_BP_Test;
	FORCENOINLINE UPackage* Z_Construct_UPackage__Script_BP_Test()
	{
		if (!Z_Registration_Info_UPackage__Script_BP_Test.OuterSingleton)
		{
			static const UECodeGen_Private::FPackageParams PackageParams = {
				"/Script/BP_Test",
				nullptr,
				0,
				PKG_CompiledIn | 0x00000000,
				0xE53C8521,
				0x3C0A4F7D,
				METADATA_PARAMS(0, nullptr)
			};
			UECodeGen_Private::ConstructUPackage(Z_Registration_Info_UPackage__Script_BP_Test.OuterSingleton, PackageParams);
		}
		return Z_Registration_Info_UPackage__Script_BP_Test.OuterSingleton;
	}
	static FRegisterCompiledInInfo Z_CompiledInDeferPackage_UPackage__Script_BP_Test(Z_Construct_UPackage__Script_BP_Test, TEXT("/Script/BP_Test"), Z_Registration_Info_UPackage__Script_BP_Test, CONSTRUCT_RELOAD_VERSION_INFO(FPackageReloadVersionInfo, 0xE53C8521, 0x3C0A4F7D));
PRAGMA_ENABLE_DEPRECATION_WARNINGS
