#pragma once
#include "CoreMinimal.h"
#include "ENiagaraRibbonDrawDirection.generated.h"

UENUM(BlueprintType)
enum class ENiagaraRibbonDrawDirection : uint8 {
    FrontToBack,
    BackToFront,
};

