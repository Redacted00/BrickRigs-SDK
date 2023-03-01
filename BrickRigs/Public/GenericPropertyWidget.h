#pragma once
#include "CoreMinimal.h"
#include "EValueChangedEventType.h"
#include "PropertyWidget.h"
#include "GenericPropertyWidget.generated.h"

class UBrickTextBoxWidget;

UCLASS(Abstract, Blueprintable, EditInlineNew)
class BRICKRIGS_API UGenericPropertyWidget : public UPropertyWidget {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UBrickTextBoxWidget* TextBox;
    
public:
    UGenericPropertyWidget();
protected:
    UFUNCTION(BlueprintCallable)
    void OnTextChanged(const FText& Text, EValueChangedEventType EventType);
    
};

