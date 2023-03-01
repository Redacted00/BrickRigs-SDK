#include "AISense_Hearing.h"

class AActor;
class UObject;

void UAISense_Hearing::ReportNoiseEvent(UObject* WorldContextObject, FVector NoiseLocation, float Loudness, AActor* Instigator, float MaxRange, FName Tag) {
}

UAISense_Hearing::UAISense_Hearing() {
    this->SpeedOfSoundSq = 0.00f;
}

