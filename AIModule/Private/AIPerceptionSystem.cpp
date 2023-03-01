#include "AIPerceptionSystem.h"
#include "Templates/SubclassOf.h"

class AActor;
class UAISense;
class UAISenseEvent;
class UObject;

void UAIPerceptionSystem::ReportPerceptionEvent(UObject* WorldContextObject, UAISenseEvent* PerceptionEvent) {
}

void UAIPerceptionSystem::ReportEvent(UAISenseEvent* PerceptionEvent) {
}

bool UAIPerceptionSystem::RegisterPerceptionStimuliSource(UObject* WorldContextObject, TSubclassOf<UAISense> Sense, AActor* Target) {
    return false;
}

void UAIPerceptionSystem::OnPerceptionStimuliSourceEndPlay(AActor* Actor, TEnumAsByte<EEndPlayReason::Type> EndPlayReason) {
}

TSubclassOf<UAISense> UAIPerceptionSystem::GetSenseClassForStimulus(UObject* WorldContextObject, const FAIStimulus& Stimulus) {
    return NULL;
}

UAIPerceptionSystem::UAIPerceptionSystem() {
    this->PerceptionAgingRate = 0.30f;
}

