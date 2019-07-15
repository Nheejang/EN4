// Fill out your copyright notice in the Description page of Project Settings.

#include "ABPlayerController.h"
#include"ABHUDWidget.h"
#include"ABPlayerState.h"
#include"ABCharacter.h"
#include"ABGamePlayWidget.h"
#include"ABGamePlayResultWidget.h"
#include"ABGameState.h"
#include"Protocal.h"

AABPlayerController::AABPlayerController()
{
	static ConstructorHelpers::FClassFinder<UABHUDWidget> UI_HUD_C(TEXT("/Game/Book/UI/UI_HUD.UI_HUD.UI_HUD_C"));
	if (UI_HUD_C.Succeeded())
	{
		HUDWidgetClass = UI_HUD_C.Class;
	}


	static ConstructorHelpers::FClassFinder<UABGamePlayWidget> UI_MENU_C(TEXT("/Game/Book/UI/UI_Menu.UI_Menu.UI_Menu_C"));
	if (UI_MENU_C.Succeeded())
	{
		MenuWidgetClass = UI_MENU_C.Class;
	}

	static ConstructorHelpers::FClassFinder<UABGamePlayResultWidget>UI_RESULT_C(TEXT("/Game/Book/UI/UI_Result.UI_Result.UI_RESULT_C"));
	if (UI_RESULT_C.Succeeded())
	{
		ResultWidgetClass = UI_RESULT_C.Class;
	}
	//ABLOG(Warning, TEXT("testsetsetsetsefsadafetaefsdafrdfadfaer"));
	//AUTestServer t;
	//t.initialize();
//	ABLOG(Warning, TEXT("testsetsetsetsefsadafetaefsdafrdfadfaer"));


	//MyNetWork = MyNetWorkManager::GetSingleton();
	//MyNetWork->InitSocket();
	//MyNetWork->Connect();



}

void AABPlayerController::PostInitializeComponents()
{
	Super::PostInitializeComponents();
	ABLOG_S(Warning);
}

void AABPlayerController::Possess(APawn* aPawn)
{
	ABLOG_S(Warning);
	Super::Possess(aPawn);
}
//
//void AABPlayerController::SetupInputComponent()
//{
//	Super::SetupInputComponent();
//	InputComponent->BindAxis(TEXT("LeftRight"), this, &AABPlayerController::LeftRight);
//}
//
//void AABPlayerController::LeftRight(float NewAxisValue)
//{
//	//Do Nothing
//}



void AABPlayerController::BeginPlay()
{
	Super::BeginPlay();

	ChangeInputMode(true);

	//FInputModeGameOnly InputMode;
	//SetInputMode(InputMode);


	HUDWidget = CreateWidget<UABHUDWidget>(this, HUDWidgetClass);
	ABCHECK(nullptr != HUDWidget);
	HUDWidget->AddToViewport(1);

	ResultWidget = CreateWidget<UABGamePlayResultWidget>(this, ResultWidgetClass);
	ABCHECK(nullptr != ResultWidget);

	ABPlayerState = Cast<AABPlayerState>(PlayerState);
	//auto ABPlayerState = Cast<AABPlayerState>(PlayerState);
	ABCHECK(nullptr != ABPlayerState);
	HUDWidget->BindPlayerState(ABPlayerState);
	ABPlayerState->OnPlayerStateChanged.Broadcast();

	MyNetWork = MyNetWorkManager::GetSingleton();
	MyNetWork->SetPlayerController(this);
	MyNetWork->InitSocket();
	MyNetWork->Connect();


	MyNetWork->StartListen();
	MyNetWork->SendTest();

	ABLOG(Warning, TEXT("Test test %d"), test);



}

UABHUDWidget * AABPlayerController::GetHUDWidget() const
{
	return HUDWidget;
}

void AABPlayerController::NPCKill(AABCharacter* KilledNPC)const
{
	ABPlayerState->AddExp(KilledNPC->GetExp());
}

void AABPlayerController::AddGameScore()const
{
	ABPlayerState->AddGameScore();
}
void AABPlayerController::SetupInputComponent()
{
	Super::SetupInputComponent();
	InputComponent->BindAction(TEXT("GamePause"), EInputEvent::IE_Pressed, this, &AABPlayerController::OnGamePause);
}

void AABPlayerController::ChangeInputMode(bool bGameMode)
{
	if (bGameMode)
	{
		SetInputMode(GameInputMode);
		bShowMouseCursor = false;
	}
	else
	{
		SetInputMode(UIInputMode);
		bShowMouseCursor = true;
	}
}

void AABPlayerController::OnGamePause()
{
	MenuWidget = CreateWidget<UABGamePlayWidget>(this, MenuWidgetClass);
	ABCHECK(nullptr != MenuWidget);

	MenuWidget->AddToViewport(3);

	SetPause(true);
	ChangeInputMode(false);

}

void AABPlayerController::ShowResultUI()
{
	auto ABGameState = Cast<AABGameState>(UGameplayStatics::GetGameState(this));
	ABCHECK(nullptr != ABGameState);
	ResultWidget->BindGameState(ABGameState);

	ResultWidget->AddToViewport();
	ChangeInputMode(false);
}

MyNetWorkManager* AABPlayerController::GetMyNetWorkManager()
{
	return MyNetWork;
}
