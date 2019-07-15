#pragma once

#include "ArenaBattle.h"
#include "GameFramework/PlayerController.h"
#include"MyNetWorkManager.h"
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
	void AddGameScore() const;
//protected:
//	virtual void SetupInputComponent() override;
//	virtual void LeftRight(float NewAxisValue);
	/*
		���� �Լ��� �����Ű�� ��Ʈ�ѷ����� Ư���Է¿� ���� ó���� �Ͽ��� ������ �ش� �Է��� �÷��̾� ��Ʈ�ѷ����� ���͸��Ǿ� ���� ���޵��� ����.
	*/


protected:

	virtual void SetupInputComponent()override;

	virtual void BeginPlay() override;
	//virtual void SetupInputComponent() override;

	UPROPERTY(EditDefaultsOnly, BlueprintReadWrite, Category = UI)
		TSubclassOf<class UABHUDWidget> HUDWidgetClass;
	
	
private:
	void OnGamePause();
	UPROPERTY()
		class UABHUDWidget* HUDWidget;
	
	UPROPERTY()
		class AABPlayerState* ABPlayerState;



public:
	void ChangeInputMode(bool bGameMode = true);

	UPROPERTY()
		int test = 0;
	
	
	void ShowResultUI();
protected:
	UPROPERTY(EditDefaultsOnly, BlueprintReadWrite, Category = UI)
		TSubclassOf<class UABGamePlayWidget>MenuWidgetClass;

	UPROPERTY(EditDefaultsOnly, BlueprintReadWrite, Category = UI)
		TSubclassOf<class UABGamePlayResultWidget> ResultWidgetClass;

private:
	UPROPERTY()
		class UABGamePlayWidget* MenuWidget;
	FInputModeGameOnly GameInputMode;
	FInputModeUIOnly UIInputMode;

	UPROPERTY()
		class UABGamePlayResultWidget* ResultWidget;



private:
	MyNetWorkManager* MyNetWork;
public:
	MyNetWorkManager* GetMyNetWorkManager();
};
