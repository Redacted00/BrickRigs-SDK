#pragma once
#include "CoreMinimal.h"
#include "EWearableTag.h"
#include "ItemStaticInfo.h"
#include "WearableStaticInfo.generated.h"

UCLASS(Abstract, Blueprintable)
class BRICKRIGS_API UWearableStaticInfo : public UItemStaticInfo {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    EWearableTag WearableType;
    
    UWearableStaticInfo();
};

