#pragma once
#include "CoreMinimal.h"
#include "PopupWidget.h"
#include "NetworkErrorPopupWidget.generated.h"

class UBrickTextBlock;

UCLASS(Abstract, Blueprintable, EditInlineNew)
class BRICKRIGS_API UNetworkErrorPopupWidget : public UPopupWidget {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UBrickTextBlock* MessageTextBlock;
    
public:
    UNetworkErrorPopupWidget();
};

