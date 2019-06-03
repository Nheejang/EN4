// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "ArenaBattle.h"
#include"Engine/DataTable.h"
#include "Engine/GameInstance.h"
#include"Engine/StreamableManager.h"
#include "ABGameInstance.generated.h"

/**
 * 
 */

USTRUCT(BlueprintType)
struct FABCharacterData : public FTableRowBase
{
	GENERATED_BODY()


		//이름은 엔진에서 자동으로 키값으로 사용하기때문에 제외
public:
	FABCharacterData() : Level(1),MaxHP(100.f),Attack(10.f),DropExp(10),NextExp(30){}


	//포인터 변수사용할떄는 앞에 UPROPERTY 사용함(사용이끝났을때 자동으로 소멸시켜줌)
	//일반 변수 앞에 UPROPERTY는 변수를 0으로 초기화 해줌
	//언리얼 에디터에서 속성의 데이터를 변경하기 위해서는 EditAnywhere을 사용해야함
	//VisibleAnywhere은 언리얼에디터에서 보여주기 위한 용도임
	//객체유형에 VisibleAnywhere을 사용하면 다른 객체로 변경불가 -->다만 편하게 사용하기위해 객체에 속한 속성 변경가능
	//컴포넌트와 같은 형태일때 VisibleAnywhere을 사용해도 속성변경 불가 
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Data")
		int32 Level;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Data")
		float MaxHP;
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Data")
		float Attack;
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Data")
		int32 DropExp;
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Data")
		int32 NextExp;



};

UCLASS()
class ARENABATTLE_API UABGameInstance : public UGameInstance
{
	GENERATED_BODY()


public:
	UABGameInstance();

	virtual void Init() override;
	FABCharacterData* GetABCharacterData(int32 Level);


	/*
	StreamableManager는 엔진모듈 UAssetManager라는 오브젝트에 이미 선언되어있음
	Engine/AssetManager.h 헤더 파일을 포함한 후 UAssetManager::GetStreamableManager() 함수를 대신사용해도 무방함.
	*/
	FStreamableManager StreamableManager;

private:
	UPROPERTY()
		class UDataTable* ABCharacterTable;
	
	
	
};
