#pragma once
#include "CoreMinimal.h"
#include "EInputActionTriggerType.generated.h"

UENUM(BlueprintType)
enum class EInputActionTriggerType : uint8 {
    Press,
    Tab,
    Hold,
    Axis,
    AxisPositive,
    AxisNegative,
};

