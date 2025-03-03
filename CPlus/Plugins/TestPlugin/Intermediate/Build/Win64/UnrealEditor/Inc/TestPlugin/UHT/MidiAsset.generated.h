// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "MidiAsset.h"
#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
struct FMidiEvent;
#ifdef TESTPLUGIN_MidiAsset_generated_h
#error "MidiAsset.generated.h already included, missing '#pragma once' in MidiAsset.h"
#endif
#define TESTPLUGIN_MidiAsset_generated_h

#define FID_CPlus_Plugins_TestPlugin_Source_TestPlugin_Public_MidiAsset_h_12_DELEGATE \
TESTPLUGIN_API void FOnNoteOnEvent_DelegateWrapper(const FMulticastScriptDelegate& OnNoteOnEvent, FMidiEvent event);


#define FID_CPlus_Plugins_TestPlugin_Source_TestPlugin_Public_MidiAsset_h_15_DELEGATE \
TESTPLUGIN_API void FOnNoteOffEvent_DelegateWrapper(const FMulticastScriptDelegate& OnNoteOffEvent, FMidiEvent event);


#define FID_CPlus_Plugins_TestPlugin_Source_TestPlugin_Public_MidiAsset_h_21_RPC_WRAPPERS_NO_PURE_DECLS \
	DECLARE_FUNCTION(execplaymidi); \
	DECLARE_FUNCTION(execplaynotes);


#define FID_CPlus_Plugins_TestPlugin_Source_TestPlugin_Public_MidiAsset_h_21_CALLBACK_WRAPPERS
#define FID_CPlus_Plugins_TestPlugin_Source_TestPlugin_Public_MidiAsset_h_21_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUMidiAsset(); \
	friend struct Z_Construct_UClass_UMidiAsset_Statics; \
public: \
	DECLARE_CLASS(UMidiAsset, UObject, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/TestPlugin"), NO_API) \
	DECLARE_SERIALIZER(UMidiAsset)


#define FID_CPlus_Plugins_TestPlugin_Source_TestPlugin_Public_MidiAsset_h_21_ENHANCED_CONSTRUCTORS \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	UMidiAsset(UMidiAsset&&); \
	UMidiAsset(const UMidiAsset&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UMidiAsset); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UMidiAsset); \
	DEFINE_DEFAULT_CONSTRUCTOR_CALL(UMidiAsset) \
	NO_API virtual ~UMidiAsset();


#define FID_CPlus_Plugins_TestPlugin_Source_TestPlugin_Public_MidiAsset_h_18_PROLOG
#define FID_CPlus_Plugins_TestPlugin_Source_TestPlugin_Public_MidiAsset_h_21_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_CPlus_Plugins_TestPlugin_Source_TestPlugin_Public_MidiAsset_h_21_RPC_WRAPPERS_NO_PURE_DECLS \
	FID_CPlus_Plugins_TestPlugin_Source_TestPlugin_Public_MidiAsset_h_21_CALLBACK_WRAPPERS \
	FID_CPlus_Plugins_TestPlugin_Source_TestPlugin_Public_MidiAsset_h_21_INCLASS_NO_PURE_DECLS \
	FID_CPlus_Plugins_TestPlugin_Source_TestPlugin_Public_MidiAsset_h_21_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> TESTPLUGIN_API UClass* StaticClass<class UMidiAsset>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_CPlus_Plugins_TestPlugin_Source_TestPlugin_Public_MidiAsset_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
