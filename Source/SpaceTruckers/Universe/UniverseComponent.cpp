#include "UniverseComponent.h"
#include "Engine/Engine.h"
#include "Engine/DataTable.h"
#include "../NameList/NameList.h"


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

			TArray<FName> Rows = solarSystemNames->GetRowNames();

			FNameList* myRow = solarSystemNames->FindRow<FNameList>(FName("Abel"), ContextString);
			GEngine->AddOnScreenDebugMessage(-1, 4.0f, FColor::Yellow, myRow->name.ToString(), true);

			auto& bRow = Rows[10];
			GEngine->AddOnScreenDebugMessage(-1, 4.0f, FColor::Yellow, bRow.ToString(), true);

			// Iterate every row of the array.
			//for (auto& aRow : Rows)
			//{
			//	GEngine->AddOnScreenDebugMessage(-1, 4.0f, FColor::Yellow, aRow.ToString(), true);
			//}
		}
	}
}
