// Fill out your copyright notice in the Description page of Project Settings.


#include "EnemigoAcuatico.h"

AEnemigoAcuatico::AEnemigoAcuatico() {
    auto Asset = ConstructorHelpers::FObjectFinder<UMaterial>(TEXT("/Game/StarterContent/Materials/M_Water_Ocean.M_Water_Ocean"));
    if (Asset.Succeeded()) {
        
    }
}