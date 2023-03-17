#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=UMG -ObjectName=UserWidget -FallbackName=UserWidget
#include "EPopupResult.h"
#include "EPopupSizeRule.h"
#include "PopupWidget.generated.h"

class UMenuButtonPanelWidget;
class UPopupContainerWidget;
class UWidget;

UCLASS(Abstract, Blueprintable, EditInlineNew)
class BRICKRIGS_API UPopupWidget : public UUserWidget {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FText TitleText;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    EPopupSizeRule PopupSizeRule;
    
public:
    UPopupWidget();
    UFUNCTION(BlueprintCallable)
    void UpdatePopupTitle();
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    bool StepBack();
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    bool ShouldBeVisibleInPopupContainer() const;
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    UWidget* GetWidgetToFocus();
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    FText GetPopupTitle() const;
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    EPopupSizeRule GetPopupSizeRule() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    UPopupContainerWidget* GetPopupContainer() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    UMenuButtonPanelWidget* GetButtonPanel() const;
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    bool ConfirmPopup();
    
    UFUNCTION(BlueprintCallable)
    void ClosePopup(EPopupResult Result);
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    bool CanPopupBeClosed() const;
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    bool CancelPopup();
    
};

