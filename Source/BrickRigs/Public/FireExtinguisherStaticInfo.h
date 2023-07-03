#pragma once
#include "CoreMinimal.h"
#include "FireExtinguisherProperties.h"
#include "ItemAnimation.h"
#include "ItemStaticInfo.h"
#include "FireExtinguisherStaticInfo.generated.h"

UCLASS(Blueprintable)
class BRICKRIGS_API UFireExtinguisherStaticInfo : public UItemStaticInfo {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FFireExtinguisherProperties ExtinguisherProperties;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float ExtinguishStartDistance;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FItemAnimation ExtinguishAnimation;
    
    UFireExtinguisherStaticInfo();
};

