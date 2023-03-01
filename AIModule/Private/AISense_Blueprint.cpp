#include "AISense_Blueprint.h"

class AActor;
class UAIPerceptionComponent;






void UAISense_Blueprint::GetAllListenerComponents(TArray<UAIPerceptionComponent*>& ListenerComponents) const {
}

void UAISense_Blueprint::GetAllListenerActors(TArray<AActor*>& ListenerActors) const {
}

UAISense_Blueprint::UAISense_Blueprint() {
    this->ListenerDataType = NULL;
}

