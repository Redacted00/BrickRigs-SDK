#pragma once
#include "CoreMinimal.h"
#include "ENiagaraScriptTemplateSpecification.generated.h"

UENUM(BlueprintType)
enum class ENiagaraScriptTemplateSpecification : uint8 {
    None,
    Template,
    Behavior,
};

