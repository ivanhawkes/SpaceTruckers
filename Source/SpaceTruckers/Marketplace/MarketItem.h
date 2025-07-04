#pragma once

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


};
