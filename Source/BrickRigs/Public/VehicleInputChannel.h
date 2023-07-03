#pragma once
#include "CoreMinimal.h"
#include "BrickEditorObjectPtr.h"
#include "BrickStructPropertyInterface.h"
#include "EVehicleInputAxis.h"
#include "VehicleInputChannel.generated.h"

USTRUCT(BlueprintType)
struct FVehicleInputChannel : public FBrickStructPropertyInterface {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    EVehicleInputAxis InputAxis;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FBrickEditorObjectPtr> SourceBricks;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float Value;
    
    BRICKRIGS_API FVehicleInputChannel();
};

