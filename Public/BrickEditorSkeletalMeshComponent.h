#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=Engine -ObjectName=SkeletalMeshComponent -FallbackName=SkeletalMeshComponent
#include "BrickEditorComponentInterface.h"
#include "BrickEditorSkeletalMeshComponent.generated.h"

UCLASS(Blueprintable, EditInlineNew, ClassGroup=Custom, meta=(BlueprintSpawnableComponent))
class BRICKRIGS_API UBrickEditorSkeletalMeshComponent : public USkeletalMeshComponent, public IBrickEditorComponentInterface {
    GENERATED_BODY()
public:
    UBrickEditorSkeletalMeshComponent();
    
    // Fix for true pure virtual functions not being implemented
};

