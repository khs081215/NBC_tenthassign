// Copyright Epic Games, Inc. All Rights Reserved.

using UnrealBuildTool;

public class ModuleAndPlugin : ModuleRules
{
	public ModuleAndPlugin(ReadOnlyTargetRules Target) : base(Target)
	{
		PrivateDependencyModuleNames.AddRange(new string[] { "MyNBCLog" });
		PCHUsage = PCHUsageMode.UseExplicitOrSharedPCHs;

		PublicDependencyModuleNames.AddRange(new string[] { "Core", "CoreUObject", "Engine", "InputCore", "EnhancedInput", "MyNBCLog" });
	}
}
