using UnrealBuildTool;

public class AudioSynesthesia : ModuleRules {
    public AudioSynesthesia(ReadOnlyTargetRules Target) : base(Target) {
        PCHUsage = PCHUsageMode.UseExplicitOrSharedPCHs;
        bLegacyPublicIncludePaths = false;
        ShadowVariableWarningLevel = WarningLevel.Warning;
        
        PublicDependencyModuleNames.AddRange(new string[] {
            "AudioAnalyzer",
            "Core",
            "CoreUObject",
            "Engine",
        });
    }
}
