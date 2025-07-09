#pragma once

#include "MarketItemCategory.h"
#include "Engine/DataTable.h"
#include "MarketItem.generated.h"


USTRUCT(BlueprintType)
struct FMarketItem : public FTableRowBase
{
    GENERATED_BODY()

public:
    // The name of the market may include spaces.
    UPROPERTY(EditAnywhere, Category = "Item Data")
    FText marketName;

    UPROPERTY(EditAnywhere, Category = "Item Data")
    FText description;

    UPROPERTY(EditAnywhere, Category = "Item Data")
    FMarketItemCategory category;
};
