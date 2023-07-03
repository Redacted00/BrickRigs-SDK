#pragma once
#include "CoreMinimal.h"
#include "UObject/NoExportTypes.h"
#include "CouplingBrickBaseStaticInfo.h"
#include "CouplingBrickStaticInfo.generated.h"

UCLASS(Abstract, Blueprintable)
class BRICKRIGS_API UCouplingBrickStaticInfo : public UCouplingBrickBaseStaticInfo {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FRotator AngularLimits;
    
    UCouplingBrickStaticInfo();
};

