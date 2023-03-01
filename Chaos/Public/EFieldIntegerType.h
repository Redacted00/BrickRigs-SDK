#pragma once
#include "CoreMinimal.h"
#include "EFieldIntegerType.generated.h"

UENUM(BlueprintType)
enum EFieldIntegerType {
    Integer_DynamicState,
    Integer_ActivateDisabled,
    Integer_CollisionGroup,
    Integer_PositionAnimated,
    Integer_PositionStatic,
    Integer_TargetMax,
    Integer_MAX UMETA(Hidden),
};

