#pragma once
#include "CoreMinimal.h"
#include "EValueChangedEventType.h"
#include "PropertyWidget.h"
#include "VectorPropertyWidget.generated.h"

class UBrickSliderWidget;

UCLASS(Abstract, Blueprintable, EditInlineNew)
class BRICKRIGS_API UVectorPropertyWidget : public UPropertyWidget {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UBrickSliderWidget* XSlider;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UBrickSliderWidget* YSlider;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UBrickSliderWidget* ZSlider;
    
public:
    UVectorPropertyWidget();
private:
    UFUNCTION(BlueprintCallable)
    void OnZSliderValueChanged(float NewValue, EValueChangedEventType EventType);
    
    UFUNCTION(BlueprintCallable)
    void OnYSliderValueChanged(float NewValue, EValueChangedEventType EventType);
    
    UFUNCTION(BlueprintCallable)
    void OnXSliderValueChanged(float NewValue, EValueChangedEventType EventType);
    
};

