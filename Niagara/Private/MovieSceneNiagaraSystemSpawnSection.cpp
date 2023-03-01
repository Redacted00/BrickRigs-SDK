#include "MovieSceneNiagaraSystemSpawnSection.h"

UMovieSceneNiagaraSystemSpawnSection::UMovieSceneNiagaraSystemSpawnSection() {
    this->SectionStartBehavior = ENiagaraSystemSpawnSectionStartBehavior::Activate;
    this->SectionEvaluateBehavior = ENiagaraSystemSpawnSectionEvaluateBehavior::ActivateIfInactive;
    this->SectionEndBehavior = ENiagaraSystemSpawnSectionEndBehavior::SetSystemInactive;
    this->AgeUpdateMode = ENiagaraAgeUpdateMode::TickDeltaTime;
}

