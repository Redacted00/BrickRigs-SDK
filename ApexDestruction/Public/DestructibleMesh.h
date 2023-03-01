#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=Engine -ObjectName=FractureEffect -FallbackName=FractureEffect
//CROSS-MODULE INCLUDE V2: -ModuleName=Engine -ObjectName=SkeletalMesh -FallbackName=SkeletalMesh
#include "DestructibleParameters.h"
#include "DestructibleMesh.generated.h"

UCLASS(Blueprintable, MinimalAPI)
class UDestructibleMesh : public USkeletalMesh {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FDestructibleParameters DefaultDestructibleParameters;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, EditFixedSize, meta=(AllowPrivateAccess=true))
    TArray<FFractureEffect> FractureEffects;
    
    UDestructibleMesh();
};

