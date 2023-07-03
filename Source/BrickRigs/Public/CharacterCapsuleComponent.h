#pragma once
#include "CoreMinimal.h"
#include "Components/CapsuleComponent.h"
#include "CharacterCapsuleComponent.generated.h"

UCLASS(Blueprintable, EditInlineNew, ClassGroup=Custom, meta=(BlueprintSpawnableComponent))
class BRICKRIGS_API UCharacterCapsuleComponent : public UCapsuleComponent {
    GENERATED_BODY()
public:
    UCharacterCapsuleComponent();
};

