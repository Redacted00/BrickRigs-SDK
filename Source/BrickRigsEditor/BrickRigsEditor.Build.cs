// Copyright Epic Games, Inc. All Rights Reserved.

using UnrealBuildTool;

public class BrickRigsEditor : ModuleRules
{
    public BrickRigsEditor(ReadOnlyTargetRules Target) : base(Target)
    {
        PCHUsage = PCHUsageMode.UseExplicitOrSharedPCHs;

        PublicDependencyModuleNames.AddRange(new string[] {
            "Core", "CoreUObject", "Engine", "InputCore",
            "UMG",
            "PhysX", "PhysicsCore", "APEX", "CableComponent",
            "AIModule"
        });

        PrivateDependencyModuleNames.AddRange(new string[] {
            "Slate", "SlateCore", "RenderCore",
            "AnimationCore", "AnimGraphRuntime",
            "OnlineSubsystem", "OnlineSubsystemUtils",
            "Steamworks", "SteamSockets",
            "Sockets", "Networking",
            "HTTP",
            "MoviePlayer",  "ImageWrapper",
            "GameplayTags",
            "EngineSettings",
            "Landscape",
            "ApplicationCore"
        });

        DynamicallyLoadedModuleNames.Add("OnlineSubsystemSteam");

        PublicIncludePaths.AddRange(new string[] { "BrickRigsEditor/Public" });
        PrivateIncludePaths.AddRange(new string[] { "BrickRigsEditor/Private" });
        PublicDependencyModuleNames.AddRange(new string[] { "BrickRigs" });
        PrivateDependencyModuleNames.AddRange(new string[] { "BrickRigs" });
        //PrivateDependencyModuleNames.AddRange(new string[] { "UnrealEd" });
        PrivateIncludePathModuleNames.AddRange(new string[] { });
        DynamicallyLoadedModuleNames.AddRange(new string[] { });
    }
}
