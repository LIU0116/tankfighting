#ifndef _TANK_H_
#define _TANK_H_

#include"Graphic.h"
#include"point.h"
#include"rect.h"

enum dir{UP, DOWN, LEFT,RIGHT};

class tank
{
public:
	virtual void move() = 0;
	virtual void display() = 0;
protected:
	virtual void calculateSphere() = 0;

	point m_pos;
	rect m_rectSphere;

	int m_x;
	int m_y;

	COLORREF myColor;

	dir myDir;
	int myStep;
};


#endif // !_TANK_H_

