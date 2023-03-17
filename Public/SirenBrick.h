#pragma once
#include "CoreMinimal.h"
#include "Brick.h"
#include "Templates/SubclassOf.h"
#include "VehicleInputChannel.h"
#include "SirenBrick.generated.h"

class USirenType;

UCLASS(Blueprintable)
class BRICKRIGS_API USirenBrick : public UBrick {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TSubclassOf<USirenType> SirenType;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float HornPitch;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FVehicleInputChannel InputChannel;
    
public:
    USirenBrick();
};

