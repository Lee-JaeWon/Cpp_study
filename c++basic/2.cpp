//������ ����� �� using���þ ���� std:: ����
#include <iostream>
using namespace std;

int area(int, int);

int main()
{
	cout << "Hello." << endl;

	cout << "�ʺ� �Է��ϼ���>>";

	int width;
	cin >> width;

	cout << "���̸� �Է��ϼ���.>>";

	int height;
	cin >> height;

	int areal = area(width, height);
	cout << "������ " << areal << endl;

	return 0;
}

int area(int w, int h)
{
	return w * h;
}