#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=CoreUObject -ObjectName=Object -FallbackName=Object
//CROSS-MODULE INCLUDE V2: -ModuleName=LiveLinkInterface -ObjectName=LiveLinkSourcePreset -FallbackName=LiveLinkSourcePreset
//CROSS-MODULE INCLUDE V2: -ModuleName=LiveLinkInterface -ObjectName=LiveLinkSubjectPreset -FallbackName=LiveLinkSubjectPreset
#include "LiveLinkPreset.generated.h"

UCLASS(Blueprintable)
class LIVELINK_API ULiveLinkPreset : public UObject {
    GENERATED_BODY()
public:
private:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FLiveLinkSourcePreset> Sources;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FLiveLinkSubjectPreset> Subjects;
    
public:
    ULiveLinkPreset();
    UFUNCTION(BlueprintCallable)
    void BuildFromClient();
    
    UFUNCTION(BlueprintCallable, BlueprintPure=false)
    bool ApplyToClient() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure=false)
    bool AddToClient(const bool bRecreatePresets) const;
    
};

