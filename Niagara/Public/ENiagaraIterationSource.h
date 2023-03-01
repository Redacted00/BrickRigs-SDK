#pragma once
#include "CoreMinimal.h"
#include "ENiagaraIterationSource.generated.h"

UENUM(BlueprintType)
enum class ENiagaraIterationSource : uint8 {
    Particles,
    DataInterface,
};

