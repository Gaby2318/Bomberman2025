
//6
#pragma once  

#include "CoreMinimal.h"  
#include "GameFramework/Actor.h"  
#include "Bomba.generated.h"  
//class UStaticMeshComponent;
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



// Problema 1: El error "no se puede abrir el archivo origen" indica que el archivo "Bomba.generated.h" no se está generando correctamente.  
// Esto ocurre porque el archivo no está siendo procesado por el sistema de compilación de Unreal Engine.  
// Solución: Asegúrate de que el archivo "Bomba.h" esté incluido en el módulo correcto en el archivo .Build.cs y que el proyecto esté configurado correctamente.  

// Problema 2: El error "esta declaración no tiene ningún especificador de tipo o clase de almacenamiento" ocurre porque el macro `GENERATED_BODY()` no se reconoce.  
// Esto puede deberse a que el archivo no está siendo procesado por el sistema de reflexión de Unreal Engine.  
// Solución: Asegúrate de que el archivo esté configurado correctamente en el módulo y que el proyecto esté regenerando los archivos intermedios.  

// Pasos para corregir ambos problemas:  
// 1. Verifica que el archivo "Bomba.h" esté incluido en el módulo correspondiente en el archivo .Build.cs.  
// 2. Limpia y regenera los archivos intermedios del proyecto.  
// 3. Asegúrate de que el archivo "Bomba.h" tenga la extensión correcta y esté en la carpeta adecuada.  
// 4. Asegúrate de que el proyecto esté configurado para usar el sistema de compilación de Unreal Engine.  

// Ejemplo de configuración en el archivo .Build.cs:  
//PublicDependencyModuleNames.AddRange(new string[] { "Core", "CoreUObject", "Engine", "InputCore" });  

// Luego, limpia y regenera los archivos intermedios:  
// - Elimina la carpeta "Intermediate" del proyecto.  
// - Abre el proyecto en Unreal Engine y permite que regenere los archivos automáticamente.  

// Si el problema persiste, verifica que el archivo "Bomba.h" esté correctamente configurado en el módulo y que no haya errores en otros archivos relacionados.























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











