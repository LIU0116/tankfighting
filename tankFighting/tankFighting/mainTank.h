#ifndef _MAIN_TANK_H_
#define _MAIN_TANK_H_

#include"tank.h"

class mainTank :public tank
{
public:
	mainTank()
	{
		m_pos.set(300, 300);

		this->calculateSphere();

		myColor = YELLOW;
		myDir = dir::UP;
		myStep = 2;
	}
	~mainTank(){}

	void setDir(dir _dir);
	
	void display();
	void move();
protected:
	void calculateSphere();
	void drawTankBody();
};

#endif // !_MAIN_TANK_H_

