// Fill out your copyright notice in the Description page of Project Settings.


#include "Enemigo.h"
/*
#include "Components/StaticMeshComponent.h"
#include "UObject/ConstructorHelpers.h"
*/

// Sets default values
AEnemigo::AEnemigo()
{
 	// Set this actor to call Tick() every frame.  You can turn this off to improve performance if you don't need it.
	PrimaryActorTick.bCanEverTick = true;

	/*
	MeshComp = CreateDefaultSubobject<UStaticMeshComponent>(TEXT("MeshComp"));
	//RootComponent = MeshComp;
	MeshComp->SetupAttachment(RootComponent);
	static ConstructorHelpers::FObjectFinder<UStaticMesh> MeshCubo(TEXT("/Script/Engine.StaticMesh'/Game/StarterContent/Shapes/Shape_Cube.Shape_Cube'"));

	if (MeshCubo.Succeeded())
	{
		MeshComp->SetStaticMesh(MeshCubo.Object);

		MeshComp->SetRelativeLocation(FVector(0.0f, 0.0f, 0.0f)); 
	}
	*/



}

// Called when the game starts or when spawned
void AEnemigo::BeginPlay()
{
	Super::BeginPlay();
	
}

// Called every frame
void AEnemigo::Tick(float DeltaTime)
{
	Super::Tick(DeltaTime);

	/*FVector New_Location = GetActorLocation();
	FRotator New_Rotation = GetActorRotation();
	float Running_Time = GetGameTimeSinceCreation();
	float Delta_Height = (FMath::Sin(Running_Time + DeltaTime) - FMath::Sin(Running_Time));
	/*New_Location.Z += Delta_Height * 20.0f;
	float Delta_Rotation = DeltaTime * 20.0f;*/

	/*New_Location.Z += Delta_Height * FloatSpeed;
	float Delta_Rotation = DeltaTime * RotationSpeed;

	New_Rotation.Yaw += Delta_Rotation;
	SetActorLocationAndRotation(New_Location, New_Rotation);*/

}

// Called to bind functionality to input


/*void AEnemigo::SetupPlayerInputComponent(UInputComponent* PlayerInputComponent)
{
	Super::SetupPlayerInputComponent(PlayerInputComponent);


}*/