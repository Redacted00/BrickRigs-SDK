#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=Engine -ObjectName=Actor -FallbackName=Actor
#include "ENiagaraPreviewGridResetMode.h"
#include "Templates/SubclassOf.h"
#include "NiagaraPreviewGrid.generated.h"

class ANiagaraPreviewBase;
class UChildActorComponent;
class UNiagaraComponent;
class UNiagaraPreviewAxis;
class UNiagaraSystem;

UCLASS(Blueprintable)
class ANiagaraPreviewGrid : public AActor {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UNiagaraSystem* System;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    ENiagaraPreviewGridResetMode ResetMode;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UNiagaraPreviewAxis* PreviewAxisX;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UNiagaraPreviewAxis* PreviewAxisY;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TSubclassOf<ANiagaraPreviewBase> PreviewClass;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float SpacingX;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float SpacingY;
    
private:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    int32 NumX;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    int32 NumY;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, Transient, meta=(AllowPrivateAccess=true))
    TArray<UChildActorComponent*> PreviewComponents;
    
public:
    ANiagaraPreviewGrid();
    UFUNCTION(BlueprintCallable)
    void SetPaused(bool bPaused);
    
    UFUNCTION(BlueprintCallable)
    void GetPreviews(TArray<UNiagaraComponent*>& OutPreviews);
    
    UFUNCTION(BlueprintCallable)
    void DeactivatePreviews();
    
    UFUNCTION(BlueprintCallable)
    void ActivatePreviews(bool bReset);
    
};

