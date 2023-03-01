#pragma once
#include "CoreMinimal.h"
#include "ENiagaraLegacyTrailWidthMode.generated.h"

UENUM(BlueprintType)
enum class ENiagaraLegacyTrailWidthMode : uint8 {
    FromCentre,
    FromFirst,
    FromSecond,
};

