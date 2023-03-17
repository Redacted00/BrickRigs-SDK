#pragma once
#include "CoreMinimal.h"
#include "EControlHintDisplayInfoMode.generated.h"

UENUM(BlueprintType)
enum class EControlHintDisplayInfoMode : uint8 {
    Auto,
    Custom,
    Hidden,
};

