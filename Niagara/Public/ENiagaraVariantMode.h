#pragma once
#include "CoreMinimal.h"
#include "ENiagaraVariantMode.generated.h"

UENUM()
enum class ENiagaraVariantMode : int32 {
    None,
    Object,
    DataInterface,
    Bytes,
};

