#include "rectangle.h"
using namespace std;

Rect::Rect(int tr_x, int tr_y, int bl_x, int bl_y)
	:TopRight(tr_x, tr_y), BottomLeft(bl_x, bl_y) {
	// empty
}

void Rect::PrintRectInfo() const {
	cout << "좌 상단: [" << TopRight.GetX() << ", " << TopRight.GetY() << "]" << endl;
	cout << "우 상단: [" << BottomLeft.GetX() << ", " << BottomLeft.GetY() << "]" << endl;
}