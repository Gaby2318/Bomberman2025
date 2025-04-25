// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "GameFramework/Character.h"
#include "Enemigo1.generated.h"

UCLASS()
class BOMBERMAN2025_API AEnemigo1 : public ACharacter
{
	GENERATED_BODY()

public:
	// Sets default values for this character's properties
	AEnemigo1();

	//virtual void PerformAttack();

protected:
	// Called when the game starts or when spawned
	virtual void BeginPlay() override;

public:	
	// Called every frame
	virtual void Tick(float DeltaTime) override;

	// Called to bind functionality to input
	virtual void SetupPlayerInputComponent(class UInputComponent* PlayerInputComponent) override;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Enemigo")
	int Salud;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Enemigo")
	int Danio;
	


};
