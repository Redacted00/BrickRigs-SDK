#pragma once
#include "CoreMinimal.h"
#include "ENiagaraPreviewGridResetMode.generated.h"

UENUM(BlueprintType)
enum class ENiagaraPreviewGridResetMode : uint8 {
    Never,
    Individual,
    All,
};

