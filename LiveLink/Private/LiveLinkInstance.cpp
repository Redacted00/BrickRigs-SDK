#include "LiveLinkInstance.h"
#include "Templates/SubclassOf.h"

class ULiveLinkRetargetAsset;

void ULiveLinkInstance::SetSubject(FLiveLinkSubjectName SubjectName) {
}

void ULiveLinkInstance::SetRetargetAsset(TSubclassOf<ULiveLinkRetargetAsset> RetargetAsset) {
}

ULiveLinkInstance::ULiveLinkInstance() {
    this->CurrentRetargetAsset = NULL;
}

