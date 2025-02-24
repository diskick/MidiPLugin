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
	
	
}

void FTestPluginModule::ShutdownModule()
{

}

#undef LOCTEXT_NAMESPACE
	
IMPLEMENT_MODULE(FTestPluginModule, TestPlugin)
