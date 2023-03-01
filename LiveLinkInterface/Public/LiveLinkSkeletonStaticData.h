#pragma once
#include "CoreMinimal.h"
#include "LiveLinkBaseStaticData.h"
#include "LiveLinkSkeletonStaticData.generated.h"

USTRUCT(BlueprintType)
struct LIVELINKINTERFACE_API FLiveLinkSkeletonStaticData : public FLiveLinkBaseStaticData {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FName> BoneNames;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<int32> BoneParents;
    
    FLiveLinkSkeletonStaticData();
};

