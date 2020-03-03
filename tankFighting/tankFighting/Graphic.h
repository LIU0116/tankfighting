#ifndef _GRAPHIC_H_
#define _GRAPHIC_H_

#include<graphics.h>

#define	SCREEN_WIDTH 1024
#define SCREEN_HEIGTH 768

class Graphic
{
public:
	static void Create();
	static void Destroy();

	static int getScreenWidth();
	static int getScreenHeight();
private:
	static int m_screen_width;
	static int m_screen_height;
};
#endif // !_GRAPHIC_H_

