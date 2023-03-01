#pragma once
#include "CoreMinimal.h"
#include "EInputActionListMode.generated.h"

UENUM(BlueprintType)
enum class EInputActionListMode : uint8 {
    InputHelpClosed,
    InputHelpOpen,
    ContextMenu,
    EditorTools,
    EditorTopBar,
};

