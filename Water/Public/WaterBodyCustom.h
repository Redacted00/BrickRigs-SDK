#pragma once
#include "CoreMinimal.h"
#include "WaterBody.h"
#include "WaterBodyCustom.generated.h"

class UCustomMeshGenerator;

UCLASS(Blueprintable)
class WATER_API AWaterBodyCustom : public AWaterBody {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, NonPIEDuplicateTransient, meta=(AllowPrivateAccess=true))
    UCustomMeshGenerator* CustomGenerator;
    
public:
    AWaterBodyCustom();
};

