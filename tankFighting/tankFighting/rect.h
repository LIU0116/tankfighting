#ifndef _REC_H_
#define _REC_H_

#include"point.h"

class rect
{
public:
	rect(int x1 = 0, int y1 = 0, int x2 = 0, int y2 = 0) :m_startPoint(x1, y1), m_endPoint(x2, y2) {};

	rect(const point p1, const point p2) :m_startPoint(p1), m_endPoint(p2) {};

	~rect() {};

	rect& operator=(const rect& _rect)
	{
		m_startPoint=_rect.getStartPoint();
		m_endPoint = _rect.getEndPoint();

		return *this;
	}

	void set(const point pStart, const point pEnd);
	void set(int x1, int y1, int x2, int y2);

	void setStartPoint(const point p);
	void setEndPoint(const point p);

	point getStartPoint() const;
	point getEndPoint() const;

	int getWidth();
	int getHeight();

	
private:

	void check();

	point m_startPoint;
	point m_endPoint;
};

#endif // !_REC_H_
