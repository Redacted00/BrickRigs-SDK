#pragma once
#include "CoreMinimal.h"
#include "UObject/NoExportTypes.h"
#include "BrickStaticInfo.h"
#include "EScalableBrickShape.h"
#include "ScalableBrickReplacementMesh.h"
#include "ScalableBrickStaticInfo.generated.h"

UCLASS(Abstract, Blueprintable)
class BRICKRIGS_API UScalableBrickStaticInfo : public UBrickStaticInfo {
    GENERATED_BODY()
public:
    UPROPERTY(EditAnywhere, meta=(AllowPrivateAccess=true))
    float ScalableLiftSurfaceRadiiYZ[2];
    
    UPROPERTY(EditAnywhere, meta=(AllowPrivateAccess=true))
    FVector ScalableLiftSurfaceNormalsYZ[2];
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    EScalableBrickShape ScalableShape;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FScalableBrickReplacementMesh> ReplacementMeshes;
    
    UScalableBrickStaticInfo();
};

