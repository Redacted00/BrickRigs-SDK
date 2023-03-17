#pragma once
#include "CoreMinimal.h"
#include "Brick.h"
#include "BrickSize.h"
#include "ScalableBrickConnectorSpacing.h"
#include "ScalableBrick.generated.h"

UCLASS(Blueprintable)
class BRICKRIGS_API UScalableBrick : public UBrick {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FBrickSize BrickSize;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FScalableBrickConnectorSpacing ConnectorSpacing;
    
public:
    UScalableBrick();
};

