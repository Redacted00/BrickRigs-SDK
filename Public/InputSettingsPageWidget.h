#pragma once
#include "CoreMinimal.h"
#include "MenuSettingsPageWidget.h"
#include "InputSettingsPageWidget.generated.h"

UCLASS(Abstract, Blueprintable, EditInlineNew)
class BRICKRIGS_API UInputSettingsPageWidget : public UMenuSettingsPageWidget {
    GENERATED_BODY()
public:
    UInputSettingsPageWidget();
    UFUNCTION(BlueprintCallable)
    void RevertInputMappings();
    
};

