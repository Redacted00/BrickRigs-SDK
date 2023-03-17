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
    VehicleLimitExceeded,
    VehicleNotWhitelisted,
    OnlyAdminsCanSpawn,
    InsufficientFunds,
    NoObjects,
};

