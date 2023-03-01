#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=Engine -ObjectName=Actor -FallbackName=Actor
#include "ActorFractureSignatureDelegate.h"
#include "DestructibleActor.generated.h"

class UDestructibleComponent;

UCLASS(Blueprintable)
class APEXDESTRUCTION_API ADestructibleActor : public AActor {
    GENERATED_BODY()
public:
private:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UDestructibleComponent* DestructibleComponent;
    
public:
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FActorFractureSignature OnActorFracture;
    
    ADestructibleActor();
};

