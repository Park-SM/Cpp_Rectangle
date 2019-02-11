#ifndef _POINT_H_
#define _POINT_H_

#include <iostream>
#include <Windows.h>

class Point {
private:
	int x;
	int y;
public:
	Point(int uX, int uY);
	int GetX() const;
	int GetY() const;
	void PrintPnt() const;
};

#endif