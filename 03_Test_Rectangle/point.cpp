#include "point.h"
using std::cout;
using std::cin;
using std::endl;

Point::Point() {}

int Point::GetX() const { return x; }

int Point::GetY() const { return y; }

int Point::SetXY(int uX, int uY) {
	if ((uX > 0 && uX < 100) && (uY > 0 && uY < 100)) {
		x = uX;
		y = uY;
		return 1;
	}
	cout << " > Error:: 0과 100 사이의 값을 입력해주세요." << endl << endl;
	return 0;
}

void Point::PrintPnt() const {
	cout << "[" << x << ", " << y << "]";
}

Point::~Point() {}

void Loop_InputPntData(Point &pnt) {
	int uX, uY;
	do {
		cout << " - Point's X: ";
		cin >> uX;
		cout << " - Point's Y: ";
		cin >> uY;
	} while (!pnt.SetXY(uX, uY));
}