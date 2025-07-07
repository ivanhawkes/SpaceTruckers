#pragma once

#include "MarketItemCategory.generated.h"


// Defines the type of the item.
UENUM()
enum class EMarketCategoryType : uint8
{
    Tool UMETA(DisplayName = "Tool"),
    Consumable UMETA(DisplayName = "Consumable")
};


USTRUCT(BlueprintType)
struct FMarketItemCategory : public FTableRowBase
{
    GENERATED_BODY()

public:
    UPROPERTY(EditAnywhere, Category = "Item Data")
    int32 categoryID;

    UPROPERTY(EditAnywhere, Category = "Item Data")
    FText categoryName {FText::FromString("Commodity")};

    UPROPERTY(EditAnywhere, Category = "Item Data")
    EMarketCategoryType categoryType;
};
