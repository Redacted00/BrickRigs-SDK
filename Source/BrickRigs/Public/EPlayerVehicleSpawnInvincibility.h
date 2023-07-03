#pragma once
#include "CoreMinimal.h"
#include "EPlayerVehicleSpawnInvincibility.generated.h"

UENUM(BlueprintType)
enum class EPlayerVehicleSpawnInvincibility : uint8 {
    None,
    Invincible,
    Pinned,
};

