#pragma once
#include "CoreMinimal.h"
#include "EVehicleInputAxis.generated.h"

UENUM(BlueprintType)
enum class EVehicleInputAxis : uint8 {
    None,
    Steering,
    FirstAxis = 0x1,
    FirstPlayerAxis = 0x1,
    Throttle,
    Brake,
    Pitch,
    ViewPitch,
    ViewYaw,
    LastAxis = 0x6,
    LastPlayerAxis = 0x6,
    SteeringAlt,
    FirstAltAxis = 0x7,
    ThrottleAlt,
    BrakeAlt,
    PitchAlt,
    ViewPitchAlt,
    ViewYawAlt,
    LastAltAxis = 0xC,
    Horn,
    FirstAction = 0xD,
    FirstPlayerAction = 0xD,
    Action1,
    FirstFireAction = 0xE,
    Action2,
    Action3,
    Action4,
    Action5,
    Action6,
    Action7,
    Action8,
    LastFireAction = 0x15,
    DisableSteering,
    InvertSteering,
    HandBrake,
    OperationMode,
    Headlight,
    Beacon,
    WarningLight,
    LastPlayerAction = 0x1C,
    Taillight,
    BrakeLight,
    ReversingLight,
    LastAction = 0x1F,
    AlwaysOn,
    Custom,
    Max,
};
