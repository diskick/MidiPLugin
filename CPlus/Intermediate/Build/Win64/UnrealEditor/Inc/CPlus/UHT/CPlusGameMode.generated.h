// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "CPlusGameMode.h"
#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
#ifdef CPLUS_CPlusGameMode_generated_h
#error "CPlusGameMode.generated.h already included, missing '#pragma once' in CPlusGameMode.h"
#endif
#define CPLUS_CPlusGameMode_generated_h

#define FID_CPlus_Source_CPlus_CPlusGameMode_h_12_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesACPlusGameMode(); \
	friend struct Z_Construct_UClass_ACPlusGameMode_Statics; \
public: \
	DECLARE_CLASS(ACPlusGameMode, AGameModeBase, COMPILED_IN_FLAGS(0 | CLASS_Transient | CLASS_Config), CASTCLASS_None, TEXT("/Script/CPlus"), CPLUS_API) \
	DECLARE_SERIALIZER(ACPlusGameMode)


#define FID_CPlus_Source_CPlus_CPlusGameMode_h_12_ENHANCED_CONSTRUCTORS \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	ACPlusGameMode(ACPlusGameMode&&); \
	ACPlusGameMode(const ACPlusGameMode&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(CPLUS_API, ACPlusGameMode); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(ACPlusGameMode); \
	DEFINE_DEFAULT_CONSTRUCTOR_CALL(ACPlusGameMode) \
	CPLUS_API virtual ~ACPlusGameMode();


#define FID_CPlus_Source_CPlus_CPlusGameMode_h_9_PROLOG
#define FID_CPlus_Source_CPlus_CPlusGameMode_h_12_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_CPlus_Source_CPlus_CPlusGameMode_h_12_INCLASS_NO_PURE_DECLS \
	FID_CPlus_Source_CPlus_CPlusGameMode_h_12_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> CPLUS_API UClass* StaticClass<class ACPlusGameMode>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_CPlus_Source_CPlus_CPlusGameMode_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
