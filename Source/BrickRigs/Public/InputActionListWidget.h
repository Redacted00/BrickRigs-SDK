#pragma once
#include "CoreMinimal.h"
#include "Blueprint/UserWidget.h"
#include "EInputActionListMode.h"
#include "Templates/SubclassOf.h"
#include "InputActionListWidget.generated.h"

class UBindKeyPopupWidget;
class UGridPanel;
class UInputActionCategoryWidget;
class UInputActionWidget;
class UInputCategory;
class UWidget;

UCLASS(Abstract, Blueprintable, EditInlineNew)
class BRICKRIGS_API UInputActionListWidget : public UUserWidget {
    GENERATED_BODY()
public:
    DECLARE_DYNAMIC_MULTICAST_DELEGATE_TwoParams(FOnActionTriggered, const FName&, ActionName, bool, bReleased);
    
private:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, Transient, meta=(AllowPrivateAccess=true))
    TArray<UInputActionCategoryWidget*> CategoryWidgets;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, Transient, meta=(AllowPrivateAccess=true))
    TArray<UInputActionWidget*> ActionWidgets;
    
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UGridPanel* MainGridPanel;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TSubclassOf<UInputActionCategoryWidget> CategoryWidgetClass;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TSubclassOf<UInputActionWidget> ActionWidgetClass;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TSoftClassPtr<UBindKeyPopupWidget> BindKeyPopupClass;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<UInputCategory*> InputCategories;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    EInputActionListMode InputActionListMode;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float QuickAccessDisplayTime;
    
public:
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FOnActionTriggered OnActionTriggeredDelegate;
    
    UInputActionListWidget();
protected:
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void UpdateInputActionListMode(EInputActionListMode NewMode);
    
public:
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    UWidget* GetWidgetToFocus() const;
    
protected:
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void FadeIn();
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    void AddCategoryWidget(UInputActionCategoryWidget* Widget, int32 CategoryIndex);
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    void AddActionWidget(UInputActionWidget* Widget, int32 ActionIndex);
    
};

