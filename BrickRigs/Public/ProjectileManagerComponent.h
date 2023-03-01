#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=Engine -ObjectName=ActorComponent -FallbackName=ActorComponent
#include "ProjectileManagerComponent.generated.h"

class UParticleSystemComponent;

UCLASS(Blueprintable, ClassGroup=Custom, meta=(BlueprintSpawnableComponent))
class BRICKRIGS_API UProjectileManagerComponent : public UActorComponent {
    GENERATED_BODY()
public:
    UProjectileManagerComponent();
private:
    UFUNCTION(BlueprintCallable)
    void OnParticleComponentFinished(UParticleSystemComponent* PSC);
    
};

