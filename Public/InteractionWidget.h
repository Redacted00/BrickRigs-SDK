#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=UMG -ObjectName=UserWidget -FallbackName=UserWidget
#include "Templates/SubclassOf.h"
#include "InteractionWidget.generated.h"

class UInteractionOptionWidget;

UCLASS(Abstract, Blueprintable, EditInlineNew)
class BRICKRIGS_API UInteractionWidget : public UUserWidget {
    GENERATED_BODY()
public:
private:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, Transient, meta=(AllowPrivateAccess=true))
    TArray<UInteractionOptionWidget*> OptionWidgets;
    
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TSubclassOf<UInteractionOptionWidget> OptionWidgetClass;
    
public:
    UInteractionWidget();
protected:
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void AddOptionWidget(UInteractionOptionWidget* Widget, int32 OptionIndex);
    
};

