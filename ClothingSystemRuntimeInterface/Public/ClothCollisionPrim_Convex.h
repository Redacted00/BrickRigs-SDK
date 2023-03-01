#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=CoreUObject -ObjectName=Vector -FallbackName=Vector
#include "ClothCollisionPrim_ConvexFace.h"
#include "ClothCollisionPrim_Convex.generated.h"

USTRUCT(BlueprintType)
struct CLOTHINGSYSTEMRUNTIMEINTERFACE_API FClothCollisionPrim_Convex {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FClothCollisionPrim_ConvexFace> Faces;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FVector> SurfacePoints;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 BoneIndex;
    
    FClothCollisionPrim_Convex();
};

