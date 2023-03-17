#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=UMG -ObjectName=UserWidget -FallbackName=UserWidget
#include "PropertyCategoryWidget.generated.h"

class UPropertyContainerWidget;

UCLASS(Abstract, Blueprintable, EditInlineNew)
class BRICKRIGS_API UPropertyCategoryWidget : public UUserWidget {
    GENERATED_BODY()
public:
    UPropertyCategoryWidget();
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void UpdateContainerWidgetSlot(UPropertyContainerWidget* Widget, int32 Index, int32 NumPerRow);
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void UpdateCategory(bool bIsLastCategory);
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void AddContainerWidget(UPropertyContainerWidget* Widget);
    
};

