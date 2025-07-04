#pragma once

#include "MarketItem.h"
#include "MarketVendor.h"
#include "MarketListing.generated.h"


USTRUCT(BlueprintType)
struct FMarketListing
{
    GENERATED_USTRUCT_BODY()

public:
    // What item is available for purchase.
    UPROPERTY(BlueprintReadWrite)
    FMarketItem item;

    // What price is each unit.
    UPROPERTY(BlueprintReadWrite)
    float unitPrice {0.0f};

    // How many units are available.
    UPROPERTY(BlueprintReadWrite)
    int32 unitsAvailable {0};

    // Which vendor is offering this listing.
    UPROPERTY(BlueprintReadWrite)
    FMarketVendor vendor;
};
