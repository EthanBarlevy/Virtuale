// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "GameFramework/Actor.h"
#include "HeistTile.generated.h"

UCLASS(Blueprintable, BlueprintType)
class VIRTUALE_API AHeistTile : public AActor
{
	GENERATED_BODY()

public:
	// Sets default values for this actor's properties
	AHeistTile();

protected:
	// Called when the game starts or when spawned
	virtual void BeginPlay() override;

public:
	// Called every frame
	virtual void Tick(float DeltaTime) override;

	UPROPERTY(BlueprintReadWrite, EditAnywhere);
	bool isWalkable = 0;
	UPROPERTY(BlueprintReadWrite, EditAnywhere);
	int worldX =0;
	UPROPERTY(BlueprintReadWrite, EditAnywhere);
	int worldY =0; //generated upon frontend gen
	UPROPERTY(BlueprintReadWrite, EditAnywhere);
	int gridX=0;
	UPROPERTY(BlueprintReadWrite, EditAnywhere);
	int gridY=0; //generated upon loading from floor file

};

