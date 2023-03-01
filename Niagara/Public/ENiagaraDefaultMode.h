#pragma once
#include "CoreMinimal.h"
#include "ENiagaraDefaultMode.generated.h"

UENUM(BlueprintType)
enum class ENiagaraDefaultMode : uint8 {
    Value,
    Binding,
    Custom,
    FailIfPreviouslyNotSet,
};

