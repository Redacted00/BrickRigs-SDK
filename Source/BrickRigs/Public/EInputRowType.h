#pragma once
#include "CoreMinimal.h"
#include "EInputRowType.generated.h"

UENUM(BlueprintType)
enum class EInputRowType : uint8 {
    PressAction,
    ReleaseAction,
    PressReleaseAction,
    HoldAction,
    Axis,
    HalfAxis,
};

