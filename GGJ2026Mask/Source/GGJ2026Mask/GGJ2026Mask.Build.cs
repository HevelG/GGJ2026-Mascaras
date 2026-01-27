// Copyright Epic Games, Inc. All Rights Reserved.

using UnrealBuildTool;

public class GGJ2026Mask : ModuleRules
{
	public GGJ2026Mask(ReadOnlyTargetRules Target) : base(Target)
	{
		PCHUsage = PCHUsageMode.UseExplicitOrSharedPCHs;

        PublicDependencyModuleNames.AddRange(new string[] { "Core", "CoreUObject", "Engine", "InputCore", "HeadMountedDisplay", "NavigationSystem", "AIModule", "Niagara", "EnhancedInput" });
    }
}
