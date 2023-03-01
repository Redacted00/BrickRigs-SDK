#pragma once
#include "CoreMinimal.h"
#include "VehicleInputComponent.h"
#include "PassengerInputComponent.generated.h"

UCLASS(Blueprintable, NonTransient, ClassGroup=Custom, meta=(BlueprintSpawnableComponent))
class BRICKRIGS_API UPassengerInputComponent : public UVehicleInputComponent {
    GENERATED_BODY()
public:
    UPassengerInputComponent();
};

