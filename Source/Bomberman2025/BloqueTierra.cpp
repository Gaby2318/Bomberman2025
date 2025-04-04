// Fill out your copyright notice in the Description page of Project Settings.


#include "BloqueTierra.h"

ABloqueTierra::ABloqueTierra()
{
    if (MallaBloque)
    {
        static ConstructorHelpers::FObjectFinder<UMaterial> MaterialBase(TEXT("/Script/Engine.Material'/Game/StarterContent/Materials/M_Metal_Rust.M_Metal_Rust'"));

        if (MaterialBase.Succeeded())
        {
            MallaBloque->SetMaterial(0, MaterialBase.Object); // Asignar el material al slot 0
        }
    }
}

void ABloqueTierra::BeginPlay()
{
}