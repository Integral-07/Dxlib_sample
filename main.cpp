#include"DxLib.h"


int WINAPI WinMain(HINSTANCE hInstance, HINSTANCE hPrevInstance, LPSTR lpCmdLine, int nCmdShow) {

	SetOutApplicationLogValidFlag(FALSE);             //Log.txt���o�͂��Ȃ�
	ChangeWindowMode(TRUE);                           // �E�B���h�E���[�h��ύX
	SetGraphMode(GameWidth, GameHeight, GameColor);
	SetWindowSize(GameWidth, GameHeight);
	SetMainWindowText(GameTitle);
	SetBackgroundColor(0, 0, 0);
	SetWaitVSyncFlag(TRUE);
	SetAlwaysRunFlag(TRUE);

	//SetWindowIconID();�@�A�C�R����������΂ǂ���

	if (DxLib_Init() == -1) {
		return -1;
	}
	
	SetDrawScreen(DX_SCREEN_BACK); //�_�u���o�b�t�@�����O

	while (TRUE){
		
		if (ProcessMessage() != 0) {
			//�\���h�~
			break;
		}

		if (ClearDrawScreen() != 0) {
			break;
		}

		{
			//process
		}

		ScreenFlip(); //����ʂɕ`��
	}


	DxLib_End(); //DxLib�I��

	return 0;
}