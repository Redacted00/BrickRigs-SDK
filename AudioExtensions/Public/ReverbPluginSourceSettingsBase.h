#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=CoreUObject -ObjectName=Object -FallbackName=Object
#include "ReverbPluginSourceSettingsBase.generated.h"

UCLASS(Abstract, Blueprintable, EditInlineNew)
class AUDIOEXTENSIONS_API UReverbPluginSourceSettingsBase : public UObject {
    GENERATED_BODY()
public:
    UReverbPluginSourceSettingsBase();
};

