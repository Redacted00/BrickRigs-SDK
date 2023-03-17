#pragma once
#include "CoreMinimal.h"
#include "EScalableBrickShape.generated.h"

UENUM(BlueprintType)
enum class EScalableBrickShape : uint8 {
    Box,
    Ramp,
    Cylinder,
    HalfCylinder,
    Cone,
    QuarterCone,
    HalfCone,
    Hemisphere,
    QuarterSphere,
    RampRounded,
    RampRoundedN,
    Corner,
    CornerN,
    CornerRounded,
    CornerRoundedN,
    Pyramid,
    PyramidCorner,
    PyramidCornerRounded,
    Wedge,
    WedgeCorner,
    Cylinder90R0,
    Cylinder90R1,
};

