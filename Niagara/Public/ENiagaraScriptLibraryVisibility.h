#pragma once
#include "CoreMinimal.h"
#include "ENiagaraScriptLibraryVisibility.generated.h"

UENUM(BlueprintType)
enum class ENiagaraScriptLibraryVisibility : uint8 {
    Invalid,
    Unexposed,
    Library,
    Hidden,
};

