#include "MotoSynthRuntimeSettings.h"

FMotoSynthRuntimeSettings::FMotoSynthRuntimeSettings() {
    this->bSynthToneEnabled = false;
    this->SynthToneVolume = 0.00f;
    this->SynthToneFilterFrequency = 0.00f;
    this->SynthOctaveShift = 0;
    this->bGranularEngineEnabled = false;
    this->GranularEngineVolume = 0.00f;
    this->GranularEnginePitchScale = 0.00f;
    this->NumSamplesToCrossfadeBetweenGrains = 0;
    this->NumGrainTableEntriesPerGrain = 0;
    this->GrainTableRandomOffsetForConstantRPMs = 0;
    this->GrainCrossfadeSamplesForConstantRPMs = 0;
    this->AccelerationSource = NULL;
    this->DecelerationSource = NULL;
    this->bStereoWidenerEnabled = false;
    this->StereoDelayMsec = 0.00f;
    this->StereoFeedback = 0.00f;
    this->StereoWidenerWetlevel = 0.00f;
    this->StereoWidenerDryLevel = 0.00f;
    this->StereoWidenerDelayRatio = 0.00f;
    this->bStereoWidenerFilterEnabled = false;
    this->StereoWidenerFilterFrequency = 0.00f;
    this->StereoWidenerFilterQ = 0.00f;
}

