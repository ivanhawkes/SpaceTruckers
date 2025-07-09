#pragma once

#include "MarketItemCategory.h"
#include "Engine/DataTable.h"
#include "MarketItem.generated.h"


USTRUCT(BlueprintType)
struct FMarketItem : public FTableRowBase
{
    GENERATED_BODY()

public:
    UPROPERTY(EditAnywhere, Category = "Item Data")
    FText name;

    UPROPERTY(EditAnywhere, Category = "Item Data")
    FText itemDescription;

    UPROPERTY(EditAnywhere, Category = "Item Data")
    FMarketItemCategory itemCategory;
};
