#pragma once
#include "CoreMinimal.h"
#include "HUDIconComponent.h"
#include "TargetMarkerIconComponent.generated.h"

UCLASS(Blueprintable, ClassGroup=Custom, meta=(BlueprintSpawnableComponent))
class BRICKRIGS_API UTargetMarkerIconComponent : public UHUDIconComponent {
    GENERATED_BODY()
public:
    UTargetMarkerIconComponent();
};

