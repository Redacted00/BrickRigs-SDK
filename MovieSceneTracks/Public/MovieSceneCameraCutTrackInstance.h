#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=MovieScene -ObjectName=MovieSceneTrackInstance -FallbackName=MovieSceneTrackInstance
#include "MovieSceneCameraCutTrackInstance.generated.h"

UCLASS(Blueprintable, NonTransient)
class UMovieSceneCameraCutTrackInstance : public UMovieSceneTrackInstance {
    GENERATED_BODY()
public:
    UMovieSceneCameraCutTrackInstance();
};

