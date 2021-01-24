// 실습 문제 4_1
// 객체 포인터 및 객체 배열
#include <iostream>
using namespace std;

class Color {
	int red, green, blue;
public:
	Color();
	Color(int, int, int);
	void set_Color(int, int, int);
	void show();
};

Color::Color() {
	red = green = blue = 0;
}
Color::Color(int r, int g, int b) {
	red = r; green = g; blue = b;
}
void Color::set_Color(int r, int g, int b) {
	red = r; green = g; blue = b;
}
void Color::show() {
	cout << red << ' ' << green << ' ' << blue << endl;
}

int main() {

	Color screenColor(255, 0, 0);
	Color* p;
	p = &screenColor;
	p->show();

	Color* colors = new Color[3];
	p = colors;

	p[0].set_Color(255, 0, 0);
	p[1].set_Color(0, 255, 0);
	p[2].set_Color(0, 0, 255);

	for (int i = 0; i < 3; i++)
		(p + i)->show();

	delete[] colors;

}