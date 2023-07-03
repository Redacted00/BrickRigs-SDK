#pragma once
#include "CoreMinimal.h"
#include "EConnectorType.generated.h"

UENUM(BlueprintType)
enum class EConnectorType : uint8 {
    None,
    Default,
    Wheel,
    SphereCoupling,
    Hinge,
    Rotor,
    Muzzle,
    FlatRadialHinge,
    BigHinge,
    Piston,
    LinearCoupling,
    Turntable,
    FlatLinearActuator,
    SmallHinge,
    SmallMuzzle,
    VerticalHinge,
    Hinge3x2,
    SmallTurntable,
    LargeTurntable,
    LargePiston,
    SmallFlatLinearActuator,
    MediumHinge,
    TinyTurntable,
    TinyHinge,
    TinyLinearActuator,
    TinySphereCoupling,
    TinyPiston,
};

