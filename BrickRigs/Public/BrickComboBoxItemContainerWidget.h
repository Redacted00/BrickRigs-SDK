#pragma once
#include "CoreMinimal.h"
#include "BrickUserWidget.h"
#include "EBrickUIColorStyle.h"
#include "EBrickUIStyleState.h"
#include "BrickComboBoxItemContainerWidget.generated.h"

class UBrickButtonWidget;
class UBrickComboBoxItemWidget;
class UWidget;

UCLASS(Abstract, Blueprintable, EditInlineNew)
class BRICKRIGS_API UBrickComboBoxItemContainerWidget : public UBrickUserWidget {
    GENERATED_BODY()
public:
private:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, Transient, meta=(AllowPrivateAccess=true))
    UBrickComboBoxItemWidget* ItemWidget;
    
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UBrickButtonWidget* Button;
    
public:
    UBrickComboBoxItemContainerWidget();
protected:
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void UpdateIsSelected(bool bNewSelected);
    
public:
    UFUNCTION(BlueprintCallable)
    void SelectItem();
    
private:
    UFUNCTION(BlueprintCallable)
    void OnUpdateButtonContentStyle(EBrickUIColorStyle InColorStyle, EBrickUIStyleState InContentStyleState);
    
public:
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    UWidget* GetWidgetToFocus() const;
    
protected:
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void AddItemWidget(UBrickComboBoxItemWidget* Widget);
    
};

