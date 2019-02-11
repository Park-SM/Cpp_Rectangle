#include "rectangle.h"
using std::cout;

int main() {

	Rect rect;
	Loop_InputRectData(rect);

	cout << "\nPlease wait..";
	Sleep(1000);
	system("cls");

	rect.PrintRectInfo();
	rect.DrawRect();

	system("pause");
	return 0;
}