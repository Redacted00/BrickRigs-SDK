#pragma once
#include "CoreMinimal.h"
#include "EConnectorSpacing.generated.h"

UENUM(BlueprintType)
enum class EConnectorSpacing : uint8 {
    None,
    Default,
    Half,
    Third,
    Double,
    Triple,
    Quadruple,
    Max,
};

