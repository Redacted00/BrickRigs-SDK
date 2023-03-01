#pragma once
#include "CoreMinimal.h"
#include "EVirtualKeyboardTrigger.generated.h"

UENUM(BlueprintType)
enum class EVirtualKeyboardTrigger : uint8 {
    OnFocusByPointer,
    OnAllFocusEvents,
};

