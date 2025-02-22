// Copyright Epic Games, Inc. All Rights Reserved.

using UnrealBuildTool;

public class CPlus : ModuleRules
{
	public CPlus(ReadOnlyTargetRules Target) : base(Target)
	{
		PCHUsage = PCHUsageMode.UseExplicitOrSharedPCHs;

		PublicDependencyModuleNames.AddRange(new[] { "Core", "CoreUObject", "Engine", "InputCore", "EnhancedInput" });
	}
}