#pragma once

#include "Engine/DataTable.h"
#include "MarketItem.generated.h"


USTRUCT(BlueprintType)
struct FMarketItem : public FTableRowBase
{
    GENERATED_BODY()

public:
    UPROPERTY(EditAnywhere, Category = "Item Data")
    FName id;

    UPROPERTY(EditAnywhere, Category = "Item Data")
    FText name;

    UPROPERTY(EditAnywhere, Category = "Item Data")
    FText description;

    UPROPERTY(EditAnywhere, Category = "Item Data")
    FName categoryId;

    UPROPERTY(EditAnywhere, Category = "Item Data")
    int32 stackSize;
};
