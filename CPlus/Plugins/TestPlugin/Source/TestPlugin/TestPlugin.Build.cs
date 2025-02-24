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
				//踩到大坑了,静态和动态库不能同时用,会导致编译错误.
				//"$(ModuleDir)/../ThirdParty/fluidsynth/lib/libfluidsynth-3.a",
				
				"$(ModuleDir)/../ThirdParty/fluidsynth/lib/libfluidsynth-3.dll.a"
			}
			);
		/*
		PublicDelayLoadDLLs.AddRange(new string[]
		{
			"$(ModuleDir)/../ThirdParty/fluidsynth/bin/libglib-2.0-0.dll",
			"$(ModuleDir)/../ThirdParty/fluidsynth/bin/libgthread-2.0-0.dll",
			"$(PluginDir)/Binaries/ThirdParty/fluidsynth/bin/libfluidsynth-3.dll",
			"$(PluginDir)/Binaries/ThirdParty/fluidsynth/bin/libgcc_s_sjlj-1.dll",
			"$(PluginDir)/Binaries/ThirdParty/fluidsynth/bin/libgobject-2.0-0.dll",
			"$(PluginDir)/Binaries/ThirdParty/fluidsynth/bin/libgomp-1.dll",
			"$(PluginDir)/Binaries/ThirdParty/fluidsynth/bin/libinstpatch-2.dll",
			"$(PluginDir)/Binaries/ThirdParty/fluidsynth/bin/libintl-8.dll",
			"$(PluginDir)/Binaries/ThirdParty/fluidsynth/bin/libstdc++-6.dll",
			"$(PluginDir)/Binaries/ThirdParty/fluidsynth/bin/lsndfile.dll",
			"$(PluginDir)/Binaries/ThirdParty/fluidsynth/bin/libwinpthread-1.dll"
			
			
			
			
			
		}
		);

		
		RuntimeDependencies.Add("(ModuleDir)/../ThirdParty/fluidsynth/bin/libglib-2.0-0.dll");
			
		RuntimeDependencies.Add("$(ModuleDir)/../ThirdParty/fluidsynth/bin/libgthread-2.0-0.dll");
		
		RuntimeDependencies.Add("$(PluginDir)/Binaries/ThirdParty/fluidsynth/bin/libfluidsynth-3.dll");
		
		RuntimeDependencies.Add("$(PluginDir)/Binaries/ThirdParty/fluidsynth/bin/libgcc_s_sjlj-1.dll");
		
		RuntimeDependencies.Add("$(PluginDir)/Binaries/ThirdParty/fluidsynth/bin/libgobject-2.0-0.dll");
		
		RuntimeDependencies.Add("$(PluginDir)/Binaries/ThirdParty/fluidsynth/bin/libgomp-1.dll");
		
		RuntimeDependencies.Add("$(PluginDir)/Binaries/ThirdParty/fluidsynth/bin/libinstpatch-2.dll");
		
		RuntimeDependencies.Add("$(PluginDir)/Binaries/ThirdParty/fluidsynth/bin/libintl-8.dll");
		
		RuntimeDependencies.Add("$(PluginDir)/Binaries/ThirdParty/fluidsynth/bin/libstdc++-6.dll");
		
		RuntimeDependencies.Add("$(PluginDir)/Binaries/ThirdParty/fluidsynth/bin/lsndfile.dll");
		
		RuntimeDependencies.Add("$(PluginDir)/Binaries/ThirdParty/fluidsynth/bin/libwinpthread-1.dll");
		
		*/
	
		
		
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