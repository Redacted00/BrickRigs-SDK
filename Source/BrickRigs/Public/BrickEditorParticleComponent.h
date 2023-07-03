#pragma once
#include "CoreMinimal.h"
#include "Particles/ParticleSystemComponent.h"
#include "BrickEditorComponentInterface.h"
#include "BrickEditorParticleComponent.generated.h"

UCLASS(Blueprintable, EditInlineNew, ClassGroup=Custom, meta=(BlueprintSpawnableComponent))
class BRICKRIGS_API UBrickEditorParticleComponent : public UParticleSystemComponent, public IBrickEditorComponentInterface {
    GENERATED_BODY()
public:
    UBrickEditorParticleComponent();
private:
    UFUNCTION(BlueprintCallable)
    void OnSystemFinishedCallback(UParticleSystemComponent* InParticleComponent);
    
    
    // Fix for true pure virtual functions not being implemented
};

