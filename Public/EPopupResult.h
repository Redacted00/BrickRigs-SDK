#pragma once
#include "CoreMinimal.h"
#include "EPopupResult.generated.h"

UENUM(BlueprintType)
enum class EPopupResult : uint8 {
    Confirm,
    Cancel,
    Ignore,
    ForceClose,
};

