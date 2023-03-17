#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=UMG -ObjectName=UserWidget -FallbackName=UserWidget
#include "FadingPanelWidget.generated.h"

class UNamedSlot;

UCLASS(Abstract, Blueprintable, EditInlineNew)
class BRICKRIGS_API UFadingPanelWidget : public UUserWidget {
    GENERATED_BODY()
public:
    DECLARE_DYNAMIC_MULTICAST_DELEGATE(FOnFadedOut);
    
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UNamedSlot* ContentSlot;
    
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float FadeTime;
    
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FOnFadedOut OnFadedOutDelegate;
    
    UFadingPanelWidget();
protected:
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    void UpdateFadeAnimation(float FadeAmount);
    
public:
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool IsFadingOut() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool IsFadingIn() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool IsFadedIn() const;
    
    UFUNCTION(BlueprintCallable)
    void FadeOutTimer();
    
    UFUNCTION(BlueprintCallable)
    void FadeOut(bool bImmediate);
    
    UFUNCTION(BlueprintCallable)
    void FadeInTimer();
    
    UFUNCTION(BlueprintCallable)
    void FadeIn(bool bImmediate);
    
};

