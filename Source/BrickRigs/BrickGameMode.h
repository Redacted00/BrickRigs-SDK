// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "GameFramework/GameMode.h"
#include "BrickTeam.h"
#include "BrickVehicle.h"
#include "BrickGameMode.generated.h"

/**
 * 
 */
UCLASS()
class BRICKRIGS_API ABrickGameMode : public AGameMode
{
	GENERATED_BODY()

	// ~Properties
	// Whether players should be put into the default team by default
	UPROPERTY(EditAnywhere, Category = Teams)
		bool bMovePlayersToDefaultTeam;
	// Team for players who aren't in a team
	UPROPERTY(EditAnywhere, Category = Teams)
		TSubclassOf<UBrickTeam> DefaultTeam;
	// The team zombies are assigned to
	UPROPERTY(EditAnywhere, Category = Teams)
		TSubclassOf<UBrickTeam> ZombieTeam;
	// The team dummies are assigned to
	UPROPERTY(EditAnywhere, Category = Teams)
		TSubclassOf<UBrickTeam> DummyTeam;
	// The teams supported by this game mode
	UPROPERTY(EditAnywhere, Category = Teams)
		TSet<TSubclassOf<UBrickTeam>> Teams;

	// The vehicle class to spawn
	UPROPERTY(EditAnywhere, Category = GameMode)
		TSubclassOf<ABrickVehicle> VehicleClass;
	// How long characters of disconnected players should remain in the level
	UPROPERTY(EditAnywhere, Category = GameMode)
		float InactiveCharacterLifeSpan;
	// Time a player remains in playing state after death, 0 means indefinitely
	UPROPERTY(EditAnywhere, Category = GameMode, meta = (ClampMin = 0.f))
		float MinUnpossessDelay;
	// Whether players should be spawned initially and automatically respawned after dying
	UPROPERTY(EditAnywhere, Category = GameMode)
		uint8 bAutoRestartPlayers : 1;
	// If true all players will be invincible by default
	UPROPERTY(EditAnywhere, Category = GameMode)
		uint8 bSpawnCharactersInvincible : 1;
	// Whether players' money should be cleared upon death
	UPROPERTY(EditAnywhere, Category = GameMode)
		uint8 bResetMoneyOnDeath : 1;
	// Whether character movement should be disabled during WaitingToStart state
	UPROPERTY(EditAnywhere, Category = GameMode)
		uint8 bDisableMovementDuringWaitingToStart : 1;
	// Whether the players in the teams should automatically be balanced
	UPROPERTY(EditAnywhere, Category = GameMode)
		uint8 bAutoBalanceTeams : 1;
	// The maximum percentage difference for players allowed per team
	UPROPERTY(EditAnywhere, Category = GameMode, meta = (ClampMin = 0.f, ClampMax = 1.f))
		float AutoBalanceTeamsThreshold;
	// Maximum distance at which friendly and enemy players are considered when selecting a spawn point
	UPROPERTY(EditAnywhere, Category = GameMode)
		float MaxSpawnPlayerRelevanceDistance;
	// Max distance local chat message can be received from
	UPROPERTY(EditAnywhere, Category = GameMode)
		float MaxLocalChatDistance;
	// How much it costs to spawn each brick of a vehicle
	UPROPERTY(EditAnywhere, Category = GameMode)
		float PricePerVehicleBrick;

	// Score at which a team wins
	UPROPERTY(EditAnywhere, Category = TeamScore)
		int32 MaxTeamScore;
	// Score added for a team per kill
	UPROPERTY(EditAnywhere, Category = TeamScore)
		int32 KillTeamScore;

	// Percentage of money given to a player for any amount of score earned
	UPROPERTY(EditAnywhere, Category = Score)
		float AddScoreMoneyRatio;
	// Score given for a kill
	UPROPERTY(EditAnywhere, Category = Score)
		float KillScore;
	// Score given for killing a zombie
	UPROPERTY(EditAnywhere, Category = Score)
		float ZombieKillScore;
	// Score given for a captured point
	UPROPERTY(EditAnywhere, Category = Score)
		float PointCapturedScore;
	// Score given for neutralizing a point
	UPROPERTY(EditAnywhere, Category = Score)
		float PointNeutralizedScore;
	// Score given to all players when a round was won
	UPROPERTY(EditAnywhere, Category = Score)
		float RoundWinScore;
	// Score given to all players when a round before an intermission was won
	UPROPERTY(EditAnywhere, Category = Score)
		float IntermissionRoundWinScore;
	// Whether match score widgets like the timer, team scores etc should be displayed
	UPROPERTY(EditAnywhere, Category = Score)
		bool bShowMatchScore;

	UPROPERTY(EditAnywhere, Category = MatchTimers)
		int32 WarmupTime;
	UPROPERTY(EditAnywhere, Category = MatchTimers)
		int32 RoundStartTime;
	UPROPERTY(EditAnywhere, Category = MatchTimers)
		int32 RoundEndTime;
	UPROPERTY(EditAnywhere, Category = MatchTimers)
		int32 IntermissionTime;
	UPROPERTY(EditAnywhere, Category = MatchTimers)
		int32 MatchEndTime;

	// The maximum number of rounds to play
	UPROPERTY(EditAnywhere, Category = Rounds)
		int32 MaxRoundsPerMatch;
	// If > 0 will determine after how many rounds an intermission is started
	UPROPERTY(EditAnywhere, Category = Rounds)
		int32 NumRoundsToIntermission;
	// Whether the round should be ended when one team has died
	UPROPERTY(EditAnywhere, Category = Rounds)
		uint32 bEndRoundWhenTeamEliminated : 1;
	// Whether the match should be ended when one team has died
	UPROPERTY(EditAnywhere, Category = Rounds)
		uint32 bEndMatchWhenTeamEliminated : 1;
	// Whether players are allowed to restart while the round is still in progress
	UPROPERTY(EditAnywhere, Category = Rounds)
		uint32 bAllowRestartDuringRound : 1;
	// Whether the levels and players should be reset for every round
	UPROPERTY(EditAnywhere, Category = Rounds)
		uint32 bResetLevelAndPlayersEveryRound : 1;

	// Whether players are allowed to use free cam
	UPROPERTY(EditAnywhere, Category = Sandbox)
		uint32 bAllowFreeCam : 1;
	// Whether the player is allowed to interact even while unconscious
	UPROPERTY(EditAnywhere, Category = Sandbox)
		uint32 bAllowInteractionWhileUnconscious : 1;
	// Whether players are allowed to spawn/teleport anywhere on the map
	UPROPERTY(EditAnywhere, Category = Sandbox)
		uint32 bAllowSpawnAnywhere : 1;
	// Whether players are allowed to respawn while alive
	UPROPERTY(EditAnywhere, Category = Sandbox)
		uint32 bAllowTeleporting : 1;
	// Whether players are allowed to spawn on/teleport to garages
	UPROPERTY(EditAnywhere, Category = Sandbox)
		uint32 bAllowSpawnOnGarages : 1;
	// Whether players are allowed to spawn on neutral vehicles
	UPROPERTY(EditAnywhere, Category = Sandbox)
		uint32 bAllowSpawnOnNeutralVehicles : 1;
	// Whether players are allowed to spawn on hostile vehicles
	UPROPERTY(EditAnywhere, Category = Sandbox)
		uint32 bAllowSpawnOnHostileVehicles : 1;
	// Whether dead players can also spawn vehicles
	UPROPERTY(EditAnywhere, Category = Sandbox)
		uint32 bAllowSpawnVehicleWhileUnconscious : 1;
	// Whether players are allowed to use invincibility on characters and vehicles
	UPROPERTY(EditAnywhere, Category = Sandbox)
		uint32 bAllowInvincibility : 1;
	// Whether vehicles can use infinite fuel
	UPROPERTY(EditAnywhere, Category = Sandbox)
		uint32 bAllowInfiniteFuel : 1;
	// Whether vehicles and players can use infinite ammp
	UPROPERTY(EditAnywhere, Category = Sandbox)
		uint32 bAllowInfiniteAmmo : 1;
	// Whether players are allowed to use slow motion
	UPROPERTY(EditAnywhere, Category = Sandbox)
		uint32 bAllowSlowMotion : 1;
	// Whether players are allowed to enter the vehicle editor
	UPROPERTY(EditAnywhere, Category = Sandbox)
		uint32 bAllowVehicleEditor : 1;
	// Whether admins are allowed to remove any vehicle on the map
	UPROPERTY(EditAnywhere, Category = Sandbox)
		uint32 bAllowAdminsToScrapAllVehicles : 1;
	// Whether players are allowed to manually explode their vehicles
	UPROPERTY(EditAnywhere, Category = Sandbox)
		uint32 bAllowExplodeVehicle : 1;
	// Whether players are allowed to enter vehicles with hostiles in them
	UPROPERTY(EditAnywhere, Category = Sandbox)
		uint32 bAllowEnterHostileVehicle : 1;
	// Whether players can use the loadout container from anywhere on the map
	UPROPERTY(EditAnywhere, Category = Sandbox)
		uint32 bAllowAccessLoadoutContainerFromAnywhere : 1;
	// Whether players have access to infinite money
	UPROPERTY(EditAnywhere, Category = Sandbox)
		uint32 bAllowInfiniteMoney : 1;
	// Whether players can damage team mates
	UPROPERTY(EditAnywhere, Category = Sandbox)
		uint32 bAllowFriendlyFire : 1;
	// Whether players may change teams while alive
	UPROPERTY(EditAnywhere, Category = Sandbox)
		uint32 bAllowChangeTeamWhileAlive : 1;
	// Whether players are allowed to use the projectile camera
	UPROPERTY(EditAnywhere, Category = Sandbox)
		uint32 bAllowProjectileCamera : 1;
	// Whether players are allowed to take control of abandoned characters
	UPROPERTY(EditAnywhere, Category = Sandbox)
		uint32 bAllowPossessAbandonedCharacters : 1;
	// Whether dummies can be spawned and removed
	UPROPERTY(EditAnywhere, Category = Sandbox)
		uint32 bAllowSpawnDummies : 1;
	
};
