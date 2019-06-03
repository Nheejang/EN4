// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "ArenaBattle.h"
#include "Blueprint/UserWidget.h"
#include "ABCharacterWidget.generated.h"

/**
 * 
 */

UCLASS()
class ARENABATTLE_API UABCharacterWidget : public UUserWidget
{
	GENERATED_BODY()

public:
	void BindCharacterStat(class UABCharacterStatComponent* NewCharacterStat);

protected:
	virtual void NativeConstruct() override;
	void UpdateHPWidget();
private:
	TWeakObjectPtr<class UABCharacterStatComponent> CurrentCharacterStat;

	UPROPERTY()
		class UProgressBar* HPProgressBar;
	
	
//약포인터를 사용해 컴포넌트를 참조하도록 할것임(연습을위해)
//우리가 사용하는 캐릭터 위젯은 캐릭터와 생사를 같이하기 때문에 사용할 필요가없지만,
//만약 UI와 캐릭터가 서로 다른 액터라면 약포인터하는 것이 바람직한 사용법이다.
	
};
