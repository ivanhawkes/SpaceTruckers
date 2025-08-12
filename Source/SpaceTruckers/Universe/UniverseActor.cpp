#include "UniverseActor.h"


// Sets default values
AUniverseActor::AUniverseActor()
{
 	// Set this actor to call Tick() every frame.  You can turn this off to improve performance if you don't need it.
	PrimaryActorTick.bCanEverTick = true;
}


// Called when the game starts or when spawned
void AUniverseActor::BeginPlay()
{
	Super::BeginPlay();
}


// Called every frame
void AUniverseActor::Tick(float DeltaTime)
{
	Super::Tick(DeltaTime);
}

