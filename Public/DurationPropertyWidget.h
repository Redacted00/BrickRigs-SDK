#pragma once
#include "CoreMinimal.h"
#include "BrickComboBoxItemParams.h"
#include "EValueChangedEventType.h"
#include "PropertyWidget.h"
#include "DurationPropertyWidget.generated.h"

class UBrickComboBoxWidget;
class UBrickSliderWidget;

UCLASS(Abstract, Blueprintable, EditInlineNew)
class BRICKRIGS_API UDurationPropertyWidget : public UPropertyWidget {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UBrickSliderWidget* Slider;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UBrickComboBoxWidget* UnitsComboBox;
    
public:
    UDurationPropertyWidget();
private:
    UFUNCTION(BlueprintCallable)
    void OnSliderValueChanged(float NewValue, EValueChangedEventType EventType);
    
    UFUNCTION(BlueprintCallable)
    void OnInitializeComboBoxItem(int32 Item, FBrickComboBoxItemParams& OutParams);
    
    UFUNCTION(BlueprintCallable)
    void OnComboBoxItemSelected(int32 Item, EValueChangedEventType EventType);
    
};

