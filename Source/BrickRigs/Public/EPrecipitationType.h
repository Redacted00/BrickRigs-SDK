#pragma once
#include "CoreMinimal.h"
#include "EPrecipitationType.generated.h"

UENUM(BlueprintType)
enum class EPrecipitationType : uint8 {
    None,
    Rain,
    Snow,
    Max,
};

