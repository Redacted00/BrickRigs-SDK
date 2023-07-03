#pragma once
#include "CoreMinimal.h"
#include "Blueprint/UserWidget.h"
#include "MainWidgetBase.generated.h"

class UFadingPanelWidget;
class UMenuButtonPanelWidget;
class UWidget;
class UWindowManagerWidget;

UCLASS(Abstract, Blueprintable, EditInlineNew)
class BRICKRIGS_API UMainWidgetBase : public UUserWidget {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UFadingPanelWidget* FadingPanel;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UMenuButtonPanelWidget* ButtonPanel;
    
public:
    UMainWidgetBase();
private:
    UFUNCTION(BlueprintCallable)
    void OnFadedOut();
    
public:
    UFUNCTION(BlueprintCallable, BlueprintPure)
    UWindowManagerWidget* GetWindowManager() const;
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    UWidget* GetWidgetToFocus() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    UMenuButtonPanelWidget* GetButtonPanel() const;
    
};

