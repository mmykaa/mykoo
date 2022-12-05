// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"


#include "GameFramework/Character.h"
#include "../Plugins/EnhancedInput/Source/EnhancedInput/Public/InputActionValue.h"
#include "PlayerBehaviour.generated.h"

class UInputAction;
class UInputMappingContext;


UCLASS()
class MYKOO_API APlayerBehaviour : public ACharacter
{
	GENERATED_BODY()

public:
	// Sets default values for this character's properties
	APlayerBehaviour();

protected:
	// Called when the game starts or when spawned
	virtual void BeginPlay() override;

public:	
	// Called every frame
	virtual void Tick(float DeltaTime) override;

	// Called to bind functionality to input
	virtual void SetupPlayerInputComponent(class UInputComponent* PlayerInputComponent) override;


#pragma region Input

	UPROPERTY(EditDefaultsOnly, BlueprintReadWrite, Category = "Input Mapping") 
		UInputMappingContext* BaseMappingContext;

	UPROPERTY(EditDefaultsOnly, BlueprintReadWrite, Category = "Input Mapping")
		int32 BaseMappingPriority;
	
	UPROPERTY(EditDefaultsOnly, BlueprintReadWrite, Category = "Input Mapping")
		UInputAction* MovementAction;

	UPROPERTY(EditDefaultsOnly, BlueprintReadWrite, Category = "Input Mapping")
		UInputAction* JumpAction;


	void MoveInput(const FInputActionValue& Value);

#pragma endregion


	float fMovingSpeed;
	float fRotatingSpeed;

	FVector vInput;
};
