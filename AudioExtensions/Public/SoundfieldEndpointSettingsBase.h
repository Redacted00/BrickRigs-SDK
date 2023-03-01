#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=CoreUObject -ObjectName=Object -FallbackName=Object
#include "SoundfieldEndpointSettingsBase.generated.h"

UCLASS(Abstract, Blueprintable, EditInlineNew)
class AUDIOEXTENSIONS_API USoundfieldEndpointSettingsBase : public UObject {
    GENERATED_BODY()
public:
    USoundfieldEndpointSettingsBase();
};

