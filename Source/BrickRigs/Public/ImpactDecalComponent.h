#pragma once
#include "CoreMinimal.h"
#include "Components/DecalComponent.h"
#include "ImpactDecalComponent.generated.h"

UCLASS(Blueprintable, ClassGroup=Custom, meta=(BlueprintSpawnableComponent))
class BRICKRIGS_API UImpactDecalComponent : public UDecalComponent {
    GENERATED_BODY()
public:
    UImpactDecalComponent();
};

