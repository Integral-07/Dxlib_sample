#pragma once
#include"DxLib.h"

//�}�N����`
#define GameWidth  1280
#define GameHeight  720
#define GameColor    32
#define GameTitle "Mathy Adventure"

#define GameDebug TRUE

#define GameSceneCount 3 //�Q�[���V�[���̌�
#define GameSceneNameMax 20 //�Q�[���V�[�����̍ő啶����

enum GameScene {
	TitleScene, PlayScene, ResultScene
};

extern enum GameScene NowGameScene; //���݂̃Q�[���V�[��

/*
//	�O���v���g�^�C�v�錾
extern void TitleInit();
extern void TitleCtrl();
extern void TitleProc();
extern void TitleDraw();

extern void PlayInit();
extern void PlayCtrl();
extern void PlayProc();
extern void PlayDraw();

extern void ResultInit();
extern void ResultCtrl();
extern void ResultProc();
extern void ResultDraw();
*/