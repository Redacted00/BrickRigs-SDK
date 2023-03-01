#pragma once
#include "CoreMinimal.h"
#include "ENiagaraInputNodeUsage.generated.h"

UENUM(BlueprintType)
enum class ENiagaraInputNodeUsage : uint8 {
    Undefined,
    Parameter,
    Attribute,
    SystemConstant,
    TranslatorConstant,
    RapidIterationParameter,
};

