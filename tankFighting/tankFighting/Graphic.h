#ifndef _GRAPHIC_H_
#define _GRAPHIC_H_

#include<graphics.h>
#include"rect.h"

#define	SCREEN_WIDTH	1024
#define SCREEN_HEIGTH	768

#define BATTLE_GROUND_X1 5
#define BATTLE_GROUND_Y1 5
#define BATTLE_GROUND_X2 800
#define BATTLE_GROUND_Y2 (SCEEN_HEIGTH - BATTLE_GROUND_Y1)

class Graphic
{
public:
	static void Create();
	static void Destroy();

	static void drawBattleGround();

	static int getScreenWidth();
	static int getScreenHeight();

	static rect getBattleGround();
private:
	static rect m_rectScreen;
	static rect m_rectBattleGround;
};
#endif // !_GRAPHIC_H_

