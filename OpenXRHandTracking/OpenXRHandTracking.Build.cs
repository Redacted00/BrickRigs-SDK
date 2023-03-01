using UnrealBuildTool;

public class OpenXRHandTracking : ModuleRules {
    public OpenXRHandTracking(ReadOnlyTargetRules Target) : base(Target) {
        PCHUsage = PCHUsageMode.UseExplicitOrSharedPCHs;
        bLegacyPublicIncludePaths = false;
        ShadowVariableWarningLevel = WarningLevel.Warning;
        
        PublicDependencyModuleNames.AddRange(new string[] {
            "Core",
            "CoreUObject",
            "Engine",
            "LiveLink",
            "LiveLinkInterface",
            "TimeManagement",
        });
    }
}
