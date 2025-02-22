// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "MIdiFactory.h"
#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
#ifdef TESTPLUGIN_MIdiFactory_generated_h
#error "MIdiFactory.generated.h already included, missing '#pragma once' in MIdiFactory.h"
#endif
#define TESTPLUGIN_MIdiFactory_generated_h

#define FID_CPlus_Plugins_TestPlugin_Source_TestPlugin_Public_MIdiFactory_h_14_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUMidiFactory(); \
	friend struct Z_Construct_UClass_UMidiFactory_Statics; \
public: \
	DECLARE_CLASS(UMidiFactory, UFactory, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/TestPlugin"), NO_API) \
	DECLARE_SERIALIZER(UMidiFactory)


#define FID_CPlus_Plugins_TestPlugin_Source_TestPlugin_Public_MIdiFactory_h_14_ENHANCED_CONSTRUCTORS \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	UMidiFactory(UMidiFactory&&); \
	UMidiFactory(const UMidiFactory&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UMidiFactory); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UMidiFactory); \
	DEFINE_DEFAULT_CONSTRUCTOR_CALL(UMidiFactory) \
	NO_API virtual ~UMidiFactory();


#define FID_CPlus_Plugins_TestPlugin_Source_TestPlugin_Public_MIdiFactory_h_11_PROLOG
#define FID_CPlus_Plugins_TestPlugin_Source_TestPlugin_Public_MIdiFactory_h_14_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_CPlus_Plugins_TestPlugin_Source_TestPlugin_Public_MIdiFactory_h_14_INCLASS_NO_PURE_DECLS \
	FID_CPlus_Plugins_TestPlugin_Source_TestPlugin_Public_MIdiFactory_h_14_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> TESTPLUGIN_API UClass* StaticClass<class UMidiFactory>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_CPlus_Plugins_TestPlugin_Source_TestPlugin_Public_MIdiFactory_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
