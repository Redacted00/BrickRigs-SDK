#include "BrickGameMode.h"

bool ABrickGameMode::IsReadyToStartWarmup_Implementation() const {
    return false;
}

bool ABrickGameMode::IsReadyToEndRound_Implementation(FMatchWinner& OutWinner, bool& bOutEndMatch) const {
    return false;
}

void ABrickGameMode::ForceEndMatch() {
}

ABrickGameMode::ABrickGameMode() {
    this->bMovePlayersToDefaultTeam = false;
    this->bCanJoinZombieTeam = false;
    this->bCanJoinDummyTeam = false;
    this->ZombieTeam = NULL;
    this->DummyTeam = NULL;
    this->InactiveCharacterLifeSpan = 60.00f;
    this->MinUnpossessDelay = 6.00f;
    this->bAutoRestartPlayers = false;
    this->bSpawnCharactersInvincible = false;
    this->bResetMoneyOnDeath = false;
    this->bDisableMovementDuringWaitingToStart = true;
    this->AutoBalanceTeamsThreshold = 0.10f;
    this->MaxSpawnPlayerRelevanceDistance = 5000.00f;
    this->MaxLocalChatDistance = 2000.00f;
    this->MaxTeamScore = 100;
    this->KillTeamScore = 1;
    this->AddScoreMoneyRatio = 1.00f;
    this->KillScore = 300.00f;
    this->ZombieKillScore = 200.00f;
    this->PointCapturedScore = 250.00f;
    this->PointNeutralizedScore = 250.00f;
    this->RoundWinScore = 250.00f;
    this->IntermissionRoundWinScore = 500.00f;
    this->bShowMatchScore = true;
    this->WarmupTime = 15;
    this->RoundStartTime = 5;
    this->RoundEndTime = 5;
    this->IntermissionTime = 20;
    this->MatchEndTime = 20;
    this->bSkipWarmup = false;
    this->MaxRoundsPerMatch = 1;
    this->NumRoundsToIntermission = 0;
    this->bEndRoundWhenTeamEliminated = false;
    this->bEndMatchWhenTeamEliminated = false;
    this->bAllowRestartDuringRound = true;
    this->bResetLevelAndPlayersEveryRound = true;
    this->bRespawnLoadoutOnRestart = true;
    this->bAllowFreeCam = false;
    this->bAllowInteractionWhileUnconscious = false;
    this->bAllowTeleporting = false;
    this->bAllowSpawnOnGarages = false;
    this->bAllowSpawnOnNeutralVehicles = false;
    this->bAllowSpawnOnHostileVehicles = false;
    this->bAllowSpawnVehicleWhileUnconscious = false;
    this->bAllowInfiniteFuel = false;
    this->bAllowInfiniteAmmo = false;
    this->bAllowSlowMotion = false;
    this->bAllowVehicleEditor = false;
    this->bAllowAdminsToScrapAllVehicles = false;
    this->bAllowRemoteScrapVehicles = false;
    this->bAllowExplodeVehicle = false;
    this->bAllowEnterHostileVehicle = false;
    this->bAllowEnterVehicleWithoutSeat = false;
    this->bAllowInfiniteMoney = false;
    this->bAllowFriendlyFire = false;
    this->bAllowChangeTeamWhileAlive = false;
    this->bAllowProjectileCamera = false;
    this->bAllowPossessAbandonedCharacters = false;
    this->bAllowSpawnDummies = false;
}

