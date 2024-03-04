#include"DxLib.h"


int WINAPI WinMain(HINSTANCE hInstance, HINSTANCE hPrevInstance, LPSTR lpCmdLine, int nCmdShow) {

	SetOutApplicationLogValidFlag(FALSE);             //Log.txtを出力しない
	ChangeWindowMode(TRUE);                           // ウィンドウモードを変更
	SetGraphMode(GameWidth, GameHeight, GameColor);
	SetWindowSize(GameWidth, GameHeight);
	SetMainWindowText(GameTitle);
	SetBackgroundColor(0, 0, 0);
	SetWaitVSyncFlag(TRUE);
	SetAlwaysRunFlag(TRUE);

	//SetWindowIconID();　アイコンつけたければどうぞ

	if (DxLib_Init() == -1) {
		return -1;
	}
	
	SetDrawScreen(DX_SCREEN_BACK); //ダブルバッファリング

	while (TRUE){
		
		if (ProcessMessage() != 0) {
			//暴走防止
			break;
		}

		if (ClearDrawScreen() != 0) {
			break;
		}

		{
			//process
		}

		ScreenFlip(); //裏画面に描画
	}


	DxLib_End(); //DxLib終了

	return 0;
}