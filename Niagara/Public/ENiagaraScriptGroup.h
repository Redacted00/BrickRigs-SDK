#pragma once
#include "CoreMinimal.h"
#include "ENiagaraScriptGroup.generated.h"

UENUM(BlueprintType)
enum class ENiagaraScriptGroup : uint8 {
    Particle,
    Emitter,
    System,
    Max,
};

