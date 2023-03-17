#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=Engine -ObjectName=ParticleModule -FallbackName=ParticleModule
#include "BrickParticleModule.generated.h"

UCLASS(Abstract, Blueprintable, CollapseCategories, EditInlineNew)
class BRICKRIGS_API UBrickParticleModule : public UParticleModule {
    GENERATED_BODY()
public:
    UBrickParticleModule();
};

