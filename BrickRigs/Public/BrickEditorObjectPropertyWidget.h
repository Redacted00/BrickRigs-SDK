#pragma once
#include "CoreMinimal.h"
#include "PropertyWidget.h"
#include "BrickEditorObjectPropertyWidget.generated.h"

UCLASS(Abstract, Blueprintable, EditInlineNew)
class BRICKRIGS_API UBrickEditorObjectPropertyWidget : public UPropertyWidget {
    GENERATED_BODY()
public:
    UBrickEditorObjectPropertyWidget();
protected:
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void UpdateSelectedObjects(const FText& FirstObjectName, int32 NumSelectedObjects);
    
public:
    UFUNCTION(BlueprintCallable)
    void OpenObjectPicker();
    
    UFUNCTION(BlueprintCallable)
    void ClearSelection();
    
};

