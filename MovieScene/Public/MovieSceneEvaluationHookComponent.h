#pragma once
#include "CoreMinimal.h"
#include "MovieSceneEvaluationHookComponent.generated.h"

class IMovieSceneEvaluationHook;
class UMovieSceneEvaluationHook;

USTRUCT(BlueprintType)
struct FMovieSceneEvaluationHookComponent {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TScriptInterface<IMovieSceneEvaluationHook> Interface;
    
    MOVIESCENE_API FMovieSceneEvaluationHookComponent();
};

