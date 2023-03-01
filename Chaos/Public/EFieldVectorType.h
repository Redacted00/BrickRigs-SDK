#pragma once
#include "CoreMinimal.h"
#include "EFieldVectorType.generated.h"

UENUM(BlueprintType)
enum EFieldVectorType {
    Vector_LinearForce,
    Vector_LinearVelocity,
    Vector_AngularVelocity,
    Vector_AngularTorque,
    Vector_PositionTarget,
    Vector_TargetMax,
    Vector_MAX UMETA(Hidden),
};

