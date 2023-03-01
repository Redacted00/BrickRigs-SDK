#pragma once
#include "CoreMinimal.h"
#include "BrickComboBoxItemParams.h"
#include "EValueChangedEventType.h"
#include "PropertyWidget.h"
#include "BoolPropertyWidget.generated.h"

class UBrickCheckBoxWidget;
class UBrickComboBoxWidget;

UCLASS(Abstract, Blueprintable, EditInlineNew)
class BRICKRIGS_API UBoolPropertyWidget : public UPropertyWidget {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UBrickCheckBoxWidget* CheckBox;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UBrickComboBoxWidget* ComboBox;
    
public:
    UBoolPropertyWidget();
private:
    UFUNCTION(BlueprintCallable)
    void OnItemSelected(int32 Item, EValueChangedEventType EventType);
    
    UFUNCTION(BlueprintCallable)
    void OnCheckedStateChanged(bool bNewChecked, EValueChangedEventType EventType);
    
    UFUNCTION(BlueprintCallable)
    void InitializeItem(int32 Item, FBrickComboBoxItemParams& OutParams);
    
};

