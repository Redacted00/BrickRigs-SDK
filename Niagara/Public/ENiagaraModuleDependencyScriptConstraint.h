#pragma once
#include "CoreMinimal.h"
#include "ENiagaraModuleDependencyScriptConstraint.generated.h"

UENUM(BlueprintType)
enum class ENiagaraModuleDependencyScriptConstraint : uint8 {
    SameScript,
    AllScripts,
};

