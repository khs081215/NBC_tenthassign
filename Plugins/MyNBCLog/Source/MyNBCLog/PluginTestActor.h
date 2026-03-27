// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "GameFramework/Actor.h"
#include "PluginTestActor.generated.h"

UCLASS()
class MYNBCLOG_API APluginTestActor : public AActor
{
	GENERATED_BODY()

public:
	// Sets default values for this actor's properties
	APluginTestActor();

protected:
	// Called when the game starts or when spawned
	virtual void BeginPlay() override;
	
	virtual void Tick(float DeltaTime) override;
	
	UPROPERTY(VisibleAnywhere)
	TObjectPtr<USceneComponent> Scene;
	
	UPROPERTY(EditAnywhere)
	TObjectPtr<UStaticMeshComponent> StaticMesh;
	
};
