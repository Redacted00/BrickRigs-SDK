#pragma once
#include "CoreMinimal.h"
#include "Components/SkeletalMeshComponent.h"
#include "BrickEditorComponentInterface.h"
#include "BrickEditorSkeletalMeshComponent.generated.h"

UCLASS(Blueprintable, EditInlineNew, ClassGroup=Custom, meta=(BlueprintSpawnableComponent))
class BRICKRIGS_API UBrickEditorSkeletalMeshComponent : public USkeletalMeshComponent, public IBrickEditorComponentInterface {
    GENERATED_BODY()
public:
    UBrickEditorSkeletalMeshComponent();
    
    // Fix for true pure virtual functions not being implemented
};

