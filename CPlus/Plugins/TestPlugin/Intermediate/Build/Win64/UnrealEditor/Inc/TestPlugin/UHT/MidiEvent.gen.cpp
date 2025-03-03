// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "TestPlugin/Public/MidiEvent.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeMidiEvent() {}

// Begin Cross Module References
TESTPLUGIN_API UScriptStruct* Z_Construct_UScriptStruct_FMidiEvent();
UPackage* Z_Construct_UPackage__Script_TestPlugin();
// End Cross Module References

// Begin ScriptStruct FMidiEvent
static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_MidiEvent;
class UScriptStruct* FMidiEvent::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_MidiEvent.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_MidiEvent.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FMidiEvent, (UObject*)Z_Construct_UPackage__Script_TestPlugin(), TEXT("MidiEvent"));
	}
	return Z_Registration_Info_UScriptStruct_MidiEvent.OuterSingleton;
}
template<> TESTPLUGIN_API UScriptStruct* StaticStruct<FMidiEvent>()
{
	return FMidiEvent::StaticStruct();
}
struct Z_Construct_UScriptStruct_FMidiEvent_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[] = {
		{ "BlueprintType", "true" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "// \xe4\xbb\xa3\xe8\xa1\xa8 MIDI \xe4\xba\x8b\xe4\xbb\xb6\xe7\x9a\x84\xe7\xbb\x93\xe6\x9e\x84\xe4\xbd\x93\n" },
#endif
		{ "ModuleRelativePath", "Public/MidiEvent.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "\xe4\xbb\xa3\xe8\xa1\xa8 MIDI \xe4\xba\x8b\xe4\xbb\xb6\xe7\x9a\x84\xe7\xbb\x93\xe6\x9e\x84\xe4\xbd\x93" },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Time_MetaData[] = {
		{ "Category", "MIDI" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "// MIDI \xe6\x97\xb6\xe9\x97\xb4\xe6\x88\xb3\xef\xbc\x88\xe5\x8d\x95\xe4\xbd\x8d\xef\xbc\x9a\xe7\xa7\x92\xef\xbc\x89\n" },
#endif
		{ "ModuleRelativePath", "Public/MidiEvent.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "MIDI \xe6\x97\xb6\xe9\x97\xb4\xe6\x88\xb3\xef\xbc\x88\xe5\x8d\x95\xe4\xbd\x8d\xef\xbc\x9a\xe7\xa7\x92\xef\xbc\x89" },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Duration_MetaData[] = {
		{ "Category", "MIDI" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "// MIDI \xe6\x8c\x81\xe7\xbb\xad\xe6\x97\xb6\xe9\x97\xb4\xef\xbc\x88\xe5\x8d\x95\xe4\xbd\x8d\xef\xbc\x9a\xe7\xa7\x92\xef\xbc\x89\n" },
#endif
		{ "ModuleRelativePath", "Public/MidiEvent.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "MIDI \xe6\x8c\x81\xe7\xbb\xad\xe6\x97\xb6\xe9\x97\xb4\xef\xbc\x88\xe5\x8d\x95\xe4\xbd\x8d\xef\xbc\x9a\xe7\xa7\x92\xef\xbc\x89" },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Note_MetaData[] = {
		{ "Category", "MIDI" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "// MIDI \xe9\x9f\xb3\xe7\xac\xa6\xef\xbc\x8c""0-127\xe7\x9a\x84\xe5\x80\xbc\n" },
#endif
		{ "ModuleRelativePath", "Public/MidiEvent.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "MIDI \xe9\x9f\xb3\xe7\xac\xa6\xef\xbc\x8c""0-127\xe7\x9a\x84\xe5\x80\xbc" },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Velocity_MetaData[] = {
		{ "Category", "MIDI Event" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "// \xe9\x9f\xb3\xe7\xac\xa6\xe7\x9a\x84\xe5\x8a\x9b\xe5\xba\xa6\xef\xbc\x88""0-127\xe7\x9a\x84\xe5\x80\xbc\xef\xbc\x89\n" },
#endif
		{ "ModuleRelativePath", "Public/MidiEvent.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "\xe9\x9f\xb3\xe7\xac\xa6\xe7\x9a\x84\xe5\x8a\x9b\xe5\xba\xa6\xef\xbc\x88""0-127\xe7\x9a\x84\xe5\x80\xbc\xef\xbc\x89" },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_isNoteon_MetaData[] = {
		{ "Category", "MIDI" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "// \xe4\xba\x8b\xe4\xbb\xb6\xe7\xb1\xbb\xe5\x9e\x8b \xe7\xa7\x81\xe6\x9c\x89.\n" },
#endif
		{ "ModuleRelativePath", "Public/MidiEvent.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "\xe4\xba\x8b\xe4\xbb\xb6\xe7\xb1\xbb\xe5\x9e\x8b \xe7\xa7\x81\xe6\x9c\x89." },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_isNoteoff_MetaData[] = {
		{ "Category", "MIDI" },
		{ "ModuleRelativePath", "Public/MidiEvent.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_bPlayed_MetaData[] = {
		{ "Category", "MIDI Event" },
		{ "ModuleRelativePath", "Public/MidiEvent.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_InTrack_MetaData[] = {
		{ "Category", "MIDI" },
		{ "ModuleRelativePath", "Public/MidiEvent.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FFloatPropertyParams NewProp_Time;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_Duration;
	static const UECodeGen_Private::FIntPropertyParams NewProp_Note;
	static const UECodeGen_Private::FIntPropertyParams NewProp_Velocity;
	static void NewProp_isNoteon_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_isNoteon;
	static void NewProp_isNoteoff_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_isNoteoff;
	static void NewProp_bPlayed_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_bPlayed;
	static const UECodeGen_Private::FIntPropertyParams NewProp_InTrack;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static void* NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FMidiEvent>();
	}
	static const UECodeGen_Private::FStructParams StructParams;
};
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FMidiEvent_Statics::NewProp_Time = { "Time", nullptr, (EPropertyFlags)0x0010000000020015, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FMidiEvent, Time), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Time_MetaData), NewProp_Time_MetaData) };
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FMidiEvent_Statics::NewProp_Duration = { "Duration", nullptr, (EPropertyFlags)0x0010000000020015, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FMidiEvent, Duration), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Duration_MetaData), NewProp_Duration_MetaData) };
const UECodeGen_Private::FIntPropertyParams Z_Construct_UScriptStruct_FMidiEvent_Statics::NewProp_Note = { "Note", nullptr, (EPropertyFlags)0x0010000000020015, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FMidiEvent, Note), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Note_MetaData), NewProp_Note_MetaData) };
const UECodeGen_Private::FIntPropertyParams Z_Construct_UScriptStruct_FMidiEvent_Statics::NewProp_Velocity = { "Velocity", nullptr, (EPropertyFlags)0x0010000000010015, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FMidiEvent, Velocity), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Velocity_MetaData), NewProp_Velocity_MetaData) };
void Z_Construct_UScriptStruct_FMidiEvent_Statics::NewProp_isNoteon_SetBit(void* Obj)
{
	((FMidiEvent*)Obj)->isNoteon = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UScriptStruct_FMidiEvent_Statics::NewProp_isNoteon = { "isNoteon", nullptr, (EPropertyFlags)0x0010000000020001, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(FMidiEvent), &Z_Construct_UScriptStruct_FMidiEvent_Statics::NewProp_isNoteon_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_isNoteon_MetaData), NewProp_isNoteon_MetaData) };
void Z_Construct_UScriptStruct_FMidiEvent_Statics::NewProp_isNoteoff_SetBit(void* Obj)
{
	((FMidiEvent*)Obj)->isNoteoff = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UScriptStruct_FMidiEvent_Statics::NewProp_isNoteoff = { "isNoteoff", nullptr, (EPropertyFlags)0x0010000000020001, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(FMidiEvent), &Z_Construct_UScriptStruct_FMidiEvent_Statics::NewProp_isNoteoff_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_isNoteoff_MetaData), NewProp_isNoteoff_MetaData) };
void Z_Construct_UScriptStruct_FMidiEvent_Statics::NewProp_bPlayed_SetBit(void* Obj)
{
	((FMidiEvent*)Obj)->bPlayed = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UScriptStruct_FMidiEvent_Statics::NewProp_bPlayed = { "bPlayed", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(FMidiEvent), &Z_Construct_UScriptStruct_FMidiEvent_Statics::NewProp_bPlayed_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_bPlayed_MetaData), NewProp_bPlayed_MetaData) };
const UECodeGen_Private::FIntPropertyParams Z_Construct_UScriptStruct_FMidiEvent_Statics::NewProp_InTrack = { "InTrack", nullptr, (EPropertyFlags)0x0010000000020015, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FMidiEvent, InTrack), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_InTrack_MetaData), NewProp_InTrack_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FMidiEvent_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FMidiEvent_Statics::NewProp_Time,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FMidiEvent_Statics::NewProp_Duration,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FMidiEvent_Statics::NewProp_Note,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FMidiEvent_Statics::NewProp_Velocity,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FMidiEvent_Statics::NewProp_isNoteon,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FMidiEvent_Statics::NewProp_isNoteoff,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FMidiEvent_Statics::NewProp_bPlayed,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FMidiEvent_Statics::NewProp_InTrack,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FMidiEvent_Statics::PropPointers) < 2048);
const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FMidiEvent_Statics::StructParams = {
	(UObject* (*)())Z_Construct_UPackage__Script_TestPlugin,
	nullptr,
	&NewStructOps,
	"MidiEvent",
	Z_Construct_UScriptStruct_FMidiEvent_Statics::PropPointers,
	UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FMidiEvent_Statics::PropPointers),
	sizeof(FMidiEvent),
	alignof(FMidiEvent),
	RF_Public|RF_Transient|RF_MarkAsNative,
	EStructFlags(0x00000001),
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FMidiEvent_Statics::Struct_MetaDataParams), Z_Construct_UScriptStruct_FMidiEvent_Statics::Struct_MetaDataParams)
};
UScriptStruct* Z_Construct_UScriptStruct_FMidiEvent()
{
	if (!Z_Registration_Info_UScriptStruct_MidiEvent.InnerSingleton)
	{
		UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_MidiEvent.InnerSingleton, Z_Construct_UScriptStruct_FMidiEvent_Statics::StructParams);
	}
	return Z_Registration_Info_UScriptStruct_MidiEvent.InnerSingleton;
}
// End ScriptStruct FMidiEvent

// Begin Registration
struct Z_CompiledInDeferFile_FID_CPlus_Plugins_TestPlugin_Source_TestPlugin_Public_MidiEvent_h_Statics
{
	static constexpr FStructRegisterCompiledInInfo ScriptStructInfo[] = {
		{ FMidiEvent::StaticStruct, Z_Construct_UScriptStruct_FMidiEvent_Statics::NewStructOps, TEXT("MidiEvent"), &Z_Registration_Info_UScriptStruct_MidiEvent, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FMidiEvent), 353094394U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_CPlus_Plugins_TestPlugin_Source_TestPlugin_Public_MidiEvent_h_4236235261(TEXT("/Script/TestPlugin"),
	nullptr, 0,
	Z_CompiledInDeferFile_FID_CPlus_Plugins_TestPlugin_Source_TestPlugin_Public_MidiEvent_h_Statics::ScriptStructInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_CPlus_Plugins_TestPlugin_Source_TestPlugin_Public_MidiEvent_h_Statics::ScriptStructInfo),
	nullptr, 0);
// End Registration
PRAGMA_ENABLE_DEPRECATION_WARNINGS
