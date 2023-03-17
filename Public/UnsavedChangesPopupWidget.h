#pragma once
#include "CoreMinimal.h"
#include "PopupWidget.h"
#include "UnsavedChangesPopupWidget.generated.h"

UCLASS(Abstract, Blueprintable, EditInlineNew)
class BRICKRIGS_API UUnsavedChangesPopupWidget : public UPopupWidget {
    GENERATED_BODY()
public:
    UUnsavedChangesPopupWidget();
};

