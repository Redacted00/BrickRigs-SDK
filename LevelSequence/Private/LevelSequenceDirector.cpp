#include "LevelSequenceDirector.h"

class AActor;
class UMovieSceneSequence;
class UObject;


UMovieSceneSequence* ULevelSequenceDirector::GetSequence() {
    return NULL;
}

TArray<UObject*> ULevelSequenceDirector::GetBoundObjects(FMovieSceneObjectBindingID ObjectBinding) {
    return TArray<UObject*>();
}

UObject* ULevelSequenceDirector::GetBoundObject(FMovieSceneObjectBindingID ObjectBinding) {
    return NULL;
}

TArray<AActor*> ULevelSequenceDirector::GetBoundActors(FMovieSceneObjectBindingID ObjectBinding) {
    return TArray<AActor*>();
}

AActor* ULevelSequenceDirector::GetBoundActor(FMovieSceneObjectBindingID ObjectBinding) {
    return NULL;
}

ULevelSequenceDirector::ULevelSequenceDirector() {
    this->Player = NULL;
    this->SubSequenceID = 0;
    this->MovieScenePlayerIndex = 0;
}

