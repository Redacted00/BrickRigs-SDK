#include "LevelSequenceBurnIn.h"
#include "Templates/SubclassOf.h"

class ULevelSequenceBurnInInitSettings;


TSubclassOf<ULevelSequenceBurnInInitSettings> ULevelSequenceBurnIn::GetSettingsClass_Implementation() const {
    return NULL;
}

ULevelSequenceBurnIn::ULevelSequenceBurnIn() : UUserWidget(FObjectInitializer::Get()) {
    this->LevelSequenceActor = NULL;
}

