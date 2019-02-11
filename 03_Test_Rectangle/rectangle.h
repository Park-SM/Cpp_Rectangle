#ifndef _RECTANGLE_H_
#define _RECTANGLE_H_

#include "point.h"

class Rect {
private:
	Point TopRight;
	Point BottomLeft;
public:
	Rect(int tr_x, int tr_y, int bl_x, int bl_y);
	void PrintRectInfo() const;
};

#endif