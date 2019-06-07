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
	AABPlayerController();

	virtual void PostInitializeComponents()	override;
	virtual void Possess(APawn* aPawn)	override;
	
	class UABHUDWidget* GetHUDWidget() const;

	void NPCKill(class AABCharacter* KilledNPC)const;

//protected:
//	virtual void SetupInputComponent() override;
//	virtual void LeftRight(float NewAxisValue);
	/*
		���� �Լ��� �����Ű�� ��Ʈ�ѷ����� Ư���Է¿� ���� ó���� �Ͽ��� ������ �ش� �Է��� �÷��̾� ��Ʈ�ѷ����� ���͸��Ǿ� ���� ���޵��� ����.
	*/


protected:
	virtual void BeginPlay() override;
	//virtual void SetupInputComponent() override;

	UPROPERTY(EditDefaultsOnly, BlueprintReadWrite, Category = UI)
		TSubclassOf<class UABHUDWidget> HUDWidgetClass;
	
	
private:
	UPROPERTY()
		class UABHUDWidget* HUDWidget;
	
	UPROPERTY()
		class AABPlayerState* ABPlayerState;

};
