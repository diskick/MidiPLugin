// Copyright Epic Games, Inc. All Rights Reserved.

using UnrealBuildTool;
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
			new[]{
				
			"$(ModuleDir)/../ThirdParty/Midi_Library/include",
			"$(ModuleDir)/../ThirdParty/Timidity/include"
			
		}
		);
		PublicAdditionalLibraries.AddRange(
			
			new[]
			{
				"$(ModuleDir)/../ThirdParty/Midi_Library/bin/Midi.lib",
				"$(ModuleDir)/../ThirdParty/Timidity/StaticLibDebug.lib",
				//"$(ModuleDir)/../ThirdParty/Timidity/StaticLibRelease.lib"
				
				//大坑一个,磨了三天,宏定有了导出宏,删掉居然就好了.
				//"$(ModuleDir)/../ThirdParty/fluidsynth/lib/libfluidsynth-3.dll.a"
				//浪费我的时间精力,.a文件是给liunx用的,没有Cmake暂时不知道如何构建DLL文件,而且DLL问题还蛮多的
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