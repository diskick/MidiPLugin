// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "CPlusCharacter.h"
#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
#ifdef CPLUS_CPlusCharacter_generated_h
#error "CPlusCharacter.generated.h already included, missing '#pragma once' in CPlusCharacter.h"
#endif
#define CPLUS_CPlusCharacter_generated_h

#define FID_CPlus_Source_CPlus_CPlusCharacter_h_22_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesACPlusCharacter(); \
	friend struct Z_Construct_UClass_ACPlusCharacter_Statics; \
public: \
	DECLARE_CLASS(ACPlusCharacter, ACharacter, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/CPlus"), NO_API) \
	DECLARE_SERIALIZER(ACPlusCharacter)


#define FID_CPlus_Source_CPlus_CPlusCharacter_h_22_ENHANCED_CONSTRUCTORS \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	ACPlusCharacter(ACPlusCharacter&&); \
	ACPlusCharacter(const ACPlusCharacter&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, ACPlusCharacter); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(ACPlusCharacter); \
	DEFINE_DEFAULT_CONSTRUCTOR_CALL(ACPlusCharacter) \
	NO_API virtual ~ACPlusCharacter();


#define FID_CPlus_Source_CPlus_CPlusCharacter_h_19_PROLOG
#define FID_CPlus_Source_CPlus_CPlusCharacter_h_22_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_CPlus_Source_CPlus_CPlusCharacter_h_22_INCLASS_NO_PURE_DECLS \
	FID_CPlus_Source_CPlus_CPlusCharacter_h_22_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> CPLUS_API UClass* StaticClass<class ACPlusCharacter>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_CPlus_Source_CPlus_CPlusCharacter_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
