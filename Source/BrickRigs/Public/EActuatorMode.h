#pragma once
#include "CoreMinimal.h"
#include "EActuatorMode.generated.h"

UENUM(BlueprintType)
enum class EActuatorMode : uint8 {
    Accumulated,
    Seeking,
    Cycle,
    PhysicsDriven,
    Static,
    Spring,
};

