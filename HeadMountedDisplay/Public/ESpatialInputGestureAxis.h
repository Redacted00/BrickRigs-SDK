#pragma once
#include "CoreMinimal.h"
#include "ESpatialInputGestureAxis.generated.h"

UENUM(BlueprintType)
enum class ESpatialInputGestureAxis : uint8 {
    None,
    Manipulation,
    Navigation,
    NavigationRails,
};

