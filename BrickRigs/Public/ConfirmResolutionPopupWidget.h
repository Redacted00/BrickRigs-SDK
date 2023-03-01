#pragma once
#include "CoreMinimal.h"
#include "PopupWidget.h"
#include "ConfirmResolutionPopupWidget.generated.h"

UCLASS(Abstract, Blueprintable, EditInlineNew)
class BRICKRIGS_API UConfirmResolutionPopupWidget : public UPopupWidget {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float RevertTime;
    
public:
    UConfirmResolutionPopupWidget();
};

