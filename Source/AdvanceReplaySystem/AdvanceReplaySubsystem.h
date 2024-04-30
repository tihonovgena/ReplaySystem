// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "ReplaySubsystem.h"
#include "AdvanceReplaySubsystem.generated.h"


UCLASS()
class ADVANCEREPLAYSYSTEM_API UAdvanceReplaySubsystem : public UReplaySubsystem
{
	GENERATED_BODY()

public:
	UFUNCTION(BlueprintCallable)
	void StartRecordReplay(const FString& Name, const FString& FriendlyName);

	UFUNCTION(BlueprintCallable)
	void StopRecordReplay();

	UFUNCTION(BlueprintCallable)
	void StartPlayReplay(const FString& Name);

	UFUNCTION(BlueprintCallable, BlueprintPure)
	bool IsPlayingReplay();

	UFUNCTION(BlueprintCallable, BlueprintPure)
	float GetReplayTotalTime() const;

	UFUNCTION(BlueprintCallable)
	void GoToCustomReplayTime(const float TimeInSecond);

	UFUNCTION(BlueprintCallable)
	void PauseReplay(APlayerState* Pauser);

};
