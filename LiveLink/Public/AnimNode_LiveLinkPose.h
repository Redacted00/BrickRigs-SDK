#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=Engine -ObjectName=AnimNode_Base -FallbackName=AnimNode_Base
//CROSS-MODULE INCLUDE V2: -ModuleName=Engine -ObjectName=PoseLink -FallbackName=PoseLink
//CROSS-MODULE INCLUDE V2: -ModuleName=LiveLinkInterface -ObjectName=LiveLinkSubjectName -FallbackName=LiveLinkSubjectName
#include "Templates/SubclassOf.h"
#include "AnimNode_LiveLinkPose.generated.h"

class ULiveLinkRetargetAsset;

USTRUCT(BlueprintType)
struct LIVELINK_API FAnimNode_LiveLinkPose : public FAnimNode_Base {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FPoseLink InputPose;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FLiveLinkSubjectName LiveLinkSubjectName;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, NoClear, meta=(AllowPrivateAccess=true))
    TSubclassOf<ULiveLinkRetargetAsset> RetargetAsset;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    ULiveLinkRetargetAsset* CurrentRetargetAsset;
    
    FAnimNode_LiveLinkPose();
};

