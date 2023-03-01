#pragma once
#include "CoreMinimal.h"
#include "ENiagaraRibbonAgeOffsetMode.generated.h"

UENUM(BlueprintType)
enum class ENiagaraRibbonAgeOffsetMode : uint8 {
    Scale,
    Clip,
};

