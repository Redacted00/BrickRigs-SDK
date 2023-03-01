#pragma once
#include "CoreMinimal.h"
#include "FNiagaraCompileEventSeverity.generated.h"

UENUM(BlueprintType)
enum class FNiagaraCompileEventSeverity : uint8 {
    Log,
    Warning,
    Error,
};

