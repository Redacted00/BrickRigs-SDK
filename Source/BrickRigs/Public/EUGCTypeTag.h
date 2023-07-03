#pragma once
#include "CoreMinimal.h"
#include "EUGCTypeTag.generated.h"

UENUM(BlueprintType)
enum class EUGCTypeTag : uint8 {
    None,
    Car,
    RaceCar,
    Truck,
    HeavyMachinery,
    Plane,
    Helicopter,
    Tank,
    Train,
    Trailer,
    Prop,
    Building,
    Ship,
    SpaceCraft,
    Bus,
    Motorcycle,
    Max,
};

