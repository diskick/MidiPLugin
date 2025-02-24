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
			}
		);

		PrivateIncludePaths.AddRange(
			new string[]
			{
				// ... add other private include paths required here ...
			}
		);
	
		PublicSystemIncludePaths.AddRange(
			new string[]{
				
			"$(ModuleDir)/../ThirdParty/Midi_Library/include",
			"$(ModuleDir)/../ThirdParty/fluidsynth/include"
		}
		);
		PublicAdditionalLibraries.AddRange(
			
			new string[]
			{
				"$(ModuleDir)/../ThirdParty/Midi_Library/bin/Midi.lib",
				
				"$(ModuleDir)/../ThirdParty/fluidsynth/lib/libfluidsynth-3.a"
			}
			);
		
		PublicDelayLoadDLLs.AddRange(new string[]
		{
			"MidLib.dll"
		}
		);

		
		RuntimeDependencies.Add("$(PluginDir)/Binaries/ThirdParty/Midi_Library/bin/MidLib.dll");
		
		
		
		
		
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