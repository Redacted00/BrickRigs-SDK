#include "BrickCameraManager.h"

ABrickCameraManager::ABrickCameraManager() {
    this->AirNoiseAudioComponent = NULL;
    this->FocusInterpSpeed = 256.00f;
    this->HitEffectLength = 0.25f;
    this->HitEffectFalloff = 2.00f;
    this->HitEffectFOVScale = 0.03f;
    this->HitEffectMaxFlinchAngle = 1.00f;
    this->HitEffectFilmToe = 0.80f;
    this->RestrictedAreaEffectInterpSpeed = 4.00f;
    this->RestrictedAreaEffectSaturation = 0.00f;
    this->AirNoiseSound = NULL;
    this->AirNoiseVolumeInterpSpeed = 4.00f;
}

