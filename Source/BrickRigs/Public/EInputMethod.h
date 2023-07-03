#pragma once
#include "CoreMinimal.h"
#include "EInputMethod.generated.h"

UENUM(BlueprintType)
enum class EInputMethod : uint8 {
    Keyboard,
    Gamepad,
};

