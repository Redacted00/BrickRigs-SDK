#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=Engine -ObjectName=Interface_CollisionDataProvider -FallbackName=Interface_CollisionDataProvider
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

