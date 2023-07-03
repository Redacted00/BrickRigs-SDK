#pragma once
#include "CoreMinimal.h"
#include "GameFramework/Actor.h"
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

