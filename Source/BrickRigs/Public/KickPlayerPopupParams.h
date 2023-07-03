#pragma once
#include "CoreMinimal.h"
#include "BrickDuration.h"
#include "BrickPropertyInterface.h"
#include "PopupParams.h"
#include "KickPlayerPopupParams.generated.h"

UCLASS(Blueprintable)
class BRICKRIGS_API UKickPlayerPopupParams : public UPopupParams, public IBrickPropertyInterface {
    GENERATED_BODY()
public:
private:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    FString KickReason;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    FBrickDuration KickDuration;
    
public:
    UKickPlayerPopupParams();
    
    // Fix for true pure virtual functions not being implemented
};

