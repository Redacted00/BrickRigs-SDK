#pragma once
#include "CoreMinimal.h"
#include "ENiagaraMeshPivotOffsetSpace.generated.h"

UENUM(BlueprintType)
enum class ENiagaraMeshPivotOffsetSpace : uint8 {
    Mesh,
    Simulation,
    World,
    Local,
};

