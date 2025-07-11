#pragma once

#include "MarketVendor.generated.h"


USTRUCT(BlueprintType)
struct FMarketVendor
{
    GENERATED_BODY()

public:
    UPROPERTY(EditAnywhere, Category = "Item Data")
    FName id;

    UPROPERTY(EditAnywhere, Category = "Item Data")
    FText name;
};
