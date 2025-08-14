#include "UniverseActor.h"
#include "UniverseComponent.h"


// Sets default values
AUniverseActor::AUniverseActor()
{
	PrimaryActorTick.bCanEverTick = true;

	universeComponent = CreateDefaultSubobject<UUniverseComponent>(TEXT("Universe"), false);
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

