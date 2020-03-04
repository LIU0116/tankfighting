#ifndef _POINT_H_
#define _POINT_H_

class point
{
public:
	point(int x = 0, int y = 0) :m_x(x), m_y(y) {};
	~point() {};

	point& operator=(const point &p)
	{
		m_x = p.m_x;
		m_y = p.m_y;

		return *this;
	}

	void set(int x, int y);

	void setX(int x);
	void setY(int y);

	int getX();
	int getY();

private:
	int m_x;
	int m_y;
};
#endif // !_POINT_H_

