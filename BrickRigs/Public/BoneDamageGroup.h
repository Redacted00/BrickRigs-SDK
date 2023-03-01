#pragma once
#include "CoreMinimal.h"
#include "BoneDamageGroup.generated.h"

USTRUCT(BlueprintType)
struct FBoneDamageGroup {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FName> BoneNames;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float DamageScale;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bIncludeChildBones;
    
    BRICKRIGS_API FBoneDamageGroup();
};

