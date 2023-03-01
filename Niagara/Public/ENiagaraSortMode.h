#pragma once
#include "CoreMinimal.h"
#include "ENiagaraSortMode.generated.h"

UENUM(BlueprintType)
enum class ENiagaraSortMode : uint8 {
    None,
    ViewDepth,
    ViewDistance,
    CustomAscending,
    CustomDecending,
};

