#pragma once
#include "CoreMinimal.h"
#include "BrickConnection.h"
#include "PhysicsConstraintConnection.generated.h"

UCLASS(Blueprintable)
class UPhysicsConstraintConnection : public UBrickConnection {
    GENERATED_BODY()
public:
    UPhysicsConstraintConnection();
protected:
    UFUNCTION(BlueprintCallable)
    void OnConstraintBroken(int32 ConstraintIndex);
    
};

