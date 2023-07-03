#pragma once
#include "CoreMinimal.h"
#include "Interfaces/Interface_CollisionDataProvider.h"
#include "WheelBrick.h"
#include "CarWheelBrick.generated.h"

class UPrimitiveComponent;

UCLASS(Blueprintable)
class BRICKRIGS_API UCarWheelBrick : public UWheelBrick, public IInterface_CollisionDataProvider {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float TirePressureRatio;
    
public:
    UCarWheelBrick();
private:
    UFUNCTION(BlueprintCallable)
    void OnRootComponentWake(UPrimitiveComponent* SleepingComponent, FName BoneName);
    
    
    // Fix for true pure virtual functions not being implemented
};

