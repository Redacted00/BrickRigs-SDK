#pragma once
#include "CoreMinimal.h"
#include "EUGCType.generated.h"

UENUM(BlueprintType)
enum class EUGCType : uint8 {
    None,
    Vehicle,
    Scenario,
    Mod,
    Max,
};

