#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=Engine -ObjectName=DamageType -FallbackName=DamageType
#include "DamageType_ForceKill.generated.h"

UCLASS(Blueprintable)
class BRICKRIGS_API UDamageType_ForceKill : public UDamageType {
    GENERATED_BODY()
public:
    UDamageType_ForceKill();
};

