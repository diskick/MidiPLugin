// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "CPlusPlayerController.h"
#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
#ifdef CPLUS_CPlusPlayerController_generated_h
#error "CPlusPlayerController.generated.h already included, missing '#pragma once' in CPlusPlayerController.h"
#endif
#define CPLUS_CPlusPlayerController_generated_h

#define FID_CPlus_Source_CPlus_CPlusPlayerController_h_17_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesACPlusPlayerController(); \
	friend struct Z_Construct_UClass_ACPlusPlayerController_Statics; \
public: \
	DECLARE_CLASS(ACPlusPlayerController, APlayerController, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/CPlus"), NO_API) \
	DECLARE_SERIALIZER(ACPlusPlayerController)


#define FID_CPlus_Source_CPlus_CPlusPlayerController_h_17_ENHANCED_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API ACPlusPlayerController(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	ACPlusPlayerController(ACPlusPlayerController&&); \
	ACPlusPlayerController(const ACPlusPlayerController&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, ACPlusPlayerController); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(ACPlusPlayerController); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(ACPlusPlayerController) \
	NO_API virtual ~ACPlusPlayerController();


#define FID_CPlus_Source_CPlus_CPlusPlayerController_h_14_PROLOG
#define FID_CPlus_Source_CPlus_CPlusPlayerController_h_17_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_CPlus_Source_CPlus_CPlusPlayerController_h_17_INCLASS_NO_PURE_DECLS \
	FID_CPlus_Source_CPlus_CPlusPlayerController_h_17_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> CPLUS_API UClass* StaticClass<class ACPlusPlayerController>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_CPlus_Source_CPlus_CPlusPlayerController_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
