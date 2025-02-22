// Copyright Epic Games, Inc. All Rights Reserved.

using UnrealBuildTool;
using System.IO;
public class TestPlugin : ModuleRules
{
	public TestPlugin(ReadOnlyTargetRules Target) : base(Target)
	{
		PCHUsage = PCHUsageMode.UseExplicitOrSharedPCHs;

		PublicIncludePaths.AddRange(
			new string[]
			{
				// ... add public include paths required here ...

				"D:/UEProject/CPlus/Plugins/TestPlugin/Source/ThirdParty/Midi_Library"

			}
		);

		PrivateIncludePaths.AddRange(
			new string[]
			{
				// ... add other private include paths required here ...
			}
		);
	

		PublicDependencyModuleNames.AddRange(
			new[]
			{
				"Core",
				"Projects",
				"AssetTools",
				"CoreUObject",
				"Engine",
				"Slate", // 确保添加了 Slate 模块
				"SlateCore",
				"Midi_Library" ,
				"AudioMixer"
				// ... add other public dependencies that you statically link with here ...
			}
		);


		PrivateDependencyModuleNames.AddRange(
			new[]
			{
				// ... add private dependencies that you statically link with here ...	
				"EditorFramework", // 确保包含了编辑器框架
				"AssetTools", // 引入AssetTools模块
				"UnrealEd" // 引入UnrealEd模块
			}
		);


		DynamicallyLoadedModuleNames.AddRange(
			new string[]
			{
				// ... add any modules that your module loads dynamically here ...
			}
			
		);
	}
}