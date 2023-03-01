#pragma once
#include "CoreMinimal.h"
#include "EValueChangedEventType.h"
#include "PropertyWidget.h"
#include "NumericPropertyWidget.generated.h"

class UBrickSliderWidget;

UCLASS(Abstract, Blueprintable, EditInlineNew)
class BRICKRIGS_API UNumericPropertyWidget : public UPropertyWidget {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UBrickSliderWidget* Slider;
    
public:
    UNumericPropertyWidget();
private:
    UFUNCTION(BlueprintCallable)
    void OnSliderValueChanged(float NewValue, EValueChangedEventType EventType);
    
};

