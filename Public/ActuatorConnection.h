#pragma once
#include "CoreMinimal.h"
#include "PhysicsConstraintConnection.h"
#include "ActuatorConnection.generated.h"

UCLASS(Blueprintable)
class UActuatorConnection : public UPhysicsConstraintConnection {
    GENERATED_BODY()
public:
    UActuatorConnection();
};

