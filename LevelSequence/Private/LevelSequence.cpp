#include "LevelSequence.h"

class UObject;

void ULevelSequence::RemoveMetaDataByClass(UClass* InClass) {
}

UObject* ULevelSequence::FindOrAddMetaDataByClass(UClass* InClass) {
    return NULL;
}

UObject* ULevelSequence::FindMetaDataByClass(UClass* InClass) const {
    return NULL;
}

UObject* ULevelSequence::CopyMetaData(UObject* InMetaData) {
    return NULL;
}

ULevelSequence::ULevelSequence() {
    this->MovieScene = NULL;
    this->DirectorClass = NULL;
}

