// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "BP_TestBPLibrary.h"
#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
#ifdef BP_TEST_BP_TestBPLibrary_generated_h
#error "BP_TestBPLibrary.generated.h already included, missing '#pragma once' in BP_TestBPLibrary.h"
#endif
#define BP_TEST_BP_TestBPLibrary_generated_h

#define FID_CPlus_Plugins_BP_Test_Source_BP_Test_Public_BP_TestBPLibrary_h_28_RPC_WRAPPERS \
	DECLARE_FUNCTION(execBP_TestSampleFunction);


#define FID_CPlus_Plugins_BP_Test_Source_BP_Test_Public_BP_TestBPLibrary_h_28_INCLASS \
private: \
	static void StaticRegisterNativesUBP_TestBPLibrary(); \
	friend struct Z_Construct_UClass_UBP_TestBPLibrary_Statics; \
public: \
	DECLARE_CLASS(UBP_TestBPLibrary, UBlueprintFunctionLibrary, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/BP_Test"), NO_API) \
	DECLARE_SERIALIZER(UBP_TestBPLibrary)


#define FID_CPlus_Plugins_BP_Test_Source_BP_Test_Public_BP_TestBPLibrary_h_28_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UBP_TestBPLibrary(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UBP_TestBPLibrary) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UBP_TestBPLibrary); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UBP_TestBPLibrary); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	UBP_TestBPLibrary(UBP_TestBPLibrary&&); \
	UBP_TestBPLibrary(const UBP_TestBPLibrary&); \
public: \
	NO_API virtual ~UBP_TestBPLibrary();


#define FID_CPlus_Plugins_BP_Test_Source_BP_Test_Public_BP_TestBPLibrary_h_25_PROLOG
#define FID_CPlus_Plugins_BP_Test_Source_BP_Test_Public_BP_TestBPLibrary_h_28_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_CPlus_Plugins_BP_Test_Source_BP_Test_Public_BP_TestBPLibrary_h_28_RPC_WRAPPERS \
	FID_CPlus_Plugins_BP_Test_Source_BP_Test_Public_BP_TestBPLibrary_h_28_INCLASS \
	FID_CPlus_Plugins_BP_Test_Source_BP_Test_Public_BP_TestBPLibrary_h_28_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> BP_TEST_API UClass* StaticClass<class UBP_TestBPLibrary>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_CPlus_Plugins_BP_Test_Source_BP_Test_Public_BP_TestBPLibrary_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
