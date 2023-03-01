#pragma once
#include "CoreMinimal.h"
#include "EMultiBlockType.generated.h"

UENUM(BlueprintType)
enum class EMultiBlockType : uint8 {
    None,
    ButtonRow,
    EditableText,
    Heading,
    MenuEntry,
    Separator,
    ToolBarButton,
    ToolBarComboButton,
    Widget,
};

