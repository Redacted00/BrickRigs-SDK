#pragma once
#include "CoreMinimal.h"
#include "PhysicsConstraintConnection.h"
#include "WheelConnection.generated.h"

UCLASS(Blueprintable)
class UWheelConnection : public UPhysicsConstraintConnection {
    GENERATED_BODY()
public:
    UWheelConnection();
};

