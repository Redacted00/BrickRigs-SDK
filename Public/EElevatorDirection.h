#pragma once
#include "CoreMinimal.h"
#include "EElevatorDirection.generated.h"

UENUM(BlueprintType)
enum class EElevatorDirection : uint8 {
    Stop,
    Up,
    Down,
};

