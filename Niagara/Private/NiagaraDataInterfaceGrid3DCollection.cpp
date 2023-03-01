#include "NiagaraDataInterfaceGrid3DCollection.h"

class UNiagaraComponent;
class UVolumeTexture;

void UNiagaraDataInterfaceGrid3DCollection::GetTextureSize(const UNiagaraComponent* Component, int32& SizeX, int32& SizeY, int32& SizeZ) {
}

void UNiagaraDataInterfaceGrid3DCollection::GetRawTextureSize(const UNiagaraComponent* Component, int32& SizeX, int32& SizeY, int32& SizeZ) {
}

bool UNiagaraDataInterfaceGrid3DCollection::FillVolumeTexture(const UNiagaraComponent* Component, UVolumeTexture* Dest, int32 AttributeIndex) {
    return false;
}

bool UNiagaraDataInterfaceGrid3DCollection::FillRawVolumeTexture(const UNiagaraComponent* Component, UVolumeTexture* Dest, int32& TilesX, int32& TilesY, int32& TileZ) {
    return false;
}

UNiagaraDataInterfaceGrid3DCollection::UNiagaraDataInterfaceGrid3DCollection() {
    this->NumAttributes = 1;
    this->OverrideBufferFormat = ENiagaraGpuBufferFormat::Float;
    this->bOverrideFormat = false;
}

