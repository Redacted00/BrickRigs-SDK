#pragma once
#include "CoreMinimal.h"
#include "Components/InstancedStaticMeshComponent.h"
#include "BrickEditorISMComponent.generated.h"

UCLASS(Blueprintable, EditInlineNew, ClassGroup=Custom, meta=(BlueprintSpawnableComponent))
class BRICKRIGS_API UBrickEditorISMComponent : public UInstancedStaticMeshComponent {
    GENERATED_BODY()
public:
    UBrickEditorISMComponent();
};

