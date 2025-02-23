// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "TestPlugin/Public/MidiTrack.h"
#include "TestPlugin/Public/MidiEvent.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeMidiTrack() {}

// Begin Cross Module References
TESTPLUGIN_API UScriptStruct* Z_Construct_UScriptStruct_FMidiEvent();
TESTPLUGIN_API UScriptStruct* Z_Construct_UScriptStruct_FMidiTrack();
UPackage* Z_Construct_UPackage__Script_TestPlugin();
// End Cross Module References

// Begin ScriptStruct FMidiTrack
static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_MidiTrack;
class UScriptStruct* FMidiTrack::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_MidiTrack.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_MidiTrack.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FMidiTrack, (UObject*)Z_Construct_UPackage__Script_TestPlugin(), TEXT("MidiTrack"));
	}
	return Z_Registration_Info_UScriptStruct_MidiTrack.OuterSingleton;
}
template<> TESTPLUGIN_API UScriptStruct* StaticStruct<FMidiTrack>()
{
	return FMidiTrack::StaticStruct();
}
struct Z_Construct_UScriptStruct_FMidiTrack_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[] = {
		{ "BlueprintType", "true" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "// \xe4\xbb\xa3\xe8\xa1\xa8 MIDI \xe4\xba\x8b\xe4\xbb\xb6\xe7\x9a\x84\xe7\xbb\x93\xe6\x9e\x84\xe4\xbd\x93\n" },
#endif
		{ "ModuleRelativePath", "Public/MidiTrack.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "\xe4\xbb\xa3\xe8\xa1\xa8 MIDI \xe4\xba\x8b\xe4\xbb\xb6\xe7\x9a\x84\xe7\xbb\x93\xe6\x9e\x84\xe4\xbd\x93" },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_TrackName_MetaData[] = {
		{ "Category", "MIDI Track" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "// MIDI \xe8\xbd\xa8\xe9\x81\x93\xe5\x90\x8d\xe7\xa7\xb0\xe6\x88\x96\xe6\xa0\x87\xe8\xaf\x86\xe7\xac\xa6\n" },
#endif
		{ "ModuleRelativePath", "Public/MidiTrack.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "MIDI \xe8\xbd\xa8\xe9\x81\x93\xe5\x90\x8d\xe7\xa7\xb0\xe6\x88\x96\xe6\xa0\x87\xe8\xaf\x86\xe7\xac\xa6" },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_TrackEvents_MetaData[] = {
		{ "Category", "MIDI Track" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "// MIDI \xe8\xbd\xa8\xe9\x81\x93\xe4\xb8\x8a\xe7\x9a\x84\xe6\x89\x80\xe6\x9c\x89\xe4\xba\x8b\xe4\xbb\xb6\n" },
#endif
		{ "ModuleRelativePath", "Public/MidiTrack.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "MIDI \xe8\xbd\xa8\xe9\x81\x93\xe4\xb8\x8a\xe7\x9a\x84\xe6\x89\x80\xe6\x9c\x89\xe4\xba\x8b\xe4\xbb\xb6" },
#endif
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FStrPropertyParams NewProp_TrackName;
	static const UECodeGen_Private::FStructPropertyParams NewProp_TrackEvents_Inner;
	static const UECodeGen_Private::FArrayPropertyParams NewProp_TrackEvents;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static void* NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FMidiTrack>();
	}
	static const UECodeGen_Private::FStructParams StructParams;
};
const UECodeGen_Private::FStrPropertyParams Z_Construct_UScriptStruct_FMidiTrack_Statics::NewProp_TrackName = { "TrackName", nullptr, (EPropertyFlags)0x0010000000010015, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FMidiTrack, TrackName), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_TrackName_MetaData), NewProp_TrackName_MetaData) };
const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FMidiTrack_Statics::NewProp_TrackEvents_Inner = { "TrackEvents", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, Z_Construct_UScriptStruct_FMidiEvent, METADATA_PARAMS(0, nullptr) }; // 3300194697
const UECodeGen_Private::FArrayPropertyParams Z_Construct_UScriptStruct_FMidiTrack_Statics::NewProp_TrackEvents = { "TrackEvents", nullptr, (EPropertyFlags)0x0010000000010015, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FMidiTrack, TrackEvents), EArrayPropertyFlags::None, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_TrackEvents_MetaData), NewProp_TrackEvents_MetaData) }; // 3300194697
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FMidiTrack_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FMidiTrack_Statics::NewProp_TrackName,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FMidiTrack_Statics::NewProp_TrackEvents_Inner,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FMidiTrack_Statics::NewProp_TrackEvents,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FMidiTrack_Statics::PropPointers) < 2048);
const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FMidiTrack_Statics::StructParams = {
	(UObject* (*)())Z_Construct_UPackage__Script_TestPlugin,
	nullptr,
	&NewStructOps,
	"MidiTrack",
	Z_Construct_UScriptStruct_FMidiTrack_Statics::PropPointers,
	UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FMidiTrack_Statics::PropPointers),
	sizeof(FMidiTrack),
	alignof(FMidiTrack),
	RF_Public|RF_Transient|RF_MarkAsNative,
	EStructFlags(0x00000001),
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FMidiTrack_Statics::Struct_MetaDataParams), Z_Construct_UScriptStruct_FMidiTrack_Statics::Struct_MetaDataParams)
};
UScriptStruct* Z_Construct_UScriptStruct_FMidiTrack()
{
	if (!Z_Registration_Info_UScriptStruct_MidiTrack.InnerSingleton)
	{
		UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_MidiTrack.InnerSingleton, Z_Construct_UScriptStruct_FMidiTrack_Statics::StructParams);
	}
	return Z_Registration_Info_UScriptStruct_MidiTrack.InnerSingleton;
}
// End ScriptStruct FMidiTrack

// Begin Registration
struct Z_CompiledInDeferFile_FID_CPlus_Plugins_TestPlugin_Source_TestPlugin_Public_MidiTrack_h_Statics
{
	static constexpr FStructRegisterCompiledInInfo ScriptStructInfo[] = {
		{ FMidiTrack::StaticStruct, Z_Construct_UScriptStruct_FMidiTrack_Statics::NewStructOps, TEXT("MidiTrack"), &Z_Registration_Info_UScriptStruct_MidiTrack, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FMidiTrack), 3270729581U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_CPlus_Plugins_TestPlugin_Source_TestPlugin_Public_MidiTrack_h_197912791(TEXT("/Script/TestPlugin"),
	nullptr, 0,
	Z_CompiledInDeferFile_FID_CPlus_Plugins_TestPlugin_Source_TestPlugin_Public_MidiTrack_h_Statics::ScriptStructInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_CPlus_Plugins_TestPlugin_Source_TestPlugin_Public_MidiTrack_h_Statics::ScriptStructInfo),
	nullptr, 0);
// End Registration
PRAGMA_ENABLE_DEPRECATION_WARNINGS
