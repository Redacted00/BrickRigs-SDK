#pragma once
#include "CoreMinimal.h"
#include "MenuPageWidget.h"
#include "MatchMenuWidget.generated.h"

class UPropertiesPanelWidget;

UCLASS(Abstract, Blueprintable, EditInlineNew)
class BRICKRIGS_API UMatchMenuWidget : public UMenuPageWidget {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UPropertiesPanelWidget* PropertiesPanel;
    
public:
    UMatchMenuWidget();
protected:
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void UpdateRestartMatchButton(bool bCanRestart, bool bSameLevelAndMode);
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    void UpdateIsAdmin(bool bNewIsAdmin);
    
public:
    UFUNCTION(BlueprintCallable)
    void RestartMatch();
    
};

