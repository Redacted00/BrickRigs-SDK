#pragma once
#include "CoreMinimal.h"
#include "ENiagaraBindingSource.generated.h"

UENUM(BlueprintType)
enum ENiagaraBindingSource {
    ImplicitFromSource,
    ExplicitParticles,
    ExplicitEmitter,
    ExplicitSystem,
    ExplicitUser,
    MaxBindingSource,
};

