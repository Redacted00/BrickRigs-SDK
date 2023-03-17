#pragma once
#include "CoreMinimal.h"
#include "DraggableButtonWidgetBase.h"
#include "EMeasurementSystem.h"
#include "ENumericValueType.h"
#include "EValueChangedEventType.h"
#include "BrickSliderWidget.generated.h"

class UBrickTextBoxWidget;

UCLASS(Abstract, Blueprintable, EditInlineNew)
class BRICKRIGS_API UBrickSliderWidget : public UDraggableButtonWidgetBase {
    GENERATED_BODY()
public:
    DECLARE_DYNAMIC_MULTICAST_DELEGATE_TwoParams(FOnSliderValueChanged, float, Value, EValueChangedEventType, EventType);
    
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UBrickTextBoxWidget* TextBox;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float Value;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float MinValue;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float MaxValue;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float ValueStep;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    ENumericValueType ValueType;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 MaxFractionalDigits;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FText CustomTextFormat;
    
public:
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FOnSliderValueChanged OnValueChangedDelegate;
    
    UBrickSliderWidget();
protected:
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void UpdateSliderPosition(float NewValue);
    
public:
    UFUNCTION(BlueprintCallable)
    void SetValueType(ENumericValueType InType);
    
    UFUNCTION(BlueprintCallable)
    void SetValueRange(float InMinValue, float InMaxValue);
    
    UFUNCTION(BlueprintCallable)
    void SetValue(float NewValue);
    
    UFUNCTION(BlueprintCallable)
    void SetMaxFractionalDigits(int32 InMaxDigits);
    
    UFUNCTION(BlueprintCallable)
    void SetCustomTextFormat(const FText& InFormat);
    
private:
    UFUNCTION(BlueprintCallable)
    void OnTextChanged(const FText& NewText, EValueChangedEventType EventType);
    
    UFUNCTION(BlueprintCallable)
    void OnMeasurementSystemChanged(EMeasurementSystem NewSystem);
    
public:
    UFUNCTION(BlueprintCallable, BlueprintPure)
    float GetValue() const;
    
};

