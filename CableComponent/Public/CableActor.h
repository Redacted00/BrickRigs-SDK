#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=Engine -ObjectName=Actor -FallbackName=Actor
#include "CableActor.generated.h"

class UCableComponent;

UCLASS(Blueprintable)
class CABLECOMPONENT_API ACableActor : public AActor {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UCableComponent* CableComponent;
    
    ACableActor();
};

