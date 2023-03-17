#pragma once
#include "CoreMinimal.h"
#include "BrickUserWidget.h"
#include "TooltipContent.h"
#include "TooltipWidget.generated.h"

UCLASS(Abstract, Blueprintable, EditInlineNew)
class BRICKRIGS_API UTooltipWidget : public UBrickUserWidget {
    GENERATED_BODY()
public:
    UTooltipWidget();
protected:
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void UpdateTooltipContent(const FTooltipContent& InContent);
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void FadeIn();
    
};

