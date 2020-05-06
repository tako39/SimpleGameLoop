#ifndef ___TitleScene_HPP___
#define ___TitleScene_HPP___

/**
 * @brief
 * �^�C�g���V�[��(�ŏ��ɕ\��)
 */

#include "BaseScene.hpp"

class TitleScene : public BaseScene {
private:
	TitleScene();
	TitleScene(const TitleScene&) = default;
	TitleScene& operator=(const TitleScene&) = default;

public:
	~TitleScene() override {};
	static TitleScene* GetInstance()
	{
		static TitleScene instance;
		return &instance;
	}

public:
	void Init  () override;
	void Update() override;
	void Render() override;
	void Final () override;	

private:
	int startTime;		//�V�[���̊J�n����
	int endTime;		//�V�[���̏I������
};

#endif // !___TitleScene_HPP___