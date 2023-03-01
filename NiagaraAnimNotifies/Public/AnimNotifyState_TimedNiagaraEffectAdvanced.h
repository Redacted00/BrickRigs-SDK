#pragma once
#include "CoreMinimal.h"
#include "AnimNotifyState_TimedNiagaraEffect.h"
#include "AnimNotifyState_TimedNiagaraEffectAdvanced.generated.h"

class UMeshComponent;

UCLASS(Blueprintable, CollapseCategories, EditInlineNew)
class NIAGARAANIMNOTIFIES_API UAnimNotifyState_TimedNiagaraEffectAdvanced : public UAnimNotifyState_TimedNiagaraEffect {
    GENERATED_BODY()
public:
    UAnimNotifyState_TimedNiagaraEffectAdvanced();
    UFUNCTION(BlueprintCallable, BlueprintPure=false)
    float GetNotifyProgress(UMeshComponent* MeshComp) const;
    
};

