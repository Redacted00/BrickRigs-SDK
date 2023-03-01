#pragma once
#include "CoreMinimal.h"
#include "WaterWavesBase.h"
#include "WaterWavesAssetReference.generated.h"

class UWaterWavesAsset;

UCLASS(Blueprintable, EditInlineNew)
class WATER_API UWaterWavesAssetReference : public UWaterWavesBase {
    GENERATED_BODY()
public:
private:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UWaterWavesAsset* WaterWavesAsset;
    
public:
    UWaterWavesAssetReference();
};

