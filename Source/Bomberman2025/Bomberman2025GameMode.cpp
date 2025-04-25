// Copyright Epic Games, Inc. All Rights Reserved.

#include "Bomberman2025GameMode.h"
#include "Bomberman2025Character.h"
#include "UObject/ConstructorHelpers.h"
#include "Bloque.h"
#include "BloqueBurbuja.h"
#include "BloqueAcero.h"
#include "BloqueConcreto.h"
#include "BloqueLadrillo.h"
#include "BloqueMadera.h"
#include "BloqueVidrio.h"
#include "BloqueTierra.h"
#include "BloqueOro.h"
#include "BloqueHielo.h"
#include "BloqueCuarzo.h"
#include "Bomba.h"
#include "Moneda.h"
#include "Engine/World.h"
#include <Kismet/KismetMathLibrary.h>



ABomberman2025GameMode::ABomberman2025GameMode()
{
	// set default pawn class to our Blueprinted character
	static ConstructorHelpers::FClassFinder<APawn> PlayerPawnBPClass(TEXT("/Game/ThirdPersonCPP/Blueprints/ThirdPersonCharacter"));
	if (PlayerPawnBPClass.Class != NULL)
	{
		DefaultPawnClass = PlayerPawnBPClass.Class;
	}
}
void ABomberman2025GameMode::BeginPlay()
{
	Super::BeginPlay();

	


	GEngine->AddOnScreenDebugMessage(-1, -1, FColor::Red, TEXT("Bloque Spawning"));


	/*SpawnBloque(FVector(0.0f, 0.0f, 0.0f), 1);
	SpawnBloque(FVector(100.0f, 100.0f, 0.0f), 2);
	SpawnBloque(FVector(200.0f, 200.0f,  0.0f), 3);*/

	// Recorremos la matriz para generar los bloques
	for (int32 fila = 0; fila < aMapaBloques.Num(); ++fila)
	{
		for (int32 columna = 0; columna < aMapaBloques[fila].Num(); ++columna)
		{
			int32 valor = aMapaBloques[fila][columna];
			if (valor != 0) // Si no es espacio vacío
			{
				// Calculamos la posición del bloque
				FVector posicionBloque = FVector(
					XInicial + columna * AnchoBloque,
					YInicial + fila * LargoBloque,
					10.0f); // Z queda en 0 (altura del bloque)

				// Llamamos a la función para generar un bloque
				SpawnBloque(posicionBloque, valor);
			}
		}
	}
	
	GetWorld()->GetTimerManager().SetTimer(tHDestruirBloques, this, &ABomberman2025GameMode::DestruirBloque, 2.0f, false);


	//SpawnMultiplesBombas(1);

}



// Función para generar un bloque
void ABomberman2025GameMode::SpawnBloque(FVector posicionBloque, int32 tipoBloque)
{
	//ABloque* BloqueGenerado = nullptr;

	ABloque* BloqueGenerado = nullptr;
	// Elegir tipo de bloque basado en el valor
	if (tipoBloque == 10)
	{
		BloqueGenerado = GetWorld()->SpawnActor<ABloqueConcreto>(ABloqueConcreto::StaticClass(), posicionBloque, FRotator(0.0f, 0.0f, 0.0f));
	}
	else if (tipoBloque == 9)
	{
		BloqueGenerado = GetWorld()->SpawnActor<ABloqueHielo>(ABloqueHielo::StaticClass(), posicionBloque, FRotator(0.0f, 0.0f, 0.0f));
	}
	else if (tipoBloque == 8)
	{
		BloqueGenerado = GetWorld()->SpawnActor<ABloqueOro>(ABloqueOro::StaticClass(), posicionBloque, FRotator(0.0f, 0.0f, 0.0f));
	}
	else if (tipoBloque == 7)
	{
		BloqueGenerado = GetWorld()->SpawnActor<ABloqueTierra>(ABloqueTierra::StaticClass(), posicionBloque, FRotator(0.0f, 0.0f, 0.0f));
	}
	else if (tipoBloque == 6)
	{
		BloqueGenerado = GetWorld()->SpawnActor<ABloqueVidrio>(ABloqueVidrio::StaticClass(), posicionBloque, FRotator(0.0f, 0.0f, 0.0f));
	}
	else if (tipoBloque == 5)
	{
		BloqueGenerado = GetWorld()->SpawnActor<ABloqueBurbuja>(ABloqueBurbuja::StaticClass(), posicionBloque, FRotator(0.0f, 0.0f, 0.0f));
	}
	else if (tipoBloque == 4)
	{
		BloqueGenerado = GetWorld()->SpawnActor<ABloqueAcero>(ABloqueAcero::StaticClass(), posicionBloque, FRotator(0.0f, 0.0f, 0.0f));
	}
	else if (tipoBloque == 3)
	{
		BloqueGenerado = GetWorld()->SpawnActor<ABloqueCuarzo>(ABloqueCuarzo::StaticClass(), posicionBloque, FRotator(0.0f, 0.0f, 0.0f));
	}
	else if (tipoBloque == 2)
	{
		BloqueGenerado = GetWorld()->SpawnActor<ABloqueLadrillo>(ABloqueLadrillo::StaticClass(), posicionBloque, FRotator(0.0f, 0.0f, 0.0f));
	}
	else if (tipoBloque == 1)
	{
		BloqueGenerado = GetWorld()->SpawnActor<ABloqueMadera>(ABloqueMadera::StaticClass(), posicionBloque, FRotator(0.0f, 0.0f, 0.0f));
	}
	else {
		return;
	}
	
	if (BloqueGenerado)
	{
		//BloqueGenerado->SetActorLocation(posicionBloque);
		//BloqueGenerado->SetActorRotation(FRotator(0.0f, 0.0f, 0.0f));
		BloqueGenerado->SetActorScale3D(FVector(1.0f, 1.0f, 1.0f));
	}

	// Agregar el bloque al TArray si fue generado
	if (BloqueGenerado)
	{
		aBloques.Add(BloqueGenerado);
	}

}

void ABomberman2025GameMode::DestruirBloque()
{
	//Seleccionar aleatoriamente un bloque del array ABloques para su eliminacion
	int numeroBloques = aBloques.Num();
	int NumeroAleatorio = FMath::RandRange(1, numeroBloques);

	if (aBloques.Num() > 0)
	{
		BloqueActual = aBloques[NumeroAleatorio]; // Obtén el primer bloque
		if (BloqueActual)
		{
			BloqueActual->Destroy();
			// Realiza operaciones con el bloque
			//primerBloque->SetActorLocation(FVector(100.0f, 100.0f, 100.0f));
		}
	}
}


// Update the SpawnMoneda function to accept a parameter for position  
void ABomberman2025GameMode::SpawnMoneda(FVector posicionMoneda)  
{  
   AMoneda* MonedaGenerada = GetWorld()->SpawnActor<AMoneda>(AMoneda::StaticClass(), FVector(300.0f, 300.0f, 0.0f), FRotator(0.0f, 0.0f, 0.0f));
   if (MonedaGenerada)  
   {  
       MonedaGenerada->SetActorLocation(posicionMoneda);  
       //MonedaGenerada->SetActorRotation(FRotator(0.0f, 0.0f, 0.0f));  
       MonedaGenerada->SetActorScale3D(FVector(1.0f, 1.0f, 1.0f));  
   }  
}  

/*
void ABomberman2025GameMode::SpawnMultiplesBombas(int32 Cantidad)
{
	for (int32 i = 0; i < Cantidad; ++i)
	{
		FVector PosAleatoria = UKismetMathLibrary::RandomPointInBoundingBox(
			FVector(0, 0, 100), FVector(100, 100, 0)); // ajusta según tu mapa

		ABomba* NuevaBomba = GetWorld()->SpawnActor<ABomba>(ClaseBomba, PosAleatoria, FRotator::ZeroRotator);
		if (NuevaBomba)
		{
			NuevaBomba->Inicializar(5.0f, Cantidad); // explota en 5 segundos
		}
	}
}

*/
/*

void ABomberman2025GameMode::SpawnBomba(FVector posicionBomba)
{
	ABomba* BombaGenerada = GetWorld()->SpawnActor<ABomba>(ABomba::StaticClass(), FVector(200.0f, 200.0f, 0.0f), FRotator(0.0f, 0.0f, 0.0f));
	if (BombaGenerada)
	{
		BombaGenerada->SetActorLocation(posicionBomba);
		BombaGenerada->SetActorRotation(FRotator(0.0f, 0.0f, 0.0f));
		BombaGenerada->SetActorScale3D(FVector(1.0f, 1.0f, 1.0f));
	}
}

*/











/*
void ABomberman2025GameMode::SpawnMoneda(FVector posicionMoneda)
{
	AMoneda* MonedaGenerada = GetWorld()->SpawnActor<AMoneda>(AMoneda::StaticClass(), posicionMoneda, FRotator(1.0f, 1.0f, 1.0f));
	if (MonedaGenerada)
	{
		MonedaGenerada->SetActorLocation(posicionMoneda);
	    MonedaGenerada->SetActorRotation(FRotator(1.0f, 1.0f, 1.0f));
		MonedaGenerada->SetActorScale3D(FVector(1.0f, 1.0f, 1.0f));
	}
}
void ABomberman2025GameMode::SpawnMoneda()
{
	// Generar una posición aleatoria para la moneda
	FVector PosicionMoneda = FVector(FMath::RandRange(-1000.f, 1000.f), FMath::RandRange(-1000.f, 1000.f), 10.0f);
	// Llamar a la función para generar la moneda
	SpawnMoneda(PosicionMoneda);
}

void ABomberman2025GameMode::SpawnBomba(FVector posicionBomba)
{
	ABomba* BombaGenerada = GetWorld()->SpawnActor<ABomba>(ABomba::StaticClass(), posicionBomba, FRotator(0.0f, 0.0f, 0.0f));
	if (BombaGenerada)
	{
		BombaGenerada->SetActorLocation(posicionBomba);
		BombaGenerada->SetActorRotation(FRotator(0.0f, 0.0f, 0.0f));
		BombaGenerada->SetActorScale3D(FVector(1.0f, 1.0f, 1.0f));
	}
}*/
























/*


void ATuGameMode::BeginPlay()
{
	Super::BeginPlay();
	GenerarLaberinto();
}

void ATuGameMode::GenerarLaberinto()
{
	UWorld* Mundo = GetWorld();
	if (!Mundo || !BloqueClase) return;

	for (int32 X = 0; X < Tamaño; X++)
	{
		for (int32 Y = 0; Y < Tamaño; Y++)
		{
			// Espacio entre bloques (tipo checkerboard o alternancia)
			if ((X + Y) % 2 == 0) continue;

			FVector Posicion(X * Espacio, Y * Espacio, 0.f);

			// Borde: colocar concreto
			bool EsBorde = (X == 0 || Y == 0 || X == Tamaño - 1 || Y == Tamaño - 1);

			FActorSpawnParameters Params;
			ABloqueBase* Bloque = Mundo->SpawnActor<ABloqueBase>(BloqueClase, Posicion, FRotator::ZeroRotator, Params);

			if (Bloque)
			{
				if (EsBorde)
				{
					// Suponiendo que el índice 2 = Concreto
					Bloque->SetMaterial(MaterialesBloques[2]);
				}
				else
				{
					// Random entre los 10 materiales
					int32 IndexMaterial = FMath::RandRange(0, 9);
					Bloque->SetMaterial(MaterialesBloques[IndexMaterial]);
				}
			}
		}
	}
}

*/
















/*
void AMyActor::TestMap()
{
	// Crear el TMap
	TMap<FString, int32> ExampleMap;

	// Agregar elementos
	ExampleMap.Add("Jugador1", 100);
	ExampleMap.Add("Jugador2", 200);
	ExampleMap.Add("Jugador3", 300);

	// Acceder a un valor
	if (int32* Score = ExampleMap.Find("Jugador2"))
	{
		UE_LOG(LogTemp, Warning, TEXT("Puntuación de Jugador2: %d"), *Score);
	}

	// Eliminar un elemento
	ExampleMap.Remove("Jugador1");

	// Iterar sobre el TMap
	for (const TPair<FString, int32>& Pair : ExampleMap)
	{
		UE_LOG(LogTemp, Warning, TEXT("Clave: %s, Valor: %d"), *Pair.Key, Pair.Value);
	}
}
*/


// Create a new Enemigo
//ABloque* bloque01 = GetWorld()->SpawnActor<ABloque>(ABloque::StaticClass(), FVector(934.0f, 1370.0f, 100.0f), FRotator(0.0f, 0.0f, 0.0f));
//ABloque* bloque02 = GetWorld()->SpawnActor<ABloque>(ABloque::StaticClass(), FVector(734.0f, 1370.0f, 50.0f), FRotator(0.0f, 0.0f, 0.0f));

//int numeroBloqueConMovimiento = 0;

/*
for (int i = 0; i < 20; i++)
{

	ABloque* bloque = GetWorld()->SpawnActor<ABloque>(ABloque::StaticClass(), FVector(500.0f + i * 100 , 2500.0f - i * 100, 20.0f), FRotator(0.0f, 0.0f, 0.0f));


	if (bloque->bPuedeMoverse)
	{
		numeroBloqueConMovimiento++;
	}

	if (numeroBloqueConMovimiento >= 6)
	{
		bloque->bPuedeMoverse = false;
	}

}
*/
//SpawnBloques();


/*
void ABomberMan_012025GameMode::SpawnBloques()
{
	// recorrer el array de bloques y hacer spawn de cada uno
	for (int i = 0; i < 6; i++)
	{
		for(int j = 0; j < 8; j++)
		{
			if (aMapaBloques[i][j] == 1)
			{
				FVector PosicionBloque = FVector()
				ABloqueLadrillo* BloqueLadrillo = GetWorld()->SpawnActor<ABloqueLadrillo>(ABloqueLadrillo::StaticClass(), FVector(posicionSiguienteBloque.X + j * AnchoBloque, posicionSiguienteBloque.Y - i * LargoBloque, posicionSiguienteBloque.Z), FRotator(0.0f, 0.0f, 0.0f));
		*/		/*if (BloqueLadrillo)
				{
					aBloques.Add(static_cast<ABloque*>(BloqueLadrillo));
				}*/
				/*		}
					}
					//ABloque* bloque = GetWorld()->SpawnActor<ABloque>(ABloque::StaticClass(), FVector(500.0f + i * 100, 2500.0f - i * 100, 20.0f), FRotator(0.0f, 0.0f, 0.0f));
				}
			}
			*/













































/*void ABomberMan2025GameMode::BeginPlay()
{
	Super::BeginPlay();

	GEngine->AddOnScreenDebugMessage(-1, -1, FColor::Red, TEXT("Bloque Spawning"));


	// Create a new Enemigo
	//ABloque* bloque01 = GetWorld()->SpawnActor<ABloque>(ABloque::StaticClass(), FVector(934.0f, 1370.0f, 100.0f), FRotator(0.0f, 0.0f, 0.0f));
	//ABloque* bloque02 = GetWorld()->SpawnActor<ABloque>(ABloque::StaticClass(), FVector(734.0f, 1370.0f, 50.0f), FRotator(0.0f, 0.0f, 0.0f));

	int numeroBloqueConMovimiento = 0;

	for (int i = 0; i < 20; i++)
	{

		ABloque* bloque = GetWorld()->SpawnActor<ABloque>(ABloque::StaticClass(), FVector(500.0f + i * 100 , 2500.0f - i * 100, 20.0f), FRotator(0.0f, 0.0f, 0.0f));
		
	
		if (bloque->bPuedeMoverse)
		{
			numeroBloqueConMovimiento++;
		}

		if (numeroBloqueConMovimiento >= 6)
		{
			bloque->bPuedeMoverse = false;
		}

	}

}*/


/*void ABomberman2025GameMode::BeginPlay()
{
	Super::BeginPlay();

	// Generar el MAPA al inicio del juego
	SpawnMapa();

	//Genera bloques de madera
	SpawnBloqueMadera();

	//Genera bloques de ladrillo
	//SpawnBloqueLadrillo();

	//Mapa v2
	SpawnBloques();
}
void ABomberman2025GameMode::SpawnMapa()
{
	if (UWorld* Mundo = GetWorld())
	{
		// Crear el suelo (bloque grande)
		Mundo->SpawnActor<ABloqueAcero>(ABloqueAcero::StaticClass(), FVector(1360.0f, 1300.0f, -150.0f), FRotator::ZeroRotator)
			->SetActorScale3D(FVector(25.0f, 25.0f, 0.5f));

		// Muros verticales (izquierda y derecha)
		Mundo->SpawnActor<ABloqueAcero>(ABloqueAcero::StaticClass(), FVector(160.0f, 1300.0f, 50.0f), FRotator(90, 90, 90))
			->SetActorScale3D(FVector(2.0f, 25.0f, 0.5f));

		Mundo->SpawnActor<ABloqueAcero>(ABloqueAcero::StaticClass(), FVector(2660.0f, 1300.0f, 50.0f), FRotator(90, 90, 90))
			->SetActorScale3D(FVector(2.0f, 25.0f, 0.5f));

		// Muros horizontales (arriba y abajo) - Rotados 90° en el eje Z
		Mundo->SpawnActor<ABloqueAcero>(ABloqueAcero::StaticClass(), FVector(1330.0f, 100.0f, 50.0f), FRotator(90, 90, 0))
			->SetActorScale3D(FVector(2.0f, 25.0f, 0.5f));



		Mundo->SpawnActor<ABloqueAcero>(ABloqueAcero::StaticClass(), FVector(2110.0f, 2440.0f, 50.0f), FRotator(90, 0, 90))
			->SetActorScale3D(FVector(2.0f, 10.0f, 0.5f));

		Mundo->SpawnActor<ABloqueAcero>(ABloqueAcero::StaticClass(), FVector(560.0f, 2440.0f, 50.0f), FRotator(90, 0, 90))
			->SetActorScale3D(FVector(2.0f, 10.0f, 0.5f));


		// Mensaje en pantalla
		//GEngine->AddOnScreenDebugMessage(-1, 5.0f, FColor::Green, TEXT("Bloques generados"));
	}
}

void ABomberman2025GameMode::SpawnBloqueMadera() {
	if (UWorld* Mundo = GetWorld())
	{

		Mundo->SpawnActor<ABloqueMadera>(ABloqueMadera::StaticClass(), FVector(1360.0f, 2900.0f, -25.0f), FRotator::ZeroRotator)
			->SetActorScale3D(FVector(5.0f, 2.0f, 0.5f));

		Mundo->SpawnActor<ABloqueMadera>(ABloqueMadera::StaticClass(), FVector(1360.0f, 3300.0f, 25.0f), FRotator::ZeroRotator)
			->SetActorScale3D(FVector(5.0f, 2.0f, 0.5f));

		Mundo->SpawnActor<ABloqueMadera>(ABloqueMadera::StaticClass(), FVector(1360.0f, 3600.0f, 75.0f), FRotator::ZeroRotator)
			->SetActorScale3D(FVector(5.0f, 2.0f, 0.5f));
	}
}

void ABomberman2025GameMode::SpawnBloqueLadrillo() {
	if (UWorld* Mundo = GetWorld()) {
		for (int i = 0; i < 8; i++) {
			for (int j = 0; j < 12; j++) {
				Mundo->SpawnActor<ABloqueLadrillo>(ABloqueLadrillo::StaticClass(), FVector(200.0f + i * 300, 200.0f + j * 200, -100.0f), FRotator::ZeroRotator)
					->SetActorScale3D(FVector(1.0f, 1.0f, 1.0f));
			}
		}
	}
}


void ABomberman2025GameMode::SpawnBloques()
{
	//Recorrer el array de bloques y hacer spawn de cada uno
	for (int i = 0; i < 12; i++)
	{
		for (int j = 0; j < 12; j++) {
			if (UWorld* Mundo = GetWorld()) {
				switch (arrayMapaBloques[i][j])
				{
				case 2:
					Mundo->SpawnActor<ABloqueLadrillo>(ABloqueLadrillo::StaticClass(), FVector(200.0f + i * 200, 150.0f + j * 200, -100.0f), FRotator::ZeroRotator)
						->SetActorScale3D(FVector(2.0f, 2.0f, 2.0f));
					GEngine->AddOnScreenDebugMessage(-1, 5.0f, FColor::Green, TEXT("1"));
					break;
				case 1:
					Mundo->SpawnActor<ABloqueConcreto>(ABloqueConcreto::StaticClass(), FVector(200.0f + i * 200, 150.0f + j * 200, -100.0f), FRotator::ZeroRotator)
						->SetActorScale3D(FVector(2.0f, 2.0f, 2.0f));
					GEngine->AddOnScreenDebugMessage(-1, 5.0f, FColor::Green, TEXT("2"));
					break;
				case 4:
					Mundo->SpawnActor<ABloqueAcero>(ABloqueAcero::StaticClass(), FVector(200.0f + i * 200, 150.0f + j * 200, -100.0f), FRotator::ZeroRotator)
						->SetActorScale3D(FVector(2.0f, 2.0f, 2.0f));
					GEngine->AddOnScreenDebugMessage(-1, 5.0f, FColor::Green, TEXT("3"));
					break;
				case 0:
					break;
				}
			}
		}
	}
}*/