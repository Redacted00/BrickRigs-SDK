#pragma once
#include "CoreMinimal.h"
#include "ENiagaraCoordinateSpace.generated.h"

UENUM(BlueprintType)
enum class ENiagaraCoordinateSpace : uint8 {
    Simulation,
    World,
    Local,
};

