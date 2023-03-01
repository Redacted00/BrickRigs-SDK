#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=CoreUObject -ObjectName=Object -FallbackName=Object
//CROSS-MODULE INCLUDE V2: -ModuleName=Engine -ObjectName=LatentActionInfo -FallbackName=LatentActionInfo
//CROSS-MODULE INCLUDE V2: -ModuleName=LiveLinkInterface -ObjectName=LiveLinkSourceHandle -FallbackName=LiveLinkSourceHandle
#include "ProviderPollResult.h"
#include "LiveLinkMessageBusFinder.generated.h"

class ULiveLinkMessageBusFinder;

UCLASS(Blueprintable)
class LIVELINK_API ULiveLinkMessageBusFinder : public UObject {
    GENERATED_BODY()
public:
    ULiveLinkMessageBusFinder();
    UFUNCTION(BlueprintCallable, meta=(Latent, LatentInfo="LatentInfo", WorldContext="WorldContextObject"))
    void GetAvailableProviders(UObject* WorldContextObject, FLatentActionInfo LatentInfo, float Duration, TArray<FProviderPollResult>& AvailableProviders);
    
    UFUNCTION(BlueprintCallable)
    static ULiveLinkMessageBusFinder* ConstructMessageBusFinder();
    
    UFUNCTION(BlueprintCallable)
    static void ConnectToProvider(UPARAM(Ref) FProviderPollResult& Provider, FLiveLinkSourceHandle& SourceHandle);
    
};

