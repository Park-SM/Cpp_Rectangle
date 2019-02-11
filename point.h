#ifndef _POINT_H_
#define _POINT_H_

#include <iostream>
#include <Windows.h>

class Point {
private:
	int x;
	int y;
public:
	Point();
	int GetX() const;
	int GetY() const;
	int SetXY(int uX, int uY);
	void PrintPnt() const;
	~Point();
};

void Loop_InputPntData(Point &pnt);

#endif