// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "Actors/BasePlaceableActor.h"
#include "ElectricalActor.generated.h"

/**
 * 
 */
UCLASS()
class DREAMCOMPANY_API AElectricalActor : public ABasePlaceableActor
{
	GENERATED_BODY()
	
protected:
	uint8 powerConsumption;
	
	
};
