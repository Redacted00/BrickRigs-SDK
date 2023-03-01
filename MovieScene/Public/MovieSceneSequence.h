#pragma once
#include "CoreMinimal.h"
#include "EMovieSceneCompletionMode.h"
#include "EMovieSceneSequenceFlags.h"
#include "MovieSceneObjectBindingID.h"
#include "MovieSceneSignedObject.h"
#include "MovieSceneSequence.generated.h"

class UMovieSceneCompiledData;

UCLASS(Abstract, Blueprintable, MinimalAPI)
class UMovieSceneSequence : public UMovieSceneSignedObject {
    GENERATED_BODY()
public:
private:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UMovieSceneCompiledData* CompiledData;
    
public:
    UPROPERTY(BlueprintReadWrite, Config, EditAnywhere, meta=(AllowPrivateAccess=true))
    EMovieSceneCompletionMode DefaultCompletionMode;
    
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bParentContextsAreSignificant;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bPlayableDirectly;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    EMovieSceneSequenceFlags SequenceFlags;
    
public:
    UMovieSceneSequence();
    UFUNCTION(BlueprintCallable, BlueprintPure)
    TArray<FMovieSceneObjectBindingID> FindBindingsByTag(FName InBindingName) const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    FMovieSceneObjectBindingID FindBindingByTag(FName InBindingName) const;
    
};

