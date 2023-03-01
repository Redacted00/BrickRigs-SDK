#pragma once
#include "CoreMinimal.h"
#include "ESubmixEffectDynamicsChannelLinkMode.generated.h"

UENUM(BlueprintType)
enum class ESubmixEffectDynamicsChannelLinkMode : uint8 {
    Disabled,
    Average,
    Peak,
    Count,
};

