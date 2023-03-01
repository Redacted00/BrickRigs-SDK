#pragma once
#include "CoreMinimal.h"
#include "PopupWidget.h"
#include "KickPlayerPopupWidget.generated.h"

class UPropertiesPanelWidget;

UCLASS(Abstract, Blueprintable, EditInlineNew)
class BRICKRIGS_API UKickPlayerPopupWidget : public UPopupWidget {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UPropertiesPanelWidget* PropertiesPanel;
    
public:
    UKickPlayerPopupWidget();
};

