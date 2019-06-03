// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

//#include "EngineMinimal.h"
#include"ArenaBattle.h"
#include"GameFramework/RotatingMovementComponent.h"
#include "GameFramework/Actor.h"
#include "Fountain.generated.h"

//언리얼 오브젝트 선언  밑에 GENERATED_BODY와 함꼐사용
UCLASS()
class ARENABATTLE_API AFountain : public AActor
{
	//언리얼 오브젝트 선언  위에 UCLASS와 함꼐사용
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


	//객체메모리 자동관리 (SMART_PTR 같은 개념)  //컴포넌트 속성편집 ON     
	UPROPERTY(									VisibleAnywhere)   //포인터로 선언한 객체 위에 설정하면 위에 설명한 기능
	UStaticMeshComponent *Body;
	
	UPROPERTY(VisibleAnywhere)
	UStaticMeshComponent *Water;

	UPROPERTY(VisibleAnywhere)
	UPointLightComponent *Light;

	UPROPERTY(VisibleAnywhere)
	UParticleSystemComponent *Splash;

	//객체유형은 아래처럼 UPROPERTY와 VisibleAnywhere로 속성데이터를 변경할수 없음 다만 객체에 속한 속성들은 변경할 수 있음,
	//값유형은 데이터를 변경할 수 없음
	//이는 객체유형도 UStaticMeshComponent 를 다른 Component를 변경할 수 없는것 과 같다고 생각하면 됨.
//	UPROPERTY(VIsibleAnywhere)
	//언리얼 에디터에서 속성의 데이터를 변경하려면 EditAnywhere 사용
	//Category = 분류명 규칙으로 키워드를 추가하면 지정한 분류에서 속성값을 관리할 수 있음.
	UPROPERTY(EditAnywhere,Category=ID)
	int32 ID;

	//언리얼 엔진의 모든 에셋은  레벨에셋을 제외하고 모두 uasset이라는 동일한 확장자를 가짐.
	//외부적으로는 동일한 체계이지만 내부적으로 다른 데이터를 품음. (ex아래)
	//스태틱메쉬는 하늘색, 텍스쳐는 빨간색, 파티클은 흰색, 마테리얼은 녹색으로 표시됨.

	
	UPROPERTY(VisibleAnywhere)
		URotatingMovementComponent* Movement;


private:
	UPROPERTY(EditAnywhere, Category = Stat, Meta = (AllowPrivateAccess = true))
		float RotateSpeed;
	
};


//Assertion(어썰션)  : 프로그래밍에서 반드시 확인하고 넘어가야 하는 점검 코드
/*
 ex) 액터 초기화할때 스태틱매쉬 에셋이 해당경로에 존재하지않을 떄 향후 게임의 진행에 치명적인 오류를 발생시킨다고 가정하면,
 더 복잡한 문제가 발생하지 않도록 게임 실행을 중지하고 오류를 띄우는것이 필요 이떄 어셜션 구문을 사용하는것.  대표 어셜션구문 --->  Check
  종료하고 띄우는 시간이 크기 떄문에 가볍게 경고만 내리는 방법 --->  Ensure

*/



//회전축
/*
DirectX 기준 pitch,yaw,roll 
Unreal 기준 roll,pitch,yaw
*/