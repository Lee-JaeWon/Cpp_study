// Chapter 6, Example 6-2
// �Լ� �ߺ�
// �Ű� ���� �̸��� ���� ����
// --> �����Ϸ��� �ߺ� �Լ� ���н� ���� Ÿ�� ���x
#include <iostream>
using namespace std;

//�Լ� �ߺ�
int sum(int a, int b);
int sum(int a);

int main() {

	cout << sum(3, 5) << endl;
	cout << sum(3) << endl;
	cout << sum(100) << endl;
}

int sum(int a, int b) {
	int s = 0;
	for (int i = a; i <= b; i++)
		s += i;
	return s;
}
int sum(int a) {
	int s = 0;
	for (int i = 0; i <= a; i++)
		s += i;
	return s;
}