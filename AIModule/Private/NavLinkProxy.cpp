#include "NavLinkProxy.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=NavigationSystem -ObjectName=NavLinkCustomComponent -FallbackName=NavLinkCustomComponent

class AActor;

void ANavLinkProxy::SetSmartLinkEnabled(bool bEnabled) {
}

void ANavLinkProxy::ResumePathFollowing(AActor* Agent) {
}


bool ANavLinkProxy::IsSmartLinkEnabled() const {
    return false;
}

bool ANavLinkProxy::HasMovingAgents() const {
    return false;
}

ANavLinkProxy::ANavLinkProxy() {
    this->PointLinks.AddDefaulted(1);
    this->SmartLinkComp = CreateDefaultSubobject<UNavLinkCustomComponent>(TEXT("SmartLinkComp"));
    this->bSmartLinkIsRelevant = false;
}

