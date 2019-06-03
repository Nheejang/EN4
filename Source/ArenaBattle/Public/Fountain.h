// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

//#include "EngineMinimal.h"
#include"ArenaBattle.h"
#include"GameFramework/RotatingMovementComponent.h"
#include "GameFramework/Actor.h"
#include "Fountain.generated.h"

//�𸮾� ������Ʈ ����  �ؿ� GENERATED_BODY�� �Բ����
UCLASS()
class ARENABATTLE_API AFountain : public AActor
{
	//�𸮾� ������Ʈ ����  ���� UCLASS�� �Բ����
	GENERATED_BODY()
	
public:	
	// Sets default values for this actor's properties
	AFountain();

protected:
	// Called when the game starts or when spawned
	virtual void BeginPlay() override;
	virtual void EndPlay(const EEndPlayReason::Type EndPlayReason) override;
	virtual void PostInitializeComponents() override;

public:	
	// Called every frame
	virtual void Tick(float DeltaTime) override;


	//��ü�޸� �ڵ����� (SMART_PTR ���� ����)  //������Ʈ �Ӽ����� ON     
	UPROPERTY(									VisibleAnywhere)   //�����ͷ� ������ ��ü ���� �����ϸ� ���� ������ ���
	UStaticMeshComponent *Body;
	
	UPROPERTY(VisibleAnywhere)
	UStaticMeshComponent *Water;

	UPROPERTY(VisibleAnywhere)
	UPointLightComponent *Light;

	UPROPERTY(VisibleAnywhere)
	UParticleSystemComponent *Splash;

	//��ü������ �Ʒ�ó�� UPROPERTY�� VisibleAnywhere�� �Ӽ������͸� �����Ҽ� ���� �ٸ� ��ü�� ���� �Ӽ����� ������ �� ����,
	//�������� �����͸� ������ �� ����
	//�̴� ��ü������ UStaticMeshComponent �� �ٸ� Component�� ������ �� ���°� �� ���ٰ� �����ϸ� ��.
//	UPROPERTY(VIsibleAnywhere)
	//�𸮾� �����Ϳ��� �Ӽ��� �����͸� �����Ϸ��� EditAnywhere ���
	//Category = �з��� ��Ģ���� Ű���带 �߰��ϸ� ������ �з����� �Ӽ����� ������ �� ����.
	UPROPERTY(EditAnywhere,Category=ID)
	int32 ID;

	//�𸮾� ������ ��� ������  ���������� �����ϰ� ��� uasset�̶�� ������ Ȯ���ڸ� ����.
	//�ܺ������δ� ������ ü�������� ���������� �ٸ� �����͸� ǰ��. (ex�Ʒ�)
	//����ƽ�޽��� �ϴû�, �ؽ��Ĵ� ������, ��ƼŬ�� ���, ���׸����� ������� ǥ�õ�.

	
	UPROPERTY(VisibleAnywhere)
		URotatingMovementComponent* Movement;


private:
	UPROPERTY(EditAnywhere, Category = Stat, Meta = (AllowPrivateAccess = true))
		float RotateSpeed;
	
};


//Assertion(����)  : ���α׷��ֿ��� �ݵ�� Ȯ���ϰ� �Ѿ�� �ϴ� ���� �ڵ�
/*
 ex) ���� �ʱ�ȭ�Ҷ� ����ƽ�Ž� ������ �ش��ο� ������������ �� ���� ������ ���࿡ ġ������ ������ �߻���Ų�ٰ� �����ϸ�,
 �� ������ ������ �߻����� �ʵ��� ���� ������ �����ϰ� ������ ���°��� �ʿ� �̋� ��ȼ� ������ ����ϴ°�.  ��ǥ ��ȼǱ��� --->  Check
  �����ϰ� ���� �ð��� ũ�� ������ ������ ��� ������ ��� --->  Ensure

*/



//ȸ����
/*
DirectX ���� pitch,yaw,roll 
Unreal ���� roll,pitch,yaw
*/