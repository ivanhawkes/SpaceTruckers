#pragma once

#include "MarketItem.h"
#include "MarketVendor.h"
#include "Engine/DataTable.h"
#include "CoreMinimal.h"
#include "MarketListing.generated.h"


UCLASS(BlueprintType, Blueprintable)
class SPACETRUCKERS_API UMarketListing : public UDataAsset
{
    GENERATED_BODY()

public:
    // The ID name of this item for referencing in a table row.
    UPROPERTY(EditAnywhere, Category = "Item Data")
    FName ID;
    
    // What item is available for purchase.
    UPROPERTY(EditAnywhere, Category = "Item Data")
    FMarketItem item;

    // What price is each unit.
    UPROPERTY(EditAnywhere, Category = "Item Data")
    float unitPrice {0.0f};

    // How many units are available.
    UPROPERTY(EditAnywhere, Category = "Item Data")
    int32 unitsAvailable {0};

    // Which vendor is offering this listing.
    UPROPERTY(EditAnywhere, Category = "Item Data")
    FMarketVendor vendor;
};
