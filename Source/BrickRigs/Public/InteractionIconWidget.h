#pragma once
#include "CoreMinimal.h"
#include "HUDIconWidget.h"
#include "InteractionIconWidget.generated.h"

UCLASS(Abstract, Blueprintable, EditInlineNew)
class BRICKRIGS_API UInteractionIconWidget : public UHUDIconWidget {
    GENERATED_BODY()
public:
    UInteractionIconWidget();
};

