// Fill out your copyright notice in the Description page of Project Settings.
//hacer que la moneda gire hacia un lado y luego salte, luego gire a otro lado y vuela a saltar

#include "Moneda.h"


// Sets default values
AMoneda::AMoneda()
{
 	// Set this actor to call Tick() every frame.  You can turn this off to improve performance if you don't need it.
	PrimaryActorTick.bCanEverTick = true;



    AnguloActual = 0.f;
    bRotandoDerecha = true;
    CiclosCompletados = 0;
    MaxSaltos = 3;
    SaltosRealizados = 0;
    bVolviendoAlInicio = false;

}

void AMoneda::BeginPlay()
{
    Super::BeginPlay();

    PosicionInicial = GetActorLocation();
}

void AMoneda::Tick(float DeltaTime)
{
    Super::Tick(DeltaTime);

    // ROTACIÓN
    float Direccion = bRotandoDerecha ? 1.f : -1.f;
    float Paso = VelocidadRotacion * DeltaTime * Direccion;
    AnguloActual += Paso;

    if (FMath::Abs(AnguloActual) >= AnguloMaximoRotacion)
    {
        AnguloActual = FMath::Clamp(AnguloActual, -AnguloMaximoRotacion, AnguloMaximoRotacion);
        bRotandoDerecha = !bRotandoDerecha;
        CiclosCompletados++;
    }

    FRotator NuevaRotacion = GetActorRotation();
    NuevaRotacion.Yaw = AnguloActual;
    SetActorRotation(NuevaRotacion);

    // VERIFICAR SALTO
    if (CiclosCompletados >= 2) // ida y vuelta
    {
        CiclosCompletados = 0;
        ResetearRotacion();

        if (SaltosRealizados < MaxSaltos)
        {
            RealizarSalto();
            SaltosRealizados++;
        }
        else if (!bVolviendoAlInicio)
        {
            bVolviendoAlInicio = true;
            SetActorLocation(PosicionInicial);
        }
    }
}

void AMoneda::ResetearRotacion()
{
    AnguloActual = 0.f;
    bRotandoDerecha = true;
}

void AMoneda::RealizarSalto()
{
    FVector NuevaPos = ObtenerPosicionAleatoriaLibre();
    SetActorLocation(NuevaPos);
}

FVector AMoneda::ObtenerPosicionAleatoriaLibre()
{
    FVector NuevaPos;

    for (int i = 0; i < 10; i++) // Intentar encontrar una posición libre
    {
        float X = FMath::RandRange(-RangoSalto, RangoSalto);
        float Y = FMath::RandRange(-RangoSalto, RangoSalto);
        float Z = 100.f; // Altura constante

        NuevaPos = FVector(X, Y, Z);

        // Aquí podrías agregar un trace para verificar que esté libre.
        // Por ahora, asumimos que cualquier posición está libre.
        return NuevaPos;
    }

    return NuevaPos;
}













/*
// Called when the game starts or when spawned
void AMoneda::BeginPlay()
{
	Super::BeginPlay();
    OriginalRotation = GetActorRotation().Euler();
}

// Called every frame
void AMoneda::Tick(float DeltaTime)
{
    Super::Tick(DeltaTime);

    if (bJumped) return;

    // Rotar el objeto
    float RotationDelta = RotationSpeed * DeltaTime;
    if (bRotatingRight)
    {
        CurrentAngle += RotationDelta;
        if (CurrentAngle >= MaxRotationAngle)
        {
            CurrentAngle = MaxRotationAngle;
            bRotatingRight = false;
            RotationsCompleted++;
        }
    }
    else
    {
        CurrentAngle -= RotationDelta;
        if (CurrentAngle <= -MaxRotationAngle)
        {
            CurrentAngle = -MaxRotationAngle;
            bRotatingRight = true;
            RotationsCompleted++;
        }
    }

    // Aplicar la rotación al actor
    FRotator NewRotation = FRotator::MakeFromEuler(OriginalRotation + FVector(0.f, CurrentAngle, 0.f));
    SetActorRotation(NewRotation);

    // Verificar si se completaron las rotaciones necesarias para saltar
    if (RotationsCompleted >= MaxRotationsBeforeJump * 2)
    {
        bJumped = true;
        FVector JumpImpulse = FVector(0.f, 0.f, -500.f); // Impulso hacia abajo
        GetRootComponent()->ComponentVelocity = JumpImpulse;
    }
}*/

