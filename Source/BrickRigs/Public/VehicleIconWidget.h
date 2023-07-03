#pragma once
#include "CoreMinimal.h"
#include "EVehiclePinMode.h"
#include "PawnIconWidget.h"
#include "VehicleIconWidget.generated.h"

class ABrickVehicle;

UCLASS(Abstract, Blueprintable, EditInlineNew)
class BRICKRIGS_API UVehicleIconWidget : public UPawnIconWidget {
    GENERATED_BODY()
public:
private:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    ABrickVehicle* Vehicle;
    
public:
    UVehicleIconWidget();
protected:
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void UpdateVehicleIcon(bool bNewIsLocalPlayer, bool bNewCanBeDamaged, EVehiclePinMode NewPinMode);
    
};

