#include "MovieSceneCameraCutSection.h"

void UMovieSceneCameraCutSection::SetCameraBindingID(const FMovieSceneObjectBindingID& InCameraBindingID) {
}

FMovieSceneObjectBindingID UMovieSceneCameraCutSection::GetCameraBindingID() const {
    return FMovieSceneObjectBindingID{};
}

UMovieSceneCameraCutSection::UMovieSceneCameraCutSection() {
    this->bLockPreviousCamera = false;
    this->bHasInitialCameraCutTransform = false;
}

