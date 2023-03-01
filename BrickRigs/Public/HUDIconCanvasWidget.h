#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=CoreUObject -ObjectName=FloatInterval -FallbackName=FloatInterval
#include "HUDIconPanelWidget.h"
#include "HUDIconCanvasWidget.generated.h"

class UCanvasPanel;
class UInteractionWidget;

UCLASS(Abstract, Blueprintable, EditInlineNew)
class BRICKRIGS_API UHUDIconCanvasWidget : public UHUDIconPanelWidget {
    GENERATED_BODY()
public:
private:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, Transient, meta=(AllowPrivateAccess=true))
    UInteractionWidget* InteractionWidget;
    
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UCanvasPanel* MainCanvasPanel;
    
    UPROPERTY(EditAnywhere, meta=(AllowPrivateAccess=true))
    FFloatInterval IconScaleRange;
    
public:
    UHUDIconCanvasWidget();
};

