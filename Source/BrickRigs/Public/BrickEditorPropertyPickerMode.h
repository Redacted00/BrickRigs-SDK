#pragma once
#include "CoreMinimal.h"
#include "BrickEditorObjectPickerMode.h"
#include "BrickEditorPropertyPickerMode.generated.h"

UCLASS(Blueprintable)
class BRICKRIGS_API UBrickEditorPropertyPickerMode : public UBrickEditorObjectPickerMode {
    GENERATED_BODY()
public:
    UBrickEditorPropertyPickerMode();
};

