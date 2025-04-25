
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

    // Componente de malla est�tica
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
    bool bEsBombaInicial = true; // Solo la primera bomba podr� generar otras bombas
    void GenerarBombasAleatorias(FVector PosicionBomba);

private:
    int32 GeneracionActual;

public:
    FORCEINLINE int32 GetGeneracionActual() const { return GeneracionActual; }
    // Add the missing member variable "GeneracionActual" to the ABomba class.    
// Generaci�n de la bomba (controla cu�ntas nuevas va a crear)
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
      // M�todo para destruir bloques cercanos (pseudoc�digo, debes adaptarlo)
      //void DestruirBloquesCercanos();
      // M�todo para spawnear nuevas bombas
    //  void SpawnearNuevasBombas();
      // M�todo para obtener una posici�n aleatoria para spawnear nuevas bombas
     // FVector ObtenerPosicionAleatoria();*/
/*
    void Explode();

    void DestroyNearbyBlocks();

    void SpawnNewBombs();

    FVector GetRandomSpawnLocation();

    // Retardo antes de explotar
    FTimerHandle ExplosionTimer;

    // Generaci�n de la bomba (controla cu�ntas nuevas va a crear)
    UPROPERTY()
    int32 GeneracionActual;

public:
    void SetGeneracion(int32 NuevaGeneracion);

    UPROPERTY(EditDefaultsOnly)
    float ExplosionDelay = 5.f;

    UPROPERTY(EditDefaultsOnly)
    float RangoExplosion = 400.f;

    UPROPERTY(EditDefaultsOnly)
    TSubclassOf<AActor> ClaseBomba; // Para spawnear m�s bombas
    */











