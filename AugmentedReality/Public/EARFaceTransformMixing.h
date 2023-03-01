#pragma once
#include "CoreMinimal.h"
#include "EARFaceTransformMixing.generated.h"

UENUM(BlueprintType)
enum class EARFaceTransformMixing : uint8 {
    ComponentOnly,
    ComponentLocationTrackedRotation,
    ComponentWithTracked,
    TrackingOnly,
};

