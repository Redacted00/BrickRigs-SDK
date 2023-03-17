#pragma once
#include "CoreMinimal.h"
#include "EConnectorShape.generated.h"

UENUM(BlueprintType)
enum class EConnectorShape : uint8 {
    Rectangle,
    Triangle,
    FlippedTriangle,
    IsoscelesTriangle,
    Circle,
    HalfCircle,
    QuarterCircle,
    FlippedQuarterCircle,
    InvertedQuarterCircle,
    FlippedInvertedQuarterCircle,
};

