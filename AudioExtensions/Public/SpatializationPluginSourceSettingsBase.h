#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=CoreUObject -ObjectName=Object -FallbackName=Object
#include "SpatializationPluginSourceSettingsBase.generated.h"

UCLASS(Abstract, Blueprintable, EditInlineNew)
class AUDIOEXTENSIONS_API USpatializationPluginSourceSettingsBase : public UObject {
    GENERATED_BODY()
public:
    USpatializationPluginSourceSettingsBase();
};

