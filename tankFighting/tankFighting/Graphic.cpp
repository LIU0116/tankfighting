#include"Graphic.h"

int Graphic::m_screen_width = SCREEN_WIDTH;
int Graphic::m_screen_height = SCREEN_HEIGTH;


void Graphic::Create()
{
	initgraph(m_screen_width, m_screen_height);
}

void Graphic::Destroy()
{
	closegraph();
}

int Graphic::getScreenWidth()
{
	return m_screen_width;
}

int Graphic::getScreenHeight()
{
	return m_screen_height;
}