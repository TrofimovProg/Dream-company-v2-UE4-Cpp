// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "Actors/Decoration.h"
#include "BasePicture.generated.h"

/**
 * 
 */
UCLASS()
class DREAMCOMPANY_API ABasePicture : public ADecoration
{
	GENERATED_BODY()

protected:

	uint8 stressDecrement;
};
