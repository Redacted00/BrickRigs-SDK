#pragma once
#include "CoreMinimal.h"
#include "RepHitInfo.h"
#include "ProjectileHitInfo.generated.h"

USTRUCT(BlueprintType)
struct FProjectileHitInfo : public FRepHitInfo {
    GENERATED_BODY()
public:
    BRICKRIGS_API FProjectileHitInfo();
};

