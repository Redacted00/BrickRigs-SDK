#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=CoreUObject -ObjectName=Object -FallbackName=Object
#include "NiagaraPerfBaselineStats.h"
#include "NiagaraBaselineController.generated.h"

class ANiagaraPerfBaselineActor;
class UNiagaraEffectType;
class UNiagaraSystem;

UCLASS(Abstract, Blueprintable, EditInlineNew)
class NIAGARA_API UNiagaraBaselineController : public UObject {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float TestDuration;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UNiagaraEffectType* EffectType;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    ANiagaraPerfBaselineActor* Owner;
    
private:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TSoftObjectPtr<UNiagaraSystem> System;
    
public:
    UNiagaraBaselineController();
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    bool OnTickTest();
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    void OnOwnerTick(float DeltaTime);
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    void OnEndTest(FNiagaraPerfBaselineStats Stats);
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    void OnBeginTest();
    
    UFUNCTION(BlueprintCallable)
    UNiagaraSystem* GetSystem();
    
};

