#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=UMG -ObjectName=UserWidget -FallbackName=UserWidget
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

