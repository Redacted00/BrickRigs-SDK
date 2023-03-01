#pragma once
#include "CoreMinimal.h"
#include "ENiagaraExecutionStateSource.generated.h"

UENUM(BlueprintType)
enum class ENiagaraExecutionStateSource : uint8 {
    Scalability,
    Internal,
    Owner,
    InternalCompletion,
};

