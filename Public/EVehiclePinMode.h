#pragma once
#include "CoreMinimal.h"
#include "EVehiclePinMode.generated.h"

UENUM(BlueprintType)
enum class EVehiclePinMode : uint8 {
    None,
    RootBrick,
    AllBricks,
};

