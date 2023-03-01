#pragma once
#include "CoreMinimal.h"
#include "ENiagaraRibbonUVDistributionMode.generated.h"

UENUM()
enum class ENiagaraRibbonUVDistributionMode : int32 {
    ScaledUniformly,
    ScaledUsingRibbonSegmentLength,
    TiledOverRibbonLength,
    TiledFromStartOverRibbonLength,
};

