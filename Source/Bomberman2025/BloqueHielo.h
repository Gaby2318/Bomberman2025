// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "Bloque.h"
#include "BloqueHielo.generated.h"

/**
 * 
 */
UCLASS()
class BOMBERMAN2025_API ABloqueHielo : public ABloque
{
	GENERATED_BODY()
	
public:
	ABloqueHielo();
	//virtual void Tick(float DeltaTime) override;

protected:
	// Called when the game starts or when spawned
	virtual void BeginPlay() override;
};
