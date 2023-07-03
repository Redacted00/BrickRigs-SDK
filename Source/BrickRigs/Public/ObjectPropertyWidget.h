#pragma once
#include "CoreMinimal.h"
#include "BrickComboBoxItemParams.h"
#include "EValueChangedEventType.h"
#include "PropertyWidget.h"
#include "ObjectPropertyWidget.generated.h"

class UBrickComboBoxWidget;

UCLASS(Abstract, Blueprintable, EditInlineNew)
class BRICKRIGS_API UObjectPropertyWidget : public UPropertyWidget {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UBrickComboBoxWidget* BrickComboBox;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float IconSize;
    
public:
    UObjectPropertyWidget();
protected:
    UFUNCTION(BlueprintCallable)
    void OnItemSelected(int32 Item, EValueChangedEventType EventType);
    
    UFUNCTION(BlueprintCallable)
    void InitializeItem(int32 Item, FBrickComboBoxItemParams& OutParams);
    
};

