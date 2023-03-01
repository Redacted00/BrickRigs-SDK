#include "GameplayTagsSettings.h"

UGameplayTagsSettings::UGameplayTagsSettings() {
    this->ImportTagsFromConfig = true;
    this->WarnOnInvalidTags = true;
    this->ClearInvalidTags = false;
    this->FastReplication = true;
    this->InvalidTagCharacters = TEXT("\"',");
    this->GameplayTagRedirects.AddDefaulted(5);
    this->NumBitsForContainerSize = 6;
    this->NetIndexFirstBitSegment = 16;
}

