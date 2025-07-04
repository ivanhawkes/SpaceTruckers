#pragma once

#include "MarketItemCategory.h"
#include "MarketItem.generated.h"


USTRUCT(BlueprintType)
struct FMarketItem
{
    GENERATED_USTRUCT_BODY()

public:
    UPROPERTY(BlueprintReadWrite)
    FText itemName {FText::FromString("NoName")};

    UPROPERTY(BlueprintReadWrite)
    FText itemDescription {FText::FromString("NoName")};

    UPROPERTY(BlueprintReadWrite)
    FMarketItemCategory itemCategory;
};
