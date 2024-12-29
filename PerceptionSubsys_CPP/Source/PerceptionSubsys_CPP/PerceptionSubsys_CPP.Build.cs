// Copyright Epic Games, Inc. All Rights Reserved.

using UnrealBuildTool;

public class PerceptionSubsys_CPP : ModuleRules
{
	public PerceptionSubsys_CPP(ReadOnlyTargetRules Target) : base(Target)
	{
		PCHUsage = PCHUsageMode.UseExplicitOrSharedPCHs;

		PublicDependencyModuleNames.AddRange(new string[] { "Core", "CoreUObject", "Engine", "InputCore", "EnhancedInput" });
	}
}
