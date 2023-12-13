
#include "CppBaseActor.h"

ACppBaseActor::ACppBaseActor()
{
    PrimaryActorTick.bCanEverTick = true;
}

void ACppBaseActor::BeginPlay()
{
    Super::BeginPlay();
    
    InitialLocation = GetActorLocation();
}

void ACppBaseActor::Tick(float DeltaTime)
{
    Super::Tick(DeltaTime);
    SinMovement();
}

void ACppBaseActor::SinMovement()
{
    FVector NewLocation = InitialLocation;
    float DeltaHeight = FMath::Sin(Frequency * GetWorld()->GetTimeSeconds()) * Amplitude;
    NewLocation.Z += DeltaHeight;
    SetActorLocation(NewLocation);
}
