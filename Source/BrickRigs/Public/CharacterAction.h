#pragma once
#include "CoreMinimal.h"
#include "UObject/Object.h"
#include "ECharacterActionLayer.h"
#include "CharacterAction.generated.h"

class UAnimMontage;
class USoundBase;

UCLASS(Abstract, Blueprintable, Within=BaseCharacter)
class BRICKRIGS_API UCharacterAction : public UObject {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    UAnimMontage* ItemMontage;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float ActionLength;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float PlayRate;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    ECharacterActionLayer ActionLayer;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UAnimMontage* CharacterMontage;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    USoundBase* FoleySound;
    
public:
    UCharacterAction();
};

