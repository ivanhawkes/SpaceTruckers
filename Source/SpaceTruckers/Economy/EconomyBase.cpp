#include "EconomyBase.h"


// Sets default values for this component's properties
UEconomyBase::UEconomyBase()
{
	// Set this component to be initialized when the game starts, and to be ticked every frame.  You can turn these features
	// off to improve performance if you don't need them.
	PrimaryComponentTick.bCanEverTick = true;

	// ...
}


// Called when the game starts
void UEconomyBase::BeginPlay()
{
	Super::BeginPlay();

	// ...
	
}


// Called every frame
void UEconomyBase::TickComponent(float DeltaTime, ELevelTick TickType, FActorComponentTickFunction* ThisTickFunction)
{
	Super::TickComponent(DeltaTime, TickType, ThisTickFunction);

	// ...
}

