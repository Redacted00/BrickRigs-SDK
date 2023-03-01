#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=UMG -ObjectName=UserWidget -FallbackName=UserWidget
#include "RestrictedAreaWidget.generated.h"

UCLASS(Abstract, Blueprintable, EditInlineNew)
class BRICKRIGS_API URestrictedAreaWidget : public UUserWidget {
    GENERATED_BODY()
public:
    URestrictedAreaWidget();
protected:
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void UpdateTimerRemaining(float TimeRemaining);
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void PlayFadeOutAnim();
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void PlayFadeInAnim();
    
public:
    UFUNCTION(BlueprintCallable)
    void OnFadedOut();
    
};

