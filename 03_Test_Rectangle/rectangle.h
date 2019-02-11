#ifndef _RECTANGLE_H_
#define _RECTANGLE_H_

#include "point.h"

class Rect {
private:
	Point TopRight;
	Point BottomLeft;
	bool exist;
public:
	Rect();
	int SetPnt(const Point &pnt1, const Point &pnt2);
	void PrintRectInfo() const;
	void DrawRect() const;
	void SwitchedExist(bool swi);
	~Rect();
};

void Loop_InputRectData(Rect &rect);
void gotoXY(int uX, int uY);

#endif