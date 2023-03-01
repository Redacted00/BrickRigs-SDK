#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=CoreUObject -ObjectName=LinearColor -FallbackName=LinearColor
#include "EValueChangedEventType.h"
#include "PropertyWidget.h"
#include "ColorPropertyWidget.generated.h"

class UBrickSliderWidget;
class UColorPaletteWidget;
class UColorWheelWidget;

UCLASS(Abstract, Blueprintable, EditInlineNew)
class BRICKRIGS_API UColorPropertyWidget : public UPropertyWidget {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UColorWheelWidget* ColorWheel;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UColorPaletteWidget* ColorPalette;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UBrickSliderWidget* HueSlider;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UBrickSliderWidget* SaturationSlider;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UBrickSliderWidget* ValueSlider;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UBrickSliderWidget* AlphaSlider;
    
public:
    UColorPropertyWidget();
protected:
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void UpdateCurrentColor(const FLinearColor& NewColor);
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    void UpdateAlphaSliderVisibility(bool bNewVisible);
    
private:
    UFUNCTION(BlueprintCallable)
    void OnWheelColorChanged(const FLinearColor& NewColor, EValueChangedEventType EventType);
    
    UFUNCTION(BlueprintCallable)
    void OnValueChanged(float NewValue, EValueChangedEventType EventType);
    
    UFUNCTION(BlueprintCallable)
    void OnSaturationChanged(float NewValue, EValueChangedEventType EventType);
    
    UFUNCTION(BlueprintCallable)
    void OnPaletteColorChanged(const FLinearColor& NewColor, EValueChangedEventType EventType);
    
    UFUNCTION(BlueprintCallable)
    void OnHueChanged(float NewValue, EValueChangedEventType EventType);
    
    UFUNCTION(BlueprintCallable)
    void OnAlphaChanged(float NewValue, EValueChangedEventType EventType);
    
};

