#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=AudioExtensions -ObjectName=SoundfieldEncodingSettingsBase -FallbackName=SoundfieldEncodingSettingsBase
#include "AmbisonicsEncodingSettings.generated.h"

UCLASS(Blueprintable, EditInlineNew)
class SOUNDFIELDS_API UAmbisonicsEncodingSettings : public USoundfieldEncodingSettingsBase {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 AmbisonicsOrder;
    
public:
    UAmbisonicsEncodingSettings();
};

