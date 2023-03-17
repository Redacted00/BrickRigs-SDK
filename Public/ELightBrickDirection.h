#pragma once
#include "CoreMinimal.h"
#include "ELightBrickDirection.generated.h"

UENUM(BlueprintType)
enum class ELightBrickDirection : uint8 {
    None,
    Omnidirectional,
    X,
    XNeg,
    Y,
    YNeg,
    Z,
    ZNeg,
    Max,
};

