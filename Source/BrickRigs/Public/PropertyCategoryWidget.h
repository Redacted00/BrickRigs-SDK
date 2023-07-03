#pragma once
#include "CoreMinimal.h"
#include "Blueprint/UserWidget.h"
#include "PropertyListInterface.h"
#include "PropertyCategoryWidget.generated.h"

UCLASS(Abstract, Blueprintable, EditInlineNew)
class BRICKRIGS_API UPropertyCategoryWidget : public UUserWidget, public IPropertyListInterface {
    GENERATED_BODY()
public:
    UPropertyCategoryWidget();
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void UpdateCategory(const FText& DisplayName);
    
    
    // Fix for true pure virtual functions not being implemented
};

