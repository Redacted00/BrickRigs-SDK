#pragma once
#include "CoreMinimal.h"
#include "Sound/SoundNode.h"
#include "SoundNodeMotor.generated.h"

class USoundWave;

UCLASS(Blueprintable, EditInlineNew)
class BRICKRIGS_API USoundNodeMotor : public USoundNode {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<USoundWave*> MotorSounds;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float FadeInRatio;
    
    USoundNodeMotor();
};

