#pragma once
#include "CoreMinimal.h"
#include "ENiagaraPlatformSelectionState.generated.h"

UENUM(BlueprintType)
enum class ENiagaraPlatformSelectionState : uint8 {
    Default,
    Enabled,
    Disabled,
};

