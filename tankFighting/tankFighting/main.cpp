#pragma warning(disable:4996)

#include<iostream>
#include<conio.h>
#include<time.h>

#include"Graphic.h"
#include"mainTank.h"

using namespace std;

int main()
{
	Graphic::Create();

	mainTank myMainTank;

	bool loop = true;
	bool skip = false;

	while (loop)
	{
		if (kbhit())
		{
			int key = getch();

			switch (key)
			{
				//up
			case 72:
				myMainTank.setDir(dir::UP);
				break;
				//down
			case 80:
				myMainTank.setDir(dir::DOWN);
				break;
				//left
			case 75:
				myMainTank.setDir(dir::LEFT);
				break;
				//right
			case 77:
				myMainTank.setDir(dir::RIGHT);
				break;
				//dir key higher 8 statues
			case 224:
				break;
				//esc
			case 27:
				loop = false;
				break;
				//space
			case 32:
				break;
				//enter
			case 13:
				if (skip)
					skip = false;
				else
					skip = true;
				break;
			default:
				break;
			}
		}
		if (!skip)
		{
			cleardevice();

			Graphic::drawBattleGround();

			myMainTank.move();
			myMainTank.display();
		}

		Sleep(200);
	}

	Graphic::Destroy();

	cin.get();
	return 0;
}