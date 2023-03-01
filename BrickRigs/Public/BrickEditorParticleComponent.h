#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=Engine -ObjectName=ParticleSystemComponent -FallbackName=ParticleSystemComponent
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

