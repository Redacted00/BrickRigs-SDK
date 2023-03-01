#pragma once
#include "CoreMinimal.h"
#include "ELinearConstraintMotion.generated.h"

UENUM(BlueprintType)
enum ELinearConstraintMotion {
    LCM_Free,
    LCM_Limited,
    LCM_Locked,
    LCM_MAX UMETA(Hidden),
};

