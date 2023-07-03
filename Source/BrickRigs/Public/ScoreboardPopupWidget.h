#pragma once
#include "CoreMinimal.h"
#include "PopupWidget.h"
#include "ScoreboardPopupWidget.generated.h"

UCLASS(Abstract, Blueprintable, EditInlineNew)
class BRICKRIGS_API UScoreboardPopupWidget : public UPopupWidget {
    GENERATED_BODY()
public:
    UScoreboardPopupWidget();
};

