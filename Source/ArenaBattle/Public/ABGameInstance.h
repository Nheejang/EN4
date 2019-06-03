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


		//�̸��� �������� �ڵ����� Ű������ ����ϱ⶧���� ����
public:
	FABCharacterData() : Level(1),MaxHP(100.f),Attack(10.f),DropExp(10),NextExp(30){}


	//������ ��������ҋ��� �տ� UPROPERTY �����(����̳������� �ڵ����� �Ҹ������)
	//�Ϲ� ���� �տ� UPROPERTY�� ������ 0���� �ʱ�ȭ ����
	//�𸮾� �����Ϳ��� �Ӽ��� �����͸� �����ϱ� ���ؼ��� EditAnywhere�� ����ؾ���
	//VisibleAnywhere�� �𸮾󿡵��Ϳ��� �����ֱ� ���� �뵵��
	//��ü������ VisibleAnywhere�� ����ϸ� �ٸ� ��ü�� ����Ұ� -->�ٸ� ���ϰ� ����ϱ����� ��ü�� ���� �Ӽ� ���氡��
	//������Ʈ�� ���� �����϶� VisibleAnywhere�� ����ص� �Ӽ����� �Ұ� 
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
	StreamableManager�� ������� UAssetManager��� ������Ʈ�� �̹� ����Ǿ�����
	Engine/AssetManager.h ��� ������ ������ �� UAssetManager::GetStreamableManager() �Լ��� ��Ż���ص� ������.
	*/
	FStreamableManager StreamableManager;

private:
	UPROPERTY()
		class UDataTable* ABCharacterTable;
	
	
	
};
