#pragma once
#include "CoreMinimal.h"
#include "GameFramework/PlayerInput.h"
#include "BrickPlayerInput.generated.h"

class UInputComponent;

UCLASS(Blueprintable, NonTransient)
class BRICKRIGS_API UBrickPlayerInput : public UPlayerInput {
    GENERATED_BODY()
public:
private:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, Transient, meta=(AllowPrivateAccess=true))
    TArray<UInputComponent*> LastInputStack;
    
public:
    UBrickPlayerInput();
};

