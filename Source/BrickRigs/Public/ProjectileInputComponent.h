#pragma once
#include "CoreMinimal.h"
#include "BaseInputComponent.h"
#include "ProjectileInputComponent.generated.h"

UCLASS(Blueprintable, NonTransient, ClassGroup=Custom, meta=(BlueprintSpawnableComponent))
class BRICKRIGS_API UProjectileInputComponent : public UBaseInputComponent {
    GENERATED_BODY()
public:
    UProjectileInputComponent();
};

