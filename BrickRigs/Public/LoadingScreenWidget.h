#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=CoreUObject -ObjectName=LinearColor -FallbackName=LinearColor
#include "MainWidgetBase.h"
#include "LoadingScreenWidget.generated.h"

UCLASS(Abstract, Blueprintable, EditInlineNew)
class BRICKRIGS_API ULoadingScreenWidget : public UMainWidgetBase {
    GENERATED_BODY()
public:
    ULoadingScreenWidget();
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void SetLoadingText(const FText& Text);
    
protected:
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void SetBackgroundColor(const FLinearColor& InColor);
    
};

