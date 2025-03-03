// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "TestPlugin/Public/MidiAsset.h"
#include "TestPlugin/Public/MidiEvent.h"
#include "TestPlugin/Public/MidiTrack.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeMidiAsset() {}

// Begin Cross Module References
COREUOBJECT_API UClass* Z_Construct_UClass_UObject();
TESTPLUGIN_API UClass* Z_Construct_UClass_UMidiAsset();
TESTPLUGIN_API UClass* Z_Construct_UClass_UMidiAsset_NoRegister();
TESTPLUGIN_API UFunction* Z_Construct_UDelegateFunction_TestPlugin_OnNoteOffEvent__DelegateSignature();
TESTPLUGIN_API UFunction* Z_Construct_UDelegateFunction_TestPlugin_OnNoteOnEvent__DelegateSignature();
TESTPLUGIN_API UScriptStruct* Z_Construct_UScriptStruct_FMidiEvent();
TESTPLUGIN_API UScriptStruct* Z_Construct_UScriptStruct_FMidiTrack();
UPackage* Z_Construct_UPackage__Script_TestPlugin();
// End Cross Module References

// Begin Delegate FOnNoteOnEvent
struct Z_Construct_UDelegateFunction_TestPlugin_OnNoteOnEvent__DelegateSignature_Statics
{
	struct _Script_TestPlugin_eventOnNoteOnEvent_Parms
	{
		FMidiEvent event;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
#if !UE_BUILD_SHIPPING
		{ "Comment", "// \xe4\xba\x8b\xe4\xbb\xb6\xe5\xa7\x94\xe6\x89\x98\xef\xbc\x9a\xe5\xbd\x93\xe9\x9f\xb3\xe7\xac\xa6\xe5\x90\xaf\xe5\x8a\xa8\xe6\x97\xb6\xe8\xa7\xa6\xe5\x8f\x91\n" },
#endif
		{ "ModuleRelativePath", "Public/MidiAsset.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "\xe4\xba\x8b\xe4\xbb\xb6\xe5\xa7\x94\xe6\x89\x98\xef\xbc\x9a\xe5\xbd\x93\xe9\x9f\xb3\xe7\xac\xa6\xe5\x90\xaf\xe5\x8a\xa8\xe6\x97\xb6\xe8\xa7\xa6\xe5\x8f\x91" },
#endif
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FStructPropertyParams NewProp_event;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FStructPropertyParams Z_Construct_UDelegateFunction_TestPlugin_OnNoteOnEvent__DelegateSignature_Statics::NewProp_event = { "event", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(_Script_TestPlugin_eventOnNoteOnEvent_Parms, event), Z_Construct_UScriptStruct_FMidiEvent, METADATA_PARAMS(0, nullptr) }; // 353094394
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UDelegateFunction_TestPlugin_OnNoteOnEvent__DelegateSignature_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UDelegateFunction_TestPlugin_OnNoteOnEvent__DelegateSignature_Statics::NewProp_event,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_TestPlugin_OnNoteOnEvent__DelegateSignature_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UDelegateFunction_TestPlugin_OnNoteOnEvent__DelegateSignature_Statics::FuncParams = { (UObject*(*)())Z_Construct_UPackage__Script_TestPlugin, nullptr, "OnNoteOnEvent__DelegateSignature", nullptr, nullptr, Z_Construct_UDelegateFunction_TestPlugin_OnNoteOnEvent__DelegateSignature_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_TestPlugin_OnNoteOnEvent__DelegateSignature_Statics::PropPointers), sizeof(Z_Construct_UDelegateFunction_TestPlugin_OnNoteOnEvent__DelegateSignature_Statics::_Script_TestPlugin_eventOnNoteOnEvent_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00130000, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_TestPlugin_OnNoteOnEvent__DelegateSignature_Statics::Function_MetaDataParams), Z_Construct_UDelegateFunction_TestPlugin_OnNoteOnEvent__DelegateSignature_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UDelegateFunction_TestPlugin_OnNoteOnEvent__DelegateSignature_Statics::_Script_TestPlugin_eventOnNoteOnEvent_Parms) < MAX_uint16);
UFunction* Z_Construct_UDelegateFunction_TestPlugin_OnNoteOnEvent__DelegateSignature()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UDelegateFunction_TestPlugin_OnNoteOnEvent__DelegateSignature_Statics::FuncParams);
	}
	return ReturnFunction;
}
void FOnNoteOnEvent_DelegateWrapper(const FMulticastScriptDelegate& OnNoteOnEvent, FMidiEvent event)
{
	struct _Script_TestPlugin_eventOnNoteOnEvent_Parms
	{
		FMidiEvent event;
	};
	_Script_TestPlugin_eventOnNoteOnEvent_Parms Parms;
	Parms.event=event;
	OnNoteOnEvent.ProcessMulticastDelegate<UObject>(&Parms);
}
// End Delegate FOnNoteOnEvent

// Begin Delegate FOnNoteOffEvent
struct Z_Construct_UDelegateFunction_TestPlugin_OnNoteOffEvent__DelegateSignature_Statics
{
	struct _Script_TestPlugin_eventOnNoteOffEvent_Parms
	{
		FMidiEvent event;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
#if !UE_BUILD_SHIPPING
		{ "Comment", "// \xe4\xba\x8b\xe4\xbb\xb6\xe5\xa7\x94\xe6\x89\x98\xef\xbc\x9a\xe5\xbd\x93\xe9\x9f\xb3\xe7\xac\xa6\xe5\x81\x9c\xe6\xad\xa2\xe6\x97\xb6\xe8\xa7\xa6\xe5\x8f\x91\n" },
#endif
		{ "ModuleRelativePath", "Public/MidiAsset.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "\xe4\xba\x8b\xe4\xbb\xb6\xe5\xa7\x94\xe6\x89\x98\xef\xbc\x9a\xe5\xbd\x93\xe9\x9f\xb3\xe7\xac\xa6\xe5\x81\x9c\xe6\xad\xa2\xe6\x97\xb6\xe8\xa7\xa6\xe5\x8f\x91" },
#endif
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FStructPropertyParams NewProp_event;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FStructPropertyParams Z_Construct_UDelegateFunction_TestPlugin_OnNoteOffEvent__DelegateSignature_Statics::NewProp_event = { "event", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(_Script_TestPlugin_eventOnNoteOffEvent_Parms, event), Z_Construct_UScriptStruct_FMidiEvent, METADATA_PARAMS(0, nullptr) }; // 353094394
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UDelegateFunction_TestPlugin_OnNoteOffEvent__DelegateSignature_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UDelegateFunction_TestPlugin_OnNoteOffEvent__DelegateSignature_Statics::NewProp_event,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_TestPlugin_OnNoteOffEvent__DelegateSignature_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UDelegateFunction_TestPlugin_OnNoteOffEvent__DelegateSignature_Statics::FuncParams = { (UObject*(*)())Z_Construct_UPackage__Script_TestPlugin, nullptr, "OnNoteOffEvent__DelegateSignature", nullptr, nullptr, Z_Construct_UDelegateFunction_TestPlugin_OnNoteOffEvent__DelegateSignature_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_TestPlugin_OnNoteOffEvent__DelegateSignature_Statics::PropPointers), sizeof(Z_Construct_UDelegateFunction_TestPlugin_OnNoteOffEvent__DelegateSignature_Statics::_Script_TestPlugin_eventOnNoteOffEvent_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00130000, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_TestPlugin_OnNoteOffEvent__DelegateSignature_Statics::Function_MetaDataParams), Z_Construct_UDelegateFunction_TestPlugin_OnNoteOffEvent__DelegateSignature_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UDelegateFunction_TestPlugin_OnNoteOffEvent__DelegateSignature_Statics::_Script_TestPlugin_eventOnNoteOffEvent_Parms) < MAX_uint16);
UFunction* Z_Construct_UDelegateFunction_TestPlugin_OnNoteOffEvent__DelegateSignature()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UDelegateFunction_TestPlugin_OnNoteOffEvent__DelegateSignature_Statics::FuncParams);
	}
	return ReturnFunction;
}
void FOnNoteOffEvent_DelegateWrapper(const FMulticastScriptDelegate& OnNoteOffEvent, FMidiEvent event)
{
	struct _Script_TestPlugin_eventOnNoteOffEvent_Parms
	{
		FMidiEvent event;
	};
	_Script_TestPlugin_eventOnNoteOffEvent_Parms Parms;
	Parms.event=event;
	OnNoteOffEvent.ProcessMulticastDelegate<UObject>(&Parms);
}
// End Delegate FOnNoteOffEvent

// Begin Class UMidiAsset Function HandleNoteOff
struct MidiAsset_eventHandleNoteOff_Parms
{
	FMidiEvent event;
};
static FName NAME_UMidiAsset_HandleNoteOff = FName(TEXT("HandleNoteOff"));
void UMidiAsset::HandleNoteOff(FMidiEvent event)
{
	MidiAsset_eventHandleNoteOff_Parms Parms;
	Parms.event=event;
	ProcessEvent(FindFunctionChecked(NAME_UMidiAsset_HandleNoteOff),&Parms);
}
struct Z_Construct_UFunction_UMidiAsset_HandleNoteOff_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "MIDI" },
		{ "ModuleRelativePath", "Public/MidiAsset.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FStructPropertyParams NewProp_event;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UMidiAsset_HandleNoteOff_Statics::NewProp_event = { "event", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(MidiAsset_eventHandleNoteOff_Parms, event), Z_Construct_UScriptStruct_FMidiEvent, METADATA_PARAMS(0, nullptr) }; // 353094394
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UMidiAsset_HandleNoteOff_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UMidiAsset_HandleNoteOff_Statics::NewProp_event,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UMidiAsset_HandleNoteOff_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UMidiAsset_HandleNoteOff_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UMidiAsset, nullptr, "HandleNoteOff", nullptr, nullptr, Z_Construct_UFunction_UMidiAsset_HandleNoteOff_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UMidiAsset_HandleNoteOff_Statics::PropPointers), sizeof(MidiAsset_eventHandleNoteOff_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x08020800, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UMidiAsset_HandleNoteOff_Statics::Function_MetaDataParams), Z_Construct_UFunction_UMidiAsset_HandleNoteOff_Statics::Function_MetaDataParams) };
static_assert(sizeof(MidiAsset_eventHandleNoteOff_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UMidiAsset_HandleNoteOff()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UMidiAsset_HandleNoteOff_Statics::FuncParams);
	}
	return ReturnFunction;
}
// End Class UMidiAsset Function HandleNoteOff

// Begin Class UMidiAsset Function HandleNoteOn
struct MidiAsset_eventHandleNoteOn_Parms
{
	FMidiEvent event;
};
static FName NAME_UMidiAsset_HandleNoteOn = FName(TEXT("HandleNoteOn"));
void UMidiAsset::HandleNoteOn(FMidiEvent event)
{
	MidiAsset_eventHandleNoteOn_Parms Parms;
	Parms.event=event;
	ProcessEvent(FindFunctionChecked(NAME_UMidiAsset_HandleNoteOn),&Parms);
}
struct Z_Construct_UFunction_UMidiAsset_HandleNoteOn_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "MIDI" },
		{ "ModuleRelativePath", "Public/MidiAsset.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FStructPropertyParams NewProp_event;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UMidiAsset_HandleNoteOn_Statics::NewProp_event = { "event", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(MidiAsset_eventHandleNoteOn_Parms, event), Z_Construct_UScriptStruct_FMidiEvent, METADATA_PARAMS(0, nullptr) }; // 353094394
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UMidiAsset_HandleNoteOn_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UMidiAsset_HandleNoteOn_Statics::NewProp_event,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UMidiAsset_HandleNoteOn_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UMidiAsset_HandleNoteOn_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UMidiAsset, nullptr, "HandleNoteOn", nullptr, nullptr, Z_Construct_UFunction_UMidiAsset_HandleNoteOn_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UMidiAsset_HandleNoteOn_Statics::PropPointers), sizeof(MidiAsset_eventHandleNoteOn_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x08020800, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UMidiAsset_HandleNoteOn_Statics::Function_MetaDataParams), Z_Construct_UFunction_UMidiAsset_HandleNoteOn_Statics::Function_MetaDataParams) };
static_assert(sizeof(MidiAsset_eventHandleNoteOn_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UMidiAsset_HandleNoteOn()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UMidiAsset_HandleNoteOn_Statics::FuncParams);
	}
	return ReturnFunction;
}
// End Class UMidiAsset Function HandleNoteOn

// Begin Class UMidiAsset Function playmidi
struct Z_Construct_UFunction_UMidiAsset_playmidi_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "MIDI" },
		{ "ModuleRelativePath", "Public/MidiAsset.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UMidiAsset_playmidi_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UMidiAsset, nullptr, "playmidi", nullptr, nullptr, nullptr, 0, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UMidiAsset_playmidi_Statics::Function_MetaDataParams), Z_Construct_UFunction_UMidiAsset_playmidi_Statics::Function_MetaDataParams) };
UFunction* Z_Construct_UFunction_UMidiAsset_playmidi()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UMidiAsset_playmidi_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UMidiAsset::execplaymidi)
{
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->playmidi();
	P_NATIVE_END;
}
// End Class UMidiAsset Function playmidi

// Begin Class UMidiAsset Function playnotes
struct Z_Construct_UFunction_UMidiAsset_playnotes_Statics
{
	struct MidiAsset_eventplaynotes_Parms
	{
		float DeltaTime;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "MIDI" },
		{ "ModuleRelativePath", "Public/MidiAsset.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FFloatPropertyParams NewProp_DeltaTime;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_UMidiAsset_playnotes_Statics::NewProp_DeltaTime = { "DeltaTime", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(MidiAsset_eventplaynotes_Parms, DeltaTime), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UMidiAsset_playnotes_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UMidiAsset_playnotes_Statics::NewProp_DeltaTime,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UMidiAsset_playnotes_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UMidiAsset_playnotes_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UMidiAsset, nullptr, "playnotes", nullptr, nullptr, Z_Construct_UFunction_UMidiAsset_playnotes_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UMidiAsset_playnotes_Statics::PropPointers), sizeof(Z_Construct_UFunction_UMidiAsset_playnotes_Statics::MidiAsset_eventplaynotes_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UMidiAsset_playnotes_Statics::Function_MetaDataParams), Z_Construct_UFunction_UMidiAsset_playnotes_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_UMidiAsset_playnotes_Statics::MidiAsset_eventplaynotes_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UMidiAsset_playnotes()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UMidiAsset_playnotes_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UMidiAsset::execplaynotes)
{
	P_GET_PROPERTY(FFloatProperty,Z_Param_DeltaTime);
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->playnotes(Z_Param_DeltaTime);
	P_NATIVE_END;
}
// End Class UMidiAsset Function playnotes

// Begin Class UMidiAsset
void UMidiAsset::StaticRegisterNativesUMidiAsset()
{
	UClass* Class = UMidiAsset::StaticClass();
	static const FNameNativePtrPair Funcs[] = {
		{ "playmidi", &UMidiAsset::execplaymidi },
		{ "playnotes", &UMidiAsset::execplaynotes },
	};
	FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
}
IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UMidiAsset);
UClass* Z_Construct_UClass_UMidiAsset_NoRegister()
{
	return UMidiAsset::StaticClass();
}
struct Z_Construct_UClass_UMidiAsset_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "IncludePath", "MidiAsset.h" },
		{ "ModuleRelativePath", "Public/MidiAsset.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_cantick_MetaData[] = {
		{ "Category", "MIDI" },
		{ "ModuleRelativePath", "Public/MidiAsset.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_FilePath_MetaData[] = {
		{ "Category", "MIDI" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "// MIDI \xe6\x96\x87\xe4\xbb\xb6\xe7\x9a\x84\xe8\xb7\xaf\xe5\xbe\x84\n" },
#endif
		{ "ModuleRelativePath", "Public/MidiAsset.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "MIDI \xe6\x96\x87\xe4\xbb\xb6\xe7\x9a\x84\xe8\xb7\xaf\xe5\xbe\x84" },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_FileName_MetaData[] = {
		{ "Category", "MIDI" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "//\xe6\x96\x87\xe4\xbb\xb6\xe5\x90\x8d\n" },
#endif
		{ "ModuleRelativePath", "Public/MidiAsset.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "\xe6\x96\x87\xe4\xbb\xb6\xe5\x90\x8d" },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Length_MetaData[] = {
		{ "Category", "MIDI" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "// MIDI \xe6\x96\x87\xe4\xbb\xb6\xe7\x9a\x84\xe6\x97\xb6\xe9\x95\xbf\n" },
#endif
		{ "ModuleRelativePath", "Public/MidiAsset.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "MIDI \xe6\x96\x87\xe4\xbb\xb6\xe7\x9a\x84\xe6\x97\xb6\xe9\x95\xbf" },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_TracksNumber_MetaData[] = {
		{ "Category", "MIDI Event" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "//\xe8\xbd\xa8\xe9\x81\x93\xe6\x95\xb0\n" },
#endif
		{ "ModuleRelativePath", "Public/MidiAsset.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "\xe8\xbd\xa8\xe9\x81\x93\xe6\x95\xb0" },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_MidiTracks_MetaData[] = {
		{ "Category", "MIDI Event" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "// MIDI \xe6\x96\x87\xe4\xbb\xb6\xe4\xb8\xad\xe7\x9a\x84\xe6\x89\x80\xe6\x9c\x89\xe8\xbd\xa8\xe9\x81\x93\n" },
#endif
		{ "ModuleRelativePath", "Public/MidiAsset.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "MIDI \xe6\x96\x87\xe4\xbb\xb6\xe4\xb8\xad\xe7\x9a\x84\xe6\x89\x80\xe6\x9c\x89\xe8\xbd\xa8\xe9\x81\x93" },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_CurrentTime_MetaData[] = {
		{ "Category", "MIDI Event" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "// MIDI \xe8\xa7\xa3\xe6\x9e\x90\xe7\x9b\xb8\xe5\x85\xb3\xe6\x95\xb0\xe6\x8d\xae\n// \xe5\xbd\x93\xe5\x89\x8d\xe6\x92\xad\xe6\x94\xbe\xe6\x97\xb6\xe9\x97\xb4\xef\xbc\x88\xe4\xbb\xa5\xe7\xa7\x92\xe4\xb8\xba\xe5\x8d\x95\xe4\xbd\x8d\xef\xbc\x89\n" },
#endif
		{ "ModuleRelativePath", "Public/MidiAsset.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "MIDI \xe8\xa7\xa3\xe6\x9e\x90\xe7\x9b\xb8\xe5\x85\xb3\xe6\x95\xb0\xe6\x8d\xae\n\xe5\xbd\x93\xe5\x89\x8d\xe6\x92\xad\xe6\x94\xbe\xe6\x97\xb6\xe9\x97\xb4\xef\xbc\x88\xe4\xbb\xa5\xe7\xa7\x92\xe4\xb8\xba\xe5\x8d\x95\xe4\xbd\x8d\xef\xbc\x89" },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_OnNoteOnEvent_MetaData[] = {
		{ "Category", "Midi Events" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "//\xe5\xa7\x94\xe6\x89\x98\n" },
#endif
		{ "ModuleRelativePath", "Public/MidiAsset.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "\xe5\xa7\x94\xe6\x89\x98" },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_OnNoteOffEvent_MetaData[] = {
		{ "Category", "Midi Events" },
		{ "ModuleRelativePath", "Public/MidiAsset.h" },
	};
#endif // WITH_METADATA
	static void NewProp_cantick_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_cantick;
	static const UECodeGen_Private::FStrPropertyParams NewProp_FilePath;
	static const UECodeGen_Private::FStrPropertyParams NewProp_FileName;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_Length;
	static const UECodeGen_Private::FIntPropertyParams NewProp_TracksNumber;
	static const UECodeGen_Private::FStructPropertyParams NewProp_MidiTracks_Inner;
	static const UECodeGen_Private::FArrayPropertyParams NewProp_MidiTracks;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_CurrentTime;
	static const UECodeGen_Private::FMulticastDelegatePropertyParams NewProp_OnNoteOnEvent;
	static const UECodeGen_Private::FMulticastDelegatePropertyParams NewProp_OnNoteOffEvent;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static UObject* (*const DependentSingletons[])();
	static constexpr FClassFunctionLinkInfo FuncInfo[] = {
		{ &Z_Construct_UFunction_UMidiAsset_HandleNoteOff, "HandleNoteOff" }, // 3793955248
		{ &Z_Construct_UFunction_UMidiAsset_HandleNoteOn, "HandleNoteOn" }, // 2965870108
		{ &Z_Construct_UFunction_UMidiAsset_playmidi, "playmidi" }, // 1160433401
		{ &Z_Construct_UFunction_UMidiAsset_playnotes, "playnotes" }, // 460066090
	};
	static_assert(UE_ARRAY_COUNT(FuncInfo) < 2048);
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UMidiAsset>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
void Z_Construct_UClass_UMidiAsset_Statics::NewProp_cantick_SetBit(void* Obj)
{
	((UMidiAsset*)Obj)->cantick = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UMidiAsset_Statics::NewProp_cantick = { "cantick", nullptr, (EPropertyFlags)0x0010000000010015, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(UMidiAsset), &Z_Construct_UClass_UMidiAsset_Statics::NewProp_cantick_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_cantick_MetaData), NewProp_cantick_MetaData) };
const UECodeGen_Private::FStrPropertyParams Z_Construct_UClass_UMidiAsset_Statics::NewProp_FilePath = { "FilePath", nullptr, (EPropertyFlags)0x0010000000020015, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UMidiAsset, FilePath), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_FilePath_MetaData), NewProp_FilePath_MetaData) };
const UECodeGen_Private::FStrPropertyParams Z_Construct_UClass_UMidiAsset_Statics::NewProp_FileName = { "FileName", nullptr, (EPropertyFlags)0x0010000000020015, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UMidiAsset, FileName), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_FileName_MetaData), NewProp_FileName_MetaData) };
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_UMidiAsset_Statics::NewProp_Length = { "Length", nullptr, (EPropertyFlags)0x0010000000020015, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UMidiAsset, Length), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Length_MetaData), NewProp_Length_MetaData) };
const UECodeGen_Private::FIntPropertyParams Z_Construct_UClass_UMidiAsset_Statics::NewProp_TracksNumber = { "TracksNumber", nullptr, (EPropertyFlags)0x0010000000020015, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UMidiAsset, TracksNumber), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_TracksNumber_MetaData), NewProp_TracksNumber_MetaData) };
const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_UMidiAsset_Statics::NewProp_MidiTracks_Inner = { "MidiTracks", nullptr, (EPropertyFlags)0x0000000000020000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, Z_Construct_UScriptStruct_FMidiTrack, METADATA_PARAMS(0, nullptr) }; // 3098868116
const UECodeGen_Private::FArrayPropertyParams Z_Construct_UClass_UMidiAsset_Statics::NewProp_MidiTracks = { "MidiTracks", nullptr, (EPropertyFlags)0x0010000000020001, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UMidiAsset, MidiTracks), EArrayPropertyFlags::None, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_MidiTracks_MetaData), NewProp_MidiTracks_MetaData) }; // 3098868116
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_UMidiAsset_Statics::NewProp_CurrentTime = { "CurrentTime", nullptr, (EPropertyFlags)0x0010000000010015, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UMidiAsset, CurrentTime), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_CurrentTime_MetaData), NewProp_CurrentTime_MetaData) };
const UECodeGen_Private::FMulticastDelegatePropertyParams Z_Construct_UClass_UMidiAsset_Statics::NewProp_OnNoteOnEvent = { "OnNoteOnEvent", nullptr, (EPropertyFlags)0x0010000010080000, UECodeGen_Private::EPropertyGenFlags::InlineMulticastDelegate, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UMidiAsset, OnNoteOnEvent), Z_Construct_UDelegateFunction_TestPlugin_OnNoteOnEvent__DelegateSignature, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_OnNoteOnEvent_MetaData), NewProp_OnNoteOnEvent_MetaData) }; // 1175653077
const UECodeGen_Private::FMulticastDelegatePropertyParams Z_Construct_UClass_UMidiAsset_Statics::NewProp_OnNoteOffEvent = { "OnNoteOffEvent", nullptr, (EPropertyFlags)0x0010000010080000, UECodeGen_Private::EPropertyGenFlags::InlineMulticastDelegate, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UMidiAsset, OnNoteOffEvent), Z_Construct_UDelegateFunction_TestPlugin_OnNoteOffEvent__DelegateSignature, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_OnNoteOffEvent_MetaData), NewProp_OnNoteOffEvent_MetaData) }; // 2204353670
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UMidiAsset_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UMidiAsset_Statics::NewProp_cantick,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UMidiAsset_Statics::NewProp_FilePath,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UMidiAsset_Statics::NewProp_FileName,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UMidiAsset_Statics::NewProp_Length,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UMidiAsset_Statics::NewProp_TracksNumber,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UMidiAsset_Statics::NewProp_MidiTracks_Inner,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UMidiAsset_Statics::NewProp_MidiTracks,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UMidiAsset_Statics::NewProp_CurrentTime,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UMidiAsset_Statics::NewProp_OnNoteOnEvent,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UMidiAsset_Statics::NewProp_OnNoteOffEvent,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UMidiAsset_Statics::PropPointers) < 2048);
UObject* (*const Z_Construct_UClass_UMidiAsset_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_UObject,
	(UObject* (*)())Z_Construct_UPackage__Script_TestPlugin,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UMidiAsset_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_UMidiAsset_Statics::ClassParams = {
	&UMidiAsset::StaticClass,
	nullptr,
	&StaticCppClassTypeInfo,
	DependentSingletons,
	FuncInfo,
	Z_Construct_UClass_UMidiAsset_Statics::PropPointers,
	nullptr,
	UE_ARRAY_COUNT(DependentSingletons),
	UE_ARRAY_COUNT(FuncInfo),
	UE_ARRAY_COUNT(Z_Construct_UClass_UMidiAsset_Statics::PropPointers),
	0,
	0x009000A0u,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UMidiAsset_Statics::Class_MetaDataParams), Z_Construct_UClass_UMidiAsset_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_UMidiAsset()
{
	if (!Z_Registration_Info_UClass_UMidiAsset.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UMidiAsset.OuterSingleton, Z_Construct_UClass_UMidiAsset_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_UMidiAsset.OuterSingleton;
}
template<> TESTPLUGIN_API UClass* StaticClass<UMidiAsset>()
{
	return UMidiAsset::StaticClass();
}
DEFINE_VTABLE_PTR_HELPER_CTOR(UMidiAsset);
UMidiAsset::~UMidiAsset() {}
// End Class UMidiAsset

// Begin Registration
struct Z_CompiledInDeferFile_FID_CPlus_Plugins_TestPlugin_Source_TestPlugin_Public_MidiAsset_h_Statics
{
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_UMidiAsset, UMidiAsset::StaticClass, TEXT("UMidiAsset"), &Z_Registration_Info_UClass_UMidiAsset, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UMidiAsset), 1517573608U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_CPlus_Plugins_TestPlugin_Source_TestPlugin_Public_MidiAsset_h_3930319453(TEXT("/Script/TestPlugin"),
	Z_CompiledInDeferFile_FID_CPlus_Plugins_TestPlugin_Source_TestPlugin_Public_MidiAsset_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_CPlus_Plugins_TestPlugin_Source_TestPlugin_Public_MidiAsset_h_Statics::ClassInfo),
	nullptr, 0,
	nullptr, 0);
// End Registration
PRAGMA_ENABLE_DEPRECATION_WARNINGS
