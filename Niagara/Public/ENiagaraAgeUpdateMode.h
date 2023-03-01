#pragma once
#include "CoreMinimal.h"
#include "ENiagaraAgeUpdateMode.generated.h"

UENUM(BlueprintType)
enum class ENiagaraAgeUpdateMode : uint8 {
    TickDeltaTime,
    DesiredAge,
    DesiredAgeNoSeek,
};

