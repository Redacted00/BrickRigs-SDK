#pragma once
#include "CoreMinimal.h"
#include "WaterBody.h"
#include "WaterBodyRiver.generated.h"

class UMaterialInstanceDynamic;
class UMaterialInterface;
class URiverGenerator;

UCLASS(Blueprintable)
class WATER_API AWaterBodyRiver : public AWaterBody {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, NonPIEDuplicateTransient, meta=(AllowPrivateAccess=true))
    URiverGenerator* RiverGenerator;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UMaterialInterface* LakeTransitionMaterial;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, NonPIEDuplicateTransient, TextExportTransient, Transient, meta=(AllowPrivateAccess=true))
    UMaterialInstanceDynamic* LakeTransitionMID;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UMaterialInterface* OceanTransitionMaterial;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, NonPIEDuplicateTransient, TextExportTransient, Transient, meta=(AllowPrivateAccess=true))
    UMaterialInstanceDynamic* OceanTransitionMID;
    
public:
    AWaterBodyRiver();
};

