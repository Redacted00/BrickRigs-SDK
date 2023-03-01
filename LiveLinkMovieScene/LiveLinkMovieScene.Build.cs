using UnrealBuildTool;

public class LiveLinkMovieScene : ModuleRules {
    public LiveLinkMovieScene(ReadOnlyTargetRules Target) : base(Target) {
        PCHUsage = PCHUsageMode.UseExplicitOrSharedPCHs;
        bLegacyPublicIncludePaths = false;
        ShadowVariableWarningLevel = WarningLevel.Warning;
        
        PublicDependencyModuleNames.AddRange(new string[] {
            "Core",
            "CoreUObject",
            "Engine",
            "LiveLinkInterface",
            "MovieScene",
            "MovieSceneTracks",
        });
    }
}
