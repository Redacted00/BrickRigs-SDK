#pragma once
#include "CoreMinimal.h"
#include "LiveLinkRetargetAsset.h"
#include "LiveLinkRemapAsset.generated.h"

UCLASS(Blueprintable)
class LIVELINK_API ULiveLinkRemapAsset : public ULiveLinkRetargetAsset {
    GENERATED_BODY()
public:
    ULiveLinkRemapAsset();
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    void RemapCurveElements(UPARAM(Ref) TMap<FName, float>& CurveItems) const;
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    FName GetRemappedCurveName(FName CurveName) const;
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    FName GetRemappedBoneName(FName BoneName) const;
    
};

