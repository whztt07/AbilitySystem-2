// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "Abilities/GameplayAbility.h"
#include "MeleeGameplayAbility.generated.h"

/**
 * 
 */
UCLASS()
class ABILITYSYSTEM_API UMeleeGameplayAbility : public UGameplayAbility
{
	GENERATED_BODY()
    
    virtual void ActivateAbility(const FGameplayAbilitySpecHandle Handle, const FGameplayAbilityActorInfo* ActorInfo,
                                 const FGameplayAbilityActivationInfo ActivationInfo,
                                 const FGameplayEventData* TriggerEventData) override;
	
};
