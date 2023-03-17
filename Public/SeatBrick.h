#pragma once
#include "CoreMinimal.h"
#include "Brick.h"
#include "VehicleInput.h"
#include "SeatBrick.generated.h"

class ABrickCharacter;
class ABrickPlayerController;

UCLASS(Blueprintable)
class BRICKRIGS_API USeatBrick : public UBrick {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, ReplicatedUsing=OnRep_Character, meta=(AllowPrivateAccess=true))
    ABrickCharacter* Character;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, ReplicatedUsing=OnRep_VehicleInput, meta=(AllowPrivateAccess=true))
    FVehicleInput RepVehicleInput;
    
public:
    USeatBrick();
    virtual void GetLifetimeReplicatedProps(TArray<FLifetimeProperty>& OutLifetimeProps) const override;
    
protected:
    UFUNCTION(BlueprintCallable)
    void OnRep_VehicleInput();
    
    UFUNCTION(BlueprintCallable)
    void OnRep_Character(ABrickCharacter* OldCharacter);
    
private:
    UFUNCTION(BlueprintCallable)
    void Interact_EnterSeat(ABrickPlayerController* PC);
    
};

