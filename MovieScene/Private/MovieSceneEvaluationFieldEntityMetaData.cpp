#include "MovieSceneEvaluationFieldEntityMetaData.h"

FMovieSceneEvaluationFieldEntityMetaData::FMovieSceneEvaluationFieldEntityMetaData() {
    this->Flags = ESectionEvaluationFlags::None;
    this->bEvaluateInSequencePreRoll = false;
    this->bEvaluateInSequencePostRoll = false;
}

