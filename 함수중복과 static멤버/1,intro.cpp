/*
	Writer : �����
	Study C++
	�Լ� �ߺ��� static ���
*/

// Chapter 6, Example 6-3
// ����Ʈ �Ű� ������ ���� �Լ� ���� �� ȣ��
#include <iostream>
using namespace std;

// ����Ʈ �Ű� ���� ����
void star(int a = 5);
void msg(int id, string text = "");

int main() {

	star();
	star(10);

	msg(10);
	msg(10, "Hello");

}

void star(int a) {
	for (int i = 0; i < a; i++) cout << '*';
	cout << endl;
}
void msg(int id, string text) {
	cout << id << ' ' << text << endl;
}
