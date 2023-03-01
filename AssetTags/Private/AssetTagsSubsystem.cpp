#include "AssetTagsSubsystem.h"

class UObject;

TArray<FName> UAssetTagsSubsystem::GetCollectionsContainingAssetPtr(const UObject* AssetPtr) {
    return TArray<FName>();
}

TArray<FName> UAssetTagsSubsystem::GetCollectionsContainingAssetData(const FAssetData& AssetData) {
    return TArray<FName>();
}

TArray<FName> UAssetTagsSubsystem::GetCollectionsContainingAsset(const FName AssetPathName) {
    return TArray<FName>();
}

TArray<FName> UAssetTagsSubsystem::GetCollections() {
    return TArray<FName>();
}

TArray<FAssetData> UAssetTagsSubsystem::GetAssetsInCollection(const FName Name) {
    return TArray<FAssetData>();
}

bool UAssetTagsSubsystem::CollectionExists(const FName Name) {
    return false;
}

UAssetTagsSubsystem::UAssetTagsSubsystem() {
}

