// Copyright Epic Games, Inc. All Rights Reserved.

#pragma once

#include "CoreMinimal.h"
#include "GameFramework/PlayerController.h"
#include "CPlusPlayerController.generated.h"

class UInputMappingContext;

/**
 *
 */
UCLASS()
class CPLUS_API ACPlusPlayerController : public APlayerController
{
	GENERATED_BODY()

protected:
	/** Input Mapping Context to be used for player input */
	UPROPERTY(EditAnywhere, BlueprintReadOnly, Category = Input)
	UInputMappingContext* InputMappingContext;

	// Begin Actor interface

	virtual void BeginPlay() override;

	// End Actor interface
};
