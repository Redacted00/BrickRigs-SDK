#pragma once
#include "CoreMinimal.h"
#include "BrickEditor.h"
#include "VehicleEditor.generated.h"

UCLASS(Abstract, Blueprintable)
class BRICKRIGS_API AVehicleEditor : public ABrickEditor {
    GENERATED_BODY()
public:
    AVehicleEditor();
};

