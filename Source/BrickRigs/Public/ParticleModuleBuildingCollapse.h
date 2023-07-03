#pragma once
#include "CoreMinimal.h"
#include "BrickParticleModule.h"
#include "ParticleModuleBuildingCollapse.generated.h"

UCLASS(Blueprintable, CollapseCategories, EditInlineNew)
class BRICKRIGS_API UParticleModuleBuildingCollapse : public UBrickParticleModule {
    GENERATED_BODY()
public:
    UParticleModuleBuildingCollapse();
};

