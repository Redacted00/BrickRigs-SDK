using UnrealBuildTool;

public class Niagara : ModuleRules {
    public Niagara(ReadOnlyTargetRules Target) : base(Target) {
        PCHUsage = PCHUsageMode.UseExplicitOrSharedPCHs;
        bLegacyPublicIncludePaths = false;
        ShadowVariableWarningLevel = WarningLevel.Warning;
        
        PublicDependencyModuleNames.AddRange(new string[] {
            "Chaos",
            "Core",
            "CoreUObject",
            "DeveloperSettings",
            "Engine",
            "MovieScene",
            "NiagaraCore",
            "NiagaraShader",
            "PhysicsCore",
        });
    }
}
