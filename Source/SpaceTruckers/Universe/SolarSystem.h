#pragma once

#include "SolarSystem.generated.h"


USTRUCT(BlueprintType)
struct FSolarSystem
{
    GENERATED_USTRUCT_BODY()

public:
    UPROPERTY(BlueprintReadWrite)
    FText SolarSystemName {FText::FromString("Doom")};

    UPROPERTY(BlueprintReadWrite)
    FVector2D Location {0.0f, 0.0f};

};
