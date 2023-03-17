#pragma once
#include "CoreMinimal.h"
#include "MenuSettingsPageWidget.h"
#include "HostGamePageWidget.generated.h"

UCLASS(Abstract, Blueprintable, EditInlineNew)
class BRICKRIGS_API UHostGamePageWidget : public UMenuSettingsPageWidget {
    GENERATED_BODY()
public:
    UHostGamePageWidget();
protected:
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void UpdatePlayButton(bool bCanPlay, bool bIsOnline);
    
public:
    UFUNCTION(BlueprintCallable)
    void StartGame();
    
};

