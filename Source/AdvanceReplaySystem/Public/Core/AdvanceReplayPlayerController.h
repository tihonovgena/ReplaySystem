// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "GameFramework/PlayerController.h"
#include "AdvanceReplayPlayerController.generated.h"

class UUserWidget;

DECLARE_DYNAMIC_MULTICAST_DELEGATE_OneParam(FOnChangeMenuShowingSignature, bool, Showing);

UCLASS()
class ADVANCEREPLAYSYSTEM_API AAdvanceReplayPlayerController : public APlayerController
{
	GENERATED_BODY()
	
protected:
	UFUNCTION(BlueprintCallable)
	void ShowMenuWidgetClass(TSubclassOf<UUserWidget> WidgetClass);

	UFUNCTION(BlueprintCallable)
	void RemoveMenuWidget();

	UFUNCTION(BlueprintCallable, BlueprintPure)
	bool HasMenu();
	
public:
	UPROPERTY(BlueprintAssignable)
	FOnChangeMenuShowingSignature OnChangeMenuShowing;

private:
	UPROPERTY()
	UUserWidget* CurrentMenu;
	
};
