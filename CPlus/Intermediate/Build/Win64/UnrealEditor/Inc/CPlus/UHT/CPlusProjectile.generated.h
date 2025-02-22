// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "CPlusProjectile.h"
#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
class AActor;
class UPrimitiveComponent;
struct FHitResult;
#ifdef CPLUS_CPlusProjectile_generated_h
#error "CPlusProjectile.generated.h already included, missing '#pragma once' in CPlusProjectile.h"
#endif
#define CPLUS_CPlusProjectile_generated_h

#define FID_CPlus_Source_CPlus_CPlusProjectile_h_15_RPC_WRAPPERS_NO_PURE_DECLS \
	DECLARE_FUNCTION(execOnHit);


#define FID_CPlus_Source_CPlus_CPlusProjectile_h_15_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesACPlusProjectile(); \
	friend struct Z_Construct_UClass_ACPlusProjectile_Statics; \
public: \
	DECLARE_CLASS(ACPlusProjectile, AActor, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/CPlus"), NO_API) \
	DECLARE_SERIALIZER(ACPlusProjectile) \
	static const TCHAR* StaticConfigName() {return TEXT("Game");} \



#define FID_CPlus_Source_CPlus_CPlusProjectile_h_15_ENHANCED_CONSTRUCTORS \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	ACPlusProjectile(ACPlusProjectile&&); \
	ACPlusProjectile(const ACPlusProjectile&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, ACPlusProjectile); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(ACPlusProjectile); \
	DEFINE_DEFAULT_CONSTRUCTOR_CALL(ACPlusProjectile) \
	NO_API virtual ~ACPlusProjectile();


#define FID_CPlus_Source_CPlus_CPlusProjectile_h_12_PROLOG
#define FID_CPlus_Source_CPlus_CPlusProjectile_h_15_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_CPlus_Source_CPlus_CPlusProjectile_h_15_RPC_WRAPPERS_NO_PURE_DECLS \
	FID_CPlus_Source_CPlus_CPlusProjectile_h_15_INCLASS_NO_PURE_DECLS \
	FID_CPlus_Source_CPlus_CPlusProjectile_h_15_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> CPLUS_API UClass* StaticClass<class ACPlusProjectile>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_CPlus_Source_CPlus_CPlusProjectile_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
