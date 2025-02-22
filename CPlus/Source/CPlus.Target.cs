// Copyright Epic Games, Inc. All Rights Reserved.

using UnrealBuildTool;

public class CPlusTarget : TargetRules
{
	public CPlusTarget(TargetInfo Target) : base(Target)
	{
		Type = TargetType.Game;
		DefaultBuildSettings = BuildSettingsVersion.V5;
		IncludeOrderVersion = EngineIncludeOrderVersion.Unreal5_4;
		ExtraModuleNames.Add("CPlus");
	}
}