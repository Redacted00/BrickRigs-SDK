#pragma once
#include "CoreMinimal.h"
#include "PawnInputComponent.h"
#include "SpectatorInputComponent.generated.h"

class ABrickSpectatorPawn;

UCLASS(Blueprintable, NonTransient, ClassGroup=Custom, Within=BrickSpectatorPawn, meta=(BlueprintSpawnableComponent))
class BRICKRIGS_API USpectatorInputComponent : public UPawnInputComponent {
    GENERATED_BODY()
public:
private:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    ABrickSpectatorPawn* SpectatorPawn;
    
public:
    USpectatorInputComponent();
protected:
    UFUNCTION(BlueprintCallable)
    void RotatePawnCW(float Val);
    
    UFUNCTION(BlueprintCallable)
    void OnReleasedSpawnDummy();
    
    UFUNCTION(BlueprintCallable)
    void OnReleasedShiftSpeed();
    
    UFUNCTION(BlueprintCallable)
    void OnReleasedPlacePawn();
    
    UFUNCTION(BlueprintCallable)
    void OnPressedSpawnDummy();
    
    UFUNCTION(BlueprintCallable)
    void OnPressedShiftSpeed();
    
    UFUNCTION(BlueprintCallable)
    void OnPressedPlacePawn();
    
    UFUNCTION(BlueprintCallable)
    void OnPressedCaptureVehicleThumbnail();
    
    UFUNCTION(BlueprintCallable)
    void MoveUp(float Val);
    
    UFUNCTION(BlueprintCallable)
    void MoveRight(float Val);
    
    UFUNCTION(BlueprintCallable)
    void MoveForward(float Val);
    
};

