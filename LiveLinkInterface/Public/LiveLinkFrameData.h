#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=CoreUObject -ObjectName=Transform -FallbackName=Transform
#include "LiveLinkCurveElement.h"
#include "LiveLinkMetaData.h"
#include "LiveLinkWorldTime.h"
#include "LiveLinkFrameData.generated.h"

USTRUCT(BlueprintType)
struct FLiveLinkFrameData {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FTransform> Transforms;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FLiveLinkCurveElement> CurveElements;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FLiveLinkWorldTime WorldTime;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FLiveLinkMetaData MetaData;
    
    LIVELINKINTERFACE_API FLiveLinkFrameData();
};

