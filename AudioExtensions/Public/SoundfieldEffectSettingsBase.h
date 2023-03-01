#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=CoreUObject -ObjectName=Object -FallbackName=Object
#include "SoundfieldEffectSettingsBase.generated.h"

UCLASS(Abstract, Blueprintable, EditInlineNew)
class AUDIOEXTENSIONS_API USoundfieldEffectSettingsBase : public UObject {
    GENERATED_BODY()
public:
    USoundfieldEffectSettingsBase();
};

