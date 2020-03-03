#ifndef _TANK_H_
#define _TANK_H_

#include"Graphic.h"

enum dir{UP, DOWN, LEFT,RIGHT};

class tank
{
public:
	virtual void move() = 0;
	virtual void display() = 0;
protected:
	int m_x;
	int m_y;
	COLORREF myColor;

	dir myDir;
	int myStep;
};


#endif // !_TANK_H_

