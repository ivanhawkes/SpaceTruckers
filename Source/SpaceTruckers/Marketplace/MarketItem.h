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
    FText itemName {FText::FromString("NoName")};

    UPROPERTY(EditAnywhere, Category = "Item Data")
    FText itemDescription {FText::FromString("NoName")};

    UPROPERTY(EditAnywhere, Category = "Item Data")
    FMarketItemCategory itemCategory;
};
