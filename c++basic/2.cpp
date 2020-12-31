//간단한 입출력 및 using지시어를 통한 std:: 생략
#include <iostream>
using namespace std;

int area(int, int);

int main()
{
	cout << "Hello." << endl;

	cout << "너비를 입력하세요>>";

	int width;
	cin >> width;

	cout << "높이를 입력하세요.>>";

	int height;
	cin >> height;

	int areal = area(width, height);
	cout << "면적은 " << areal << endl;

	return 0;
}

int area(int w, int h)
{
	return w * h;
}