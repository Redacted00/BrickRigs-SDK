#pragma once
#include "CoreMinimal.h"
#include "LiveLinkCurveConversionSettings.h"
#include "LiveLinkSourceSettings.h"
#include "LiveLinkCurveRemapSettings.generated.h"

UCLASS(Blueprintable, Config=Engine, DefaultConfig)
class LIVELINKINTERFACE_API ULiveLinkCurveRemapSettings : public ULiveLinkSourceSettings {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, Config, EditAnywhere, meta=(AllowPrivateAccess=true))
    FLiveLinkCurveConversionSettings CurveConversionSettings;
    
    ULiveLinkCurveRemapSettings();
};

