#pragma once
#include "CoreMinimal.h"
#include "Components/ActorComponent.h"
#include "FireExtinguisherComponent.generated.h"

UCLASS(Blueprintable, ClassGroup=Custom, meta=(BlueprintSpawnableComponent))
class BRICKRIGS_API UFireExtinguisherComponent : public UActorComponent {
    GENERATED_BODY()
public:
    UFireExtinguisherComponent();
};

