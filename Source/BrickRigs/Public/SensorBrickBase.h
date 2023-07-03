#pragma once
#include "CoreMinimal.h"
#include "Brick.h"
#include "SensorOutputChannel.h"
#include "SensorBrickBase.generated.h"

UCLASS(Abstract, Blueprintable)
class BRICKRIGS_API USensorBrickBase : public UBrick {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FSensorOutputChannel OutputChannel;
    
    USensorBrickBase();
};

