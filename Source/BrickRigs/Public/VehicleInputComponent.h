#pragma once
#include "CoreMinimal.h"
#include "PlayerPawnInputComponent.h"
#include "VehicleInputComponent.generated.h"

class USeatBrick;

UCLASS(Abstract, Blueprintable, NonTransient, ClassGroup=Custom, meta=(BlueprintSpawnableComponent))
class BRICKRIGS_API UVehicleInputComponent : public UPlayerPawnInputComponent {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    USeatBrick* VehicleSeat;
    
public:
    UVehicleInputComponent();
protected:
    UFUNCTION(BlueprintCallable)
    void ViewYaw(float Val);
    
    UFUNCTION(BlueprintCallable)
    void ViewPitch(float Val);
    
    UFUNCTION(BlueprintCallable)
    void Throttle(float Val);
    
    UFUNCTION(BlueprintCallable)
    void Steering(float Val);
    
    UFUNCTION(BlueprintCallable)
    void Pitch(float Val);
    
    UFUNCTION(BlueprintCallable)
    void OnTappedToggleSteering();
    
    UFUNCTION(BlueprintCallable)
    void OnTappedPinVehicle();
    
    UFUNCTION(BlueprintCallable)
    void OnTappedCycleSiren();
    
    UFUNCTION(BlueprintCallable)
    void OnTappedCycleSeats();
    
    UFUNCTION(BlueprintCallable)
    void OnTappedCycleFireActionMode();
    
    UFUNCTION(BlueprintCallable)
    void OnTappedCycleCamera();
    
    UFUNCTION(BlueprintCallable)
    void OnReleasedToggleSteering();
    
    UFUNCTION(BlueprintCallable)
    void OnReleasedPinVehicle();
    
    UFUNCTION(BlueprintCallable)
    void OnReleasedOperationMode();
    
    UFUNCTION(BlueprintCallable)
    void OnReleasedHorn();
    
    UFUNCTION(BlueprintCallable)
    void OnReleasedHandBrake();
    
    UFUNCTION(BlueprintCallable)
    void OnReleasedCycleSiren();
    
    UFUNCTION(BlueprintCallable)
    void OnReleasedCycleSeats();
    
    UFUNCTION(BlueprintCallable)
    void OnReleasedCycleFireActionMode();
    
    UFUNCTION(BlueprintCallable)
    void OnReleasedCycleCamera();
    
    UFUNCTION(BlueprintCallable)
    void OnReleasedAction8();
    
    UFUNCTION(BlueprintCallable)
    void OnReleasedAction7();
    
    UFUNCTION(BlueprintCallable)
    void OnReleasedAction6();
    
    UFUNCTION(BlueprintCallable)
    void OnReleasedAction5();
    
    UFUNCTION(BlueprintCallable)
    void OnReleasedAction4();
    
    UFUNCTION(BlueprintCallable)
    void OnReleasedAction3();
    
    UFUNCTION(BlueprintCallable)
    void OnReleasedAction2();
    
    UFUNCTION(BlueprintCallable)
    void OnReleasedAction1();
    
    UFUNCTION(BlueprintCallable)
    void OnPressedWarningLight();
    
    UFUNCTION(BlueprintCallable)
    void OnPressedToggleSteering();
    
    UFUNCTION(BlueprintCallable)
    void OnPressedShiftUp();
    
    UFUNCTION(BlueprintCallable)
    void OnPressedShiftDown();
    
    UFUNCTION(BlueprintCallable)
    void OnPressedPinVehicle();
    
    UFUNCTION(BlueprintCallable)
    void OnPressedOperationMode();
    
    UFUNCTION(BlueprintCallable)
    void OnPressedHorn();
    
    UFUNCTION(BlueprintCallable)
    void OnPressedHeadlight();
    
    UFUNCTION(BlueprintCallable)
    void OnPressedHandBrake();
    
    UFUNCTION(BlueprintCallable)
    void OnPressedExitVehicle();
    
    UFUNCTION(BlueprintCallable)
    void OnPressedCycleSiren();
    
    UFUNCTION(BlueprintCallable)
    void OnPressedCycleSeats();
    
    UFUNCTION(BlueprintCallable)
    void OnPressedCycleFireActionMode();
    
    UFUNCTION(BlueprintCallable)
    void OnPressedCycleCameraMode();
    
    UFUNCTION(BlueprintCallable)
    void OnPressedCycleCamera();
    
    UFUNCTION(BlueprintCallable)
    void OnPressedCaptureVehicleThumbnail();
    
    UFUNCTION(BlueprintCallable)
    void OnPressedBeacon();
    
    UFUNCTION(BlueprintCallable)
    void OnPressedAction8();
    
    UFUNCTION(BlueprintCallable)
    void OnPressedAction7();
    
    UFUNCTION(BlueprintCallable)
    void OnPressedAction6();
    
    UFUNCTION(BlueprintCallable)
    void OnPressedAction5();
    
    UFUNCTION(BlueprintCallable)
    void OnPressedAction4();
    
    UFUNCTION(BlueprintCallable)
    void OnPressedAction3();
    
    UFUNCTION(BlueprintCallable)
    void OnPressedAction2();
    
    UFUNCTION(BlueprintCallable)
    void OnPressedAction1();
    
    UFUNCTION(BlueprintCallable)
    void OnHeldToggleSteering();
    
    UFUNCTION(BlueprintCallable)
    void OnHeldPinVehicle();
    
    UFUNCTION(BlueprintCallable)
    void OnHeldCycleSiren();
    
    UFUNCTION(BlueprintCallable)
    void OnHeldCycleSeats();
    
    UFUNCTION(BlueprintCallable)
    void OnHeldCycleFireActionMode();
    
    UFUNCTION(BlueprintCallable)
    void OnHeldCycleCamera();
    
    UFUNCTION(BlueprintCallable)
    FText GetCycleCameraModeValueText() const;
    
    UFUNCTION(BlueprintCallable)
    void Brake(float Val);
    
};

