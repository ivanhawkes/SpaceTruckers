#pragma once

#include "Planet.generated.h"


USTRUCT(BlueprintType)
struct FPlanet
{
    GENERATED_USTRUCT_BODY()

public:
    UPROPERTY(BlueprintReadWrite)
    FText PlanetName {FText::FromString("Apes Won")};

    UPROPERTY(BlueprintReadWrite)
    FVector2D Location {0.0f, 0.0f};

};
