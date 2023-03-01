#pragma once
#include "CoreMinimal.h"
#include "ENiagaraRendererSourceDataMode.generated.h"

UENUM(BlueprintType)
enum class ENiagaraRendererSourceDataMode : uint8 {
    Particles,
    Emitter,
};

