#pragma once
#include "CoreMinimal.h"
#include "ETickMode.generated.h"

UENUM(BlueprintType)
enum class ETickMode : uint8 {
    Disabled,
    Enabled,
    Automatic,
};

