#pragma once
#include "CoreMinimal.h"
#include "BrickUserWidget.h"
#include "RadioButtonWidget.generated.h"

class UBrickButtonWidget;

UCLASS(Abstract, Blueprintable, EditInlineNew)
class BRICKRIGS_API URadioButtonWidget : public UBrickUserWidget {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UBrickButtonWidget* Button;
    
public:
    URadioButtonWidget();
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    void SetIsSelected(bool bNewSelected);
    
protected:
    UFUNCTION(BlueprintCallable)
    void OnRadioButtonClicked();
    
};

