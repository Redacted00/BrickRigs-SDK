#pragma once
#include "CoreMinimal.h"
#include "UObject/NoExportTypes.h"
#include "VehicleSpawnProperties.generated.h"

USTRUCT(BlueprintType)
struct FVehicleSpawnProperties {
    GENERATED_BODY()
public:
    UPROPERTY(EditAnywhere, meta=(AllowPrivateAccess=true))
    uint16 NumBricks;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FVector Dimensions;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float Mass;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float Price;
    
    BRICKRIGS_API FVehicleSpawnProperties();
};

