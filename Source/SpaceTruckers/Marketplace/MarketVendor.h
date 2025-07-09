#pragma once

#include "MarketVendor.generated.h"


USTRUCT(BlueprintType)
struct FMarketVendor
{
    GENERATED_BODY()

public:
    // The ID name of this item for referencing in a table row.
    UPROPERTY(EditAnywhere, Category = "Item Data")
    FName id;

    UPROPERTY(EditAnywhere, Category = "Item Data")
    FText MarketVendorName;
};
