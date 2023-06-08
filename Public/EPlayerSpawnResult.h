#pragma once
#include "CoreMinimal.h"
#include "EPlayerSpawnResult.generated.h"

UENUM(BlueprintType)
enum class EPlayerSpawnResult : uint8 {
    Success,
    Failure,
    UnsavedChanges,
    SentToServer,
    BrickLimitExceeded,
    MassExceeded,
    SizeExceeded,
    VehicleLimitExceeded,
    VehicleNotWhitelisted,
    OnlyAdminsCanSpawn,
    InsufficientFunds,
    NoObjects,
    Cooldown,
};

