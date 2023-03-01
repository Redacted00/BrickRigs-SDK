#include "MovieSceneTangentData.h"

FMovieSceneTangentData::FMovieSceneTangentData() {
    this->ArriveTangent = 0.00f;
    this->LeaveTangent = 0.00f;
    this->ArriveTangentWeight = 0.00f;
    this->LeaveTangentWeight = 0.00f;
    this->TangentWeightMode = RCTWM_WeightedNone;
}

