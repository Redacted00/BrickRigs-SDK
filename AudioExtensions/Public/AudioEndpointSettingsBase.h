#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=CoreUObject -ObjectName=Object -FallbackName=Object
#include "AudioEndpointSettingsBase.generated.h"

UCLASS(Abstract, Blueprintable, EditInlineNew)
class AUDIOEXTENSIONS_API UAudioEndpointSettingsBase : public UObject {
    GENERATED_BODY()
public:
    UAudioEndpointSettingsBase();
};

