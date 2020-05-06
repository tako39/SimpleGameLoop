#ifndef ___GameScene_HPP___
#define ___GameScene_HPP___

/**
 * @brief
 * ゲームシーン(Titleシーンの後に表示)
 */

#include "BaseScene.hpp"

class GameScene : public BaseScene {
private:
	GameScene() {};
	GameScene(const GameScene&)	= default;
	GameScene& operator=(const GameScene&) = default;
	
public:
	~GameScene()  override {};
	static GameScene* GetInstance()
	{
		static GameScene instance;
		return &instance;
	}

public:
	void Init  () override;
	void Update() override;
	void Render() override;
	void Final () override;
};

#endif // !___GameScene_HPP___