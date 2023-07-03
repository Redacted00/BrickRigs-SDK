#pragma once
#include "CoreMinimal.h"
#include "ENumericValueType.generated.h"

UENUM(BlueprintType)
enum class ENumericValueType : uint8 {
    Float,
    Integer,
    Percent,
    Angle,
    RPM,
    Time,
    Seconds,
    Minutes,
    Hours,
    Days,
    Money,
    Gear,
    SpeedAuto,
    SpeedMetric,
    SpeedImperial,
    DistanceAuto,
    DistanceMetric,
    DistanceImperial,
    DistanceZeroAsUnlimited,
    VolumeAuto,
    VolumeMetric,
    VolumeImperial,
    BrickUnits,
    IntZeroAsUnlimited,
    Bricks,
    BricksZeroAsUnlimited,
    MassAuto,
    MassMetric,
    MassImperial,
    MassZeroAsUnlimited,
};

