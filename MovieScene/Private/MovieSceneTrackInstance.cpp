#include "MovieSceneTrackInstance.h"

UMovieSceneTrackInstance::UMovieSceneTrackInstance() {
    this->AnimatedObject = NULL;
    this->bIsMasterTrackInstance = false;
    this->Linker = NULL;
}

