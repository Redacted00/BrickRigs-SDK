#pragma once
#include "CoreMinimal.h"
#include "Brick.h"
#include "VehicleInputChannel.h"
#include "CouplingBrick.generated.h"

class ABrickPlayerController;

UCLASS(Blueprintable)
class BRICKRIGS_API UCouplingBrick : public UBrick {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FVehicleInputChannel InputChannel;
    
public:
    UCouplingBrick();
private:
    UFUNCTION(BlueprintCallable)
    void Interact_EngageCoupling(ABrickPlayerController* PC);
    
    UFUNCTION(BlueprintCallable)
    void Interact_DisengageCoupling(ABrickPlayerController* PC);
    
};

