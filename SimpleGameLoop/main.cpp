#include "DxLib.h"
#include "SceneManager.hpp"

//���C���֐�
int WINAPI WinMain(HINSTANCE, HINSTANCE, LPSTR, int) 
{
	//�E�B���h�E���[�h�ύX�Ə������Ɨ���ʐݒ�
	SetWindowSize(600, 400);
	ChangeWindowMode(TRUE), DxLib_Init(), SetDrawScreen(DX_SCREEN_BACK);

	SceneManager *sceneManager = SceneManager::GetInstance();

	//��ʍX�V & ���b�Z�[�W���� & ��ʏ���
	while (ScreenFlip()      == 0 
		&& ProcessMessage()  == 0 
		&& ClearDrawScreen() == 0) 
	{
		sceneManager->Update();	//�V�[���̍X�V�E�`��
	}

	DxLib_End();	// DX���C�u�����I������
	return 0;
}