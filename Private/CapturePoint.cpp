#include "CapturePoint.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=Engine -ObjectName=StaticMeshComponent -FallbackName=StaticMeshComponent
#include "Net/UnrealNetwork.h"

void ACapturePoint::OnTriggerEndOverlap(UPrimitiveComponent* OverlappedComponent, AActor* OtherActor, UPrimitiveComponent* OtherComp, int32 OtherBodyIndex) {
}

void ACapturePoint::OnTriggerBeginOverlap(UPrimitiveComponent* OverlappedComponent, AActor* OtherActor, UPrimitiveComponent* OtherComp, int32 OtherBodyIndex, bool bFromSweep, const FHitResult& SweepResult) {
}

void ACapturePoint::OnRep_CapturePointState(const FCapturePointState& OldState) {
}

void ACapturePoint::GetLifetimeReplicatedProps(TArray<FLifetimeProperty>& OutLifetimeProps) const {
    Super::GetLifetimeReplicatedProps(OutLifetimeProps);
    
    DOREPLIFETIME(ACapturePoint, CapturePointState);
}

ACapturePoint::ACapturePoint() {
    this->FlagMID = NULL;
    this->MeshComponent = CreateDefaultSubobject<UStaticMeshComponent>(TEXT("MeshComponent"));
    this->ShapeComponent = NULL;
    this->StaticMesh = NULL;
    this->MaxDrawDistance = 100000.00f;
    this->MaxFlagHeight = 500.00f;
    this->TimeToCapture = 15.00f;
    this->CapturePointId = EAlphabeticId::A;
    this->CapturePointShape = ECapturePointShape::Box;
}

