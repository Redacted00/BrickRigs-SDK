#pragma once
#include "CoreMinimal.h"
#include "BrickEditorInterfaceComponent.h"
#include "BrickVehicleComponent.generated.h"

UCLASS(Blueprintable, ClassGroup=Custom, meta=(BlueprintSpawnableComponent))
class BRICKRIGS_API UBrickVehicleComponent : public UBrickEditorInterfaceComponent {
    GENERATED_BODY()
public:
    UBrickVehicleComponent();
};

