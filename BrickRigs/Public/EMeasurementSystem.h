#pragma once
#include "CoreMinimal.h"
#include "EMeasurementSystem.generated.h"

UENUM(BlueprintType)
enum class EMeasurementSystem : uint8 {
    Metric,
    Imperial,
    Max,
};

