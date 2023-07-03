#pragma once
#include "CoreMinimal.h"
#include "BrickEditorStaticMeshComponent.h"
#include "BrickStaticMeshComponent.generated.h"

UCLASS(Blueprintable, EditInlineNew, ClassGroup=Custom, meta=(BlueprintSpawnableComponent))
class BRICKRIGS_API UBrickStaticMeshComponent : public UBrickEditorStaticMeshComponent {
    GENERATED_BODY()
public:
    UBrickStaticMeshComponent();
};

