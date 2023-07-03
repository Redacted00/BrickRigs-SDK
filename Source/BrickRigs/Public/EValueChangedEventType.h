#pragma once
#include "CoreMinimal.h"
#include "EValueChangedEventType.generated.h"

UENUM(BlueprintType)
enum class EValueChangedEventType : uint8 {
    Commit,
    Cancel,
    Pending,
};

