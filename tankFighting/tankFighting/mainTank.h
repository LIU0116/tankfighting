#ifndef _MAIN_TANK_H_
#define _MAIN_TANK_H_

#include"tank.h"

class mainTank :public tank
{
public:
	mainTank()
	{
		m_x = 400;
		m_y = 300;
		myColor = WHITE;
		myDir = dir::UP;
		myStep = 2;
	}
	~mainTank(){}

	void setDir(dir _dir);
	
	void display();
	void move();
protected:
	void drawTankBody(int style);
};

#endif // !_MAIN_TANK_H_

