#pragma once
#include "CoreMinimal.h"
#include "NiagaraDataInterfaceAudioSubmix.h"
#include "NiagaraDataInterfaceAudioSpectrum.generated.h"

UCLASS(Blueprintable, EditInlineNew)
class NIAGARA_API UNiagaraDataInterfaceAudioSpectrum : public UNiagaraDataInterfaceAudioSubmix {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 Resolution;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float MinimumFrequency;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float MaximumFrequency;
    
    UPROPERTY(AdvancedDisplay, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float NoiseFloorDb;
    
    UNiagaraDataInterfaceAudioSpectrum();
};

