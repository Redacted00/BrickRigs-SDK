#pragma once
#include "CoreMinimal.h"
#include "ENiagaraSimTarget.generated.h"

UENUM(BlueprintType)
enum class ENiagaraSimTarget : uint8 {
    CPUSim,
    GPUComputeSim,
};

