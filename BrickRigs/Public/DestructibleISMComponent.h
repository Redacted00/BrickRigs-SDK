#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=Engine -ObjectName=InstancedStaticMeshComponent -FallbackName=InstancedStaticMeshComponent
#include "DestructibleISMComponentInterface.h"
#include "VehicleCollisionInterface.h"
#include "DestructibleISMComponent.generated.h"

UCLASS(Blueprintable, EditInlineNew, ClassGroup=Custom, meta=(BlueprintSpawnableComponent))
class BRICKRIGS_API UDestructibleISMComponent : public UInstancedStaticMeshComponent, public IDestructibleISMComponentInterface, public IVehicleCollisionInterface {
    GENERATED_BODY()
public:
    UDestructibleISMComponent();
    
    // Fix for true pure virtual functions not being implemented
};

