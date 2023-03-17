#pragma once
#include "CoreMinimal.h"
#include "PhysicsConstraintConnection.h"
#include "CouplingConnection.generated.h"

UCLASS(Blueprintable)
class UCouplingConnection : public UPhysicsConstraintConnection {
    GENERATED_BODY()
public:
    UCouplingConnection();
};

