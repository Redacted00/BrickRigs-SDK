#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=AudioAnalyzer -ObjectName=AudioAnalyzerNRTSettings -FallbackName=AudioAnalyzerNRTSettings
#include "AudioSynesthesiaNRTSettings.generated.h"

UCLASS(Abstract, Blueprintable, EditInlineNew)
class AUDIOSYNESTHESIA_API UAudioSynesthesiaNRTSettings : public UAudioAnalyzerNRTSettings {
    GENERATED_BODY()
public:
    UAudioSynesthesiaNRTSettings();
};

