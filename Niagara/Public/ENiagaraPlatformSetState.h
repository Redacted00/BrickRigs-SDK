#pragma once
#include "CoreMinimal.h"
#include "ENiagaraPlatformSetState.generated.h"

UENUM(BlueprintType)
enum class ENiagaraPlatformSetState : uint8 {
    Disabled,
    Enabled,
    Active,
    Unknown,
};

