#include"mainTank.h"

void mainTank::setDir(dir _dir)
{
	myDir = _dir;
}

void mainTank::drawTankBody(int style)
{
	fillrectangle(m_x - 4, m_y - 4, m_x + 4, m_y + 4);

	if (style == 1)
	{
		fillrectangle(m_x - 8, m_y - 6, m_x - 6, m_y + 6);
		fillrectangle(m_x + 6, m_y - 6, m_x + 8, m_y + 6);
	}
	else
	{
		fillrectangle(m_x - 6, m_y - 8, m_x + 6, m_y - 6);
		fillrectangle(m_x - 6, m_y + 6, m_x + 6, m_y + 8);
	}
}

void mainTank::display()
{
	COLORREF colorSave = getfillcolor();

	setfillcolor(myColor);

	switch(myDir)
	{
	case UP:
		drawTankBody(1);
		line(m_x, m_y, m_x, m_y - 10);
		break;
	case DOWN:
		drawTankBody(1);
		line(m_x, m_y, m_x, m_y + 10);
		break;
	case LEFT:
		drawTankBody(0);
		line(m_x, m_y, m_x - 10, m_y);
		break;
	case RIGHT:
		drawTankBody(0);
		line(m_x, m_y, m_x + 10, m_y);
		break;
	default:
		break;
	}

	setfillcolor(colorSave);
}

void mainTank::move()
{
	switch (myDir)
	{
	case UP:
		m_y -= myStep;
		if (m_y < 0)
			m_y = Graphic::getScreenHeight() - 1;
		break;
	case DOWN:
		m_y += myStep;
		if (m_y > Graphic::getScreenHeight())
			m_y = 1;
		break;
	case LEFT:
		m_x -= myStep;
		if (m_x < 0)
			m_x = Graphic::getScreenWidth() - 1;
		break;
	case RIGHT:
		m_x += myStep;
		if (m_x > Graphic::getScreenWidth())
			m_x = 1;
		break;
	default:
		break;
	}
}