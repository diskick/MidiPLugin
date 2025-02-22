// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "TestPlugin/Public/MIdiFactory.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeMIdiFactory() {}

// Begin Cross Module References
TESTPLUGIN_API UClass* Z_Construct_UClass_UMidiFactory();
TESTPLUGIN_API UClass* Z_Construct_UClass_UMidiFactory_NoRegister();
UNREALED_API UClass* Z_Construct_UClass_UFactory();
UPackage* Z_Construct_UPackage__Script_TestPlugin();
// End Cross Module References

// Begin Class UMidiFactory
void UMidiFactory::StaticRegisterNativesUMidiFactory()
{
}
IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UMidiFactory);
UClass* Z_Construct_UClass_UMidiFactory_NoRegister()
{
	return UMidiFactory::StaticClass();
}
struct Z_Construct_UClass_UMidiFactory_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
		{ "IncludePath", "MIdiFactory.h" },
		{ "ModuleRelativePath", "Public/MIdiFactory.h" },
	};
#endif // WITH_METADATA
	static UObject* (*const DependentSingletons[])();
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UMidiFactory>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
UObject* (*const Z_Construct_UClass_UMidiFactory_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_UFactory,
	(UObject* (*)())Z_Construct_UPackage__Script_TestPlugin,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UMidiFactory_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_UMidiFactory_Statics::ClassParams = {
	&UMidiFactory::StaticClass,
	nullptr,
	&StaticCppClassTypeInfo,
	DependentSingletons,
	nullptr,
	nullptr,
	nullptr,
	UE_ARRAY_COUNT(DependentSingletons),
	0,
	0,
	0,
	0x001000A0u,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UMidiFactory_Statics::Class_MetaDataParams), Z_Construct_UClass_UMidiFactory_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_UMidiFactory()
{
	if (!Z_Registration_Info_UClass_UMidiFactory.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UMidiFactory.OuterSingleton, Z_Construct_UClass_UMidiFactory_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_UMidiFactory.OuterSingleton;
}
template<> TESTPLUGIN_API UClass* StaticClass<UMidiFactory>()
{
	return UMidiFactory::StaticClass();
}
DEFINE_VTABLE_PTR_HELPER_CTOR(UMidiFactory);
UMidiFactory::~UMidiFactory() {}
// End Class UMidiFactory

// Begin Registration
struct Z_CompiledInDeferFile_FID_CPlus_Plugins_TestPlugin_Source_TestPlugin_Public_MIdiFactory_h_Statics
{
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_UMidiFactory, UMidiFactory::StaticClass, TEXT("UMidiFactory"), &Z_Registration_Info_UClass_UMidiFactory, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UMidiFactory), 102712591U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_CPlus_Plugins_TestPlugin_Source_TestPlugin_Public_MIdiFactory_h_2299405468(TEXT("/Script/TestPlugin"),
	Z_CompiledInDeferFile_FID_CPlus_Plugins_TestPlugin_Source_TestPlugin_Public_MIdiFactory_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_CPlus_Plugins_TestPlugin_Source_TestPlugin_Public_MIdiFactory_h_Statics::ClassInfo),
	nullptr, 0,
	nullptr, 0);
// End Registration
PRAGMA_ENABLE_DEPRECATION_WARNINGS
