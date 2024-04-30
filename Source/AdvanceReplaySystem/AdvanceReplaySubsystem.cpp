// Fill out your copyright notice in the Description page of Project Settings.


#include "AdvanceReplaySubsystem.h"

void UAdvanceReplaySubsystem::StartRecordReplay(const FString& InName, const FString& FriendlyName)
{
	if (IsPlayingReplay()) return;
	RecordReplay(InName, FriendlyName, TArray<FString>(), nullptr);
}

void UAdvanceReplaySubsystem::StopRecordReplay()
{
	if (IsPlayingReplay()) return;
	StopReplay();
}

void UAdvanceReplaySubsystem::StartPlayReplay(const FString& Name)
{
	if (IsPlayingReplay())
	{
		
	}
	else
	{
		PlayReplay(Name, nullptr, TArray<FString>());
	}
	
}

bool UAdvanceReplaySubsystem::IsPlayingReplay()
{
	const UWorld* CurrentWorld = GetWorld();
	if (CurrentWorld == nullptr) return false;
	return CurrentWorld->IsPlayingReplay();

}
