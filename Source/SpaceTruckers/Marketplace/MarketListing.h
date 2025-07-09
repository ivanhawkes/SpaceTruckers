#pragma once

#include "MarketItem.h"
#include "MarketVendor.h"
#include "Engine/DataTable.h"
#include "CoreMinimal.h"
#include "MarketListing.generated.h"


USTRUCT(BlueprintType)
struct FMarketListing : public FTableRowBase
{
    GENERATED_BODY()

public:
    // The ID name of this item for referencing in a table row.
    UPROPERTY(EditAnywhere, Category = "Item Data")
    FName id;
    
    // Which vendor is offering this listing.
    UPROPERTY(EditAnywhere, Category = "Item Data")
    FMarketVendor vendor;

    // What item is available for purchase.
    UPROPERTY(EditAnywhere, Category = "Item Data")
    FMarketItem item;

    // What price is each unit.
    UPROPERTY(EditAnywhere, Category = "Item Data")
    double unitPrice {0.0f};

    // How many units are available.
    UPROPERTY(EditAnywhere, Category = "Item Data")
    int32 unitsAvailable {0};
};
