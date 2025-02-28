// Copyright Epic Games, Inc. All Rights Reserved.

#include "TestPlugin.h"
#include "Misc/MessageDialog.h"
#include "Modules/ModuleManager.h"
#include "Interfaces/IPluginManager.h"
#include "Misc/Paths.h"
#include "HAL/PlatformProcess.h"
#include "IAssetTools.h"
#include "AssetToolsModule.h"
#include "FAssetTypeActions_MidiAsset.h"
#include "MidiFile.h"
#include "timidity.h"


#define LOCTEXT_NAMESPACE "FTestPluginModule"

void FTestPluginModule::StartupModule()
{
	// 获取 AssetTools 模块
	IAssetTools& AssetTools = FModuleManager::LoadModuleChecked<FAssetToolsModule>("AssetTools").Get();

	// 注册资产类型
	AssetTools.RegisterAdvancedAssetCategory(FName("Midi"), FText::FromString("Midi"));
	// 注册工厂
	TSharedPtr<IAssetTypeActions> MIDIAssetAction = MakeShareable(new FAssetTypeActions_MidiAsset());
	AssetTools.RegisterAssetTypeActions(MIDIAssetAction.ToSharedRef());
	
	
	FString BaseDir = IPluginManager::Get().FindPlugin("TestPlugin")->GetBaseDir();







	/*const char *config=NULL ;

	
	if (mid_init(config)==0)
	{
		FMessageDialog::Open(EAppMsgType::Ok, LOCTEXT("Log","TiMidiTY Loaded"));
	}

	MidIStream *stream;
	MidSongOptions *options;
	options->rate = 44100;
	options->format = 16;
	options->channels = 2;
	options->buffer_size = 44100;
	options->_pad=0;
	options->_reserved=0;
	const char *file_path = "D:/Administrator/Download/yuanshen.mid";
	
	mid_istream_open_file(file_path);
	
	MidSong *song = mid_song_load(stream, options);
	
	mid_song_start(song);
	
	FMessageDialog::Open(EAppMsgType::Ok, LOCTEXT("Log","{0}"));
	*/
}

void FTestPluginModule::ShutdownModule()
{

}

#undef LOCTEXT_NAMESPACE
	
IMPLEMENT_MODULE(FTestPluginModule, TestPlugin)
