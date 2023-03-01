#pragma once
#include "CoreMinimal.h"
#include "ClothVertBoneData.generated.h"

USTRUCT(BlueprintType)
struct FClothVertBoneData {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 NumInfluences;
    
    UPROPERTY(EditAnywhere, meta=(AllowPrivateAccess=true))
    uint16 BoneIndices[12];
    
    UPROPERTY(EditAnywhere, meta=(AllowPrivateAccess=true))
    float BoneWeights[12];
    
    CLOTHINGSYSTEMRUNTIMEINTERFACE_API FClothVertBoneData();
};

