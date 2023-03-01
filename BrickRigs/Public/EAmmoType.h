#pragma once
#include "CoreMinimal.h"
#include "EAmmoType.generated.h"

UENUM(BlueprintType)
enum class EAmmoType : uint8 {
    Default,
    ArmorPiercing,
    Incendiary,
    Tracer,
    HighExplosive,
    TargetSeeking,
    Guided,
    Max,
};

