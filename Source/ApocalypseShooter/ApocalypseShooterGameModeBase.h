// Copyright Epic Games, Inc. All Rights Reserved.

#pragma once

#include "CoreMinimal.h"
#include "GameFramework/GameModeBase.h"
#include "ApocalypseShooterGameModeBase.generated.h"

/**
 * 
 */
UCLASS()
class APOCALYPSESHOOTER_API AApocalypseShooterGameModeBase : public AGameModeBase
{
	GENERATED_BODY()
	
public:
	virtual void PawnKilled(APawn* PawnKilled);
};
