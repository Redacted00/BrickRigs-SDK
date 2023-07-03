#pragma once
#include "CoreMinimal.h"
#include "GameFramework/Actor.h"
#include "RaceTimer.generated.h"

class UStaticMeshComponent;
class UTextRenderComponent;

UCLASS(Blueprintable)
class BRICKRIGS_API ARaceTimer : public AActor {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UStaticMeshComponent* MeshComponent;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UTextRenderComponent* TextRenderComponent;
    
    ARaceTimer();
};

