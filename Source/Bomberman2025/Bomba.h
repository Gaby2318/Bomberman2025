
//6
#pragma once  

#include "CoreMinimal.h"  
#include "GameFramework/Actor.h"  
#include "Bomba.generated.h"  
class UStaticMeshComponent;

class BOMBERMAN2025_API ABomba : public AActor
{
    GENERATED_BODY()

public:
    // Sets default values for this actor's properties  
    ABomba();
    //void Inicializar(float TiempoExplosion, int32 NumeroBombasASpawner);  
    void Explotar(); //esta funcion activa la explosion
    UPROPERTY(EditAnywhere, Category = "Efectos")
    UParticleSystem* ExplosionEffect;
    float TiempoTranscurrido;

protected:

    // Componente de malla estática
    UPROPERTY(VisibleAnywhere, BlueprintReadOnly, Category = "Componentes")
    UStaticMeshComponent* Malla;

protected:
    virtual void BeginPlay() override;

public:
    // Called every frame
    virtual void Tick(float DeltaTime) override;
    bool bExploto = false; //indica si se exploto
private:

    void DestruirBloques();
    bool bEsBombaInicial = true; // Solo la primera bomba podrá generar otras bombas
    void GenerarBombasAleatorias(FVector PosicionBomba);

private:
    int32 GeneracionActual;

public:
    FORCEINLINE int32 GetGeneracionActual() const { return GeneracionActual; }
    // Add the missing member variable "GeneracionActual" to the ABomba class.    
// Generación de la bomba (controla cuántas nuevas va a crear)
    /*UPROPERTY()
   int32 GeneracionActual;
 */
};





/*
private:
   UFUNCTION()
   void Explotar();

  // float TiempoParaExplotar;
   //int32 BombasParaCrear; */
   /*
     // Ensure GameMode is properly marked as a UPROPERTY
      UPROPERTY()
      class ABomberman2025GameMode* GameMode;
      // Método para destruir bloques cercanos (pseudocódigo, debes adaptarlo)
      //void DestruirBloquesCercanos();
      // Método para spawnear nuevas bombas
    //  void SpawnearNuevasBombas();
      // Método para obtener una posición aleatoria para spawnear nuevas bombas
     // FVector ObtenerPosicionAleatoria();*/
/*
    void Explode();

    void DestroyNearbyBlocks();

    void SpawnNewBombs();

    FVector GetRandomSpawnLocation();

    // Retardo antes de explotar
    FTimerHandle ExplosionTimer;

    // Generación de la bomba (controla cuántas nuevas va a crear)
    UPROPERTY()
    int32 GeneracionActual;

public:
    void SetGeneracion(int32 NuevaGeneracion);

    UPROPERTY(EditDefaultsOnly)
    float ExplosionDelay = 5.f;

    UPROPERTY(EditDefaultsOnly)
    float RangoExplosion = 400.f;

    UPROPERTY(EditDefaultsOnly)
    TSubclassOf<AActor> ClaseBomba; // Para spawnear más bombas
    */











