#pragma once
#include "CoreMinimal.h"
#include "ENiagaraScriptContextStaticSwitch.generated.h"

UENUM(BlueprintType)
enum class ENiagaraScriptContextStaticSwitch : uint8 {
    System,
    Emitter,
    Particle,
};

