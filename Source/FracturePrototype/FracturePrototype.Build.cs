// Copyright Epic Games, Inc. All Rights Reserved.

using UnrealBuildTool;

public class FracturePrototype : ModuleRules
{
	public FracturePrototype(ReadOnlyTargetRules Target) : base(Target)
	{
		PCHUsage = PCHUsageMode.UseExplicitOrSharedPCHs;

		PublicDependencyModuleNames.AddRange(new string[] { "Core", "CoreUObject", "Engine", "InputCore", "EnhancedInput" });
	}
}
