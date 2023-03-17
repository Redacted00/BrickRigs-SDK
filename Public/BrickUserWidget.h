#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=UMG -ObjectName=UserWidget -FallbackName=UserWidget
#include "TooltipContent.h"
#include "BrickUserWidget.generated.h"

class UTooltipWidget;

UCLASS(Abstract, Blueprintable, EditInlineNew)
class BRICKRIGS_API UBrickUserWidget : public UUserWidget {
    GENERATED_BODY()
public:
    DECLARE_DYNAMIC_DELEGATE_RetVal_OneParam(bool, FGetTooltipContent, FTooltipContent&, OutContent);
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FGetTooltipContent GetTooltipContentDelegate;
    
    UBrickUserWidget();
protected:
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void InitializeTooltip(UTooltipWidget* Tooltip);
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    bool GetTooltipContent(FTooltipContent& OutContent);
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    UClass* GetTooltipClass() const;
    
};

