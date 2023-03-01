#pragma once
#include "CoreMinimal.h"
#include "ENiagaraMeshLockedAxisSpace.generated.h"

UENUM(BlueprintType)
enum class ENiagaraMeshLockedAxisSpace : uint8 {
    Simulation,
    World,
    Local,
};

