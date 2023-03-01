#pragma once
#include "CoreMinimal.h"
#include "ENiagaraSystemInstanceState.generated.h"

UENUM(BlueprintType)
enum class ENiagaraSystemInstanceState : uint8 {
    None,
    PendingSpawn,
    PendingSpawnPaused,
    Spawning,
    Running,
    Paused,
    Num,
};

