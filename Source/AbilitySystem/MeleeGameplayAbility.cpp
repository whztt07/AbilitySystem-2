// Fill out your copyright notice in the Description page of Project Settings.


#include "MeleeGameplayAbility.h"
#include "Runtime/Engine/Public/Engine.h"

void UMeleeGameplayAbility::ActivateAbility(const FGameplayAbilitySpecHandle Handle,
                                                   const FGameplayAbilityActorInfo* ActorInfo,
                                                   const FGameplayAbilityActivationInfo ActivationInfo,
                                                   const FGameplayEventData* TriggerEventData)
{
    Super::ActivateAbility(Handle, ActorInfo, ActivationInfo, TriggerEventData);
    //CommitAbility(Handle, ActorInfo, ActivationInfo);
    //GEngine->AddOnScreenDebugMessage(-1, 2.0f, FColor::Blue, FString("Melee Attack"));
}
