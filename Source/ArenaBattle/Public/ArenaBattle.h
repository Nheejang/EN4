// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

//#include "CoreMinimal.h"
//�α� ��������Ǹ� ���� ���
#include<Winsock2.h>

#include"EngineMinimal.h"

UENUM(BlueprintType)
enum class ECharacterState : uint8
{
	PREINIT,
	LOADING,
	READY,
	DEAD
};
DECLARE_LOG_CATEGORY_EXTERN(ArenaBattle, Log, All);
#define ABLOG_CALLINFO (FString(__FUNCTION__)+TEXT("(")+FString::FromInt(__LINE__)+TEXT(")"))
#define ABLOG_S(Verbosity) UE_LOG(ArenaBattle,Verbosity,TEXT("%s"),*ABLOG_CALLINFO)
#define ABLOG(Verbosity,Format,...) UE_LOG(ArenaBattle,Verbosity,TEXT("%s %s"),*ABLOG_CALLINFO,*FString::Printf(Format,##__VA_ARGS__))


#define ABCHECK(Expr, ...){if(!(Expr)) {ABLOG(Error,TEXT("ASSERTION : %s"),TEXT("'"#Expr"'")); return __VA_ARGS__;}}


//
//class ARENABATTLE_API UUMyNetWorkManager 
//{
//private:
//	static UUMyNetWorkManager* MyInst;
//private:
//	WSADATA wsaData; // ��������� ������ �ϱ� ���� ������ ��� ����ü.
//	SOCKET sock; // ������ ��� ������ ����.
//	SOCKADDR_IN serverAddr;
//	WSABUF sendWsaBuf;
//	char sendBuffer[512];
//	WSABUF recvWsaBuf;
//	char recvBuffer[512];
//	char packetBuffer[MAX_PACKET_SIZE];
//	DWORD inPacketSize;
//	int savedPacketSize = 0;
//	int myClientID;
//	bool isConnected;
//	int otherClientID;
//
//
//
//
//public:
//	static UUMyNetWorkManager* GetInst()
//	{
//		if (!MyInst)
//			MyInst = new UUMyNetWorkManager;
//		return MyInst;
//	}
//
//private:
//	UUMyNetWorkManager();
//	~UUMyNetWorkManager();
//
//public:
//
//	bool Initialize();
//
//	void shutDownServer();
//
//	void processPacket(char* ptr);
//
//	void readPacket(SOCKET sock);
//
//public:
//	const SOCKET& getSocket();
//	char* getSendBuffer();
//	const char* getRecvBuffer();
//	const char* getPacketBuffer();
//	const DWORD getInPacketSize();
//	const int getSavedPacketSize();
//	const size_t getMyClientID();
//	const bool getIsConnected();
//	WSABUF& GetWSASendBuf();
//	WSABUF& GetWSARecvBuf();
//	bool test = false;
//
//
//
//
//
//
//
//
//	int ID = -1;
//	int WorldID = -1;
//	int ObjID = -1;
//};

//#define	KEYDOWN(key)	CInput::GetInst()->KeyDown(key)
//#define	KEYPUSH(key)	CInput::GetInst()->KeyPush(key)
//#define	KEYUP(key)		CInput::GetInst()->KeyUp(key)
//#define	MOUSE_POS		CInput::GetInst()->GetWorldMousePos()



