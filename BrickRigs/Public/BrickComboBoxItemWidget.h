#pragma once
#include "CoreMinimal.h"
#include "BrickComboBoxItemParams.h"
#include "EBrickUIColorStyle.h"
#include "EBrickUIStyleState.h"
#include "RadioButtonWidget.h"
#include "BrickComboBoxItemWidget.generated.h"

class UBrickImage;
class UBrickTextBlock;

UCLASS(Abstract, Blueprintable, EditInlineNew)
class BRICKRIGS_API UBrickComboBoxItemWidget : public URadioButtonWidget {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UBrickTextBlock* TextBlock;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UBrickImage* IconImage;
    
public:
    UBrickComboBoxItemWidget();
protected:
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    void UpdateTextVisibility(bool bNewVisible);
    
public:
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    void UpdateItemStyle(EBrickUIColorStyle InColorStyle, EBrickUIStyleState InStyleState);
    
protected:
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    void UpdateIconVisibility(bool bNewVisible);
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void SetNoItemBrush();
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    void InitializeItem(int32 InItem, const FBrickComboBoxItemParams& Params);
    
};

