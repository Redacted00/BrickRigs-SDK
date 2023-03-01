#pragma once
#include "CoreMinimal.h"
#include "EScrollWhenFocusChanges.generated.h"

UENUM(BlueprintType)
enum class EScrollWhenFocusChanges : uint8 {
    NoScroll,
    InstantScroll,
    AnimatedScroll,
};

