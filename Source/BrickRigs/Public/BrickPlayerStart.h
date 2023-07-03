#pragma once
#include "CoreMinimal.h"
#include "GameFramework/Actor.h"
#include "BrickPlayerStart.generated.h"

class ASpawnArea;

UCLASS(Blueprintable)
class BRICKRIGS_API ABrickPlayerStart : public AActor {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TSoftObjectPtr<ASpawnArea> SpawnArea;
    
    ABrickPlayerStart();
};

