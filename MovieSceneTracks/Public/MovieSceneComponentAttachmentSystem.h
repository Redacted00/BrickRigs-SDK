#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=MovieScene -ObjectName=MovieSceneEntityInstantiatorSystem -FallbackName=MovieSceneEntityInstantiatorSystem
//CROSS-MODULE INCLUDE V2: -ModuleName=MovieScene -ObjectName=MovieScenePreAnimatedStateSystemInterface -FallbackName=MovieScenePreAnimatedStateSystemInterface
#include "MovieSceneComponentAttachmentSystem.generated.h"

UCLASS(Blueprintable, MinimalAPI)
class UMovieSceneComponentAttachmentSystem : public UMovieSceneEntityInstantiatorSystem, public IMovieScenePreAnimatedStateSystemInterface {
    GENERATED_BODY()
public:
    UMovieSceneComponentAttachmentSystem();
    
    // Fix for true pure virtual functions not being implemented
};

