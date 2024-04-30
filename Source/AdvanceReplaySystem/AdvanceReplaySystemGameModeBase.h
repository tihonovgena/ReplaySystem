// Copyright Epic Games, Inc. All Rights Reserved.

#pragma once

#include "CoreMinimal.h"
#include "GameFramework/GameModeBase.h"
#include "AdvanceReplaySystemGameModeBase.generated.h"

DECLARE_DYNAMIC_MULTICAST_DELEGATE(FOnEndGameSignature);
UCLASS()
class ADVANCEREPLAYSYSTEM_API AAdvanceReplaySystemGameModeBase : public AGameModeBase
{
	GENERATED_BODY()

public:
	UPROPERTY(BlueprintAssignable, BlueprintCallable)
	FOnEndGameSignature OnEndGame;
	
};
