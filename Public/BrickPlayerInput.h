#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=Engine -ObjectName=PlayerInput -FallbackName=PlayerInput
#include "BrickPlayerInput.generated.h"

UCLASS(Blueprintable, NonTransient)
class BRICKRIGS_API UBrickPlayerInput : public UPlayerInput {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FOnInputMethodChanged OnInputMethodChangedDelegate;
    
    UBrickPlayerInput();
};

