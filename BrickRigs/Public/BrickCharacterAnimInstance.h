#pragma once
#include "CoreMinimal.h"
#include "BrickCharacterAnimInstanceProxy.h"
#include "CharacterAnimInstance.h"
#include "BrickCharacterAnimInstance.generated.h"

UCLASS(Abstract, Blueprintable, NonTransient)
class BRICKRIGS_API UBrickCharacterAnimInstance : public UCharacterAnimInstance {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    FBrickCharacterAnimInstanceProxy Proxy;
    
    UBrickCharacterAnimInstance();
};

