#pragma once
#include "CoreMinimal.h"
#include "VehicleInputComponent.h"
#include "DriverInputComponent.generated.h"

UCLASS(Blueprintable, NonTransient, ClassGroup=Custom, meta=(BlueprintSpawnableComponent))
class BRICKRIGS_API UDriverInputComponent : public UVehicleInputComponent {
    GENERATED_BODY()
public:
    UDriverInputComponent();
private:
    UFUNCTION(BlueprintCallable)
    void OnPressedToggleAutoCounterSteering();
    
    UFUNCTION(BlueprintCallable)
    void OnPressedCycleTransmissionMode();
    
    UFUNCTION(BlueprintCallable)
    FText GetToggleAutoCounterSteeringValueText() const;
    
    UFUNCTION(BlueprintCallable)
    FText GetCycleTransmissionModeValueText() const;
    
};

