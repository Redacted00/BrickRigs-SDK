#pragma once
#include "CoreMinimal.h"
#include "ENiagaraScalabilityUpdateFrequency.generated.h"

UENUM()
enum class ENiagaraScalabilityUpdateFrequency : int32 {
    SpawnOnly,
    Low,
    Medium,
    High,
    Continuous,
};

