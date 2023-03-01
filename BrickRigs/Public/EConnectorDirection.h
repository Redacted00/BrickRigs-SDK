#pragma once
#include "CoreMinimal.h"
#include "EConnectorDirection.generated.h"

UENUM(BlueprintType)
enum class EConnectorDirection : uint8 {
    X,
    Y,
    Z,
    XNeg,
    YNeg,
    ZNeg,
    Max,
};

