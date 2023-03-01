#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=CoreUObject -ObjectName=Object -FallbackName=Object
#include "AudioAnalyzerAsset.generated.h"

UCLASS(Abstract, Blueprintable, EditInlineNew)
class AUDIOANALYZER_API UAudioAnalyzerAsset : public UObject {
    GENERATED_BODY()
public:
    UAudioAnalyzerAsset();
};

