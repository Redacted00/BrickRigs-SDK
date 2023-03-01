#include "RetainerBox.h"

class UMaterialInstanceDynamic;
class UMaterialInterface;

void URetainerBox::SetTextureParameter(FName NewTextureParameter) {
}

void URetainerBox::SetRetainRendering(bool bInRetainRendering) {
}

void URetainerBox::SetRenderingPhase(int32 RenderPhase, int32 TotalPhases) {
}

void URetainerBox::SetEffectMaterial(UMaterialInterface* NewEffectMaterial) {
}

void URetainerBox::RequestRender() {
}

UMaterialInstanceDynamic* URetainerBox::GetEffectMaterial() const {
    return NULL;
}

URetainerBox::URetainerBox() {
    this->bRetainRender = true;
    this->RenderOnInvalidation = false;
    this->RenderOnPhase = true;
    this->Phase = 0;
    this->PhaseCount = 1;
    this->EffectMaterial = NULL;
    this->TextureParameter = TEXT("Texture");
}

