#pragma once
#include "CoreMinimal.h"
#include "ENiagaraCullReaction.generated.h"

UENUM()
enum class ENiagaraCullReaction : int32 {
    Deactivate,
    DeactivateImmediate,
    DeactivateResume,
    DeactivateImmediateResume,
};

