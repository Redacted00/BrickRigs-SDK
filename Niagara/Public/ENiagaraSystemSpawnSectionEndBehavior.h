#pragma once
#include "CoreMinimal.h"
#include "ENiagaraSystemSpawnSectionEndBehavior.generated.h"

UENUM()
enum class ENiagaraSystemSpawnSectionEndBehavior : int32 {
    SetSystemInactive,
    Deactivate,
    None,
};

