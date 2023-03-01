#pragma once
#include "CoreMinimal.h"
#include "MenuAnchorWidget.h"
#include "BrickComboBoxMenuWidget.generated.h"

class UBrickComboBoxWidget;

UCLASS(Abstract, Blueprintable, EditInlineNew)
class BRICKRIGS_API UBrickComboBoxMenuWidget : public UMenuAnchorWidget {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UBrickComboBoxWidget* ComboBox;
    
    UBrickComboBoxMenuWidget();
};

