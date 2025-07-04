#pragma once

#include "MarketListing.generated.h"


USTRUCT(BlueprintType)
struct FMarketListing
{
    GENERATED_USTRUCT_BODY()

public:
    UPROPERTY(BlueprintReadWrite)
    FText MarketListingName {FText::FromString("NoName")};

    UPROPERTY(BlueprintReadWrite)
    FVector2D Location {0.0f, 0.0f};

};
