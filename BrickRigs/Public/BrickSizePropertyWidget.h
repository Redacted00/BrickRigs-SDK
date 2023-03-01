#pragma once
#include "CoreMinimal.h"
#include "BrickUnits.h"
#include "EValueChangedEventType.h"
#include "PropertyWidget.h"
#include "BrickSizePropertyWidget.generated.h"

class UBrickUnitsSliderWidget;

UCLASS(Blueprintable, EditInlineNew)
class BRICKRIGS_API UBrickSizePropertyWidget : public UPropertyWidget {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UBrickUnitsSliderWidget* XSlider;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UBrickUnitsSliderWidget* YSlider;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UBrickUnitsSliderWidget* ZSlider;
    
public:
    UBrickSizePropertyWidget();
private:
    UFUNCTION(BlueprintCallable)
    void OnZSliderValueChanged(const FBrickUnits& NewValue, EValueChangedEventType EventType);
    
    UFUNCTION(BlueprintCallable)
    void OnYSliderValueChanged(const FBrickUnits& NewValue, EValueChangedEventType EventType);
    
    UFUNCTION(BlueprintCallable)
    void OnXSliderValueChanged(const FBrickUnits& NewValue, EValueChangedEventType EventType);
    
};

