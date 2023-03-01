#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=CoreUObject -ObjectName=Object -FallbackName=Object
#include "ClothingInteractor.generated.h"

UCLASS(Abstract, Blueprintable)
class CLOTHINGSYSTEMRUNTIMEINTERFACE_API UClothingInteractor : public UObject {
    GENERATED_BODY()
public:
    UClothingInteractor();
};

