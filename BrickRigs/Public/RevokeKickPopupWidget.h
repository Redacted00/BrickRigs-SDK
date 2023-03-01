#pragma once
#include "CoreMinimal.h"
#include "PopupWidget.h"
#include "RevokeKickPopupWidget.generated.h"

UCLASS(Abstract, Blueprintable, EditInlineNew)
class BRICKRIGS_API URevokeKickPopupWidget : public UPopupWidget {
    GENERATED_BODY()
public:
    URevokeKickPopupWidget();
};

