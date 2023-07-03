#pragma once
#include "CoreMinimal.h"
#include "GameFramework/DamageType.h"
#include "DamageType_ForceKill.generated.h"

UCLASS(Blueprintable)
class BRICKRIGS_API UDamageType_ForceKill : public UDamageType {
    GENERATED_BODY()
public:
    UDamageType_ForceKill();
};

