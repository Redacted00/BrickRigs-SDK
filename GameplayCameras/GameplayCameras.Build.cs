using UnrealBuildTool;

public class GameplayCameras : ModuleRules {
    public GameplayCameras(ReadOnlyTargetRules Target) : base(Target) {
        PCHUsage = PCHUsageMode.UseExplicitOrSharedPCHs;
        bLegacyPublicIncludePaths = false;
        ShadowVariableWarningLevel = WarningLevel.Warning;
        
        PublicDependencyModuleNames.AddRange(new string[] {
            "CinematicCamera",
            "Core",
            "CoreUObject",
            "Engine",
            "MovieScene",
            "MovieSceneTracks",
            "TemplateSequence",
        });
    }
}
