#pragma once
#include "CoreMinimal.h"
#include "EBrickDurationUnits.generated.h"

UENUM(BlueprintType)
enum class EBrickDurationUnits : uint8 {
    Microseconds,
    Milliseconds,
    Seconds,
    Minutes,
    Hours,
    Days,
    Years,
    Infinite,
    Max,
};

