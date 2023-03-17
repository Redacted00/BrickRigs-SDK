#pragma once
#include "CoreMinimal.h"
#include "EChamberState.generated.h"

UENUM(BlueprintType)
enum class EChamberState : uint8 {
    Empty,
    EmptyShell,
    Cocked,
};

