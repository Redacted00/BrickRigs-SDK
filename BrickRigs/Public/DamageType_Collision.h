#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=Engine -ObjectName=DamageType -FallbackName=DamageType
#include "DamageType_Collision.generated.h"

UCLASS(Blueprintable)
class BRICKRIGS_API UDamageType_Collision : public UDamageType {
    GENERATED_BODY()
public:
    UDamageType_Collision();
};

