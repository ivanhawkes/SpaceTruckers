#pragma once

#include "Engine/DataTable.h"
#include "CoreMinimal.h"
#include "SolarSystem.generated.h"


USTRUCT(BlueprintType)
struct FSolarSystem : public FTableRowBase
{
    GENERATED_BODY()

public:
    UPROPERTY(EditAnywhere, Category = "Item Data")
    FName ID;

    UPROPERTY(EditAnywhere, Category = "Item Data")
    FText SolarSystemName {};

    UPROPERTY(EditAnywhere, Category = "Item Data")
    FVector2D Location {0.0f, 0.0f};
};
