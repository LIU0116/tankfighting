#include"point.h"

void point::set(int x, int y)
{
	m_x = x;
	m_y = y;
}

void point::setX(int x)
{
	m_x = x;
}

void point::setY(int y)
{
	m_y = y;
}

int point::getX()
{
	return m_x;
}

int point::getY()
{
	return m_y;
}

