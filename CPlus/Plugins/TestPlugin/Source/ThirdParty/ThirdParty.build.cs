// Fill out your copyright notice in the Description page of Project Settings.

using System.IO;
using UnrealBuildTool;

public class ThirdParty : ModuleRules
{
	public ThirdParty(ReadOnlyTargetRules Target) : base(Target)
	{

		PCHUsage = PCHUsageMode.UseExplicitOrSharedPCHs;
		Type = ModuleType.External;
		//PublicSystemIncludePaths.Add("$(ModuleDir)/Midi_Library/include");
		
		if (Target.Platform == UnrealTargetPlatform.Win64)
		{
			// 设置 midifile 库的路径
			//string midiFilePath = Path.Combine(ModuleDirectory, "Midi_Library","bin","Midi_Library.dll");
			//PublicAdditionalLibraries.Add(Path.Combine(ModuleDirectory, "Midi_Library","bin", "Midi.lib"));
		
			//PublicDelayLoadDLLs.Add("MidLib.dll");

			// Ensure that the DLL is staged along with the executable
			//RuntimeDependencies.Add("$(PluginDir)/Binaries/ThirdParty/Midi_Library/bin/MidLib.dll");
			
			
		}
		
	}
}