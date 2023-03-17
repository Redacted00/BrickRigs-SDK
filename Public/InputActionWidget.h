#pragma once
#include "CoreMinimal.h"
#include "BrickUserWidget.h"
#include "DisplayInfo.h"
#include "EInputActionListMode.h"
#include "InputActionWidget.generated.h"

class UBrickButtonWidget;
class UControlHintWidget;
class UWidget;

UCLASS(Abstract, Blueprintable, EditInlineNew)
class BRICKRIGS_API UInputActionWidget : public UBrickUserWidget {
    GENERATED_BODY()
public:
    DECLARE_DYNAMIC_DELEGATE_RetVal(bool, FIsActionEnabledNoParams);
    DECLARE_DYNAMIC_DELEGATE_RetVal_OneParam(bool, FIsActionEnabled, bool, bIsSecondaryAction);
    DECLARE_DYNAMIC_DELEGATE_RetVal(FText, FGetValueTextDelegate);
    DECLARE_DYNAMIC_DELEGATE_OneParam(FAxisDelegate, float, NewValue);
    DECLARE_DYNAMIC_DELEGATE(FActionDelegate);
    
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UBrickButtonWidget* Button;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UControlHintWidget* ControlHintWidget;
    
public:
    UInputActionWidget();
protected:
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    void UpdateIsActionEnabled(bool bInCanBeExecuted);
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void UpdateInputActionListMode(EInputActionListMode NewMode);
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    void UpdateDisplayInfo(const FDisplayInfo& InDisplayInfo);
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void UpdateCanActionBeRebound(bool bInCanBeRebound);
    
    UFUNCTION(BlueprintCallable)
    void RebindAction();
    
    UFUNCTION(BlueprintCallable)
    void OnActionReleased();
    
    UFUNCTION(BlueprintCallable)
    void OnActionPressed();
    
    UFUNCTION(BlueprintCallable)
    void OnActionClicked();
    
public:
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    UWidget* GetWidgetToFocus() const;
    
};

