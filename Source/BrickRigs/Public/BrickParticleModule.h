#pragma once
#include "CoreMinimal.h"
#include "Particles/ParticleModule.h"
#include "BrickParticleModule.generated.h"

UCLASS(Abstract, Blueprintable, CollapseCategories, EditInlineNew)
class BRICKRIGS_API UBrickParticleModule : public UParticleModule {
    GENERATED_BODY()
public:
    UBrickParticleModule();
};

