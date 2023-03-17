#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=Engine -ObjectName=InstancedStaticMeshComponent -FallbackName=InstancedStaticMeshComponent
#include "ContactModifyInterface.h"
#include "DestructibleISMComponentInterface.h"
#include "DestructibleISMComponent.generated.h"

UCLASS(Blueprintable, EditInlineNew, ClassGroup=Custom, meta=(BlueprintSpawnableComponent))
class BRICKRIGS_API UDestructibleISMComponent : public UInstancedStaticMeshComponent, public IDestructibleISMComponentInterface, public IContactModifyInterface {
    GENERATED_BODY()
public:
    UDestructibleISMComponent();
    
    // Fix for true pure virtual functions not being implemented
};

