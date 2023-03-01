#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=UMG -ObjectName=UserWidget -FallbackName=UserWidget
#include "BrickUnits.h"
#include "EValueChangedEventType.h"
#include "BrickUnitsSliderWidget.generated.h"

class UBrickSliderWidget;

UCLASS(Blueprintable, EditInlineNew)
class BRICKRIGS_API UBrickUnitsSliderWidget : public UUserWidget {
    GENERATED_BODY()
public:
    DECLARE_DYNAMIC_MULTICAST_DELEGATE_TwoParams(FOnValueChanged, const FBrickUnits&, NewValue, EValueChangedEventType, EventType);
    
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UBrickSliderWidget* UnitsSlider;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UBrickSliderWidget* SubUnitsSlider;
    
public:
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FOnValueChanged OnSliderValueChangedDelegate;
    
    UBrickUnitsSliderWidget();
    UFUNCTION(BlueprintCallable)
    void SetValueRange(const FBrickUnits& InMinValue, const FBrickUnits& InMaxValue);
    
    UFUNCTION(BlueprintCallable)
    void SetValue(const FBrickUnits& NewValue);
    
private:
    UFUNCTION(BlueprintCallable)
    void OnUnitsSliderValueChanged(float NewValue, EValueChangedEventType EventType);
    
    UFUNCTION(BlueprintCallable)
    void OnSubUnitsSliderValueChanged(float NewValue, EValueChangedEventType EventType);
    
};

