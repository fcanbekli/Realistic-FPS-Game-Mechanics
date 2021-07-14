// Fill out your copyright notice in the Description page of Project Settings.

#include <ProjectShock/Player/PS_PlayerAnimation.h>

void UPS_PlayerAnimation::UpdateAnimationProperties(float DeltaTime)
{
	if (PlayerCharacter == nullptr) {
		PlayerCharacter = Cast<APS_PlayerCharacter>(TryGetPawnOwner());
	}
	if (PlayerCharacter) {
		FVector Velocity{ PlayerCharacter->GetVelocity() };
		Velocity.Z = 0;
		Speed = Velocity.Size();

		bIsInAir = PlayerCharacter->GetCharacterMovement()->IsFalling();

		if (PlayerCharacter->GetCharacterMovement()->GetCurrentAcceleration().Size() > 0.f) {
			bIsAccelerating = true;
		}
		else {
			bIsAccelerating = false;
		}
	}
}

void UPS_PlayerAnimation::NativeInitializeAnimation()
{
	PlayerCharacter = Cast<APS_PlayerCharacter>(TryGetPawnOwner());
}
