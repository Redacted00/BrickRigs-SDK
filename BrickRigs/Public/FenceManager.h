#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=Engine -ObjectName=Actor -FallbackName=Actor
#include "FenceManager.generated.h"

class UDestructibleInstancesComponent;

UCLASS(Blueprintable)
class BRICKRIGS_API AFenceManager : public AActor {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UDestructibleInstancesComponent* InstancesComponent;
    
    AFenceManager();
};

