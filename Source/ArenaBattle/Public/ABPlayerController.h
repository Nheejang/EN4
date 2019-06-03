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
		위의 함수를 실행시키면 컨트롤러에서 특정입력에 대한 처리를 하였기 떄문에 해당 입력은 플레이어 컨트롤러에서 필터링되어 폰에 전달되지 않음.
	*/


protected:
	virtual void BeginPlay() override;
};
