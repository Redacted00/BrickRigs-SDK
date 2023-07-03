#pragma once
#include "CoreMinimal.h"
#include "Blueprint/UserWidget.h"
#include "EBrickUIColorStyle.h"
#include "DashboardIconWidget.generated.h"

UCLASS(Abstract, Blueprintable, EditInlineNew)
class BRICKRIGS_API UDashboardIconWidget : public UUserWidget {
    GENERATED_BODY()
public:
    UDashboardIconWidget();
protected:
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void UpdateIconImage(bool bInVisible, EBrickUIColorStyle InColorStyle, int32 InIconIndex);
    
};

