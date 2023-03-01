#pragma once
#include "CoreMinimal.h"
#include "ENiagaraDebugPlaybackMode.generated.h"

UENUM(BlueprintType)
enum class ENiagaraDebugPlaybackMode : uint8 {
    Play,
    Loop,
    Paused,
    Step,
};

