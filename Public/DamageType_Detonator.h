#pragma once
#include "CoreMinimal.h"
#include "DamageType_Fire.h"
#include "DamageType_Detonator.generated.h"

UCLASS(Blueprintable)
class BRICKRIGS_API UDamageType_Detonator : public UDamageType_Fire {
    GENERATED_BODY()
public:
    UDamageType_Detonator();
};

