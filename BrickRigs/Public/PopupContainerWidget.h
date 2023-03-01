#pragma once
#include "CoreMinimal.h"
#include "EBrickUIColorStyle.h"
#include "EPopupSizeRule.h"
#include "MainWidgetBase.h"
#include "PopupContainerWidget.generated.h"

class UMenuButtonWidget;
class UPopupParams;
class UPopupWidget;

UCLASS(Abstract, Blueprintable, EditInlineNew)
class BRICKRIGS_API UPopupContainerWidget : public UMainWidgetBase {
    GENERATED_BODY()
public:
private:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    UPopupParams* PopupParams;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, Transient, meta=(AllowPrivateAccess=true))
    UPopupWidget* PopupWidget;
    
public:
    UPopupContainerWidget();
protected:
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void UpdateTitleText(const FText& NewTitle);
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void UpdateContentSlot(bool bShowContent, EPopupSizeRule SizeRule);
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void UpdateColorStyle(EBrickUIColorStyle InColorStyle);
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void UpdateButtonPanelVisibility(bool bNewVisible);
    
public:
    UFUNCTION(BlueprintCallable)
    void SetColorStyle(EBrickUIColorStyle InColorStyle);
    
    UFUNCTION(BlueprintCallable)
    void SetButtonPanelVisibility(bool bNewVisible);
    
protected:
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    UMenuButtonWidget* CreateConfirmButton();
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    UMenuButtonWidget* CreateCancelButton();
    
    UFUNCTION(BlueprintCallable)
    void ConfirmPopup();
    
    UFUNCTION(BlueprintCallable)
    void CancelPopup();
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void AddPopupWidget(UPopupWidget* Widget);
    
};

