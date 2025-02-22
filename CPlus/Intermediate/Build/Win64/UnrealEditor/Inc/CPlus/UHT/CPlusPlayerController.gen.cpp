// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "CPlus/CPlusPlayerController.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeCPlusPlayerController() {}

// Begin Cross Module References
CPLUS_API UClass* Z_Construct_UClass_ACPlusPlayerController();
CPLUS_API UClass* Z_Construct_UClass_ACPlusPlayerController_NoRegister();
ENGINE_API UClass* Z_Construct_UClass_APlayerController();
ENHANCEDINPUT_API UClass* Z_Construct_UClass_UInputMappingContext_NoRegister();
UPackage* Z_Construct_UPackage__Script_CPlus();
// End Cross Module References

// Begin Class ACPlusPlayerController
void ACPlusPlayerController::StaticRegisterNativesACPlusPlayerController()
{
}
IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(ACPlusPlayerController);
UClass* Z_Construct_UClass_ACPlusPlayerController_NoRegister()
{
	return ACPlusPlayerController::StaticClass();
}
struct Z_Construct_UClass_ACPlusPlayerController_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
#if !UE_BUILD_SHIPPING
		{ "Comment", "/**\n *\n */" },
#endif
		{ "HideCategories", "Collision Rendering Transformation" },
		{ "IncludePath", "CPlusPlayerController.h" },
		{ "ModuleRelativePath", "CPlusPlayerController.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_InputMappingContext_MetaData[] = {
		{ "Category", "Input" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/** Input Mapping Context to be used for player input */" },
#endif
		{ "ModuleRelativePath", "CPlusPlayerController.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Input Mapping Context to be used for player input" },
#endif
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FObjectPropertyParams NewProp_InputMappingContext;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static UObject* (*const DependentSingletons[])();
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<ACPlusPlayerController>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_ACPlusPlayerController_Statics::NewProp_InputMappingContext = { "InputMappingContext", nullptr, (EPropertyFlags)0x0020080000000015, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ACPlusPlayerController, InputMappingContext), Z_Construct_UClass_UInputMappingContext_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_InputMappingContext_MetaData), NewProp_InputMappingContext_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_ACPlusPlayerController_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ACPlusPlayerController_Statics::NewProp_InputMappingContext,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_ACPlusPlayerController_Statics::PropPointers) < 2048);
UObject* (*const Z_Construct_UClass_ACPlusPlayerController_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_APlayerController,
	(UObject* (*)())Z_Construct_UPackage__Script_CPlus,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_ACPlusPlayerController_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_ACPlusPlayerController_Statics::ClassParams = {
	&ACPlusPlayerController::StaticClass,
	"Game",
	&StaticCppClassTypeInfo,
	DependentSingletons,
	nullptr,
	Z_Construct_UClass_ACPlusPlayerController_Statics::PropPointers,
	nullptr,
	UE_ARRAY_COUNT(DependentSingletons),
	0,
	UE_ARRAY_COUNT(Z_Construct_UClass_ACPlusPlayerController_Statics::PropPointers),
	0,
	0x009002A4u,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_ACPlusPlayerController_Statics::Class_MetaDataParams), Z_Construct_UClass_ACPlusPlayerController_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_ACPlusPlayerController()
{
	if (!Z_Registration_Info_UClass_ACPlusPlayerController.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_ACPlusPlayerController.OuterSingleton, Z_Construct_UClass_ACPlusPlayerController_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_ACPlusPlayerController.OuterSingleton;
}
template<> CPLUS_API UClass* StaticClass<ACPlusPlayerController>()
{
	return ACPlusPlayerController::StaticClass();
}
ACPlusPlayerController::ACPlusPlayerController(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {}
DEFINE_VTABLE_PTR_HELPER_CTOR(ACPlusPlayerController);
ACPlusPlayerController::~ACPlusPlayerController() {}
// End Class ACPlusPlayerController

// Begin Registration
struct Z_CompiledInDeferFile_FID_CPlus_Source_CPlus_CPlusPlayerController_h_Statics
{
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_ACPlusPlayerController, ACPlusPlayerController::StaticClass, TEXT("ACPlusPlayerController"), &Z_Registration_Info_UClass_ACPlusPlayerController, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(ACPlusPlayerController), 1103822940U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_CPlus_Source_CPlus_CPlusPlayerController_h_3711948916(TEXT("/Script/CPlus"),
	Z_CompiledInDeferFile_FID_CPlus_Source_CPlus_CPlusPlayerController_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_CPlus_Source_CPlus_CPlusPlayerController_h_Statics::ClassInfo),
	nullptr, 0,
	nullptr, 0);
// End Registration
PRAGMA_ENABLE_DEPRECATION_WARNINGS
