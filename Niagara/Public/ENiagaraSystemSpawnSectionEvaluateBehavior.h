#pragma once
#include "CoreMinimal.h"
#include "ENiagaraSystemSpawnSectionEvaluateBehavior.generated.h"

UENUM()
enum class ENiagaraSystemSpawnSectionEvaluateBehavior : int32 {
    ActivateIfInactive,
    None,
};

