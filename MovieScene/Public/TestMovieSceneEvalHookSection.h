#pragma once
#include "CoreMinimal.h"
#include "MovieSceneHookSection.h"
#include "TestMovieSceneEvalHookSection.generated.h"

UCLASS(Blueprintable, MinimalAPI)
class UTestMovieSceneEvalHookSection : public UMovieSceneHookSection {
    GENERATED_BODY()
public:
    UTestMovieSceneEvalHookSection();
};

