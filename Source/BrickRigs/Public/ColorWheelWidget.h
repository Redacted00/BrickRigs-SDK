#pragma once
#include "CoreMinimal.h"
#include "UObject/NoExportTypes.h"
#include "Styling/SlateBrush.h"
#include "Blueprint/UserWidget.h"
#include "EValueChangedEventType.h"
#include "ColorWheelWidget.generated.h"

UCLASS(Abstract, Blueprintable, EditInlineNew)
class BRICKRIGS_API UColorWheelWidget : public UUserWidget {
    GENERATED_BODY()
public:
    DECLARE_DYNAMIC_MULTICAST_DELEGATE_TwoParams(FColorChanged, const FLinearColor&, NewColor, EValueChangedEventType, EventType);
    
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FSlateBrush CursorBrush;
    
public:
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FColorChanged OnColorChangedDelegate;
    
    UColorWheelWidget();
    UFUNCTION(BlueprintCallable)
    void SetColor(const FLinearColor& NewColor);
    
};

