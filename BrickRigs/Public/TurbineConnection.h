#pragma once
#include "CoreMinimal.h"
#include "PhysicsConstraintConnection.h"
#include "TurbineConnection.generated.h"

UCLASS(Blueprintable)
class UTurbineConnection : public UPhysicsConstraintConnection {
    GENERATED_BODY()
public:
    UTurbineConnection();
};

