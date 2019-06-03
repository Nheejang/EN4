// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "ArenaBattle.h"
#include "GameFramework/Pawn.h"
#include"GameFramework/FloatingPawnMovement.h"
#include "ABPawn.generated.h"

UCLASS()
class ARENABATTLE_API AABPawn : public APawn
{
	GENERATED_BODY()

public:
	// Sets default values for this pawn's properties
	AABPawn();

protected:
	// Called when the game starts or when spawned
	virtual void BeginPlay() override;

public:	
	// Called every frame
	virtual void Tick(float DeltaTime) override;

	virtual void PostInitializeComponents()override;
	virtual void PossessedBy(AController* NewController) override;

	// Called to bind functionality to input
	virtual void SetupPlayerInputComponent(class UInputComponent* PlayerInputComponent) override;

	UPROPERTY(VisibleAnywhere, Category=Collision)
		UCapsuleComponent* Capsule;
	UPROPERTY(VisibleAnywhere, Category=Visual)
		USkeletalMeshComponent* Mesh;
	UPROPERTY(VisibleAnywhere, Category=Movement)
		UFloatingPawnMovement* Movement;
	UPROPERTY(VisibleAnywhere, Category=Camera)
		USpringArmComponent* SpringArm;
	UPROPERTY(VisibleAnywhere, Category=Camera)
		UCameraComponent* Camera;

private:
	void UpDown(float NewAxisValue);
	void LeftRight(float NewAxisValue);
};



//에디터 툴바에서 플레이 버튼을 눌렀을 때  아래와 같은 순서로 관련된 액터들이 생성되고 게임플레이를 위한 설정이 갖춰짐
/*
	1.플레이어 컨트롤러 생성
	2.플레이어 폰 생성
	3.플레이어 컨트롤러가 플레이어 폰에 빙의
	4.게임의 시작
*/


//언리얼에서 인간형 폰을 좀 더 효과적으로 제작하기 위한 특수한 모델을 제공함.  이를 캐릭터라고함.
/*
	캐릭터모델이 폰모델과 다른점은 캐릭터 무브먼트 컴포넌트를 사용한다는 것임.
	이 컴포넌트가 FloatingPawnMovement에 비해 가지는 장점은 아래와 같음.
	1.점프와 같은 중력을 반영한 움직임을 제공함.
	2.다양한 움직임을 설정할 수 있음. 걷기 외에도 기어가기,날아가기,수영하기 등의 다양한 이동 모드를 설정할 수 있고, 현재 움직임에 대한 좀 더 많은 정보를 전달한다.
	3.멀티 플레이 네트워크 환경에서 캐릭터들의 움직임을 자동으로 동기화한다.
*/