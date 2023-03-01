#include "AIBlueprintHelperLibrary.h"
#include "Templates/SubclassOf.h"

class AAIController;
class AActor;
class AController;
class APawn;
class UAIAsyncTaskBlueprintProxy;
class UAnimInstance;
class UBehaviorTree;
class UBlackboardComponent;
class UNavigationPath;
class UObject;

void UAIBlueprintHelperLibrary::UnlockAIResourcesWithAnimation(UAnimInstance* AnimInstance, bool bUnlockMovement, bool UnlockAILogic) {
}

APawn* UAIBlueprintHelperLibrary::SpawnAIFromClass(UObject* WorldContextObject, TSubclassOf<APawn> PawnClass, UBehaviorTree* BehaviorTree, FVector Location, FRotator Rotation, bool bNoCollisionFail, AActor* Owner) {
    return NULL;
}

void UAIBlueprintHelperLibrary::SimpleMoveToLocation(AController* Controller, const FVector& Goal) {
}

void UAIBlueprintHelperLibrary::SimpleMoveToActor(AController* Controller, const AActor* Goal) {
}

void UAIBlueprintHelperLibrary::SendAIMessage(APawn* Target, FName Message, UObject* MessageSource, bool bSuccess) {
}

void UAIBlueprintHelperLibrary::LockAIResourcesWithAnimation(UAnimInstance* AnimInstance, bool bLockMovement, bool LockAILogic) {
}

bool UAIBlueprintHelperLibrary::IsValidAIRotation(FRotator Rotation) {
    return false;
}

bool UAIBlueprintHelperLibrary::IsValidAILocation(FVector Location) {
    return false;
}

bool UAIBlueprintHelperLibrary::IsValidAIDirection(FVector DirectionVector) {
    return false;
}

int32 UAIBlueprintHelperLibrary::GetNextNavLinkIndex(const AController* Controller) {
    return 0;
}

TArray<FVector> UAIBlueprintHelperLibrary::GetCurrentPathPoints(AController* Controller) {
    return TArray<FVector>();
}

int32 UAIBlueprintHelperLibrary::GetCurrentPathIndex(const AController* Controller) {
    return 0;
}

UNavigationPath* UAIBlueprintHelperLibrary::GetCurrentPath(AController* Controller) {
    return NULL;
}

UBlackboardComponent* UAIBlueprintHelperLibrary::GetBlackboard(AActor* Target) {
    return NULL;
}

AAIController* UAIBlueprintHelperLibrary::GetAIController(AActor* ControlledActor) {
    return NULL;
}

UAIAsyncTaskBlueprintProxy* UAIBlueprintHelperLibrary::CreateMoveToProxyObject(UObject* WorldContextObject, APawn* Pawn, FVector Destination, AActor* TargetActor, float AcceptanceRadius, bool bStopOnOverlap) {
    return NULL;
}

UAIBlueprintHelperLibrary::UAIBlueprintHelperLibrary() {
}

