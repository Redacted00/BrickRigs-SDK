#pragma once
#include "CoreMinimal.h"
#include "EFieldPhysicsDefaultFields.generated.h"

UENUM(BlueprintType)
enum EFieldPhysicsDefaultFields {
    Field_RadialIntMask,
    Field_RadialFalloff,
    Field_UniformVector,
    Field_RadialVector,
    Field_RadialVectorFalloff,
    Field_EFieldPhysicsDefaultFields_Max,
    Field_MAX UMETA(Hidden),
};

