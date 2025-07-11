#pragma once

#include "MarketItemCategory.generated.h"


// Defines the type of the item.
UENUM()
enum class EMarketCategoryType : uint8
{
    Arms UMETA(DisplayName = "Arms"),
    Computing UMETA(DisplayName = "Computing"),
    ConstructionMaterial UMETA(DisplayName = "Construction Material"),
    Consumable UMETA(DisplayName = "Consumable"),
    Fertiliser UMETA(DisplayName = "Fertiliser"),
    Fuel UMETA(DisplayName = "Fuel"),
    Machinery UMETA(DisplayName = "Machinery"),
    Metal UMETA(DisplayName = "Metal"),
    Minerals UMETA(DisplayName = "Minerals"),
    Optics UMETA(DisplayName = "Optics"),
    Pharmaceutical UMETA(DisplayName = "Pharmaceutical"),
    Polymer UMETA(DisplayName = "Polymer"),
    SmallArms UMETA(DisplayName = "Small Arms"),
    Tool UMETA(DisplayName = "Tool"),
    Water UMETA(DisplayName = "Water")
};


USTRUCT(BlueprintType)
struct FMarketItemCategory : public FTableRowBase
{
    GENERATED_BODY()

public:
    UPROPERTY(EditAnywhere, Category = "Item Data")
    FName id;

    UPROPERTY(EditAnywhere, Category = "Item Data")
    FText name;

    UPROPERTY(EditAnywhere, Category = "Item Data")
    EMarketCategoryType categoryType;
};
