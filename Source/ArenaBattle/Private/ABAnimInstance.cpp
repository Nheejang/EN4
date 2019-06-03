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
//게임엔진은 Tick마다 입력 시스템 > 게임 로직 > 애니메이션 시스템 순으로 로직을 실행함.
//이는 플레이어의 의지인 입력 값을 받은 후 그것을 해석해 폰을 움직이게 만들고, 폰의 최종 움직임과 맞는 애니메이션을 재생시키는 것이 자연스럽기 때문이다.
// 애니메이션에 앞서 실행되는 게임 로직 단계에서 폰이 제거하는 명령을 내린다면 그 뒤에 실행되는 애니메이션 로직에서는
//더 이상 유효하지 않은 폰 객체를 참조하게 될 것이다. 글서 애니메이션 시스템은 폰에 접근할 때 먼저 폰 객체가 유효한지 점검해야 한다. 이를 검사하는 명령이 TryGetPawnOwner함수이다.


//애니메이션 동작 변경하는 방법 
//1. 위의 예제 처럼 애님인스턴스의 틱에서 폰에 접근해 애니메이션을 생성하는방법 (가장 일반적인 방법)
//2. 반대로 폰에서 스켈레탈 메시 컴포넌트의 GetAnimInstance 함수를 사용하면 폰에서 애님 인스턴스에 접근할 수 있다. (예제 p217)

//1번을 많이 사용하는 이유 
/*
애니메이션 로직과 폰의 로직을 분리할 수 있으므로 애니메이션이 필요없는 서버 코드에서 문제없이 동작하기 때문.  --->부하줄이기?
*/


//상황에 따른 복잡한 애니메이션 -->스테이트 머신
//하나의 스테이트에서 다른 스테이트로 넘어가는 조건을 트랜지션(Transition)이라고함
//언리얼 엔진에서는 트랜지션을 '룰'이라고함.



//원래 다른 스켈레톤 구성을 가진 캐릭터의 애니메이션 교환은 불가능 하지만 , 
//언리얼에서는 인간형 캐릭터의 경우 스켈레톤의 구성이 달라도 애니메이션을 교환할 수 있도록 애니메이션 리타겟 기능을 제공함.

