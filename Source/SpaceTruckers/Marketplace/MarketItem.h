#pragma once

#include "Engine/DataTable.h"
#include "MarketItem.generated.h"


USTRUCT(BlueprintType)
struct FMarketItem : public FTableRowBase
{
    GENERATED_BODY()

public:
    UPROPERTY(EditAnywhere, Category = "Item Data")
    FName id;

    UPROPERTY(EditAnywhere, Category = "Item Data")
    FText name;

    UPROPERTY(EditAnywhere, Category = "Item Data")
    FText description;

    UPROPERTY(EditAnywhere, Category = "Item Data")
    FName categoryId;

    UPROPERTY(EditAnywhere, Category = "Item Data")
    int32 stackSize;

    // The price for this item given balanced values for all variables like supply, demand, travel distances, economy.
    // This allows us to set reasonable centre points for pricing.
    UPROPERTY(EditAnywhere, Category = "Item Data")
    double basePrice;
};
