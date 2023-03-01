#pragma once
#include "CoreMinimal.h"
#include "ETimedDataInputState.generated.h"

UENUM(BlueprintType)
enum class ETimedDataInputState : uint8 {
    Connected,
    Unresponsive,
    Disconnected,
};

