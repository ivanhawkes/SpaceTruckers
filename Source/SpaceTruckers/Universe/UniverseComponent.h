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

	// Empty space at the centre of the galaxy. There is a black hole at the centre of every galaxy.
	UPROPERTY(EditAnywhere, Category = "Item Data")
	float deadZone {1000.0f};

	UPROPERTY(EditAnywhere, Category = "Item Data")
	float fixedRotationDegree {60.0f};

	UPROPERTY(EditAnywhere, Category = "Item Data")
	float randomRotationDegree {0.0f};

	UPROPERTY(EditAnywhere, Category = "Item Data")
	float fixedExpansionOutward {100.0f};

	UPROPERTY(EditAnywhere, Category = "Item Data")
	float randomExpansionOutward {0.0f};
};
