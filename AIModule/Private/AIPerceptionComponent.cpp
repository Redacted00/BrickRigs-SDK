#include "AIPerceptionComponent.h"
#include "Templates/SubclassOf.h"

class AActor;
class UAISense;

void UAIPerceptionComponent::SetSenseEnabled(TSubclassOf<UAISense> SenseClass, const bool bEnable) {
}

void UAIPerceptionComponent::RequestStimuliListenerUpdate() {
}

void UAIPerceptionComponent::OnOwnerEndPlay(AActor* Actor, TEnumAsByte<EEndPlayReason::Type> EndPlayReason) {
}

void UAIPerceptionComponent::GetPerceivedHostileActorsBySense(const TSubclassOf<UAISense> SenseToUse, TArray<AActor*>& OutActors) const {
}

void UAIPerceptionComponent::GetPerceivedHostileActors(TArray<AActor*>& OutActors) const {
}

void UAIPerceptionComponent::GetPerceivedActors(TSubclassOf<UAISense> SenseToUse, TArray<AActor*>& OutActors) const {
}

void UAIPerceptionComponent::GetKnownPerceivedActors(TSubclassOf<UAISense> SenseToUse, TArray<AActor*>& OutActors) const {
}

void UAIPerceptionComponent::GetCurrentlyPerceivedActors(TSubclassOf<UAISense> SenseToUse, TArray<AActor*>& OutActors) const {
}

bool UAIPerceptionComponent::GetActorsPerception(AActor* Actor, FActorPerceptionBlueprintInfo& Info) {
    return false;
}

void UAIPerceptionComponent::ForgetAll() {
}

UAIPerceptionComponent::UAIPerceptionComponent() {
    this->DominantSense = NULL;
    this->AIOwner = NULL;
}

