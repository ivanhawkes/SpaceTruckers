#pragma once

#include "Marketplace.generated.h"


USTRUCT(BlueprintType)
struct FMarketplace
{
    GENERATED_BODY()

public:
    UPROPERTY(BlueprintReadWrite)
    FText MarketplaceName {FText::FromString("Greed is good")};

    UPROPERTY(BlueprintReadWrite)
    FVector2D Location {0.0f, 0.0f};

};
