#pragma once

#include "CoreMinimal.h"
#include "Components/ActorComponent.h"
#include "UniverseComponent.generated.h"


UCLASS( ClassGroup=(Custom), meta=(BlueprintSpawnableComponent) )
class SPACETRUCKERS_API UUniverseComponent : public UActorComponent
{
	GENERATED_BODY()

public:	
	// Sets default values for this component's properties
	UUniverseComponent();
	virtual void TickComponent(float DeltaTime, ELevelTick TickType, FActorComponentTickFunction* ThisTickFunction) override;

protected:
	// Called when the game starts
	virtual void BeginPlay() override;

	void GenerateNewUniverse();

	UPROPERTY(EditAnywhere)
	UDataTable* solarSystemNames;

	UPROPERTY(EditAnywhere)
	UDataTable* PlanetNames;
};
