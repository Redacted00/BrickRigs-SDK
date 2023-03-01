#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=MovieScene -ObjectName=MovieSceneEntitySystem -FallbackName=MovieSceneEntitySystem
#include "MovieSceneQuaternionInterpolationRotationSystem.generated.h"

UCLASS(Blueprintable)
class MOVIESCENETRACKS_API UMovieSceneQuaternionInterpolationRotationSystem : public UMovieSceneEntitySystem {
    GENERATED_BODY()
public:
    UMovieSceneQuaternionInterpolationRotationSystem();
};

