#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=CoreUObject -ObjectName=Timecode -FallbackName=Timecode
//CROSS-MODULE INCLUDE V2: -ModuleName=CoreUObject -ObjectName=Transform -FallbackName=Transform
//CROSS-MODULE INCLUDE V2: -ModuleName=Engine -ObjectName=BlueprintFunctionLibrary -FallbackName=BlueprintFunctionLibrary
//CROSS-MODULE INCLUDE V2: -ModuleName=LiveLinkInterface -ObjectName=LiveLinkAnimationFrameData -FallbackName=LiveLinkAnimationFrameData
//CROSS-MODULE INCLUDE V2: -ModuleName=LiveLinkInterface -ObjectName=LiveLinkBaseBlueprintData -FallbackName=LiveLinkBaseBlueprintData
//CROSS-MODULE INCLUDE V2: -ModuleName=LiveLinkInterface -ObjectName=LiveLinkBasicBlueprintData -FallbackName=LiveLinkBasicBlueprintData
//CROSS-MODULE INCLUDE V2: -ModuleName=LiveLinkInterface -ObjectName=LiveLinkSkeletonStaticData -FallbackName=LiveLinkSkeletonStaticData
//CROSS-MODULE INCLUDE V2: -ModuleName=LiveLinkInterface -ObjectName=LiveLinkSourceHandle -FallbackName=LiveLinkSourceHandle
//CROSS-MODULE INCLUDE V2: -ModuleName=LiveLinkInterface -ObjectName=LiveLinkSubjectKey -FallbackName=LiveLinkSubjectKey
//CROSS-MODULE INCLUDE V2: -ModuleName=LiveLinkInterface -ObjectName=LiveLinkSubjectName -FallbackName=LiveLinkSubjectName
//CROSS-MODULE INCLUDE V2: -ModuleName=LiveLinkInterface -ObjectName=LiveLinkSubjectRepresentation -FallbackName=LiveLinkSubjectRepresentation
//CROSS-MODULE INCLUDE V2: -ModuleName=LiveLinkInterface -ObjectName=LiveLinkTransform -FallbackName=LiveLinkTransform
//CROSS-MODULE INCLUDE V2: -ModuleName=LiveLinkInterface -ObjectName=SubjectFrameHandle -FallbackName=SubjectFrameHandle
//CROSS-MODULE INCLUDE V2: -ModuleName=LiveLinkInterface -ObjectName=SubjectMetadata -FallbackName=SubjectMetadata
#include "Templates/SubclassOf.h"
#include "LiveLinkBlueprintLibrary.generated.h"

class ULiveLinkRole;

UCLASS(Blueprintable)
class LIVELINK_API ULiveLinkBlueprintLibrary : public UBlueprintFunctionLibrary {
    GENERATED_BODY()
public:
    ULiveLinkBlueprintLibrary();
private:
    UFUNCTION(BlueprintCallable, BlueprintPure)
    static void TransformNames(UPARAM(Ref) FSubjectFrameHandle& SubjectFrameHandle, TArray<FName>& NewTransformNames);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    static void TransformName(UPARAM(Ref) FLiveLinkTransform& LiveLinkTransform, FName& Name);
    
public:
    UFUNCTION(BlueprintCallable)
    static void SetLiveLinkSubjectEnabled(const FLiveLinkSubjectKey SubjectKey, bool bEnabled);
    
private:
    UFUNCTION(BlueprintCallable)
    static bool RemoveSource(UPARAM(Ref) FLiveLinkSourceHandle& SourceHandle);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    static void ParentBoneSpaceTransform(UPARAM(Ref) FLiveLinkTransform& LiveLinkTransform, FTransform& Transform);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    static int32 NumberOfTransforms(UPARAM(Ref) FSubjectFrameHandle& SubjectFrameHandle);
    
public:
    UFUNCTION(BlueprintCallable)
    static bool IsSpecificLiveLinkSubjectEnabled(const FLiveLinkSubjectKey SubjectKey, bool bForThisFrame);
    
private:
    UFUNCTION(BlueprintCallable)
    static bool IsSourceStillValid(UPARAM(Ref) FLiveLinkSourceHandle& SourceHandle);
    
public:
    UFUNCTION(BlueprintCallable)
    static bool IsLiveLinkSubjectEnabled(const FLiveLinkSubjectName SubjectName);
    
private:
    UFUNCTION(BlueprintCallable, BlueprintPure)
    static bool HasParent(UPARAM(Ref) FLiveLinkTransform& LiveLinkTransform);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    static void GetTransformByName(UPARAM(Ref) FSubjectFrameHandle& SubjectFrameHandle, FName NewTransformName, FLiveLinkTransform& LiveLinkTransform);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    static void GetTransformByIndex(UPARAM(Ref) FSubjectFrameHandle& SubjectFrameHandle, int32 TransformIndex, FLiveLinkTransform& LiveLinkTransform);
    
public:
    UFUNCTION(BlueprintCallable)
    static TSubclassOf<ULiveLinkRole> GetSpecificLiveLinkSubjectRole(const FLiveLinkSubjectKey SubjectKey);
    
private:
    UFUNCTION(BlueprintCallable)
    static FText GetSourceType(UPARAM(Ref) FLiveLinkSourceHandle& SourceHandle);
    
    UFUNCTION(BlueprintCallable)
    static FText GetSourceStatus(UPARAM(Ref) FLiveLinkSourceHandle& SourceHandle);
    
    UFUNCTION(BlueprintCallable)
    static FText GetSourceMachineName(UPARAM(Ref) FLiveLinkSourceHandle& SourceHandle);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    static void GetRootTransform(UPARAM(Ref) FSubjectFrameHandle& SubjectFrameHandle, FLiveLinkTransform& LiveLinkTransform);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    static bool GetPropertyValue(UPARAM(Ref) FLiveLinkBasicBlueprintData& BasicData, FName PropertyName, float& Value);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    static void GetParent(UPARAM(Ref) FLiveLinkTransform& LiveLinkTransform, FLiveLinkTransform& Parent);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    static void GetMetadata(UPARAM(Ref) FSubjectFrameHandle& SubjectFrameHandle, FSubjectMetadata& MetaData);
    
public:
    UFUNCTION(BlueprintCallable)
    static TArray<FLiveLinkSubjectKey> GetLiveLinkSubjects(bool bIncludeDisabledSubject, bool bIncludeVirtualSubject);
    
    UFUNCTION(BlueprintCallable)
    static TSubclassOf<ULiveLinkRole> GetLiveLinkSubjectRole(const FLiveLinkSubjectName SubjectName);
    
    UFUNCTION(BlueprintCallable)
    static TArray<FLiveLinkSubjectName> GetLiveLinkEnabledSubjectNames(bool bIncludeVirtualSubject);
    
private:
    UFUNCTION(BlueprintCallable, BlueprintPure)
    static void GetCurves(UPARAM(Ref) FSubjectFrameHandle& SubjectFrameHandle, TMap<FName, float>& Curves);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    static void GetChildren(UPARAM(Ref) FLiveLinkTransform& LiveLinkTransform, TArray<FLiveLinkTransform>& Children);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    static void GetBasicData(UPARAM(Ref) FSubjectFrameHandle& SubjectFrameHandle, FLiveLinkBasicBlueprintData& BasicBlueprintData);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    static bool GetAnimationStaticData(UPARAM(Ref) FSubjectFrameHandle& SubjectFrameHandle, FLiveLinkSkeletonStaticData& AnimationStaticData);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    static bool GetAnimationFrameData(UPARAM(Ref) FSubjectFrameHandle& SubjectFrameHandle, FLiveLinkAnimationFrameData& AnimationFrameData);
    
public:
    UFUNCTION(BlueprintCallable)
    static bool EvaluateLiveLinkFrameWithSpecificRole(FLiveLinkSubjectName SubjectName, TSubclassOf<ULiveLinkRole> Role, FLiveLinkBaseBlueprintData& OutBlueprintData);
    
    UFUNCTION(BlueprintCallable)
    static bool EvaluateLiveLinkFrameAtWorldTimeOffset(FLiveLinkSubjectName SubjectName, TSubclassOf<ULiveLinkRole> Role, float WorldTimeOffset, FLiveLinkBaseBlueprintData& OutBlueprintData);
    
    UFUNCTION(BlueprintCallable)
    static bool EvaluateLiveLinkFrameAtSceneTime(FLiveLinkSubjectName SubjectName, TSubclassOf<ULiveLinkRole> Role, FTimecode SceneTime, FLiveLinkBaseBlueprintData& OutBlueprintData);
    
    UFUNCTION(BlueprintCallable)
    static bool EvaluateLiveLinkFrame(FLiveLinkSubjectRepresentation SubjectRepresentation, FLiveLinkBaseBlueprintData& OutBlueprintData);
    
private:
    UFUNCTION(BlueprintCallable, BlueprintPure)
    static void ComponentSpaceTransform(UPARAM(Ref) FLiveLinkTransform& LiveLinkTransform, FTransform& Transform);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    static int32 ChildCount(UPARAM(Ref) FLiveLinkTransform& LiveLinkTransform);
    
};

