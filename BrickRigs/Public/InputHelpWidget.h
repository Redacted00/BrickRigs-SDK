#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=UMG -ObjectName=UserWidget -FallbackName=UserWidget
#include "InputHelpWidget.generated.h"

class UInputActionListWidget;
class UWidget;

UCLASS(Abstract, Blueprintable, EditInlineNew)
class BRICKRIGS_API UInputHelpWidget : public UUserWidget {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UInputActionListWidget* ActionListWidget;
    
public:
    UInputHelpWidget();
    UFUNCTION(BlueprintCallable)
    void ToggleInputHelpOpen();
    
    UFUNCTION(BlueprintCallable)
    void OpenInputHelp();
    
protected:
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void OnFadeOut();
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void OnFadeIn();
    
    UFUNCTION(BlueprintCallable)
    void OnFadedOut();
    
public:
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    UWidget* GetWidgetToFocus() const;
    
    UFUNCTION(BlueprintCallable)
    bool CloseInputHelp();
    
};

