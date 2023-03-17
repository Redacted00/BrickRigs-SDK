#pragma once
#include "CoreMinimal.h"
#include "EInteractionOptionSlot.generated.h"

UENUM(BlueprintType)
enum class EInteractionOptionSlot : uint8 {
    Pri,
    Sec,
    Ter,
    Inventory,
    Max,
};

