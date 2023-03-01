#pragma once
#include "CoreMinimal.h"
#include "ELiveLinkAxis.generated.h"

UENUM(BlueprintType)
enum class ELiveLinkAxis : uint8 {
    X,
    Y,
    Z,
    XNeg,
    YNeg,
    ZNeg,
};

