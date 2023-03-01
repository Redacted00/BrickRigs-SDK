#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=MovieScene -ObjectName=MovieSceneSection -FallbackName=MovieSceneSection
#include "MovieSceneCameraShakeSourceTriggerChannel.h"
#include "MovieSceneCameraShakeSourceTriggerSection.generated.h"

UCLASS(Blueprintable, MinimalAPI)
class UMovieSceneCameraShakeSourceTriggerSection : public UMovieSceneSection {
    GENERATED_BODY()
public:
private:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FMovieSceneCameraShakeSourceTriggerChannel Channel;
    
public:
    UMovieSceneCameraShakeSourceTriggerSection();
};

