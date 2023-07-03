#pragma once
#include "CoreMinimal.h"
#include "GameFramework/PlayerController.h"
#include "Templates/SubclassOf.h"
#include "BasePlayerController.generated.h"

class UPlayerControllerStaticInfo;

UCLASS(Abstract, Blueprintable)
class BRICKRIGS_API ABasePlayerController : public APlayerController {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, NoClear, meta=(AllowPrivateAccess=true))
    TSubclassOf<UPlayerControllerStaticInfo> StaticInfoClass;
    
public:
    ABasePlayerController();
};

