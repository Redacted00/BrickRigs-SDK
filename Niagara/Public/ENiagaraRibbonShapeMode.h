#pragma once
#include "CoreMinimal.h"
#include "ENiagaraRibbonShapeMode.generated.h"

UENUM(BlueprintType)
enum class ENiagaraRibbonShapeMode : uint8 {
    Plane,
    MultiPlane,
    Tube,
    Custom,
};

