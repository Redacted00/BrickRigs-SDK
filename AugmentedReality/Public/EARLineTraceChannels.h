#pragma once
#include "CoreMinimal.h"
#include "EARLineTraceChannels.generated.h"

UENUM(BlueprintType)
enum class EARLineTraceChannels : uint8 {
    None,
    FeaturePoint,
    GroundPlane,
    PlaneUsingExtent = 0x4,
    PlaneUsingBoundaryPolygon = 0x8,
};

