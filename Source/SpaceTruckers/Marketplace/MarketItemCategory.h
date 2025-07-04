#pragma once

#include "MarketItemCategory.generated.h"


USTRUCT(BlueprintType)
struct FMarketItemCategory
{
    GENERATED_USTRUCT_BODY()

public:
    UPROPERTY(BlueprintReadWrite)
    int32 categoryID;

    UPROPERTY(BlueprintReadWrite)
    FText categoryName {FText::FromString("Commodity")};
};
