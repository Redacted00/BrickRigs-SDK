#pragma once
#include "CoreMinimal.h"
#include "ENiagaraExecutionState.generated.h"

UENUM()
enum class ENiagaraExecutionState : uint32 {
    Active,
    Inactive,
    InactiveClear,
    Complete,
    Disabled,
    Num,
};

