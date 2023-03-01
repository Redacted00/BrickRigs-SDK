#include "MovieSceneNiagaraSystemTrackImplementation.h"

FMovieSceneNiagaraSystemTrackImplementation::FMovieSceneNiagaraSystemTrackImplementation() {
    this->SpawnSectionStartBehavior = ENiagaraSystemSpawnSectionStartBehavior::Activate;
    this->SpawnSectionEvaluateBehavior = ENiagaraSystemSpawnSectionEvaluateBehavior::ActivateIfInactive;
    this->SpawnSectionEndBehavior = ENiagaraSystemSpawnSectionEndBehavior::SetSystemInactive;
    this->AgeUpdateMode = ENiagaraAgeUpdateMode::TickDeltaTime;
}

