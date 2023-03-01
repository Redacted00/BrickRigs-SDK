#pragma once
#include "CoreMinimal.h"
#include "ENiagaraGpuBufferFormat.h"
#include "NiagaraDataInterfaceGrid3D.h"
#include "NiagaraUserParameterBinding.h"
#include "NiagaraDataInterfaceGrid3DCollection.generated.h"

class UNiagaraComponent;
class UVolumeTexture;

UCLASS(Blueprintable, EditInlineNew)
class NIAGARA_API UNiagaraDataInterfaceGrid3DCollection : public UNiagaraDataInterfaceGrid3D {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 NumAttributes;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FNiagaraUserParameterBinding RenderTargetUserParameter;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    ENiagaraGpuBufferFormat OverrideBufferFormat;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    uint8 bOverrideFormat: 1;
    
    UNiagaraDataInterfaceGrid3DCollection();
    UFUNCTION(BlueprintCallable)
    void GetTextureSize(const UNiagaraComponent* Component, int32& SizeX, int32& SizeY, int32& SizeZ);
    
    UFUNCTION(BlueprintCallable)
    void GetRawTextureSize(const UNiagaraComponent* Component, int32& SizeX, int32& SizeY, int32& SizeZ);
    
    UFUNCTION(BlueprintCallable)
    bool FillVolumeTexture(const UNiagaraComponent* Component, UVolumeTexture* Dest, int32 AttributeIndex);
    
    UFUNCTION(BlueprintCallable)
    bool FillRawVolumeTexture(const UNiagaraComponent* Component, UVolumeTexture* Dest, int32& TilesX, int32& TilesY, int32& TileZ);
    
};

