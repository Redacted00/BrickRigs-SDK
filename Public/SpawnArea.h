#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=Engine -ObjectName=Actor -FallbackName=Actor
#include "HUDIconProperties.h"
#include "SpawnPointInterface.h"
#include "SpawnArea.generated.h"

class UHUDIconComponent;

UCLASS(Abstract, Blueprintable)
class BRICKRIGS_API ASpawnArea : public AActor, public ISpawnPointInterface {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, Transient, meta=(AllowPrivateAccess=true))
    UHUDIconComponent* HUDIconComponent;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FHUDIconProperties HUDIconProperties;
    
public:
    ASpawnArea();
    
    // Fix for true pure virtual functions not being implemented
};

