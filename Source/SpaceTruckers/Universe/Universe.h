#pragma once

#include "Engine/DataTable.h"
#include "Universe.generated.h"


UCLASS(BlueprintType, Blueprintable)
class SPACETRUCKERS_API UUniverse : public UDataAsset
{
    GENERATED_BODY()

public:
    UPROPERTY(EditAnywhere, Category = "Item Data")
    FName ID;

    UPROPERTY(EditAnywhere, Category = "Item Data")
    uint64 seed;

    UPROPERTY(EditAnywhere, Category = "Item Data")
    FText UniverseName {FText::FromString("Worst Timeline")};

    UPROPERTY(EditAnywhere, Category = "Item Data")
    FVector2D Location {0.0f, 0.0f};
};
