#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=UMG -ObjectName=UserWidget -FallbackName=UserWidget
#include "OnClickedMenuButtonDelegate.h"
#include "Templates/SubclassOf.h"
#include "MenuButtonPanelWidget.generated.h"

class UGridPanel;
class UMenuButtonWidget;
class UWidget;

UCLASS(Abstract, Blueprintable, EditInlineNew)
class BRICKRIGS_API UMenuButtonPanelWidget : public UUserWidget {
    GENERATED_BODY()
public:
private:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, Transient, meta=(AllowPrivateAccess=true))
    TArray<UMenuButtonWidget*> Buttons;
    
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UGridPanel* ButtonPanel;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TSubclassOf<UMenuButtonWidget> ButtonClass;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 NumButtonsPerRow;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float ButtonSpacing;
    
public:
    UMenuButtonPanelWidget();
    UFUNCTION(BlueprintCallable)
    void SetNumButtonsPerRow(int32 NewNum);
    
    UFUNCTION(BlueprintCallable)
    void RemoveUnusedButtons();
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    UWidget* GetWidgetToFocus() const;
    
    UFUNCTION(BlueprintCallable)
    UMenuButtonWidget* CreateButton(FText DisplayText, int32 IconIndex, const FOnClickedMenuButton& Delegate);
    
    UFUNCTION(BlueprintCallable)
    void ClearButtons(bool bManualRemove);
    
};

