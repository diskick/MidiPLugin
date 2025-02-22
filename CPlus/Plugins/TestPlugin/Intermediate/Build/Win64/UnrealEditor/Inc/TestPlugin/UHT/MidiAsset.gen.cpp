// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "TestPlugin/Public/MidiAsset.h"
#include "TestPlugin/Public/MidiTrack.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeMidiAsset() {}

// Begin Cross Module References
COREUOBJECT_API UClass* Z_Construct_UClass_UObject();
TESTPLUGIN_API UClass* Z_Construct_UClass_UMidiAsset();
TESTPLUGIN_API UClass* Z_Construct_UClass_UMidiAsset_NoRegister();
TESTPLUGIN_API UScriptStruct* Z_Construct_UScriptStruct_FMidiTrack();
UPackage* Z_Construct_UPackage__Script_TestPlugin();
// End Cross Module References

// Begin Class UMidiAsset
void UMidiAsset::StaticRegisterNativesUMidiAsset()
{
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
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_MidiPath_MetaData[] = {
		{ "Category", "MIDI" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "// MIDI \xe6\x96\x87\xe4\xbb\xb6\xe7\x9a\x84\xe8\xb7\xaf\xe5\xbe\x84\n" },
#endif
		{ "ModuleRelativePath", "Public/MidiAsset.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "MIDI \xe6\x96\x87\xe4\xbb\xb6\xe7\x9a\x84\xe8\xb7\xaf\xe5\xbe\x84" },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Duration_MetaData[] = {
		{ "Category", "MIDI" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "// MIDI \xe6\x96\x87\xe4\xbb\xb6\xe7\x9a\x84\xe6\x97\xb6\xe9\x95\xbf\n" },
#endif
		{ "ModuleRelativePath", "Public/MidiAsset.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "MIDI \xe6\x96\x87\xe4\xbb\xb6\xe7\x9a\x84\xe6\x97\xb6\xe9\x95\xbf" },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_MidiTracks_MetaData[] = {
		{ "Category", "MIDI Event" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "// MIDI \xe6\x96\x87\xe4\xbb\xb6\xe4\xb8\xad\xe7\x9a\x84\xe6\x89\x80\xe6\x9c\x89\xe4\xba\x8b\xe4\xbb\xb6\xef\xbc\x88\xe9\x9f\xb3\xe7\xac\xa6\xe3\x80\x81\xe6\x8e\xa7\xe5\x88\xb6\xe5\x8f\x98\xe5\x8c\x96\xe7\xad\x89\xef\xbc\x89\n" },
#endif
		{ "ModuleRelativePath", "Public/MidiAsset.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "MIDI \xe6\x96\x87\xe4\xbb\xb6\xe4\xb8\xad\xe7\x9a\x84\xe6\x89\x80\xe6\x9c\x89\xe4\xba\x8b\xe4\xbb\xb6\xef\xbc\x88\xe9\x9f\xb3\xe7\xac\xa6\xe3\x80\x81\xe6\x8e\xa7\xe5\x88\xb6\xe5\x8f\x98\xe5\x8c\x96\xe7\xad\x89\xef\xbc\x89" },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_StartTime_MetaData[] = {
		{ "Category", "MIDI Event" },
		{ "ModuleRelativePath", "Public/MidiAsset.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Velocity_MetaData[] = {
		{ "Category", "MIDI" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "// \xe5\xbc\x80\xe5\xa7\x8b\xe6\x97\xb6\xe9\x97\xb4\xef\xbc\x88\xe7\xa7\x92\xef\xbc\x89\n" },
#endif
		{ "ModuleRelativePath", "Public/MidiAsset.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "\xe5\xbc\x80\xe5\xa7\x8b\xe6\x97\xb6\xe9\x97\xb4\xef\xbc\x88\xe7\xa7\x92\xef\xbc\x89" },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_TracksNumber_MetaData[] = {
		{ "Category", "MIDI Event" },
		{ "ModuleRelativePath", "Public/MidiAsset.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FStrPropertyParams NewProp_MidiPath;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_Duration;
	static const UECodeGen_Private::FStructPropertyParams NewProp_MidiTracks_Inner;
	static const UECodeGen_Private::FArrayPropertyParams NewProp_MidiTracks;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_StartTime;
	static const UECodeGen_Private::FIntPropertyParams NewProp_Velocity;
	static const UECodeGen_Private::FIntPropertyParams NewProp_TracksNumber;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static UObject* (*const DependentSingletons[])();
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UMidiAsset>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
const UECodeGen_Private::FStrPropertyParams Z_Construct_UClass_UMidiAsset_Statics::NewProp_MidiPath = { "MidiPath", nullptr, (EPropertyFlags)0x0010000000000014, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UMidiAsset, MidiPath), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_MidiPath_MetaData), NewProp_MidiPath_MetaData) };
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_UMidiAsset_Statics::NewProp_Duration = { "Duration", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UMidiAsset, Duration), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Duration_MetaData), NewProp_Duration_MetaData) };
const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_UMidiAsset_Statics::NewProp_MidiTracks_Inner = { "MidiTracks", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, Z_Construct_UScriptStruct_FMidiTrack, METADATA_PARAMS(0, nullptr) }; // 1485738358
const UECodeGen_Private::FArrayPropertyParams Z_Construct_UClass_UMidiAsset_Statics::NewProp_MidiTracks = { "MidiTracks", nullptr, (EPropertyFlags)0x0010000000000015, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UMidiAsset, MidiTracks), EArrayPropertyFlags::None, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_MidiTracks_MetaData), NewProp_MidiTracks_MetaData) }; // 1485738358
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_UMidiAsset_Statics::NewProp_StartTime = { "StartTime", nullptr, (EPropertyFlags)0x0010000000000014, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UMidiAsset, StartTime), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_StartTime_MetaData), NewProp_StartTime_MetaData) };
const UECodeGen_Private::FIntPropertyParams Z_Construct_UClass_UMidiAsset_Statics::NewProp_Velocity = { "Velocity", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UMidiAsset, Velocity), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Velocity_MetaData), NewProp_Velocity_MetaData) };
const UECodeGen_Private::FIntPropertyParams Z_Construct_UClass_UMidiAsset_Statics::NewProp_TracksNumber = { "TracksNumber", nullptr, (EPropertyFlags)0x0010000000000015, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UMidiAsset, TracksNumber), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_TracksNumber_MetaData), NewProp_TracksNumber_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UMidiAsset_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UMidiAsset_Statics::NewProp_MidiPath,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UMidiAsset_Statics::NewProp_Duration,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UMidiAsset_Statics::NewProp_MidiTracks_Inner,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UMidiAsset_Statics::NewProp_MidiTracks,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UMidiAsset_Statics::NewProp_StartTime,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UMidiAsset_Statics::NewProp_Velocity,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UMidiAsset_Statics::NewProp_TracksNumber,
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
	nullptr,
	Z_Construct_UClass_UMidiAsset_Statics::PropPointers,
	nullptr,
	UE_ARRAY_COUNT(DependentSingletons),
	0,
	UE_ARRAY_COUNT(Z_Construct_UClass_UMidiAsset_Statics::PropPointers),
	0,
	0x001000A0u,
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
		{ Z_Construct_UClass_UMidiAsset, UMidiAsset::StaticClass, TEXT("UMidiAsset"), &Z_Registration_Info_UClass_UMidiAsset, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UMidiAsset), 125662102U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_CPlus_Plugins_TestPlugin_Source_TestPlugin_Public_MidiAsset_h_1418046854(TEXT("/Script/TestPlugin"),
	Z_CompiledInDeferFile_FID_CPlus_Plugins_TestPlugin_Source_TestPlugin_Public_MidiAsset_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_CPlus_Plugins_TestPlugin_Source_TestPlugin_Public_MidiAsset_h_Statics::ClassInfo),
	nullptr, 0,
	nullptr, 0);
// End Registration
PRAGMA_ENABLE_DEPRECATION_WARNINGS
