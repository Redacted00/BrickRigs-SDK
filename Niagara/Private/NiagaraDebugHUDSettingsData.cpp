#include "NiagaraDebugHUDSettingsData.h"

FNiagaraDebugHUDSettingsData::FNiagaraDebugHUDSettingsData() {
    this->bEnabled = false;
    this->bValidateSystemSimulationDataBuffers = false;
    this->bValidateParticleDataBuffers = false;
    this->bOverviewEnabled = false;
    this->OverviewFont = ENiagaraDebugHudFont::Small;
    this->bComponentFilterEnabled = false;
    this->bSystemFilterEnabled = false;
    this->bEmitterFilterEnabled = false;
    this->bActorFilterEnabled = false;
    this->SystemDebugVerbosity = ENiagaraDebugHudVerbosity::None;
    this->SystemEmitterVerbosity = ENiagaraDebugHudVerbosity::None;
    this->bSystemShowBounds = false;
    this->bSystemShowActiveOnlyInWorld = false;
    this->bShowSystemVariables = false;
    this->bShowParticleVariables = false;
    this->bEnableGpuParticleReadback = false;
    this->bShowParticlesVariablesWithSystem = false;
    this->bUseMaxParticlesToDisplay = false;
    this->MaxParticlesToDisplay = 0;
    this->PlaybackMode = ENiagaraDebugPlaybackMode::Play;
    this->bPlaybackRateEnabled = false;
    this->PlaybackRate = 0.00f;
    this->bLoopTimeEnabled = false;
    this->LoopTime = 0.00f;
    this->bShowGlobalBudgetInfo = false;
}

