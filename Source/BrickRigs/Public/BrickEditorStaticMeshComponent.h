#pragma once
#include "CoreMinimal.h"
#include "Components/StaticMeshComponent.h"
#include "BrickEditorComponentInterface.h"
#include "BrickEditorStaticMeshComponent.generated.h"

UCLASS(Blueprintable, EditInlineNew, ClassGroup=Custom, meta=(BlueprintSpawnableComponent))
class BRICKRIGS_API UBrickEditorStaticMeshComponent : public UStaticMeshComponent, public IBrickEditorComponentInterface {
    GENERATED_BODY()
public:
    UBrickEditorStaticMeshComponent();
    
    // Fix for true pure virtual functions not being implemented
};

