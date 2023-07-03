#pragma once
#include "CoreMinimal.h"
#include "EProximitySensorMask.generated.h"

UENUM(BlueprintType)
enum class EProximitySensorMask : uint8 {
    All,
    Vehicles,
    OtherVehicles,
    Pawn,
    Static,
    Water,
};

