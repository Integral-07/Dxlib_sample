#pragma once
#include"DxLib.h"

//マクロ定義
#define GameWidth  1280
#define GameHeight  720
#define GameColor    32
#define GameTitle "Mathy Adventure"

#define GameDebug TRUE

#define GameSceneCount 3 //ゲームシーンの個数
#define GameSceneNameMax 20 //ゲームシーン名の最大文字数

enum GameScene {
	TitleScene, PlayScene, ResultScene
};

extern enum GameScene NowGameScene; //現在のゲームシーン

/*
//	外部プロトタイプ宣言
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