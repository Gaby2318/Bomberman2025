// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "Enemigo1.h"
#include "EnemigoTerrestre.generated.h"

/**
 * 
 */
UCLASS()
class BOMBERMAN2025_API AEnemigoTerrestre : public AEnemigo1
{
	GENERATED_BODY()
public:
	// Constructor
	AEnemigoTerrestre();

protected:
	// Se puede sobrescribir el comportamiento de BeginPlay si es necesario
	virtual void BeginPlay() override;

public:
	// Podemos sobrescribir el comportamiento de Tick si es necesario
	virtual void Tick(float DeltaTime) override;

	// Funciones específicas de los enemigos terrestres
	void MoverseEnTierra();
};
