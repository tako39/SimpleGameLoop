#include "DxLib.h"
#include "SceneManager.hpp"

//メイン関数
int WINAPI WinMain(HINSTANCE, HINSTANCE, LPSTR, int) 
{
	//ウィンドウモード変更と初期化と裏画面設定
	SetWindowSize(600, 400);
	ChangeWindowMode(TRUE), DxLib_Init(), SetDrawScreen(DX_SCREEN_BACK);

	SceneManager *sceneManager = SceneManager::GetInstance();

	//画面更新 & メッセージ処理 & 画面消去
	while (ScreenFlip()      == 0 
		&& ProcessMessage()  == 0 
		&& ClearDrawScreen() == 0) 
	{
		sceneManager->Update();	//シーンの更新・描画
	}

	DxLib_End();	// DXライブラリ終了処理
	return 0;
}