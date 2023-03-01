#pragma once
#include "CoreMinimal.h"
#include "ENiagaraRibbonTessellationMode.generated.h"

UENUM(BlueprintType)
enum class ENiagaraRibbonTessellationMode : uint8 {
    Automatic,
    Custom,
    Disabled,
};

