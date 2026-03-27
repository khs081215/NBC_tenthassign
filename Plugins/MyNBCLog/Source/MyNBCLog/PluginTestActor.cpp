// Fill out your copyright notice in the Description page of Project Settings.


#include "PluginTestActor.h"
#include "MyNBCLog.h"


// Sets default values
APluginTestActor::APluginTestActor()
{
	// Set this actor to call Tick() every frame.  You can turn this off to improve performance if you don't need it.
	PrimaryActorTick.bCanEverTick = true;
	
	Scene=CreateDefaultSubobject<USceneComponent>("SceneComponent");
	RootComponent = Scene;
	
	StaticMesh=CreateDefaultSubobject<UStaticMeshComponent>("StaticMeshComponent");
	StaticMesh->SetupAttachment(Scene);
	
	//StaticMesh추가 
	static ConstructorHelpers::FObjectFinder<UStaticMesh>MeshAsset(TEXT("/Script/Engine.StaticMesh'/MyNBCLog/Fab/Low_Poly_Penguin/low_poly_penguin.low_poly_penguin'"));
    if (MeshAsset.Succeeded())
	{
		StaticMesh->SetStaticMesh(MeshAsset.Object);
	}
	
}

// Called when the game starts or when spawned
void APluginTestActor::BeginPlay()
{
	Super::BeginPlay();
	UE_LOG(LogMyNBCPlugin, Display, TEXT("Actor call MyNBCLog Plugin!"));

}

void APluginTestActor::Tick(float DeltaTime)
{
	Super::Tick(DeltaTime);
	AddActorWorldRotation(FRotator(0.0f, DeltaTime*180.0f, 0.0f));
	
}

