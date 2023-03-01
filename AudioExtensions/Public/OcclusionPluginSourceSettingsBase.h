#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=CoreUObject -ObjectName=Object -FallbackName=Object
#include "OcclusionPluginSourceSettingsBase.generated.h"

UCLASS(Abstract, Blueprintable, EditInlineNew)
class AUDIOEXTENSIONS_API UOcclusionPluginSourceSettingsBase : public UObject {
    GENERATED_BODY()
public:
    UOcclusionPluginSourceSettingsBase();
};

