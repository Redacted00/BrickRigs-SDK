#pragma once
#include "CoreMinimal.h"
#include "Components/ActorComponent.h"
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

