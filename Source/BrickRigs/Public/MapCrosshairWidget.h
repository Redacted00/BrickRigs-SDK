#pragma once
#include "CoreMinimal.h"
#include "Blueprint/UserWidget.h"
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

