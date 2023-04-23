// Copyright Epic Games, Inc. All Rights Reserved.

using UnrealBuildTool;

public class BrickRigs : ModuleRules
{
    public BrickRigs(ReadOnlyTargetRules Target) : base(Target)
    {
        PCHUsage = PCHUsageMode.UseExplicitOrSharedPCHs;

        PublicDependencyModuleNames.AddRange(new string[] {
            "Core", "CoreUObject", "Engine", "InputCore",
            "UMG",
            "PhysX", "PhysicsCore", "APEX", "CableComponent",
            "AIModule", "Foliage"
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

        if (Target.bBuildEditor)
        {
            PrivateDependencyModuleNames.AddRange(new string[] {
                "UnrealEd"
            });
        }
    }
}