#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=CoreUObject -ObjectName=Interface -FallbackName=Interface
#include "MovieSceneEvaluationHook.generated.h"

UINTERFACE()
class MOVIESCENE_API UMovieSceneEvaluationHook : public UInterface {
    GENERATED_BODY()
};

class MOVIESCENE_API IMovieSceneEvaluationHook : public IInterface {
    GENERATED_BODY()
public:
};

