#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=CoreUObject -ObjectName=Object -FallbackName=Object
#include "GerstnerWave.h"
#include "GerstnerWaterWaveGeneratorBase.generated.h"

UCLASS(Abstract, Blueprintable, EditInlineNew, MinimalAPI)
class UGerstnerWaterWaveGeneratorBase : public UObject {
    GENERATED_BODY()
public:
    UGerstnerWaterWaveGeneratorBase();
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    void GenerateGerstnerWaves(TArray<FGerstnerWave>& OutWaves) const;
    
};

