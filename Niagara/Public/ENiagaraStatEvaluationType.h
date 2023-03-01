#pragma once
#include "CoreMinimal.h"
#include "ENiagaraStatEvaluationType.generated.h"

UENUM(BlueprintType)
enum class ENiagaraStatEvaluationType : uint8 {
    Average,
    Maximum,
};

