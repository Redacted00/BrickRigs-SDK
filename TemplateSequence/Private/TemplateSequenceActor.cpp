#include "TemplateSequenceActor.h"
#include "Net/UnrealNetwork.h"
#include "TemplateSequencePlayer.h"

class AActor;
class UTemplateSequence;

void ATemplateSequenceActor::SetSequence(UTemplateSequence* InSequence) {
}

void ATemplateSequenceActor::SetBinding(AActor* Actor, bool bOverridesDefault) {
}

UTemplateSequence* ATemplateSequenceActor::LoadSequence() const {
    return NULL;
}

UTemplateSequencePlayer* ATemplateSequenceActor::GetSequencePlayer() const {
    return NULL;
}

UTemplateSequence* ATemplateSequenceActor::GetSequence() const {
    return NULL;
}

void ATemplateSequenceActor::GetLifetimeReplicatedProps(TArray<FLifetimeProperty>& OutLifetimeProps) const {
    Super::GetLifetimeReplicatedProps(OutLifetimeProps);
    
    DOREPLIFETIME(ATemplateSequenceActor, SequencePlayer);
}

ATemplateSequenceActor::ATemplateSequenceActor() {
    this->SequencePlayer = CreateDefaultSubobject<UTemplateSequencePlayer>(TEXT("AnimationPlayer"));
}

