#pragma once
#include "CoreMinimal.h"
#include "ENiagaraRibbonFacingMode.generated.h"

UENUM(BlueprintType)
enum class ENiagaraRibbonFacingMode : uint8 {
    Screen,
    Custom,
    CustomSideVector,
};

