#pragma once
#include "CoreMinimal.h"
#include "UObject/NoExportTypes.h"
#include "Sound/SoundNode.h"
#include "SoundNodeFirearm.generated.h"

class USoundWave;

UCLASS(Blueprintable, EditInlineNew)
class BRICKRIGS_API USoundNodeFirearm : public USoundNode {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    USoundWave* FireSound;
    
    UPROPERTY(EditAnywhere, meta=(AllowPrivateAccess=true))
    FFloatInterval PitchModulation;
    
    UPROPERTY(EditAnywhere, meta=(AllowPrivateAccess=true))
    FFloatInterval VolumeModulation;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float ModulationPeriod;
    
public:
    USoundNodeFirearm();
};

