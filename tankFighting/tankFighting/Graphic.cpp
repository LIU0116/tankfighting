#include"Graphic.h"

rect Graphic::m_rectScreen;
rect Graphic::m_rectBattleGround;

void Graphic::Create()
{
	m_rectScreen.set(0, 0, SCREEN_WIDTH, SCREEN_HEIGTH);
	initgraph(SCREEN_WIDTH,SCREEN_HEIGTH);
	setbkcolor(DARKGRAY);
}

void Graphic::Destroy()
{
	closegraph();
}

void Graphic::drawBattleGround()
{

	rectangle(m_rectBattleGround.getStartPoint().getX(), m_rectBattleGround.getStartPoint().getY(),
		m_rectBattleGround.getEndPoint().getX(), m_rectBattleGround.getEndPoint().getY());
}

int Graphic::getScreenWidth()
{
	return SCREEN_WIDTH;
}

int Graphic::getScreenHeight()
{
	return SCREEN_HEIGTH;
}

rect Graphic::getBattleGround()
{
	return m_rectBattleGround;
}
