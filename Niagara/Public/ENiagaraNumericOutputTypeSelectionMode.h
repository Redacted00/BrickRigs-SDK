#pragma once
#include "CoreMinimal.h"
#include "ENiagaraNumericOutputTypeSelectionMode.generated.h"

UENUM(BlueprintType)
enum class ENiagaraNumericOutputTypeSelectionMode : uint8 {
    None,
    Largest,
    Smallest,
    Scalar,
};

