#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=UMG -ObjectName=UserWidget -FallbackName=UserWidget
#include "EBrickEditorMirrorMode.h"
#include "BrickEditorMirrorModeWidget.generated.h"

UCLASS(Abstract, Blueprintable, EditInlineNew)
class BRICKRIGS_API UBrickEditorMirrorModeWidget : public UUserWidget {
    GENERATED_BODY()
public:
    UBrickEditorMirrorModeWidget();
protected:
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void UpdateMirrorMode(EBrickEditorMirrorMode InMirrorMode);
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void UpdateIsSelected(bool bNewSelected);
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void UpdateCanBeSelected(bool bNewCanBeSelected);
    
    UFUNCTION(BlueprintCallable)
    void OnClicked();
    
};

