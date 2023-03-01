#include "MovieSceneSpawnable.h"

FMovieSceneSpawnable::FMovieSceneSpawnable() {
    this->bContinuouslyRespawn = false;
    this->bNetAddressableName = false;
    this->bEvaluateTracksWhenNotSpawned = false;
    this->ObjectTemplate = NULL;
    this->Ownership = ESpawnOwnership::InnerSequence;
}

