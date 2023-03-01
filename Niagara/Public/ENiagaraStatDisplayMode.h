#pragma once
#include "CoreMinimal.h"
#include "ENiagaraStatDisplayMode.generated.h"

UENUM(BlueprintType)
enum class ENiagaraStatDisplayMode : uint8 {
    Percent,
    Absolute,
};

