// Fill out your copyright notice in the Description page of Project Settings.

using System.IO;
using UnrealBuildTool;

public class TestPluginLibrary : ModuleRules
{
	public TestPluginLibrary(ReadOnlyTargetRules Target) : base(Target)
	{
		Type = ModuleType.External;
		PublicSystemIncludePaths.Add("$(ModuleDir)/Public");

		if (Target.Platform == UnrealTargetPlatform.Win64)
		{
			// Add the import library
			PublicAdditionalLibraries.Add(Path.Combine(ModuleDirectory, "x64", "Release", "ExampleLibrary.lib"));
			//PublicIncludePaths.Add(Path.Combine(ModuleDirectory, "../../ThirdParty/Midi_Library"));
			// Delay-load the DLL, so we can load it from the right place first
			PublicDelayLoadDLLs.Add("ExampleLibrary.dll");

			// Ensure that the DLL is staged along with the executable
			RuntimeDependencies.Add("$(PluginDir)/Binaries/ThirdParty/TestPluginLibrary/Win64/ExampleLibrary.dll");
		}
		else if (Target.Platform == UnrealTargetPlatform.Mac)
		{
			PublicDelayLoadDLLs.Add(Path.Combine(ModuleDirectory, "Mac", "Release", "libExampleLibrary.dylib"));
			RuntimeDependencies.Add(
				"$(PluginDir)/Source/ThirdParty/TestPluginLibrary/Mac/Release/libExampleLibrary.dylib");
		}
		else if (Target.Platform == UnrealTargetPlatform.Linux)
		{
			var ExampleSoPath = Path.Combine("$(PluginDir)", "Binaries", "ThirdParty", "TestPluginLibrary", "Linux",
				"x86_64-unknown-linux-gnu", "libExampleLibrary.so");
			PublicAdditionalLibraries.Add(ExampleSoPath);
			PublicDelayLoadDLLs.Add(ExampleSoPath);
			RuntimeDependencies.Add(ExampleSoPath);
		}
	}
}