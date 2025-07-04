#pragma once

#include "Sun.generated.h"


USTRUCT(BlueprintType)
struct FSun
{
    GENERATED_USTRUCT_BODY()

public:
    UPROPERTY(BlueprintReadWrite)
    FText SunName {FText::FromString("Explodus")};

    UPROPERTY(BlueprintReadWrite)
    FVector2D Location {0.0f, 0.0f};

};
