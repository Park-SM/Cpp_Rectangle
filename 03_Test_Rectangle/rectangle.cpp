#include "rectangle.h"
using std::cout;
using std::cin;
using std::endl;

Rect::Rect() { exist = false; }

int Rect::SetPnt(const Point &pnt1, const Point &pnt2) {
	if ((pnt1.GetX() < pnt2.GetX()) && (pnt1.GetY() < pnt2.GetY())) {
		TopRight = pnt1;
		BottomLeft = pnt2;
		return 1;
	}
	cout << " > Error:: BottomLeft 좌표가 TopRight 좌표보다 커야합니다." << endl << endl;
	return 0;
}

void Rect::PrintRectInfo() const {
	cout << "좌 상단: ";
	TopRight.PrintPnt();
	cout << "   우 하단: ";
	BottomLeft.PrintPnt();
}

void Rect::DrawRect() const {
	if (exist) {	// If did construct.
		for (int y = TopRight.GetY(); y < BottomLeft.GetY(); y++) {
			gotoXY(TopRight.GetX() * 2, y);		// Because console environment is y = 2x, TopRight.GetX() * 2.
			for (int x = TopRight.GetX(); x < BottomLeft.GetX(); x++) cout << "▩";
		}
	}
	cout << endl << endl;
}

void Rect::SwitchedExist(bool swi) { exist = swi; }

Rect::~Rect() {}

void Loop_InputRectData(Rect &rect) {
	Point pnt1, pnt2;
	do {
		cout << "> TopRight::" << endl;
		Loop_InputPntData(pnt1);
		cout << "\n> BottomLeft::" << endl;
		Loop_InputPntData(pnt2);
	} while (!rect.SetPnt(pnt1, pnt2));
	rect.SwitchedExist(true);
}

void gotoXY(int uX, int uY) {
	COORD Cur;
	Cur.X = uX;
	Cur.Y = uY;
	SetConsoleCursorPosition(GetStdHandle(STD_OUTPUT_HANDLE), Cur);
}