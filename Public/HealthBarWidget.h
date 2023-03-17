#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=UMG -ObjectName=UserWidget -FallbackName=UserWidget
#include "ECharacterHealingState.h"
#include "EHUDVisibility.h"
#include "HealthBarWidget.generated.h"

UCLASS(Abstract, Blueprintable, EditInlineNew)
class BRICKRIGS_API UHealthBarWidget : public UUserWidget {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float HealthInterpSpeed;
    
public:
    UHealthBarWidget();
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void UpdateHealth(float NewHealth);
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void UpdateHealingState(ECharacterHealingState NewState);
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void UpdateCanBeDamaged(bool bNewCanBeDamaged);
    
private:
    UFUNCTION(BlueprintCallable)
    void OnHUDVisibilityChanged(EHUDVisibility NewVisibility);
    
};

