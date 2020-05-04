#include "SceneManager.hpp"
#include "SceneList.hpp"

SceneManager::SceneManager() 
	: m_NowScene((BaseScene*)TitleScene::GetInstance())
{
	m_NowScene->Init();
	m_NowScene->m_NextScene = m_NowScene;
}

SceneManager::~SceneManager()
{
	
}

void SceneManager::Update()
{
	m_NowScene->Update();
	m_NowScene->Render();

	if (m_NowScene != m_NowScene->GetNextScene()) {
		m_NowScene->Final();
		m_NowScene = m_NowScene->m_NextScene;
		m_NowScene->m_NextScene = m_NowScene;
		m_NowScene->Init();
	}
}