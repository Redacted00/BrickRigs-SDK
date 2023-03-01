#include "NiagaraRibbonUVSettings.h"

FNiagaraRibbonUVSettings::FNiagaraRibbonUVSettings() {
    this->DistributionMode = ENiagaraRibbonUVDistributionMode::ScaledUniformly;
    this->LeadingEdgeMode = ENiagaraRibbonUVEdgeMode::SmoothTransition;
    this->TrailingEdgeMode = ENiagaraRibbonUVEdgeMode::SmoothTransition;
    this->TilingLength = 0.00f;
    this->bEnablePerParticleUOverride = false;
    this->bEnablePerParticleVRangeOverride = false;
}

