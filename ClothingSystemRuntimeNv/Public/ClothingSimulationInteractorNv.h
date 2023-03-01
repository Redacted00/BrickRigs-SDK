#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=ClothingSystemRuntimeInterface -ObjectName=ClothingSimulationInteractor -FallbackName=ClothingSimulationInteractor
#include "ClothingSimulationInteractorNv.generated.h"

UCLASS(Blueprintable)
class CLOTHINGSYSTEMRUNTIMENV_API UClothingSimulationInteractorNv : public UClothingSimulationInteractor {
    GENERATED_BODY()
public:
    UClothingSimulationInteractorNv();
    UFUNCTION(BlueprintCallable)
    void SetAnimDriveDamperStiffness(float InStiffness);
    
};

