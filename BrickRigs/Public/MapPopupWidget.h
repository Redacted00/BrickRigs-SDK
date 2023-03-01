#pragma once
#include "CoreMinimal.h"
#include "PopupWidget.h"
#include "MapPopupWidget.generated.h"

class UMapWidget;

UCLASS(Abstract, Blueprintable, EditInlineNew)
class BRICKRIGS_API UMapPopupWidget : public UPopupWidget {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UMapWidget* MapWidget;
    
public:
    UMapPopupWidget();
};

