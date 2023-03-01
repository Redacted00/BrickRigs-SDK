#include "MovieSceneCameraShakeSourceTrigger.h"

FMovieSceneCameraShakeSourceTrigger::FMovieSceneCameraShakeSourceTrigger() {
    this->ShakeClass = NULL;
    this->PlayScale = 0.00f;
    this->PlaySpace = ECameraShakePlaySpace::CameraLocal;
}

