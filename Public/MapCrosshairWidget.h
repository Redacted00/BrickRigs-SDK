#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=UMG -ObjectName=UserWidget -FallbackName=UserWidget
#include "EBrickUIColorStyle.h"
#include "EBrickUIStyleState.h"
#include "MapCrosshairWidget.generated.h"

UCLASS(Abstract, Blueprintable, EditInlineNew)
class BRICKRIGS_API UMapCrosshairWidget : public UUserWidget {
    GENERATED_BODY()
public:
    UMapCrosshairWidget();
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void SetStyleState(EBrickUIStyleState NewState);
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void SetColorStyle(EBrickUIColorStyle NewStyle);
    
};

