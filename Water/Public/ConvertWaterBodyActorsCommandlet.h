#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=Engine -ObjectName=Commandlet -FallbackName=Commandlet
#include "ConvertWaterBodyActorsCommandlet.generated.h"

UCLASS(Blueprintable, MinimalAPI, NonTransient)
class UConvertWaterBodyActorsCommandlet : public UCommandlet {
    GENERATED_BODY()
public:
    UConvertWaterBodyActorsCommandlet();
};

