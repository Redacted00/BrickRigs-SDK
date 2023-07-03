#pragma once
#include "CoreMinimal.h"
#include "BrickComboBoxItemParams.h"
#include "EValueChangedEventType.h"
#include "PropertyWidget.h"
#include "EnumPropertyWidget.generated.h"

class UBrickComboBoxWidget;

UCLASS(Abstract, Blueprintable, EditInlineNew)
class BRICKRIGS_API UEnumPropertyWidget : public UPropertyWidget {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UBrickComboBoxWidget* ComboBox;
    
public:
    UEnumPropertyWidget();
private:
    UFUNCTION(BlueprintCallable)
    void OnItemSelected(int32 Item, EValueChangedEventType EventType);
    
    UFUNCTION(BlueprintCallable)
    void InitializeItem(int32 Item, FBrickComboBoxItemParams& OutParams);
    
};

