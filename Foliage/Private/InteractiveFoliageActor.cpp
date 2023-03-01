#include "InteractiveFoliageActor.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=Engine -ObjectName=CapsuleComponent -FallbackName=CapsuleComponent

class AActor;
class UPrimitiveComponent;

void AInteractiveFoliageActor::CapsuleTouched(UPrimitiveComponent* OverlappedComp, AActor* Other, UPrimitiveComponent* OtherComp, int32 OtherBodyIndex, bool bFromSweep, const FHitResult& OverlapInfo) {
}

AInteractiveFoliageActor::AInteractiveFoliageActor() {
    this->CapsuleComponent = CreateDefaultSubobject<UCapsuleComponent>(TEXT("CollisionCylinder"));
    this->FoliageDamageImpulseScale = 20.00f;
    this->FoliageTouchImpulseScale = 10.00f;
    this->FoliageStiffness = 10.00f;
    this->FoliageStiffnessQuadratic = 0.30f;
    this->FoliageDamping = 2.00f;
    this->MaxDamageImpulse = 100000.00f;
    this->MaxTouchImpulse = 1000.00f;
    this->MaxForce = 100000.00f;
    this->Mass = 1.00f;
}

