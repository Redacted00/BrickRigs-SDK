#include "NiagaraSystem.h"

UNiagaraSystem::UNiagaraSystem() {
    this->bDumpDebugSystemInfo = false;
    this->bDumpDebugEmitterInfo = false;
    this->bRequireCurrentFrameData = true;
    this->bFixedBounds = false;
    this->EffectType = NULL;
    this->bOverrideScalabilitySettings = false;
    this->SystemSpawnScript = NULL;
    this->SystemUpdateScript = NULL;
    this->bAutoDeactivate = true;
    this->WarmupTime = 0.00f;
    this->WarmupTickCount = 0;
    this->WarmupTickDelta = 0.07f;
    this->bHasSystemScriptDIsWithPerInstanceData = false;
    this->bNeedsGPUContextInitForDataInterfaces = false;
}

