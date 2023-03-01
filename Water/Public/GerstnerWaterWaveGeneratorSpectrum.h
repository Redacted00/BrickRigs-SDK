#pragma once
#include "CoreMinimal.h"
#include "EWaveSpectrumType.h"
#include "GerstnerWaterWaveGeneratorBase.h"
#include "GerstnerWaveOctave.h"
#include "GerstnerWaterWaveGeneratorSpectrum.generated.h"

UCLASS(Blueprintable, EditInlineNew, HideDropdown, MinimalAPI)
class UGerstnerWaterWaveGeneratorSpectrum : public UGerstnerWaterWaveGeneratorBase {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    EWaveSpectrumType SpectrumType;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FGerstnerWaveOctave> Octaves;
    
    UGerstnerWaterWaveGeneratorSpectrum();
};

