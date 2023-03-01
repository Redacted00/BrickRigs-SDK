#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=LiveLink -ObjectName=LiveLinkRetargetAsset -FallbackName=LiveLinkRetargetAsset
#include "EQuatSwizzleAxisB.h"
#include "OpenXRHandTrackingLiveLinkRemapAsset.generated.h"

UCLASS(Blueprintable)
class UOpenXRHandTrackingLiveLinkRemapAsset : public ULiveLinkRetargetAsset {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bHasMetacarpals;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bRetargetRotationOnly;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    EQuatSwizzleAxisB SwizzleX;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    EQuatSwizzleAxisB SwizzleY;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    EQuatSwizzleAxisB SwizzleZ;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    EQuatSwizzleAxisB SwizzleW;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TMap<FName, FName> HandTrackingBoneNameMap;
    
    UOpenXRHandTrackingLiveLinkRemapAsset();
};

