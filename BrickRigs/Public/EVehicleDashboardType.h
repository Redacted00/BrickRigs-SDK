#pragma once
#include "CoreMinimal.h"
#include "EVehicleDashboardType.generated.h"

UENUM(BlueprintType)
enum class EVehicleDashboardType : uint8 {
    None,
    Car,
    RaceCar,
    Aircraft,
    Advanced,
    Max,
};

