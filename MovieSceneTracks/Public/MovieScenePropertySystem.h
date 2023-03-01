#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=MovieScene -ObjectName=MovieSceneEntitySystem -FallbackName=MovieSceneEntitySystem
//CROSS-MODULE INCLUDE V2: -ModuleName=MovieScene -ObjectName=MovieScenePreAnimatedStateSystemInterface -FallbackName=MovieScenePreAnimatedStateSystemInterface
#include "MovieScenePropertySystem.generated.h"

class UMovieScenePropertyInstantiatorSystem;

UCLASS(Abstract, Blueprintable)
class MOVIESCENETRACKS_API UMovieScenePropertySystem : public UMovieSceneEntitySystem, public IMovieScenePreAnimatedStateSystemInterface {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UMovieScenePropertyInstantiatorSystem* InstantiatorSystem;
    
public:
    UMovieScenePropertySystem();
    
    // Fix for true pure virtual functions not being implemented
};

