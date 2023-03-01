#include "NiagaraDataInterfaceRenderTarget2D.h"

UNiagaraDataInterfaceRenderTarget2D::UNiagaraDataInterfaceRenderTarget2D() {
    this->MipMapGeneration = ENiagaraMipMapGeneration::Disabled;
    this->OverrideRenderTargetFormat = RTF_R8;
    this->bInheritUserParameterSettings = false;
    this->bOverrideFormat = false;
}

