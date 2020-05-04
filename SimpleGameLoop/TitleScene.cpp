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
	//ˆê’èŽžŠÔŒo‰ß‚µ‚½‚çGameScene‚ÉˆÚs
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