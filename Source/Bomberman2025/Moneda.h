// Fill out your copyright notice in the Description page of Project Settings.
//8
#pragma once

#include "CoreMinimal.h"
#include "GameFramework/Actor.h"
#include "Moneda.generated.h"

UCLASS()
class BOMBERMAN2025_API AMoneda : public AActor
{
	GENERATED_BODY()

public:
	// Sets default values for this actor's properties
	AMoneda();

protected:
	// Called when the game starts or when spawned
	virtual void BeginPlay() override;

public:
	// Called every frame
	virtual void Tick(float DeltaTime) override;


private:
    FVector PosicionInicial;
    float AnguloActual;
    bool bRotandoDerecha;
    int32 CiclosCompletados;
    int32 MaxSaltos;
    int32 SaltosRealizados;
    bool bVolviendoAlInicio;

    void RealizarSalto();
    FVector ObtenerPosicionAleatoriaLibre();
    void ResetearRotacion();

public:
    UPROPERTY(EditAnywhere, Category = "Rotación")
    float VelocidadRotacion = 60.f;

    UPROPERTY(EditAnywhere, Category = "Rotación")
    float AnguloMaximoRotacion = 45.f;

    UPROPERTY(EditAnywhere, Category = "Movimiento")
    float RangoSalto = 1000.f;
};
