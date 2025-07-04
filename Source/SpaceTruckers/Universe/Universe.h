#pragma once

#include "Universe.generated.h"


USTRUCT(BlueprintType)
struct FUniverse
{
    GENERATED_USTRUCT_BODY()

public:
    UPROPERTY(BlueprintReadWrite)
    FText UniverseName {FText::FromString("Worst Timeline")};

    UPROPERTY(BlueprintReadWrite)
    FVector2D Location {0.0f, 0.0f};

};
