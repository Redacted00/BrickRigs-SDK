#pragma once
#include "CoreMinimal.h"
#include "EHUDVisibility.generated.h"

UENUM(BlueprintType)
enum class EHUDVisibility : uint8 {
    Full,
    Minimal,
    Off,
    Max,
};

