#pragma once
#include "CoreMinimal.h"
#include "BrickEditorMode.h"
#include "BrickEditorObjectPickerMode.generated.h"

UCLASS(Abstract, Blueprintable)
class BRICKRIGS_API UBrickEditorObjectPickerMode : public UBrickEditorMode {
    GENERATED_BODY()
public:
    UBrickEditorObjectPickerMode();
};

