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

	//添加Dll文件
	/*
	FString LibraryPath;
	LibraryPath = FPaths::Combine(*BaseDir, TEXT("Binaries/ThirdParty/CompareTestLibrary/Win64//MidiLib.lib"));
	
	ExampleLibraryHandle = !LibraryPath.IsEmpty() ? FPlatformProcess::GetDllHandle(*LibraryPath) : nullptr;
	

	
	if (ExampleLibraryHandle)
	{
		// Call the test function in the third party library that opens a message box
	//	FMessageDialog::Open(EAppMsgType::Ok, LOCTEXT("ThirdPartyLibraryError", "Success"));
		
	}
	else
	{
		FMessageDialog::Open(EAppMsgType::Ok, LOCTEXT("ThirdPartyLibraryError", "Failed to load example MidiLibrary"));
	}

*/
	
}

void FTestPluginModule::ShutdownModule()
{
	// This function may be called during shutdown to clean up your module.  For modules that support dynamic reloading,
	// we call this function before unloading the module.

	// Free the dll handle
	FPlatformProcess::FreeDllHandle(ExampleLibraryHandle);
	ExampleLibraryHandle = nullptr;
}

#undef LOCTEXT_NAMESPACE
	
IMPLEMENT_MODULE(FTestPluginModule, CompareTest)
