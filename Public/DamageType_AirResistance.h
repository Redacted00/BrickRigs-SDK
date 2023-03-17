#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=Engine -ObjectName=DamageType -FallbackName=DamageType
#include "DamageType_AirResistance.generated.h"

UCLASS(Blueprintable)
class BRICKRIGS_API UDamageType_AirResistance : public UDamageType {
    GENERATED_BODY()
public:
    UDamageType_AirResistance();
};

