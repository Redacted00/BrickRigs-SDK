#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=CoreUObject -ObjectName=SoftObjectPath -FallbackName=SoftObjectPath
#include "LiveLinkCurveConversionSettings.generated.h"

USTRUCT(BlueprintType)
struct FLiveLinkCurveConversionSettings {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TMap<FString, FSoftObjectPath> CurveConversionAssetMap;
    
    LIVELINKINTERFACE_API FLiveLinkCurveConversionSettings();
};

