#pragma once

#include "CoreMinimal.h"
#include "GameFramework/Actor.h"
#include "UniverseActor.generated.h"


UCLASS()
class SPACETRUCKERS_API AUniverseActor : public AActor
{
	GENERATED_BODY()
	
public:	
	// Sets default values for this actor's properties
	AUniverseActor();

protected:
	// Called when the game starts or when spawned
	virtual void BeginPlay() override;

public:	
	// Called every frame
	virtual void Tick(float DeltaTime) override;
};
