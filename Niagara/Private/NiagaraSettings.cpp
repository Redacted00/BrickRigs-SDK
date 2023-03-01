#include "NiagaraSettings.h"

UNiagaraSettings::UNiagaraSettings() {
    this->QualityLevels.AddDefaulted(5);
    this->DefaultRenderTargetFormat = RTF_RGBA16f;
    this->DefaultGridFormat = ENiagaraGpuBufferFormat::HalfFloat;
    this->DefaultRendererMotionVectorSetting = ENiagaraDefaultRendererMotionVectorSetting::Precise;
    this->NDISkelMesh_GpuMaxInfluences = ENDISkelMesh_GpuMaxInfluences::Unlimited;
    this->NDISkelMesh_GpuUniformSamplingFormat = ENDISkelMesh_GpuUniformSamplingFormat::Full;
    this->NDISkelMesh_AdjacencyTriangleIndexFormat = ENDISkelMesh_AdjacencyTriangleIndexFormat::Full;
    this->DefaultEffectTypePtr = NULL;
}

