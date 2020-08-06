// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "Engine/DataTable.h"
#include "UObject/SoftObjectPath.h"
#include "CustomStructs.generated.h"

/**
 *
 */
USTRUCT(BlueprintType)
struct FSkinEntry : public FTableRowBase {
	GENERATED_BODY()

		UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Test")
		FSoftObjectPath AvatarMaterial;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Test")
		FSoftObjectPath PortraitMaterial;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Test")
		FString RequiredEntitlement;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Test")
		int32 Order;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Test")
		bool ConsiderForDefault;

};
