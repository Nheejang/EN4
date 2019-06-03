#pragma once

#include "ArenaBattle.h"
#include "GameFramework/PlayerController.h"
#include "ABPlayerController.generated.h"

/**
 * 
 */
UCLASS()
class ARENABATTLE_API AABPlayerController : public APlayerController
{
	GENERATED_BODY()
	
	
public:
	virtual void PostInitializeComponents()	override;
	virtual void Possess(APawn* aPawn)	override;
	

//protected:
//	virtual void SetupInputComponent() override;
//	virtual void LeftRight(float NewAxisValue);
	/*
		���� �Լ��� �����Ű�� ��Ʈ�ѷ����� Ư���Է¿� ���� ó���� �Ͽ��� ������ �ش� �Է��� �÷��̾� ��Ʈ�ѷ����� ���͸��Ǿ� ���� ���޵��� ����.
	*/


protected:
	virtual void BeginPlay() override;
};
