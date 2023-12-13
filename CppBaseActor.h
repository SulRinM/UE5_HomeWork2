
#pragma once

#include "CoreMinimal.h"
#include "GameFramework/Actor.h"
#include "CppBaseActor.generated.h"

UCLASS()
class YOURPROJECTNAME_API ACppBaseActor : public AActor
{
    GENERATED_BODY()

public:
    ACppBaseActor();

protected:
    virtual void BeginPlay() override;

public:
    virtual void Tick(float DeltaTime) override;

    UFUNCTION(BlueprintCallable, Category="Movement")
    void SinMovement();

    UPROPERTY(EditAnywhere, BlueprintReadWrite, Category="Movement")
    float Amplitude = 100.0f;

    UPROPERTY(EditAnywhere, BlueprintReadWrite, Category="Movement")
    float Frequency = 1.0f;

    UPROPERTY(VisibleAnywhere, BlueprintReadOnly, Category="Movement")
    FVector InitialLocation;
};
