#include "AITask_MoveTo.h"

class AAIController;
class AActor;
class UAITask_MoveTo;

UAITask_MoveTo* UAITask_MoveTo::AIMoveTo(AAIController* Controller, FVector GoalLocation, AActor* GoalActor, float AcceptanceRadius, TEnumAsByte<EAIOptionFlag::Type> StopOnOverlap, TEnumAsByte<EAIOptionFlag::Type> AcceptPartialPath, bool bUsePathfinding, bool bLockAILogic, bool bUseContinuosGoalTracking, TEnumAsByte<EAIOptionFlag::Type> ProjectGoalOnNavigation) {
    return NULL;
}

UAITask_MoveTo::UAITask_MoveTo() {
}

