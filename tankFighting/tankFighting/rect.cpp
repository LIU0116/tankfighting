#include"rect.h"

void rect::set(point pStar, point pEnd)
{
	m_startPoint = pStar;
	m_endPoint = pEnd;
}

void rect::set(int x1, int y1, int x2, int y2)
{
	m_startPoint.set(x1, y1);
	m_endPoint.set(x2, y2);
}

void rect::setEndPoint(point p)
{
	m_endPoint = p;
}

void rect::setStartPoint(point p)
{
	m_startPoint = p;
}

point rect::getStartPoint() const
{
	return m_startPoint;
}

point rect::getEndPoint() const
{
	return m_endPoint;
}

int rect::getWidth()
{
	return m_endPoint.getX() - m_startPoint.getX();
}

int rect::getHeight()
{
	return m_endPoint.getY() - m_startPoint.getY();
}

void rect::check()
{
	if (m_startPoint.getX() > m_endPoint.getX() || m_startPoint.getY() > m_endPoint.getY())
	{
		point pTemp = m_startPoint;
		m_startPoint = m_endPoint;
		m_endPoint = pTemp;
	}
}
