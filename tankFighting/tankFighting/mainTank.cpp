#include"mainTank.h"

void mainTank::setDir(dir _dir)
{
	myDir = _dir;
}

void mainTank::drawTankBody()
{
	fillrectangle(m_pos.getX() - 6, m_pos.getY() - 6, m_pos.getX() + 6, m_pos.getY() + 6);

	switch (myDir)
	{
	case UP:
	case DOWN:
		fillrectangle
		(m_rectSphere.getStartPoint().getX(), m_rectSphere.getStartPoint().getY(),	m_rectSphere.getStartPoint().getX() + 4, m_rectSphere.getEndPoint().getY());

		fillrectangle
		(m_rectSphere.getEndPoint().getX() - 4, m_rectSphere.getStartPoint().getY(),
		  m_rectSphere.getEndPoint().getX(), m_rectSphere.getEndPoint().getY());
		break;
	case LEFT:
	case RIGHT:
		fillrectangle(m_rectSphere.getStartPoint().getX(), m_rectSphere.getStartPoint().getY(),
			m_rectSphere.getEndPoint().getX(), m_rectSphere.getStartPoint().getY() + 4);

		fillrectangle(m_rectSphere.getStartPoint().getX(), m_rectSphere.getEndPoint().getY() - 4,
			m_rectSphere.getEndPoint().getX(), m_rectSphere.getEndPoint().getY());
		break;
	default:
		break;
	}
}

void mainTank::display()
{
	COLORREF fill_color_save = getfillcolor();
	COLORREF color_save = getcolor();

	setfillcolor(myColor);
	setcolor(myColor);

	drawTankBody();

	switch (myDir)
	{
	case UP:
		line(m_pos.getX(), m_pos.getY(), m_pos.getX(), m_pos.getY() - 15);
		break;
	case DOWN:
		line(m_pos.getX(), m_pos.getY(), m_pos.getX(), m_pos.getY() + 15);
		break;
	case LEFT:
		line(m_pos.getX(), m_pos.getY(), m_pos.getX() - 15, m_pos.getY());
		break;
	case RIGHT:
		line(m_pos.getX(), m_pos.getY(), m_pos.getX() + 15, m_pos.getY());
		break;
	default:
		break;
	}
	setcolor(color_save);
	setfillcolor(fill_color_save);
}

void mainTank::move()
{
	switch (myDir)
	{
	case UP:
		m_pos.setY(m_pos.getY() - myStep);
		if (m_pos.getY() < Graphic::getBattleGround().getStartPoint().getY())
			m_pos.setY(Graphic::getBattleGround().getEndPoint().getY() - 1);
		break;
	case DOWN:
		m_pos.setY(m_pos.getY() + myStep);
		if (m_pos.getY() > Graphic::getBattleGround().getEndPoint().getY())
			m_pos.setY(Graphic::getBattleGround().getStartPoint().getY() + 1);
		break;
	case LEFT:
		m_pos.setX(m_pos.getX() - myStep);
		if (m_pos.getX() < Graphic::getBattleGround().getStartPoint().getX())
			m_pos.setX(Graphic::getBattleGround().getEndPoint().getX() - 1);
		break;
	case RIGHT:
		m_pos.setX(m_pos.getX() + myStep);
		if (m_pos.getX() > Graphic::getBattleGround().getEndPoint().getX())
			m_pos.setX(Graphic::getBattleGround().getStartPoint().getX() + 1);
		break;
	default:
		break;

	}
}

void mainTank::calculateSphere()
{
	switch (myDir)
	{
	case UP:
	case DOWN:
		m_rectSphere.set(m_pos.getX() - 13, m_pos.getY() - 10, m_pos.getX() + 13, m_pos.getY() + 10);
		break;
	case LEFT:
	case RIGHT:
		m_rectSphere.set(m_pos.getX() - 10, m_pos.getY() - 13, m_pos.getX() + 10, m_pos.getY() + 13);
		break;
	default:
		break;
	}
}
