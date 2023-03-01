#pragma once
#include "CoreMinimal.h"
#include "GerstnerWave.h"
#include "WaterWaves.h"
#include "GerstnerWaterWaves.generated.h"

class UGerstnerWaterWaveGeneratorBase;

UCLASS(Blueprintable, EditInlineNew, MinimalAPI)
class UGerstnerWaterWaves : public UWaterWaves {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UGerstnerWaterWaveGeneratorBase* GerstnerWaveGenerator;
    
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FGerstnerWave> GerstnerWaves;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float MaxWaveHeight;
    
public:
    UGerstnerWaterWaves();
};

