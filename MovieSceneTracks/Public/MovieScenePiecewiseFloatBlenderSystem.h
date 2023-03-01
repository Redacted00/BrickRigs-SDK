#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=MovieScene -ObjectName=MovieSceneBlenderSystem -FallbackName=MovieSceneBlenderSystem
//CROSS-MODULE INCLUDE V2: -ModuleName=MovieScene -ObjectName=MovieSceneFloatDecomposer -FallbackName=MovieSceneFloatDecomposer
#include "MovieScenePiecewiseFloatBlenderSystem.generated.h"

UCLASS(Blueprintable)
class MOVIESCENETRACKS_API UMovieScenePiecewiseFloatBlenderSystem : public UMovieSceneBlenderSystem, public IMovieSceneFloatDecomposer {
    GENERATED_BODY()
public:
    UMovieScenePiecewiseFloatBlenderSystem();
    
    // Fix for true pure virtual functions not being implemented
};

