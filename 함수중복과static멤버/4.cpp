// Chapter 6, Example 6-7
// �� ��ȯ���� ���� �Լ� �ߺ��� ��ȣ��
#include <iostream>
using namespace std;

float square(float a) {
	return a * a;
}

double square(double a) {
	return a * a;
}

int main() {

	cout << square(3.0) << endl; // square(double a); ȣ��
	cout << square((float)3) << endl; // square(3)�� ������ ����
}