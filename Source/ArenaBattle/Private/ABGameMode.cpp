// Fill out your copyright notice in the Description page of Project Settings.

#include "ABGameMode.h"
//#include"ABPawn.h"
#include"ABCharacter.h"
#include"ABPlayerController.h"
#include"ABPLayerState.h"
#include"ABGameState.h"


//#include"UMyNetWorkManager.h"
AABGameMode::AABGameMode()
{
	//DefaultPawnClass = AABPawn::StaticClass();
	DefaultPawnClass = AABCharacter::StaticClass();
	PlayerControllerClass = AABPlayerController::StaticClass();
	PlayerStateClass = AABPlayerState::StaticClass();
	GameStateClass = AABGameState::StaticClass();

	ScoreToClear = 2;

	
//	mySocket->Run();


	//UUMyNetWorkManager::GetInst()->Initialize();

	//cs_packet_login* my_packet = reinterpret_cast<cs_packet_login*>(UUMyNetWorkManager::GetInst()->getSendBuffer());
	//char temp[30] = "a";
	//my_packet->size = sizeof(cs_packet_login);
	//my_packet->type = PacketType::CS_Login;
	//strcpy(my_packet->strId, "1stPlayer");
	//strcpy(my_packet->strPassward, "1323232");
	//UUMyNetWorkManager::GetInst()->GetWSASendBuf().len = sizeof(cs_packet_login);
	//DWORD iobyte;
	//WSASend(UUMyNetWorkManager::GetInst()->getSocket(), &(UUMyNetWorkManager::GetInst()->GetWSASendBuf()), 1, &iobyte, 0, NULL, NULL);


	//UUMyNetWorkManager::GetInst()->GetWSASendBuf().buf = UUMyNetWorkManager::GetInst()->getSendBuffer();
	//UUMyNetWorkManager::GetInst()->GetWSASendBuf().len = 512;
	//UUMyNetWorkManager::GetInst()->GetWSARecvBuf().buf = (CHAR*)UUMyNetWorkManager::GetInst()->getRecvBuffer();
	//UUMyNetWorkManager::GetInst()->GetWSARecvBuf().len = 512;
	//iobyte = 0; DWORD ioflag = 0;

	//int ret = WSARecv(UUMyNetWorkManager::GetInst()->getSocket(), &UUMyNetWorkManager::GetInst()->GetWSARecvBuf(), 1, &iobyte, &ioflag, NULL, NULL);
	//
	//if (ret)
	//{
	//	int err_code = WSAGetLastError();
	//	// 에러처리.
	//}
	//BYTE* t = UUMyNetWorkManager::GetInst()->getRecvBuffer();

	//int ID = UUMyNetWorkManager::GetInst()->ID;
	//int WorldID = UUMyNetWorkManager::GetInst()->WorldID;
	//int ObjID = UUMyNetWorkManager::GetInst()->ObjID;

//	ABLOG(Warning, TEXT("ID : %d WORLD : %d OBJ : %d"), ID, WorldID, ObjID);

}

void AABGameMode::PostInitializeComponents()
{
	Super::PostInitializeComponents();
	ABGameState = Cast<AABGameState>(GameState);
}


void AABGameMode::PostLogin(APlayerController* NewPlayer)
{
	ABLOG(Warning, TEXT("PostLogin Begin"));
	Super::PostLogin(NewPlayer);
	ABLOG(Warning, TEXT("PostLogin End"));

	auto ABPlayerState = Cast<AABPlayerState>(NewPlayer->PlayerState);
	ABCHECK(nullptr != ABPlayerState);
	ABPlayerState->InitPlayerData();
}


void AABGameMode::AddScore(AABPlayerController* ScoredPlayer)
{
	for (FConstPlayerControllerIterator It = GetWorld()->GetPlayerControllerIterator(); It; ++It)
	{
		const auto ABPlayerController = Cast<AABPlayerController>(It->Get());
		if ((nullptr != ABPlayerController) && (ScoredPlayer == ABPlayerController))
		{
			ABPlayerController->AddGameScore();
			break;
		}
	}

	ABGameState->AddGameScore();

	if (GetScore() >= ScoreToClear)
	{
		ABGameState->SetGameCleared();

		for (FConstPawnIterator It = GetWorld()->GetPawnIterator(); It; ++It)
		{
			(*It)->TurnOff();
		}

		for (FConstPlayerControllerIterator It = GetWorld()->GetPlayerControllerIterator(); It; ++It)
		{
			const auto ABPlayerController = Cast<AABPlayerController>(It->Get());
			if (nullptr != ABPlayerController)
			{
				ABPlayerController->ShowResultUI();
			}
		}

	}
}

int32 AABGameMode::GetScore()const
{
	return ABGameState->GetTotalGameScore();
}