#pragma once
#include "CoreMinimal.h"
#include "Components/HierarchicalInstancedStaticMeshComponent.h"
#include "ContactModifyInterface.h"
#include "DestructibleISMComponentInterface.h"
#include "DestructibleHierarchicalISMComponent.generated.h"

UCLASS(Blueprintable, EditInlineNew, ClassGroup=Custom, meta=(BlueprintSpawnableComponent))
class BRICKRIGS_API UDestructibleHierarchicalISMComponent : public UHierarchicalInstancedStaticMeshComponent, public IDestructibleISMComponentInterface, public IContactModifyInterface {
    GENERATED_BODY()
public:
    UDestructibleHierarchicalISMComponent();
    
    // Fix for true pure virtual functions not being implemented
};

