#pragma once

#include "MarketItem.generated.h"


USTRUCT(BlueprintType)
struct FMarketItem
{
    GENERATED_USTRUCT_BODY()

public:
    UPROPERTY(BlueprintReadWrite)
    FText MarketItemName {FText::FromString("NoName")};

    UPROPERTY(BlueprintReadWrite)
    FVector2D Location {0.0f, 0.0f};

};
