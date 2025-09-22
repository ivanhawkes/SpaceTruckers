#include "UniverseComponent.h"
#include "Engine/Engine.h"
#include "Engine/DataTable.h"
#include "Engine/World.h"
#include "../NameList/NameList.h"
#include "SolarSystem.h"
#include <cstdlib>


// Sets default values for this component's properties
UUniverseComponent::UUniverseComponent()
{
	// Set this component to be initialized when the game starts, and to be ticked every frame.  You can turn these features
	// off to improve performance if you don't need them.
	PrimaryComponentTick.bCanEverTick = true;
}


void UUniverseComponent::BeginPlay()
{
	Super::BeginPlay();

	if (GEngine)
		GEngine->AddOnScreenDebugMessage(-1, 4.0f, FColor::Yellow, "Begin Play...", true);

	GenerateNewUniverse();
}


void UUniverseComponent::TickComponent(float DeltaTime, ELevelTick TickType, FActorComponentTickFunction* ThisTickFunction)
{
	Super::TickComponent(DeltaTime, TickType, ThisTickFunction);
}


void UUniverseComponent::GenerateNewUniverse()
{
	if (GEngine)
	{
		GEngine->AddOnScreenDebugMessage(-1, 4.0f, FColor::Yellow, "Generate new universe", true);

		if (solarSystemNames)
		{
			static const FString ContextString(TEXT("Finding Row in solar system table"));

			TArray<FName> rows = solarSystemNames->GetRowNames();

			// Randomise the array by swapping elements multiple times. This is probably not
			// very optimal, but it will do for now.
			std::srand(std::time(0));
			for (int i = 0; i < rows.Max() * 3; i++)
			{
				int32 firstRow = std::rand() % rows.Max();
				int32 secondRow = std::rand() % rows.Max();
				std::swap(rows[firstRow], rows[secondRow]);
			}

			const float deadZone {500.0f};
			const float degreeStep {50.0f};
			float offsetAngle {0.0f};
			float linearStepExpansion {190.0f};
			float linearStep {0.0f};

			// Generate a set of solar systems.
			for (int i = 0; i < 100; i++)
			{
				// Centre of the universe is based on the universe actor location.
				FVector SpawnLocation = GetOwner()->GetActorLocation();
				FRotator SpawnRotation = GetOwner()->GetActorRotation();

				// Give the new solar system an offset from the universe.
				float distance = linearStep + deadZone;
				float x = cos(offsetAngle) * distance;
				float y = sin(offsetAngle) * distance;
				SpawnLocation.X += x;
				SpawnLocation.Y += y;

				// Update the offsets.
				float randomStepExpansion =  std::rand() % 20;
				//randomStepExpansion = 0.0f;
				linearStep += linearStepExpansion + randomStepExpansion;
				float randomDegreeStep =  std::rand() % 20;
				//randomDegreeStep = 0.0f;
				offsetAngle += degreeStep + randomDegreeStep;

				auto& row = rows[i];

				FActorSpawnParameters spawnParameters;
				spawnParameters.Owner = GetOwner();
				spawnParameters.Instigator = GetOwner()->GetInstigator();
				spawnParameters.ObjectFlags |= RF_Transient;
				spawnParameters.Name = row;
				spawnParameters.NameMode = FActorSpawnParameters::ESpawnActorNameMode::Requested;
				ASolarSystemActor* solarSystemActor = GetWorld()->SpawnActor<ASolarSystemActor>(SpawnLocation, SpawnRotation, spawnParameters);

				// Set a label for the outliner and make our new actor a child of the universe.
				solarSystemActor->SetActorLabel(row.ToString());
				solarSystemActor->AttachToActor(GetOwner(), FAttachmentTransformRules::KeepWorldTransform);
			}


			// Iterate every row of the array.
			//for (auto& aRow : rows)
			//{
			//	GEngine->AddOnScreenDebugMessage(-1, 4.0f, FColor::Yellow, aRow.ToString(), true);
			//}
		}
	}
}
