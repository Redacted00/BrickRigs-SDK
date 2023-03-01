#include "NiagaraDataInterfaceGrid2DCollection.h"

class UNiagaraComponent;
class UTextureRenderTarget2D;

void UNiagaraDataInterfaceGrid2DCollection::GetTextureSize(const UNiagaraComponent* Component, int32& SizeX, int32& SizeY) {
}

void UNiagaraDataInterfaceGrid2DCollection::GetRawTextureSize(const UNiagaraComponent* Component, int32& SizeX, int32& SizeY) {
}

bool UNiagaraDataInterfaceGrid2DCollection::FillTexture2D(const UNiagaraComponent* Component, UTextureRenderTarget2D* Dest, int32 AttributeIndex) {
    return false;
}

bool UNiagaraDataInterfaceGrid2DCollection::FillRawTexture2D(const UNiagaraComponent* Component, UTextureRenderTarget2D* Dest, int32& TilesX, int32& TilesY) {
    return false;
}

UNiagaraDataInterfaceGrid2DCollection::UNiagaraDataInterfaceGrid2DCollection() {
    this->OverrideBufferFormat = ENiagaraGpuBufferFormat::Float;
    this->bOverrideFormat = false;
}

