#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=UMG -ObjectName=UserWidget -FallbackName=UserWidget
#include "EBrickUIColorStyle.h"
#include "MatchStateWidget.generated.h"

UCLASS(Abstract, Blueprintable, EditInlineNew)
class BRICKRIGS_API UMatchStateWidget : public UUserWidget {
    GENERATED_BODY()
public:
    UMatchStateWidget();
protected:
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void UpdateMatchState(const FText& NewDisplayText, EBrickUIColorStyle NewColorStyle, bool bFadeOut);
    
    UFUNCTION(BlueprintCallable)
    void OnFadedOut();
    
};

