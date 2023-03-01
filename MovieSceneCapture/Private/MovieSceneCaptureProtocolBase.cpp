#include "MovieSceneCaptureProtocolBase.h"

bool UMovieSceneCaptureProtocolBase::IsCapturing() const {
    return false;
}

EMovieSceneCaptureProtocolState UMovieSceneCaptureProtocolBase::GetState() const {
    return EMovieSceneCaptureProtocolState::Idle;
}

UMovieSceneCaptureProtocolBase::UMovieSceneCaptureProtocolBase() {
    this->State = EMovieSceneCaptureProtocolState::Idle;
}

