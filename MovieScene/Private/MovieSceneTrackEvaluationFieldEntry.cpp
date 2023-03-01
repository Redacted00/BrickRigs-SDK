#include "MovieSceneTrackEvaluationFieldEntry.h"

FMovieSceneTrackEvaluationFieldEntry::FMovieSceneTrackEvaluationFieldEntry() {
    this->Section = NULL;
    this->Flags = ESectionEvaluationFlags::None;
    this->LegacySortOrder = 0;
}

