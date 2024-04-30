// Fill out your copyright notice in the Description page of Project Settings.


#include "AdvanceReplaySubsystem.h"

void UAdvanceReplaySubsystem::StartRecordReplay(const FString& InName, const FString& FriendlyName)
{
	RecordReplay(InName, FriendlyName, TArray<FString>(), nullptr);
}

void UAdvanceReplaySubsystem::StopRecordReplay()
{
	StopReplay();
}

void UAdvanceReplaySubsystem::StartPlayReplay(const FString& Name)
{
	PlayReplay(Name, nullptr, TArray<FString>());
}
