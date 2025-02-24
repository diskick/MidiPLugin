// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeTestPlugin_init() {}
	TESTPLUGIN_API UFunction* Z_Construct_UDelegateFunction_TestPlugin_OnNoteOffEvent__DelegateSignature();
	TESTPLUGIN_API UFunction* Z_Construct_UDelegateFunction_TestPlugin_OnNoteOnEvent__DelegateSignature();
	static FPackageRegistrationInfo Z_Registration_Info_UPackage__Script_TestPlugin;
	FORCENOINLINE UPackage* Z_Construct_UPackage__Script_TestPlugin()
	{
		if (!Z_Registration_Info_UPackage__Script_TestPlugin.OuterSingleton)
		{
			static UObject* (*const SingletonFuncArray[])() = {
				(UObject* (*)())Z_Construct_UDelegateFunction_TestPlugin_OnNoteOffEvent__DelegateSignature,
				(UObject* (*)())Z_Construct_UDelegateFunction_TestPlugin_OnNoteOnEvent__DelegateSignature,
			};
			static const UECodeGen_Private::FPackageParams PackageParams = {
				"/Script/TestPlugin",
				SingletonFuncArray,
				UE_ARRAY_COUNT(SingletonFuncArray),
				PKG_CompiledIn | 0x00000000,
				0x1FFB1BC6,
				0xD740C1CA,
				METADATA_PARAMS(0, nullptr)
			};
			UECodeGen_Private::ConstructUPackage(Z_Registration_Info_UPackage__Script_TestPlugin.OuterSingleton, PackageParams);
		}
		return Z_Registration_Info_UPackage__Script_TestPlugin.OuterSingleton;
	}
	static FRegisterCompiledInInfo Z_CompiledInDeferPackage_UPackage__Script_TestPlugin(Z_Construct_UPackage__Script_TestPlugin, TEXT("/Script/TestPlugin"), Z_Registration_Info_UPackage__Script_TestPlugin, CONSTRUCT_RELOAD_VERSION_INFO(FPackageReloadVersionInfo, 0x1FFB1BC6, 0xD740C1CA));
PRAGMA_ENABLE_DEPRECATION_WARNINGS
