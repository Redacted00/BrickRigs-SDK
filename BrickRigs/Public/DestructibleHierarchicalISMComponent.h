#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=Engine -ObjectName=HierarchicalInstancedStaticMeshComponent -FallbackName=HierarchicalInstancedStaticMeshComponent
#include "DestructibleISMComponentInterface.h"
#include "VehicleCollisionInterface.h"
#include "DestructibleHierarchicalISMComponent.generated.h"

UCLASS(Blueprintable, EditInlineNew, ClassGroup=Custom, meta=(BlueprintSpawnableComponent))
class BRICKRIGS_API UDestructibleHierarchicalISMComponent : public UHierarchicalInstancedStaticMeshComponent, public IDestructibleISMComponentInterface, public IVehicleCollisionInterface {
    GENERATED_BODY()
public:
    UDestructibleHierarchicalISMComponent();
    
    // Fix for true pure virtual functions not being implemented
};

