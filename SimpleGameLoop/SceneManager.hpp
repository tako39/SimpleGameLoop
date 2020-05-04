#ifndef ___SceneManager_HPP___
#define ___SceneManager_HPP___

/**
 * @brief
 * シーンを管理するクラス
 */

#include "BaseScene.hpp"

class SceneManager 
{
private:
	SceneManager();
	SceneManager(const SceneManager &) {};
	SceneManager &operator=(const SceneManager &)
	{
		return *this;
	}

public:
	~SceneManager();
	static SceneManager* GetInstance()
	{
		static SceneManager instance;
		return &instance;
	}

public:
	void Update();

private:
	BaseScene *m_NowScene;
};

#endif // !___SceneManager_HPP___