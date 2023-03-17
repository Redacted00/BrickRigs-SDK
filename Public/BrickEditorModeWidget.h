#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=UMG -ObjectName=UserWidget -FallbackName=UserWidget
#include "BrickEditorModeWidget.generated.h"

UCLASS(Abstract, Blueprintable, EditInlineNew)
class BRICKRIGS_API UBrickEditorModeWidget : public UUserWidget {
    GENERATED_BODY()
public:
    UBrickEditorModeWidget();
};

