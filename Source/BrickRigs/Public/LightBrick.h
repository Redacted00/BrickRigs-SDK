#pragma once
#include "CoreMinimal.h"
#include "Brick.h"
#include "ELightBrickDirection.h"
#include "Templates/SubclassOf.h"
#include "VehicleInputChannel.h"
#include "LightBrick.generated.h"

class USirenSequence;

UCLASS(Blueprintable)
class BRICKRIGS_API ULightBrick : public UBrick {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float Brightness;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TSubclassOf<USirenSequence> FlashSequence;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FVehicleInputChannel InputChannel;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    ELightBrickDirection LightDirection;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float LightConeAngle;
    
public:
    ULightBrick();
};

