#include "MovieSceneSequence.h"

TArray<FMovieSceneObjectBindingID> UMovieSceneSequence::FindBindingsByTag(FName InBindingName) const {
    return TArray<FMovieSceneObjectBindingID>();
}

FMovieSceneObjectBindingID UMovieSceneSequence::FindBindingByTag(FName InBindingName) const {
    return FMovieSceneObjectBindingID{};
}

UMovieSceneSequence::UMovieSceneSequence() {
    this->CompiledData = NULL;
    this->DefaultCompletionMode = EMovieSceneCompletionMode::KeepState;
    this->bParentContextsAreSignificant = false;
    this->bPlayableDirectly = true;
    this->SequenceFlags = EMovieSceneSequenceFlags::None;
}

