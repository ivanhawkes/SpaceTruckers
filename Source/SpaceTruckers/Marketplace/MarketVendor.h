#pragma once

#include "MarketVendor.generated.h"


USTRUCT(BlueprintType)
struct FMarketVendor
{
    GENERATED_USTRUCT_BODY()

public:
    UPROPERTY(BlueprintReadWrite)
    FText MarketVendorName {FText::FromString("NoName")};

    UPROPERTY(BlueprintReadWrite)
    FVector2D Location {0.0f, 0.0f};

};
