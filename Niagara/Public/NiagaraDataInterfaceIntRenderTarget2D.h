#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=CoreUObject -ObjectName=IntPoint -FallbackName=IntPoint
#include "NiagaraDataInterfaceRWBase.h"
#include "NiagaraUserParameterBinding.h"
#include "NiagaraDataInterfaceIntRenderTarget2D.generated.h"

class UTextureRenderTarget2D;

UCLASS(Blueprintable, EditInlineNew)
class NIAGARA_API UNiagaraDataInterfaceIntRenderTarget2D : public UNiagaraDataInterfaceRWBase {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FIntPoint Size;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FNiagaraUserParameterBinding RenderTargetUserParameter;
    
protected:
    UPROPERTY(DuplicateTransient, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    TMap<uint64, UTextureRenderTarget2D*> ManagedRenderTargets;
    
public:
    UNiagaraDataInterfaceIntRenderTarget2D();
};

