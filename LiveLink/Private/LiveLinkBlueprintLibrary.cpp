#include "LiveLinkBlueprintLibrary.h"
#include "Templates/SubclassOf.h"

class ULiveLinkRole;

void ULiveLinkBlueprintLibrary::TransformNames(FSubjectFrameHandle& SubjectFrameHandle, TArray<FName>& NewTransformNames) {
}

void ULiveLinkBlueprintLibrary::TransformName(FLiveLinkTransform& LiveLinkTransform, FName& Name) {
}

void ULiveLinkBlueprintLibrary::SetLiveLinkSubjectEnabled(const FLiveLinkSubjectKey SubjectKey, bool bEnabled) {
}

bool ULiveLinkBlueprintLibrary::RemoveSource(FLiveLinkSourceHandle& SourceHandle) {
    return false;
}

void ULiveLinkBlueprintLibrary::ParentBoneSpaceTransform(FLiveLinkTransform& LiveLinkTransform, FTransform& Transform) {
}

int32 ULiveLinkBlueprintLibrary::NumberOfTransforms(FSubjectFrameHandle& SubjectFrameHandle) {
    return 0;
}

bool ULiveLinkBlueprintLibrary::IsSpecificLiveLinkSubjectEnabled(const FLiveLinkSubjectKey SubjectKey, bool bForThisFrame) {
    return false;
}

bool ULiveLinkBlueprintLibrary::IsSourceStillValid(FLiveLinkSourceHandle& SourceHandle) {
    return false;
}

bool ULiveLinkBlueprintLibrary::IsLiveLinkSubjectEnabled(const FLiveLinkSubjectName SubjectName) {
    return false;
}

bool ULiveLinkBlueprintLibrary::HasParent(FLiveLinkTransform& LiveLinkTransform) {
    return false;
}

void ULiveLinkBlueprintLibrary::GetTransformByName(FSubjectFrameHandle& SubjectFrameHandle, FName NewTransformName, FLiveLinkTransform& LiveLinkTransform) {
}

void ULiveLinkBlueprintLibrary::GetTransformByIndex(FSubjectFrameHandle& SubjectFrameHandle, int32 TransformIndex, FLiveLinkTransform& LiveLinkTransform) {
}

TSubclassOf<ULiveLinkRole> ULiveLinkBlueprintLibrary::GetSpecificLiveLinkSubjectRole(const FLiveLinkSubjectKey SubjectKey) {
    return NULL;
}

FText ULiveLinkBlueprintLibrary::GetSourceType(FLiveLinkSourceHandle& SourceHandle) {
    return FText::GetEmpty();
}

FText ULiveLinkBlueprintLibrary::GetSourceStatus(FLiveLinkSourceHandle& SourceHandle) {
    return FText::GetEmpty();
}

FText ULiveLinkBlueprintLibrary::GetSourceMachineName(FLiveLinkSourceHandle& SourceHandle) {
    return FText::GetEmpty();
}

void ULiveLinkBlueprintLibrary::GetRootTransform(FSubjectFrameHandle& SubjectFrameHandle, FLiveLinkTransform& LiveLinkTransform) {
}

bool ULiveLinkBlueprintLibrary::GetPropertyValue(FLiveLinkBasicBlueprintData& BasicData, FName PropertyName, float& Value) {
    return false;
}

void ULiveLinkBlueprintLibrary::GetParent(FLiveLinkTransform& LiveLinkTransform, FLiveLinkTransform& Parent) {
}

void ULiveLinkBlueprintLibrary::GetMetadata(FSubjectFrameHandle& SubjectFrameHandle, FSubjectMetadata& MetaData) {
}

TArray<FLiveLinkSubjectKey> ULiveLinkBlueprintLibrary::GetLiveLinkSubjects(bool bIncludeDisabledSubject, bool bIncludeVirtualSubject) {
    return TArray<FLiveLinkSubjectKey>();
}

TSubclassOf<ULiveLinkRole> ULiveLinkBlueprintLibrary::GetLiveLinkSubjectRole(const FLiveLinkSubjectName SubjectName) {
    return NULL;
}

TArray<FLiveLinkSubjectName> ULiveLinkBlueprintLibrary::GetLiveLinkEnabledSubjectNames(bool bIncludeVirtualSubject) {
    return TArray<FLiveLinkSubjectName>();
}

void ULiveLinkBlueprintLibrary::GetCurves(FSubjectFrameHandle& SubjectFrameHandle, TMap<FName, float>& Curves) {
}

void ULiveLinkBlueprintLibrary::GetChildren(FLiveLinkTransform& LiveLinkTransform, TArray<FLiveLinkTransform>& Children) {
}

void ULiveLinkBlueprintLibrary::GetBasicData(FSubjectFrameHandle& SubjectFrameHandle, FLiveLinkBasicBlueprintData& BasicBlueprintData) {
}

bool ULiveLinkBlueprintLibrary::GetAnimationStaticData(FSubjectFrameHandle& SubjectFrameHandle, FLiveLinkSkeletonStaticData& AnimationStaticData) {
    return false;
}

bool ULiveLinkBlueprintLibrary::GetAnimationFrameData(FSubjectFrameHandle& SubjectFrameHandle, FLiveLinkAnimationFrameData& AnimationFrameData) {
    return false;
}

bool ULiveLinkBlueprintLibrary::EvaluateLiveLinkFrameWithSpecificRole(FLiveLinkSubjectName SubjectName, TSubclassOf<ULiveLinkRole> Role, FLiveLinkBaseBlueprintData& OutBlueprintData) {
    return false;
}

bool ULiveLinkBlueprintLibrary::EvaluateLiveLinkFrameAtWorldTimeOffset(FLiveLinkSubjectName SubjectName, TSubclassOf<ULiveLinkRole> Role, float WorldTimeOffset, FLiveLinkBaseBlueprintData& OutBlueprintData) {
    return false;
}

bool ULiveLinkBlueprintLibrary::EvaluateLiveLinkFrameAtSceneTime(FLiveLinkSubjectName SubjectName, TSubclassOf<ULiveLinkRole> Role, FTimecode SceneTime, FLiveLinkBaseBlueprintData& OutBlueprintData) {
    return false;
}

bool ULiveLinkBlueprintLibrary::EvaluateLiveLinkFrame(FLiveLinkSubjectRepresentation SubjectRepresentation, FLiveLinkBaseBlueprintData& OutBlueprintData) {
    return false;
}

void ULiveLinkBlueprintLibrary::ComponentSpaceTransform(FLiveLinkTransform& LiveLinkTransform, FTransform& Transform) {
}

int32 ULiveLinkBlueprintLibrary::ChildCount(FLiveLinkTransform& LiveLinkTransform) {
    return 0;
}

ULiveLinkBlueprintLibrary::ULiveLinkBlueprintLibrary() {
}

