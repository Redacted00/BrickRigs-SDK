#include "MovieSceneSequencePlaybackParams.h"

FMovieSceneSequencePlaybackParams::FMovieSceneSequencePlaybackParams() {
    this->Time = 0.00f;
    this->PositionType = EMovieScenePositionType::Frame;
    this->UpdateMethod = EUpdatePositionMethod::Play;
}

