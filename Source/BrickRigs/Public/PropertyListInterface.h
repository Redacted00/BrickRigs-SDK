#pragma once
#include "CoreMinimal.h"
#include "UObject/Interface.h"
#include "PropertyListInterface.generated.h"

class UPropertyContainerWidget;

UINTERFACE(Blueprintable)
class BRICKRIGS_API UPropertyListInterface : public UInterface {
    GENERATED_BODY()
};

class BRICKRIGS_API IPropertyListInterface : public IInterface {
    GENERATED_BODY()
public:
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void UpdatePropertyContainerWidgetSlot(UPropertyContainerWidget* Widget, int32 Index, int32 NumPerRow);
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void AddPropertyContainerWidget(UPropertyContainerWidget* Widget);
    
};

