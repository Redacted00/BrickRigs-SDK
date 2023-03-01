using UnrealBuildTool;

public class TemplateSequence : ModuleRules {
    public TemplateSequence(ReadOnlyTargetRules Target) : base(Target) {
        PCHUsage = PCHUsageMode.UseExplicitOrSharedPCHs;
        bLegacyPublicIncludePaths = false;
        ShadowVariableWarningLevel = WarningLevel.Warning;
        
        PublicDependencyModuleNames.AddRange(new string[] {
            "CinematicCamera",
            "Core",
            "CoreUObject",
            "Engine",
            "MovieScene",
        });
    }
}
