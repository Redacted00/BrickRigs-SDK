#include "LiveLinkRemapAsset.h"

void ULiveLinkRemapAsset::RemapCurveElements_Implementation(TMap<FName, float>& CurveItems) const {
}

FName ULiveLinkRemapAsset::GetRemappedCurveName_Implementation(FName CurveName) const {
    return NAME_None;
}

FName ULiveLinkRemapAsset::GetRemappedBoneName_Implementation(FName BoneName) const {
    return NAME_None;
}

ULiveLinkRemapAsset::ULiveLinkRemapAsset() {
}

