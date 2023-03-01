#pragma once
#include "CoreMinimal.h"
#include "EDragRaceState.generated.h"

UENUM(BlueprintType)
enum class EDragRaceState : uint8 {
    None,
    Countdown,
    InProgress,
    Cancelled,
};

