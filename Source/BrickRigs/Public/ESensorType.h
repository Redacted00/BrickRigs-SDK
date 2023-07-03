#pragma once
#include "CoreMinimal.h"
#include "ESensorType.generated.h"

UENUM(BlueprintType)
enum class ESensorType : uint8 {
    Speed,
    Acceleration,
    Distance,
    Time,
    Proximity,
    DistanceToGround,
    Altitude,
    Pitch,
    Yaw,
    Roll,
    AngularSpeed,
    NormalSpeed,
    NormalAcceleration,
    NormalAngularSpeed,
};

