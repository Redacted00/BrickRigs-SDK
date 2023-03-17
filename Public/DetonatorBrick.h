#pragma once
#include "CoreMinimal.h"
#include "Brick.h"
#include "VehicleInputChannel.h"
#include "DetonatorBrick.generated.h"

class ABrickPlayerController;

UCLASS(Blueprintable)
class BRICKRIGS_API UDetonatorBrick : public UBrick {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FVehicleInputChannel InputChannel;
    
public:
    UDetonatorBrick();
private:
    UFUNCTION(BlueprintCallable)
    void Interact_Detonate(ABrickPlayerController* PC);
    
};

