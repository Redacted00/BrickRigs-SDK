#include "AISense_Sight.h"

UAISense_Sight::UAISense_Sight() {
    this->MaxTracesPerTick = 6;
    this->MinQueriesPerTimeSliceCheck = 40;
    this->MaxTimeSlicePerTick = 0.01f;
    this->HighImportanceQueryDistanceThreshold = 300.00f;
    this->MaxQueryImportance = 60.00f;
    this->SightLimitQueryImportance = 10.00f;
}

