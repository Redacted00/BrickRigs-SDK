#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=UMG -ObjectName=UserWidget -FallbackName=UserWidget
#include "EInputActionListMode.h"
#include "InputActionCategoryWidget.generated.h"

class UInputCategory;
class UWidget;

UCLASS(Abstract, Blueprintable, EditInlineNew)
class BRICKRIGS_API UInputActionCategoryWidget : public UUserWidget {
    GENERATED_BODY()
public:
private:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    UInputCategory* InputCategory;
    
public:
    UInputActionCategoryWidget();
protected:
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void UpdateIsSelected(bool bNewSelected);
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void UpdateInputActionListMode(EInputActionListMode NewMode);
    
    UFUNCTION(BlueprintCallable)
    void OpenCategory();
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void InitializeCategory(const FText& InCategoryName);
    
public:
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    UWidget* GetWidgetToFocus() const;
    
};

