#pragma once
#include "CoreMinimal.h"
#include "EAngularConstraintMotion.generated.h"

UENUM(BlueprintType)
enum EAngularConstraintMotion {
    ACM_Free,
    ACM_Limited,
    ACM_Locked,
    ACM_MAX UMETA(Hidden),
};

