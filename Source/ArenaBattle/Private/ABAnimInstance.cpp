// Fill out your copyright notice in the Description page of Project Settings.

#include "ABAnimInstance.h"




UABAnimInstance::UABAnimInstance()
{
	CurrentPawnSpeed = 0.f;
	IsInAir = false;
	IsDead = false;
	static ConstructorHelpers::FObjectFinder<UAnimMontage>ATTACK_MONTAGE(TEXT("/Game/Book/Animations/SK_Mannequin_Skeleton_Montage.SK_Mannequin_Skeleton_Montage"));
	if (ATTACK_MONTAGE.Succeeded())
	{
		AttackMontage = ATTACK_MONTAGE.Object;
	}
}



void UABAnimInstance::NativeUpdateAnimation(float DeltaSeconds)
{
	Super::NativeUpdateAnimation(DeltaSeconds);

	auto Pawn = TryGetPawnOwner();
	if (!::IsValid(Pawn))return;


	if (!IsDead)
	{
		CurrentPawnSpeed = Pawn->GetVelocity().Size();
		auto Character = Cast<ACharacter>(Pawn);
		if (Character)
		{
			IsInAir = Character->GetMovementComponent()->IsFalling();
		}
	}

}

void UABAnimInstance::PlayerAttackMontage()
{

	ABCHECK(!IsDead);
	Montage_Play(AttackMontage, 1.f);
	/*if (!Montage_IsPlaying(AttackMontage))
	{
		Montage_Play(AttackMontage, 1.f);
	}*/
}

void UABAnimInstance::JumpToAttackMontageSection(int32 NewSection)
{
	ABCHECK(!IsDead);
	ABCHECK(Montage_IsPlaying(AttackMontage));
	Montage_JumpToSection(GetAttackMontageSectionName(NewSection), AttackMontage);
}

void UABAnimInstance::AnimNotify_AttackHitCheck()
{
	//ABLOG_S(Warning);
	OnAttackHitCheck.Broadcast();
}
void UABAnimInstance::AnimNotify_NextAttackCheck()
{
	OnNextAttackCheck.Broadcast();
}
FName UABAnimInstance::GetAttackMontageSectionName(int32 Section)
{
	ABCHECK(FMath::IsWithinInclusive<int32>(Section, 1, 4), NAME_None);
	return FName(*FString::Printf(TEXT("Attack%d"), Section));
}

//void UABAnimInstance::AnimNotify_AttackHitCheck()
//{
//	ABLOG_S(Warning);
//
//}

//		TryGetPawnOwner
//���ӿ����� Tick���� �Է� �ý��� > ���� ���� > �ִϸ��̼� �ý��� ������ ������ ������.
//�̴� �÷��̾��� ������ �Է� ���� ���� �� �װ��� �ؼ��� ���� �����̰� �����, ���� ���� �����Ӱ� �´� �ִϸ��̼��� �����Ű�� ���� �ڿ������� �����̴�.
// �ִϸ��̼ǿ� �ռ� ����Ǵ� ���� ���� �ܰ迡�� ���� �����ϴ� ����� �����ٸ� �� �ڿ� ����Ǵ� �ִϸ��̼� ����������
//�� �̻� ��ȿ���� ���� �� ��ü�� �����ϰ� �� ���̴�. �ۼ� �ִϸ��̼� �ý����� ���� ������ �� ���� �� ��ü�� ��ȿ���� �����ؾ� �Ѵ�. �̸� �˻��ϴ� ����� TryGetPawnOwner�Լ��̴�.


//�ִϸ��̼� ���� �����ϴ� ��� 
//1. ���� ���� ó�� �ִ��ν��Ͻ��� ƽ���� ���� ������ �ִϸ��̼��� �����ϴ¹�� (���� �Ϲ����� ���)
//2. �ݴ�� ������ ���̷�Ż �޽� ������Ʈ�� GetAnimInstance �Լ��� ����ϸ� ������ �ִ� �ν��Ͻ��� ������ �� �ִ�. (���� p217)

//1���� ���� ����ϴ� ���� 
/*
�ִϸ��̼� ������ ���� ������ �и��� �� �����Ƿ� �ִϸ��̼��� �ʿ���� ���� �ڵ忡�� �������� �����ϱ� ����.  --->�������̱�?
*/


//��Ȳ�� ���� ������ �ִϸ��̼� -->������Ʈ �ӽ�
//�ϳ��� ������Ʈ���� �ٸ� ������Ʈ�� �Ѿ�� ������ Ʈ������(Transition)�̶����
//�𸮾� ���������� Ʈ�������� '��'�̶����.



//���� �ٸ� ���̷��� ������ ���� ĳ������ �ִϸ��̼� ��ȯ�� �Ұ��� ������ , 
//�𸮾󿡼��� �ΰ��� ĳ������ ��� ���̷����� ������ �޶� �ִϸ��̼��� ��ȯ�� �� �ֵ��� �ִϸ��̼� ��Ÿ�� ����� ������.

