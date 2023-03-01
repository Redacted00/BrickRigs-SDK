#pragma once
#include "CoreMinimal.h"
#include "ENiagaraCompileUsageStaticSwitch.generated.h"

UENUM(BlueprintType)
enum class ENiagaraCompileUsageStaticSwitch : uint8 {
    Spawn,
    Update,
    Event,
    SimulationStage,
    Default,
};

