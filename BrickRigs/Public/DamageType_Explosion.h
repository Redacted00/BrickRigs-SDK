#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=Engine -ObjectName=DamageType -FallbackName=DamageType
#include "DamageType_Explosion.generated.h"

UCLASS(Blueprintable)
class BRICKRIGS_API UDamageType_Explosion : public UDamageType {
    GENERATED_BODY()
public:
    UDamageType_Explosion();
};

