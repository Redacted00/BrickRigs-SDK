#pragma once
#include "CoreMinimal.h"
#include "Blueprint/UserWidget.h"
#include "EBrickUIColorStyle.h"
#include "InteractionOptionWidget.generated.h"

class UControlHintWidget;

UCLASS(Abstract, Blueprintable, EditInlineNew)
class BRICKRIGS_API UInteractionOptionWidget : public UUserWidget {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UControlHintWidget* ControlHintWidget;
    
public:
    UInteractionOptionWidget();
protected:
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void UpdateColorStyle(EBrickUIColorStyle InColorStyle);
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void UpdateCanBeClicked(bool bCanBeClicked);
    
    UFUNCTION(BlueprintCallable)
    void OnClickedInteract();
    
};

