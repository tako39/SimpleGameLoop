#ifndef ___GameScene_HPP___
#define ___GameScene_HPP___

/**
 * @brief
 * �Q�[���V�[��(Title�V�[���̌�ɕ\��)
 */

#include "BaseScene.hpp"

class GameScene : public BaseScene {
private:
	GameScene()  {};
	GameScene(const GameScene &) {};
	GameScene &operator=(const GameScene &)
	{
		return *this;
	}
	
public:
	~GameScene() {};
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