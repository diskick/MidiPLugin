// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "CPlus/CPlusGameMode.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeCPlusGameMode() {}

// Begin Cross Module References
CPLUS_API UClass* Z_Construct_UClass_ACPlusGameMode();
CPLUS_API UClass* Z_Construct_UClass_ACPlusGameMode_NoRegister();
ENGINE_API UClass* Z_Construct_UClass_AGameModeBase();
UPackage* Z_Construct_UPackage__Script_CPlus();
// End Cross Module References

// Begin Class ACPlusGameMode
void ACPlusGameMode::StaticRegisterNativesACPlusGameMode()
{
}
IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(ACPlusGameMode);
UClass* Z_Construct_UClass_ACPlusGameMode_NoRegister()
{
	return ACPlusGameMode::StaticClass();
}
struct Z_Construct_UClass_ACPlusGameMode_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
		{ "HideCategories", "Info Rendering MovementReplication Replication Actor Input Movement Collision Rendering HLOD WorldPartition DataLayers Transformation" },
		{ "IncludePath", "CPlusGameMode.h" },
		{ "ModuleRelativePath", "CPlusGameMode.h" },
		{ "ShowCategories", "Input|MouseInput Input|TouchInput" },
	};
#endif // WITH_METADATA
	static UObject* (*const DependentSingletons[])();
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<ACPlusGameMode>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
UObject* (*const Z_Construct_UClass_ACPlusGameMode_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_AGameModeBase,
	(UObject* (*)())Z_Construct_UPackage__Script_CPlus,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_ACPlusGameMode_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_ACPlusGameMode_Statics::ClassParams = {
	&ACPlusGameMode::StaticClass,
	"Game",
	&StaticCppClassTypeInfo,
	DependentSingletons,
	nullptr,
	nullptr,
	nullptr,
	UE_ARRAY_COUNT(DependentSingletons),
	0,
	0,
	0,
	0x008802ACu,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_ACPlusGameMode_Statics::Class_MetaDataParams), Z_Construct_UClass_ACPlusGameMode_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_ACPlusGameMode()
{
	if (!Z_Registration_Info_UClass_ACPlusGameMode.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_ACPlusGameMode.OuterSingleton, Z_Construct_UClass_ACPlusGameMode_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_ACPlusGameMode.OuterSingleton;
}
template<> CPLUS_API UClass* StaticClass<ACPlusGameMode>()
{
	return ACPlusGameMode::StaticClass();
}
DEFINE_VTABLE_PTR_HELPER_CTOR(ACPlusGameMode);
ACPlusGameMode::~ACPlusGameMode() {}
// End Class ACPlusGameMode

// Begin Registration
struct Z_CompiledInDeferFile_FID_CPlus_Source_CPlus_CPlusGameMode_h_Statics
{
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_ACPlusGameMode, ACPlusGameMode::StaticClass, TEXT("ACPlusGameMode"), &Z_Registration_Info_UClass_ACPlusGameMode, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(ACPlusGameMode), 4093415867U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_CPlus_Source_CPlus_CPlusGameMode_h_3195724126(TEXT("/Script/CPlus"),
	Z_CompiledInDeferFile_FID_CPlus_Source_CPlus_CPlusGameMode_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_CPlus_Source_CPlus_CPlusGameMode_h_Statics::ClassInfo),
	nullptr, 0,
	nullptr, 0);
// End Registration
PRAGMA_ENABLE_DEPRECATION_WARNINGS
