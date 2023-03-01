#pragma once
#include "CoreMinimal.h"
#include "NiagaraOutlinerCaptureSettings.generated.h"

USTRUCT(BlueprintType)
struct NIAGARA_API FNiagaraOutlinerCaptureSettings {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bTriggerCapture;
    
    UPROPERTY(Config, EditAnywhere, meta=(AllowPrivateAccess=true))
    uint32 CaptureDelayFrames;
    
    UPROPERTY(BlueprintReadWrite, Config, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bGatherPerfData;
    
    FNiagaraOutlinerCaptureSettings();
};

