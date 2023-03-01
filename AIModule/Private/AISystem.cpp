#include "AISystem.h"

void UAISystem::AILoggingVerbose() {
}

void UAISystem::AIIgnorePlayers() {
}

UAISystem::UAISystem() {
    this->AcceptanceRadius = 5.00f;
    this->PathfollowingRegularPathPointAcceptanceRadius = 0.00f;
    this->PathfollowingNavLinkAcceptanceRadius = 0.00f;
    this->bFinishMoveOnGoalOverlap = true;
    this->bAcceptPartialPaths = true;
    this->bAllowStrafing = false;
    this->bEnableBTAITasks = false;
    this->bAllowControllersAsEQSQuerier = false;
    this->bEnableDebuggerPlugin = false;
    this->bForgetStaleActors = false;
    this->bAddBlackboardSelfKey = true;
    this->DefaultSightCollisionChannel = ECC_Visibility;
    this->BehaviorTreeManager = NULL;
    this->EnvironmentQueryManager = NULL;
    this->PerceptionSystem = NULL;
    this->HotSpotManager = NULL;
    this->NavLocalGrids = NULL;
}

