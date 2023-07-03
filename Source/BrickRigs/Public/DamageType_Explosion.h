#pragma once
#include "CoreMinimal.h"
#include "GameFramework/DamageType.h"
#include "DamageType_Explosion.generated.h"

UCLASS(Blueprintable)
class BRICKRIGS_API UDamageType_Explosion : public UDamageType {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float FireProbability;
    
    UDamageType_Explosion();
};

