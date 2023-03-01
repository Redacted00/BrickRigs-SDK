#pragma once
#include "CoreMinimal.h"
#include "MovieScenePropertySystem.h"
#include "MovieSceneEnumPropertySystem.generated.h"

UCLASS(Blueprintable)
class MOVIESCENETRACKS_API UMovieSceneEnumPropertySystem : public UMovieScenePropertySystem {
    GENERATED_BODY()
public:
    UMovieSceneEnumPropertySystem();
};

