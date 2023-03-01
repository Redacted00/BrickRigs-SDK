#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=CoreUObject -ObjectName=Object -FallbackName=Object
#include "ClothSharedSimConfigBase.generated.h"

UCLASS(Abstract, Blueprintable, Deprecated, NotPlaceable)
class CLOTHINGSYSTEMRUNTIMEINTERFACE_API UDEPRECATED_ClothSharedSimConfigBase : public UObject {
    GENERATED_BODY()
public:
    UDEPRECATED_ClothSharedSimConfigBase();
};

