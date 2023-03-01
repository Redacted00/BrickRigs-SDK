#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=CoreUObject -ObjectName=Vector -FallbackName=Vector
#include "ENiagaraMeshPivotOffsetSpace.h"
#include "NiagaraMeshRendererMeshProperties.generated.h"

class UStaticMesh;

USTRUCT(BlueprintType)
struct NIAGARA_API FNiagaraMeshRendererMeshProperties {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UStaticMesh* Mesh;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FVector Scale;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FVector PivotOffset;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    ENiagaraMeshPivotOffsetSpace PivotOffsetSpace;
    
    FNiagaraMeshRendererMeshProperties();
};

