// Fill out your copyright notice in the Description page of Project Settings.


#include "AdvanceReplaySystem/Public/Core/AdvanceReplayPlayerController.h"

#include "Blueprint/UserWidget.h"

AAdvanceReplayPlayerController::AAdvanceReplayPlayerController()
{
	PrimaryActorTick.bTickEvenWhenPaused = true;
	bShouldPerformFullTickWhenPaused = true;
}

void AAdvanceReplayPlayerController::ShowMenuWidgetClass(TSubclassOf<UUserWidget> WidgetClass)
{
	
	RemoveMenuWidget();

	CurrentMenu = CreateWidget(this, WidgetClass);
	CurrentMenu->AddToViewport();
	OnChangeMenuShowing.Broadcast(true);

	SetShowMouseCursor(true);
	
}

void AAdvanceReplayPlayerController::RemoveMenuWidget()
{
	if (HasMenu())
	{
		CurrentMenu->RemoveFromParent();
		OnChangeMenuShowing.Broadcast(false);
	}

	SetShowMouseCursor(false);
	
}

bool AAdvanceReplayPlayerController::HasMenu()
{
	return CurrentMenu != nullptr;
}
