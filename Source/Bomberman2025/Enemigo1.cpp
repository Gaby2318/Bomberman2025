// Fill out your copyright notice in the Description page of Project Settings.


#include "Enemigo1.h"

// Sets default values
AEnemigo1::AEnemigo1()
{
	Salud = 100;
	Danio = 20;
// Set this character to call Tick() every frame.  You can turn this off to improve performance if you don't need it.
	PrimaryActorTick.bCanEverTick = true;

}
AEnemigo1::AEnemigo1()
{
	// Inicializar la malla del enemigo

}
// Called when the game starts or when spawned
void AEnemigo1::BeginPlay()
{
	Super::BeginPlay();
	
}

// Called every frame
void AEnemigo1::Tick(float DeltaTime)
{
	Super::Tick(DeltaTime);

}

// Called to bind functionality to input
void AEnemigo1::SetupPlayerInputComponent(UInputComponent* PlayerInputComponent)
{
	Super::SetupPlayerInputComponent(PlayerInputComponent);

}
void AEnemigo1::Atacar()
{
	// Implementar la l�gica de ataque
}
void AEnemigo1::Morir()
{
	// Implementar la l�gica de muerte
}
