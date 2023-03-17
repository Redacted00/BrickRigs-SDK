#pragma once
#include "CoreMinimal.h"
#include "EFireMode.generated.h"

UENUM(BlueprintType)
enum class EFireMode : uint8 {
    Single,
    Semi,
    Burst,
    Auto,
    Max,
};

