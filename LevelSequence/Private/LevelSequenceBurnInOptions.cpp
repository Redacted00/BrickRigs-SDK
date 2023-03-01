#include "LevelSequenceBurnInOptions.h"

void ULevelSequenceBurnInOptions::SetBurnIn(FSoftClassPath InBurnInClass) {
}

ULevelSequenceBurnInOptions::ULevelSequenceBurnInOptions() {
    this->bUseBurnIn = false;
    this->Settings = NULL;
}

