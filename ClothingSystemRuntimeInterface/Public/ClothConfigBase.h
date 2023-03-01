#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=CoreUObject -ObjectName=Object -FallbackName=Object
#include "ClothConfigBase.generated.h"

UCLASS(Abstract, Blueprintable)
class CLOTHINGSYSTEMRUNTIMEINTERFACE_API UClothConfigBase : public UObject {
    GENERATED_BODY()
public:
    UClothConfigBase();
};

