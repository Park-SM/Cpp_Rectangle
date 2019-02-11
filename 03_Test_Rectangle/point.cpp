#include "point.h"
using namespace std;

Point::Point(int uX = 0, int uY = 0) {
	if ((uX < 0 || uX > 100) || (uY < 0 || uY > 100)) {
		cout << "범위가 잘못된 좌표를 입력하셨습니다." << endl;
		return;
	}
	x = uX;
	y = uY;
}

int Point::GetX() const { return x; }

int Point::GetY() const { return y; }

void Point::PrintPnt() const {
	cout << "[" << x << ", " << y << "]" << endl;
}