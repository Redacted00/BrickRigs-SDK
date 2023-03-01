#pragma once
#include "CoreMinimal.h"
#include "CharacterAnimInstance.h"
#include "ZombieAnimInstanceProxy.h"
#include "ZombieAnimInstance.generated.h"

UCLASS(Abstract, Blueprintable, NonTransient)
class BRICKRIGS_API UZombieAnimInstance : public UCharacterAnimInstance {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    FZombieAnimInstanceProxy Proxy;
    
    UZombieAnimInstance();
};

