#pragma once
#include "CoreMinimal.h"
#include "Brick.h"
#include "VehicleInputChannel.h"
#include "WinchAttachTarget.h"
#include "WinchBrick.generated.h"

class ABrickPlayerController;

UCLASS(Blueprintable)
class BRICKRIGS_API UWinchBrick : public UBrick {
    GENERATED_BODY()
public:
private:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, ReplicatedUsing=OnRep_AttachTarget, meta=(AllowPrivateAccess=true))
    FWinchAttachTarget AttachTarget;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, ReplicatedUsing=OnRep_RepRopeLength, meta=(AllowPrivateAccess=true))
    float RepRopeLength;
    
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FVehicleInputChannel InputChannel;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float WinchSpeed;
    
public:
    UWinchBrick();
    virtual void GetLifetimeReplicatedProps(TArray<FLifetimeProperty>& OutLifetimeProps) const override;
    
private:
    UFUNCTION(BlueprintCallable)
    void OnRep_RepRopeLength();
    
    UFUNCTION(BlueprintCallable)
    void OnRep_AttachTarget(const FWinchAttachTarget& PrevAttachTarget);
    
    UFUNCTION(BlueprintCallable)
    void Interact_DetachWinch(ABrickPlayerController* OtherPC);
    
    UFUNCTION(BlueprintCallable)
    void Interact_AttachWinch(ABrickPlayerController* OtherPC);
    
};

