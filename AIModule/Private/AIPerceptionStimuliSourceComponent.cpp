#include "AIPerceptionStimuliSourceComponent.h"
#include "Templates/SubclassOf.h"

class UAISense;

void UAIPerceptionStimuliSourceComponent::UnregisterFromSense(TSubclassOf<UAISense> SenseClass) {
}

void UAIPerceptionStimuliSourceComponent::UnregisterFromPerceptionSystem() {
}

void UAIPerceptionStimuliSourceComponent::RegisterWithPerceptionSystem() {
}

void UAIPerceptionStimuliSourceComponent::RegisterForSense(TSubclassOf<UAISense> SenseClass) {
}

UAIPerceptionStimuliSourceComponent::UAIPerceptionStimuliSourceComponent() {
    this->bAutoRegisterAsSource = false;
}

