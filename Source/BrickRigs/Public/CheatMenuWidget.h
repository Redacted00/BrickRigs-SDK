#pragma once
#include "CoreMinimal.h"
#include "PopupWidget.h"
#include "CheatMenuWidget.generated.h"

class UPropertiesPanelWidget;

UCLASS(Abstract, Blueprintable, EditInlineNew)
class BRICKRIGS_API UCheatMenuWidget : public UPopupWidget {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UPropertiesPanelWidget* PropertiesPanel;
    
public:
    UCheatMenuWidget();
};

