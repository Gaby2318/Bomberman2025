//que aparescan 3 bombas y que luego dos exploten y aparescan tres mas
#include "Bomba.h"
#include <Kismet/GameplayStatics.h>
#include "Particles/ParticleSystem.h" // Para trabajar con efectos de partículas
#include "Particles/ParticleSystemComponent.h" // Para efectos avanzados de partículas
#include "Components/StaticMeshComponent.h"
#include "Bloque.h"
#include "Bomberman2025Character.h"

ABomba::ABomba()
{
    PrimaryActorTick.bCanEverTick = false;
    Malla = CreateDefaultSubobject<UStaticMeshComponent>(TEXT("Malla"));
    //RootComponent = MeshComp;
    Malla->SetupAttachment(RootComponent);

    static ConstructorHelpers::FObjectFinder<UStaticMesh> ObjetoMalla(TEXT("StaticMesh'/Game/StarterContent/Shapes/Shape_Sphere.Shape_Sphere'"));
    static ConstructorHelpers::FObjectFinder<UParticleSystem> ExplosionAsset(TEXT("/Game/StarterContent/Particles/P_Explosion"));
    static ConstructorHelpers::FObjectFinder<UMaterial> MaterialBase(TEXT("Material'/Game/StarterContent/Materials/M_Tech_Hex_Tile_Pulse.M_Tech_Hex_Tile_Pulse'"));
    if (ObjetoMalla.Succeeded())
    {
        Malla->SetStaticMesh(ObjetoMalla.Object);

        Malla->SetRelativeLocation(FVector(0.0f, 0.0f, 0.0f));
    }
    // Cargar efecto de explosión
    if (ExplosionAsset.Succeeded())
    {
        ExplosionEffect = ExplosionAsset.Object;
    }
    TiempoTranscurrido = 0.0f;


    if (MaterialBase.Succeeded())
    {
        Malla->SetMaterial(0, MaterialBase.Object); // Asignar el material al slot 0
    }
}

void ABomba::DestruirBloques()
{
    FVector Posicion = GetActorLocation();
    float RadioExplosion = 200.0f; // Ajusta según el tamaño de los cuadros

    // Buscar TODOS los bloques que sean descendientes de ABloque
    TArray<AActor*> ActoresCercanos;
    UGameplayStatics::GetAllActorsOfClass(GetWorld(), ABloque::StaticClass(), ActoresCercanos);
    //revisa que bloque estan dentro del area de eplosion 
    for (AActor* Actor : ActoresCercanos)
    {
        if (FVector::Dist(Actor->GetActorLocation(), Posicion) <= RadioExplosion) // Explosión en 2 cuadros
        {
            Actor->Destroy(); // Destruir cualquier bloque destructible
        }
    }
}
//genera bpmbas aleatorias dentro de un rango determinado 
void ABomba::GenerarBombasAleatorias(FVector PosicionBomba)
{
    // se ejecuta un ciclo dos veces por que se crearan dos bombas
    for (int i = 0; i < 4; i++) // Generar 2 bombas
    {
        if (!bEsBombaInicial)return;
        float OffsetX = FMath::RandRange(-400.0f, 400.0f); // Movimiento aleatorio en X
        float OffsetY = FMath::RandRange(-400.0f, 400.0f); // Movimiento aleatorio en Y
        //se genera un desplazamiento aleatorio en X e Y dentro del rango [-200, 200].
       // Luego, se suma este desplazamiento a la posición original de la bomba :
        FVector NuevaPosicion = PosicionBomba + FVector(OffsetX, OffsetY, 0.0f); // Nueva posición aleatoria

        ABomba* NuevaBomba = GetWorld()->SpawnActor<ABomba>(GetClass(), NuevaPosicion, FRotator::ZeroRotator);

        if (NuevaBomba)
        {
            NuevaBomba->bEsBombaInicial = false; // Las bombas nuevas NO generarán más bombas
            UE_LOG(LogTemp, Warning, TEXT("¡Bomba generada aleatoriamente en X=%f Y=%f!"), NuevaPosicion.X, NuevaPosicion.Y);
        }
    }
}

void ABomba::Explotar()
{

    FVector Posicion = GetActorLocation();

    if (ExplosionEffect)
    {
        UGameplayStatics::SpawnEmitterAtLocation(GetWorld(), ExplosionEffect, Posicion);
    }

    DestruirBloques(); // Aplicar explosión en área de 2 cuadros

    // Generar nuevas bombas aleatoriamente
    GenerarBombasAleatorias(GetActorLocation());

    Destroy(); // Elimina el bloque tras explotar


}

void ABomba::BeginPlay()
{
    Super::BeginPlay();

    /*GameMode = Cast<ABomberman2025GameMode>(GetWorld()->GetAuthGameMode());

    // Temporizador para explotar
    GetWorldTimerManager().SetTimerForNextTick([this]() {GetWorldTimerManager().SetTimer(FTimerHandle(), this, &ABomba::Explotar, TiempoParaExplotar, false);});*/
}

// Called every frame
//esto ejecuta cada fotograma del juego, su proposito es controlarr el tiempo de esplocion de la bomba
void ABomba::Tick(float DeltaTime)
{
    Super::Tick(DeltaTime);
    // Si no ha explotado aún, hacemos que explote después de cierto tiempo
    TiempoTranscurrido += DeltaTime;

    if (TiempoTranscurrido >= 5.0f && !bExploto) // Explota después de 5 segundos
    {
        Explotar();
        bExploto = true;
    }
}




/**#include "Kismet/GameplayStatics.h"
#include "Engine/World.h"
#include "GameFramework/Actor.h"
#include "TimerManager.h"
#include "DrawDebugHelpers.h"
#include "Bomberman2025GameMode.h"*/


/*// Destruye bloques cercanos (pseudocódigo, debes adaptarlo)
FVector Pos = GetActorLocation();
float Distancia = 200.0f; // 2 cuadros (asumiendo 100 unidades por cuadro)

TArray<AActor*> Actores;
UGameplayStatics::GetAllActorsOfClass(GetWorld(), AActor::StaticClass(), Actores);

for (AActor* Actor : Actores)
{
    if (FVector::Dist(Actor->GetActorLocation(), Pos) <= Distancia)
    {
        Actor->Destroy(); // o verifica si es bloque
    }
}


if (GameMode)

{
    GameMode->SpawnMultiplesBombas(BombasParaCrear + 1); // aumenta bombas
}

Destroy(); // Destruye la bomba original*/