#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=CoreUObject -ObjectName=Object -FallbackName=Object
//CROSS-MODULE INCLUDE V2: -ModuleName=MovieScene -ObjectName=MovieSceneObjectBindingID -FallbackName=MovieSceneObjectBindingID
#include "LevelSequenceDirector.generated.h"

class AActor;
class ULevelSequencePlayer;
class UMovieSceneSequence;

UCLASS(Blueprintable)
class LEVELSEQUENCE_API ULevelSequenceDirector : public UObject {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    ULevelSequencePlayer* Player;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 SubSequenceID;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 MovieScenePlayerIndex;
    
    ULevelSequenceDirector();
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void OnCreated();
    
    UFUNCTION(BlueprintCallable)
    UMovieSceneSequence* GetSequence();
    
    UFUNCTION(BlueprintCallable)
    TArray<UObject*> GetBoundObjects(FMovieSceneObjectBindingID ObjectBinding);
    
    UFUNCTION(BlueprintCallable)
    UObject* GetBoundObject(FMovieSceneObjectBindingID ObjectBinding);
    
    UFUNCTION(BlueprintCallable)
    TArray<AActor*> GetBoundActors(FMovieSceneObjectBindingID ObjectBinding);
    
    UFUNCTION(BlueprintCallable)
    AActor* GetBoundActor(FMovieSceneObjectBindingID ObjectBinding);
    
};

