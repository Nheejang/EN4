// Fill out your copyright notice in the Description page of Project Settings.

#include "ArenaBattle.h"
#include "Modules/ModuleManager.h"
//#include"Protocal.h"
DEFINE_LOG_CATEGORY(ArenaBattle);
IMPLEMENT_PRIMARY_GAME_MODULE( FDefaultGameModuleImpl, ArenaBattle, "ArenaBattle" );

//
//UUMyNetWorkManager* UUMyNetWorkManager::MyInst= NULL;
//UUMyNetWorkManager::UUMyNetWorkManager() :
//	sock{ 0 },
//	inPacketSize{ 0 },
//	savedPacketSize{ 0 },
//	myClientID{ -1 },
//	isConnected{ false }
//{
//
//}
//
//
//UUMyNetWorkManager::~UUMyNetWorkManager()
//{
//}
//
//bool UUMyNetWorkManager::Initialize()
//{
//	WSAStartup(MAKEWORD(2, 2), &wsaData);
//	sock = WSASocket(AF_INET, SOCK_STREAM, IPPROTO_TCP, NULL, 0, 0);
//	if (sock == INVALID_SOCKET)
//	{
//		//에러처리.
//	}
//
//	ZeroMemory(&serverAddr, sizeof(serverAddr));
//	serverAddr.sin_family = AF_INET;
//	serverAddr.sin_addr.s_addr = inet_addr("127.0.0.1");
//	//serverAddr.sin_addr.s_addr = inet_addr("192.168.22.207");
//	serverAddr.sin_port = htons(8800);
//	int retval = WSAConnect(sock, (SOCKADDR*)&serverAddr, sizeof(serverAddr), NULL, NULL, NULL, NULL);
//	if (retval == SOCKET_ERROR)
//	{
//		ABLOG(Warning, TEXT("Connect Fail"));
//		//MessageBox(NULL, L"서버와의 연결에 실패하였습니다.", L"서버에러", MB_OK);
//
//	}
//	ABLOG(Warning, TEXT("Connect Success"));
//	//WSAAsyncSelect(sock, GET_SINGLE(CCore)->GetHandle(), WM_SOCKET, FD_CLOSE | FD_READ);
//
//
//	sendWsaBuf.buf = sendBuffer;
//	sendWsaBuf.len = 512;
//	recvWsaBuf.buf = recvBuffer;
//	recvWsaBuf.len = 512;
//	myClientID = -1;
//	//StructInit();
//
//	//MyGameStart = false;
//
//	return true;
//}
//
//void UUMyNetWorkManager::shutDownServer()
//{
//	closesocket(sock);
//	WSACleanup();
//}
//
//void UUMyNetWorkManager::processPacket(char * ptr)
//{
//	static bool first_time = true;
//	switch (ptr[1])
//	{
//	case 2:
//	{
//			sc_packet_login *my_packet = reinterpret_cast<sc_packet_login *>(ptr);
//		int id = my_packet->client_id;
//		int worldID = my_packet->world_id;
//		int ObjID = my_packet->object_id;
//		
//		break;
//	}
//	default:
//		printf("Unknown PACKET type [%d]\n", ptr[1]);
//		break;
//	}
//}
//
//void UUMyNetWorkManager::readPacket(SOCKET sock)
//{
//	DWORD iobyte, ioflag = 0;
//
//	int ret = WSARecv(sock, &UUMyNetWorkManager::GetInst()->recvWsaBuf, 1, &iobyte, &ioflag, NULL, NULL);
//
//	if (ret)
//	{
//		int err_code = WSAGetLastError();
//		// 에러처리.
//	}
//
//	BYTE* ptr = reinterpret_cast<BYTE*>(recvBuffer);
//
//	while (0 != iobyte) {//패킷 재조립
//		if (0 == inPacketSize) inPacketSize = ptr[0];
//		if (iobyte + savedPacketSize >= inPacketSize) {
//			memcpy(packetBuffer + savedPacketSize, ptr, inPacketSize - savedPacketSize);
//			processPacket(packetBuffer);
//			ptr += inPacketSize - savedPacketSize;
//			iobyte -= inPacketSize - savedPacketSize;
//			inPacketSize = 0;
//			savedPacketSize = 0;
//		}
//		else {
//			memcpy(packetBuffer + savedPacketSize, ptr, iobyte);
//			savedPacketSize += iobyte;
//			iobyte = 0;
//		}
//	}
//}
//
//
//const SOCKET & UUMyNetWorkManager::getSocket() { return sock; }
//char * UUMyNetWorkManager::getSendBuffer() { return sendBuffer; }
//const char * UUMyNetWorkManager::getRecvBuffer() { return recvBuffer; }
//const char * UUMyNetWorkManager::getPacketBuffer() { return packetBuffer; }
//const DWORD UUMyNetWorkManager::getInPacketSize() { return inPacketSize; }
//const int UUMyNetWorkManager::getSavedPacketSize() { return savedPacketSize; }
//const size_t UUMyNetWorkManager::getMyClientID() { return myClientID; }
//const bool UUMyNetWorkManager::getIsConnected() { return isConnected; }
//WSABUF& UUMyNetWorkManager::GetWSASendBuf() { return sendWsaBuf; }
//WSABUF& UUMyNetWorkManager::GetWSARecvBuf() { return recvWsaBuf; }