#pragma once

#include "Satellite.generated.h"


USTRUCT(BlueprintType)
struct FSatellite
{
    GENERATED_BODY()

public:
    UPROPERTY(BlueprintReadWrite)
    FText SatelliteName {FText::FromString("Mr. The Moon")};

    UPROPERTY(BlueprintReadWrite)
    FVector2D Location {0.0f, 0.0f};

};

