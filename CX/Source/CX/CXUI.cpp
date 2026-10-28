
#include "CXUI.h"
#include "UI/ChatUI.h"

void UCXUI::OnNewChatMessage(const FString& InSender, const FString& InMessage){

    UI_Chat->OnNewChatMessage(InSender, InMessage);
}

void UCXUI::UpdateSpeed(float NewSpeed){

    // format the speed to KPH or MPH
    float FormattedSpeed = FMath::Abs(NewSpeed) * (bIsMPH ? 0.022f : 0.036f);

    // call the Blueprint handler
    OnSpeedUpdate(FormattedSpeed);
}

void UCXUI::UpdateGear(int32 NewGear){

    // call the Blueprint handler
    OnGearUpdate(NewGear);
}

void UCXUI::UpdateRemainingTime(int32 NewRemainingTime){

    const int32 Minutes = NewRemainingTime / 60;
    const int32 Seconds = NewRemainingTime % 60;

    const FString TimeString = FString::Printf(TEXT("%02d:%02d"), Minutes, Seconds);

    OnRemainingTimeUpdate(FText::FromString(TimeString));
}

void UCXUI::UpdateGameState(const FString& NewGameState){
    OnGameStateUpdate(FText::FromString(NewGameState));
}

void UCXUI::ShowGameResult(bool bIsWinner)
{
    OnGameResult(bIsWinner);
}