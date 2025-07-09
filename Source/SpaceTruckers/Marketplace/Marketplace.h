#pragma once

#include "Marketplace.generated.h"


USTRUCT(BlueprintType)
struct FMarketplace
{
    GENERATED_BODY()

public:
    UPROPERTY(EditAnywhere, Category = "Item Data")
    FText name;

    UPROPERTY(EditAnywhere, Category = "Item Data")
    FVector2D Location {0.0f, 0.0f};
};
