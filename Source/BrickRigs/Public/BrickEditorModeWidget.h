#pragma once
#include "CoreMinimal.h"
#include "Blueprint/UserWidget.h"
#include "BrickEditorModeWidget.generated.h"

UCLASS(Abstract, Blueprintable, EditInlineNew)
class BRICKRIGS_API UBrickEditorModeWidget : public UUserWidget {
    GENERATED_BODY()
public:
    UBrickEditorModeWidget();
};

