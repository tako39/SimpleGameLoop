#include "TitleScene.hpp"

#include "SceneList.hpp"
#include "DxLib.h"

void TitleScene::Init()
{
	printfDx("TitleScene : Start\n");

	startTime = GetNowCount();
	endTime = 3000;
}

void TitleScene::Update()
{
	//一定時間経過したらGameSceneに移行
	if (GetNowCount() - startTime >= endTime) {
		this->m_NextScene = GameScene::GetInstance();
	}
}

void TitleScene::Render()
{

}

void TitleScene::Final()
{
	printfDx("TitleScene : End\n");
}