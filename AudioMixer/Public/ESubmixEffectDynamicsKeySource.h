#pragma once
#include "CoreMinimal.h"
#include "ESubmixEffectDynamicsKeySource.generated.h"

UENUM(BlueprintType)
enum class ESubmixEffectDynamicsKeySource : uint8 {
    Default,
    AudioBus,
    Submix,
    Count,
};

