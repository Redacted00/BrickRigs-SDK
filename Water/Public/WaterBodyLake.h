#pragma once
#include "CoreMinimal.h"
#include "WaterBody.h"
#include "WaterBodyLake.generated.h"

class ULakeGenerator;

UCLASS(Blueprintable)
class WATER_API AWaterBodyLake : public AWaterBody {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, NonPIEDuplicateTransient, meta=(AllowPrivateAccess=true))
    ULakeGenerator* LakeGenerator;
    
public:
    AWaterBodyLake();
};

