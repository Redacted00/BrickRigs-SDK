#pragma once
#include "CoreMinimal.h"
#include "CharacterAction.h"
#include "MeleeAction.generated.h"

UCLASS(Abstract, Blueprintable)
class BRICKRIGS_API UMeleeAction : public UCharacterAction {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float ApplyDamageTime;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float DamageSweepDistance;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float DamageSweepRadius;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float MeleeDamage;
    
    UMeleeAction();
};

