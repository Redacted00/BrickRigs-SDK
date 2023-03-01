#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=Engine -ObjectName=DamageType -FallbackName=DamageType
#include "DamageType_BuildingCollapse.generated.h"

UCLASS(Blueprintable)
class BRICKRIGS_API UDamageType_BuildingCollapse : public UDamageType {
    GENERATED_BODY()
public:
    UDamageType_BuildingCollapse();
};

