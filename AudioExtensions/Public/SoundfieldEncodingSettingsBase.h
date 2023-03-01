#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=CoreUObject -ObjectName=Object -FallbackName=Object
#include "SoundfieldEncodingSettingsBase.generated.h"

UCLASS(Abstract, Blueprintable, EditInlineNew)
class AUDIOEXTENSIONS_API USoundfieldEncodingSettingsBase : public UObject {
    GENERATED_BODY()
public:
    USoundfieldEncodingSettingsBase();
};

